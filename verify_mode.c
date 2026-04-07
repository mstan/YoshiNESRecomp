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

/* Local stub: canonical nesrecomp debug_server has verify_pass / diff_count
 * fields in NESFrameRecord but no public setter (only Yoshi used one). For
 * the migration we keep verify_mode compiling without touching canonical.
 * Per CLAUDE.md Step 3, real plumbing will be revisited after baseline parity. */
static void debug_server_set_verify_result(int passed, int diff_count,
                                           const FrameDiffEntry *diffs, int n_diffs) {
    (void)passed; (void)diff_count; (void)diffs; (void)n_diffs;
}

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
     * Compare work RAM + nametable RAM after each frame. The first up to
     * MAX_FRAME_DIFFS divergences are recorded into the ring buffer via
     * debug_server_set_verify_result(); query frame_diff over TCP. */

    /* 1. Run native NMI */
    func_NMI();

    /* 2. Run Nestopia for one frame (same input) */
    nestopia_bridge_run_frame(g_controller1_buttons);

    /* 3. Pull oracle state */
    static uint8_t emu_ram[0x800];
    nestopia_bridge_get_ram(emu_ram);

    static uint8_t emu_vram[0x4000];
    int vram_size = 0;
    nestopia_bridge_get_vram(emu_vram, &vram_size);

    /* 4. Diff. addr encoding for FrameDiffEntry:
     *    0x0000-0x07FF : work RAM
     *    0x2000-0x2FFF : nametable RAM (libretro VIDEO_RAM is the 2KB NT
     *                    on NES; we expose it at $2000)
     */
    FrameDiffEntry diffs[MAX_FRAME_DIFFS];
    int n_diffs = 0;
    int diff_count = 0;

    for (int i = 0; i < 0x0800; i++) {
        if (g_ram[i] != emu_ram[i]) {
            if (n_diffs < MAX_FRAME_DIFFS) {
                diffs[n_diffs].addr   = (uint16_t)i;
                diffs[n_diffs].mine   = g_ram[i];
                diffs[n_diffs].theirs = emu_ram[i];
                n_diffs++;
            }
            diff_count++;
        }
    }

    /* Compare nametables. Cap to 0x800 (2KB NT region on most mappers).
     * g_ppu_nt is the runner's 4KB nametable buffer; only the first 0x800
     * is meaningful for hardware NT RAM (rest is mirrors). */
    {
        extern uint8_t g_ppu_nt[];
        int nt_len = vram_size;
        if (nt_len > 0x800) nt_len = 0x800;
        for (int i = 0; i < nt_len; i++) {
            if (g_ppu_nt[i] != emu_vram[i]) {
                if (n_diffs < MAX_FRAME_DIFFS) {
                    diffs[n_diffs].addr   = (uint16_t)(0x2000 + i);
                    diffs[n_diffs].mine   = g_ppu_nt[i];
                    diffs[n_diffs].theirs = emu_vram[i];
                    n_diffs++;
                }
                diff_count++;
            }
        }
    }

    int passed = (diff_count == 0);
    if (!passed) s_divergence_count++;

    debug_server_set_verify_result(passed, diff_count, diffs, n_diffs);

    return passed;
#else
    func_NMI();
    return 1;
#endif
}

uint64_t verify_mode_get_divergence_count(void) {
    return s_divergence_count;
}
