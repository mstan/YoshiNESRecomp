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
    if (g_frame_count == 30) {
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

        /* Nametable (first 64 bytes = rows 0-1) */
        int nmt_match = (memcmp(g_ppu_nt, emu_nmt, 64) == 0);
        fprintf(stderr, "[PPU-CMP] Nametable row0-1: %s\n", nmt_match ? "MATCH" : "DIFFER");

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
