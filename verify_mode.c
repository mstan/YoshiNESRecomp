/*
 * verify_mode.c — Dual-execution verification mode
 *
 * In VERIFY mode: native code runs the game normally. Nestopia runs
 * in the background. After each frame, we compare RAM between the two.
 * Divergences are logged and recorded in the ring buffer.
 *
 * In EMULATED mode: Nestopia drives everything (handled in extras.c).
 * In NATIVE mode: no emulator, just recompiled code.
 */
#include "verify_mode.h"
#include "nes_snapshot.h"
#include "nes_runtime.h"
#include "debug_server.h"

#include <stdio.h>
#include <string.h>

#ifdef ENABLE_NESTOPIA_ORACLE
#include "nestopia_bridge.h"
#endif

RunMode  g_run_mode = RUN_MODE_NATIVE;
static uint64_t s_divergence_count = 0;
static int s_emu_initialized = 0;

void verify_mode_init(const char *rom_path) {
#ifdef ENABLE_NESTOPIA_ORACLE
    if (g_run_mode == RUN_MODE_NATIVE) return;

    int rc = nestopia_bridge_init(rom_path);
    if (rc != 0) {
        fprintf(stderr, "[verify] Nestopia init failed (rc=%d), falling back to native\n", rc);
        g_run_mode = RUN_MODE_NATIVE;
        return;
    }
    s_emu_initialized = 1;
    fprintf(stderr, "[verify] Nestopia oracle initialized (mode=%s)\n",
            g_run_mode == RUN_MODE_VERIFY ? "verify" : "emulated");
#else
    (void)rom_path;
    if (g_run_mode != RUN_MODE_NATIVE) {
        fprintf(stderr, "[verify] Nestopia not compiled in, falling back to native\n");
        g_run_mode = RUN_MODE_NATIVE;
    }
#endif
}

int verify_mode_run_nmi(void) {
    if (g_run_mode == RUN_MODE_NATIVE) {
        func_NMI();
        return 1;
    }

#ifdef ENABLE_NESTOPIA_ORACLE
    if (!s_emu_initialized) {
        func_NMI();
        return 1;
    }

    if (g_run_mode == RUN_MODE_EMULATED) {
        /* Handled by game_run_main in extras.c — shouldn't reach here */
        func_NMI();
        return 1;
    }

    /* VERIFY mode: native runs the game, Nestopia runs in background.
     * Compare RAM after each frame. Log all divergences. */

    /* 1. Run native NMI */
    func_NMI();

    /* 2. Run Nestopia for one frame (same input) */
    nestopia_bridge_run_frame(g_controller1_buttons);

    /* 3. Get Nestopia's RAM */
    static uint8_t emu_ram[0x800];
    nestopia_bridge_get_ram(emu_ram);

    /* 4. Compare work RAM */
    int diff_count = 0;
    int first_diff_addr = -1;
    uint8_t first_native = 0, first_emu = 0;

    for (int i = 0; i < 0x0800; i++) {
        if (g_ram[i] != emu_ram[i]) {
            if (diff_count == 0) {
                first_diff_addr = i;
                first_native = g_ram[i];
                first_emu = emu_ram[i];
            }
            diff_count++;
        }
    }

    /* Compare PPU internals: CHR, palette, nametable, OAM */
    if (g_frame_count == 100) {
        static uint8_t emu_chr[0x2000];
        static uint8_t emu_pal[0x20];
        static uint8_t emu_nmt[0x800];
        static uint8_t emu_oam[0x100];

        nestopia_bridge_get_chr(emu_chr, 0x2000);
        nestopia_bridge_get_palette(emu_pal);
        nestopia_bridge_get_nametable(emu_nmt);
        nestopia_bridge_get_oam(emu_oam);

        /* CHR at $1000 (BG pattern table, tile $00) */
        int chr_match = (memcmp(g_chr_ram + 0x1000, emu_chr + 0x1000, 16) == 0);
        fprintf(stderr, "[PPU-CMP] CHR $1000 tile0: %s\n", chr_match ? "MATCH" : "DIFFER");
        if (!chr_match) {
            fprintf(stderr, "  native: %02X%02X%02X%02X %02X%02X%02X%02X\n",
                    g_chr_ram[0x1000], g_chr_ram[0x1001], g_chr_ram[0x1002], g_chr_ram[0x1003],
                    g_chr_ram[0x1008], g_chr_ram[0x1009], g_chr_ram[0x100A], g_chr_ram[0x100B]);
            fprintf(stderr, "  nestop: %02X%02X%02X%02X %02X%02X%02X%02X\n",
                    emu_chr[0x1000], emu_chr[0x1001], emu_chr[0x1002], emu_chr[0x1003],
                    emu_chr[0x1008], emu_chr[0x1009], emu_chr[0x100A], emu_chr[0x100B]);
        }

        /* CHR at $0000 (sprite pattern table, tile $00) */
        int chr0_match = (memcmp(g_chr_ram, emu_chr, 16) == 0);
        fprintf(stderr, "[PPU-CMP] CHR $0000 tile0: %s\n", chr0_match ? "MATCH" : "DIFFER");
        if (!chr0_match) {
            fprintf(stderr, "  native: %02X%02X%02X%02X\n  nestop: %02X%02X%02X%02X\n",
                    g_chr_ram[0], g_chr_ram[1], g_chr_ram[2], g_chr_ram[3],
                    emu_chr[0], emu_chr[1], emu_chr[2], emu_chr[3]);
        }

        /* Palette */
        int pal_match = (memcmp(g_ppu_pal, emu_pal, 0x20) == 0);
        fprintf(stderr, "[PPU-CMP] Palette: %s\n", pal_match ? "MATCH" : "DIFFER");
        if (!pal_match) {
            fprintf(stderr, "  native: "); for (int i=0;i<16;i++) fprintf(stderr,"%02X ",g_ppu_pal[i]); fprintf(stderr,"\n");
            fprintf(stderr, "  nestop: "); for (int i=0;i<16;i++) fprintf(stderr,"%02X ",emu_pal[i]); fprintf(stderr,"\n");
        }

        /* Nametable (full 960 bytes = rows 0-29) */
        int nmt_diffs = 0;
        int first_nmt_diff = -1;
        for (int i = 0; i < 960; i++) {
            if (g_ppu_nt[i] != emu_nmt[i]) {
                nmt_diffs++;
                if (first_nmt_diff < 0) first_nmt_diff = i;
            }
        }
        fprintf(stderr, "[PPU-CMP] Nametable: %d/960 diffs", nmt_diffs);
        if (nmt_diffs > 0) {
            int row = first_nmt_diff / 32, col = first_nmt_diff % 32;
            fprintf(stderr, " | first: (%d,%d) native=$%02X emu=$%02X",
                    col, row, g_ppu_nt[first_nmt_diff], emu_nmt[first_nmt_diff]);
        }
        fprintf(stderr, "\n");

        /* OAM (first 16 sprites) */
        int oam_match = (memcmp(g_ppu_oam, emu_oam, 64) == 0);
        fprintf(stderr, "[PPU-CMP] OAM spr0-15: %s\n", oam_match ? "MATCH" : "DIFFER");
        if (!oam_match) {
            for (int i=0; i<4; i++) {
                fprintf(stderr, "  spr%d: N=[Y=%d t=$%02X a=$%02X X=%d] E=[Y=%d t=$%02X a=$%02X X=%d] %s\n",
                    i, g_ppu_oam[i*4], g_ppu_oam[i*4+1], g_ppu_oam[i*4+2], g_ppu_oam[i*4+3],
                    emu_oam[i*4], emu_oam[i*4+1], emu_oam[i*4+2], emu_oam[i*4+3],
                    memcmp(g_ppu_oam+i*4, emu_oam+i*4, 4)==0 ? "OK" : "DIFF");
            }
        }

        /* Full CHR bank diff summary */
        int chr_diffs = 0;
        for (int i = 0; i < 0x2000; i++)
            if (g_chr_ram[i] != emu_chr[i]) chr_diffs++;
        fprintf(stderr, "[PPU-CMP] CHR total: %d/8192 bytes differ\n", chr_diffs);

        /* Framebuffer pixel comparison */
        {
            static uint32_t emu_fb[256*240];
            nestopia_bridge_get_framebuf_argb(emu_fb);
            /* Re-render to get native framebuffer for comparison */
            extern void ppu_render_frame(uint32_t *fb);
            static uint32_t native_fb_buf[256*240];
            ppu_render_frame(native_fb_buf);
            const uint32_t *native_fb = native_fb_buf;

            int px_diffs = 0;
            int structural_diffs = 0; /* diffs that aren't just palette LUT */
            int first_x = -1, first_y = -1;
            uint32_t first_n = 0, first_e = 0;
            for (int y = 0; y < 240; y++) {
                for (int x = 0; x < 256; x++) {
                    uint32_t np = native_fb[y*256+x] & 0xFFFFFF;
                    uint32_t ep = emu_fb[y*256+x] & 0xFFFFFF;
                    if (np != ep) {
                        px_diffs++;
                        /* Check if this is just a palette LUT difference:
                         * both colors map to the same NES palette entry */
                        int same_intent = 0;
                        /* Quick check: if both are "near white" or "near black" etc */
                        int nr = (np>>16)&0xFF, ng = (np>>8)&0xFF, nb = np&0xFF;
                        int er = (ep>>16)&0xFF, eg = (ep>>8)&0xFF, eb = ep&0xFF;
                        int dr = nr-er, dg = ng-eg, db = nb-eb;
                        if (dr*dr + dg*dg + db*db < 400) same_intent = 1; /* within ~20 per channel */
                        if (!same_intent) {
                            structural_diffs++;
                            if (structural_diffs == 1) {
                                first_x = x; first_y = y;
                                first_n = np; first_e = ep;
                            }
                        }
                    }
                }
            }
            fprintf(stderr, "[PPU-FB] %d pixel diffs (%d structural, %d palette-LUT-only)\n",
                    px_diffs, structural_diffs, px_diffs - structural_diffs);
            /* Log first 5 unique color pairs */
            uint32_t seen_n[10] = {0}; uint32_t seen_e[10] = {0}; int seen = 0;
            for (int y = 0; y < 240 && seen < 5; y++) {
                for (int x = 0; x < 256 && seen < 5; x++) {
                    uint32_t np = native_fb[y*256+x] & 0xFFFFFF;
                    uint32_t ep = emu_fb[y*256+x] & 0xFFFFFF;
                    if (np != ep) {
                        int dup = 0;
                        for (int s = 0; s < seen; s++)
                            if (seen_n[s] == np && seen_e[s] == ep) { dup = 1; break; }
                        if (!dup) {
                            seen_n[seen] = np; seen_e[seen] = ep;
                            fprintf(stderr, "  (%d,%d) native=0x%06X emu=0x%06X\n", x, y, np, ep);
                            seen++;
                        }
                    }
                }
            }
        }

        /* Attribute table comparison */
        {
            int attr_match = (memcmp(g_ppu_nt + 0x3C0, emu_nmt + 0x3C0, 64) == 0);
            fprintf(stderr, "[PPU-CMP] Attribute table: %s\n", attr_match ? "MATCH" : "DIFFER");
            if (!attr_match) {
                fprintf(stderr, "  native: ");
                for (int i=0; i<16; i++) fprintf(stderr, "%02X ", g_ppu_nt[0x3C0+i]);
                fprintf(stderr, "\n  nestop: ");
                for (int i=0; i<16; i++) fprintf(stderr, "%02X ", emu_nmt[0x3C0+i]);
                fprintf(stderr, "\n");
            }
        }

        /* Scroll state */
        fprintf(stderr, "[PPU-CMP] Scroll: native=(%d,%d) ctrl=$%02X\n",
                g_ppuscroll_x, g_ppuscroll_y, g_ppuctrl);

        /* Detailed palette comparison */
        if (!pal_match) {
            fprintf(stderr, "[PPU-PAL] full native: ");
            for (int i=0;i<32;i++) fprintf(stderr,"%02X ",g_ppu_pal[i]);
            fprintf(stderr,"\n[PPU-PAL] full nestop: ");
            for (int i=0;i<32;i++) fprintf(stderr,"%02X ",emu_pal[i]);
            fprintf(stderr,"\n");
        }
    }

    int passed = (diff_count == 0);

    if (!passed) {
        s_divergence_count++;
        fprintf(stderr, "[verify] DIVERGE frame %llu: %d bytes differ | first: $%04X native=0x%02X emu=0x%02X"
                " | $76:N=%02X/E=%02X $77:N=%02X/E=%02X $0636:N=%02X/E=%02X $0248:N=%02X/E=%02X\n",
                (unsigned long long)g_frame_count, diff_count,
                first_diff_addr, first_native, first_emu,
                g_ram[0x76], emu_ram[0x76], g_ram[0x77], emu_ram[0x77],
                g_ram[0x636 & 0x7FF], emu_ram[0x636 & 0x7FF],
                g_ram[0x248], emu_ram[0x248]);
    }

    return passed;
#else
    func_NMI();
    return 1;
#endif
}

uint64_t verify_mode_get_divergence_count(void) {
    return s_divergence_count;
}
