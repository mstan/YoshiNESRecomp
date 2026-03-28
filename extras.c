/*
 * extras.c — Yoshi game-specific runner hooks
 * Implements game_extras.h (minimal stub).
 */
#include "game_extras.h"
#include "nes_runtime.h"
#include "debug_server.h"
#include <stdio.h>
#include <string.h>

/* Globals expected by the runner framework */
const char *g_rom_path_for_extras = NULL;
int         g_watchdog_triggered  = 0;
uint32_t    g_watchdog_frame      = 0;
const char *g_watchdog_stack_dump = "";

uint32_t game_get_expected_crc32(void) { return 0x9474C09Cu; }

const char *game_get_name(void) { return "Yoshi"; }

void game_on_init(void) {
    debug_server_init(4370);
}

void game_on_frame(uint64_t frame_count) { (void)frame_count; }

void game_post_nmi(uint64_t frame_count) { (void)frame_count; }

int game_handle_arg(const char *key, const char *val) {
    (void)key; (void)val;
    return 0;
}

const char *game_arg_usage(void) { return NULL; }

void game_run_nmi(void) { func_NMI(); }

void game_run_main(void) { func_RESET(); }

int game_dispatch_override(uint16_t addr) {
    if (addr == 0x11E7) {
        extern int g_current_bank;
        extern uint64_t g_frame_count;
        fprintf(stderr, "[DIAG] dispatch $11E7 at frame=%llu bank=%d S=$%02X "
                "stack=[%02X %02X %02X %02X] "
                "ptr_AD=%02X%02X ptr_DA=%02X%02X "
                "ram78=%02X A=%02X X=%02X Y=%02X\n",
                (unsigned long long)g_frame_count, g_current_bank, g_cpu.S,
                g_ram[0x1FD], g_ram[0x1FE], g_ram[0x1FF], g_ram[0x1FC],
                g_ram[0xAE], g_ram[0xAD], g_ram[0xDB], g_ram[0xDA],
                g_ram[0x78], g_cpu.A, g_cpu.X, g_cpu.Y);
        return 1; /* handled (as no-op) */
    }
    return 0;
}

uint8_t game_ram_read_hook(uint16_t pc, uint16_t addr, uint8_t val) {
    (void)pc; (void)addr;
    return val;
}

void game_fill_frame_record(void *record) { (void)record; }

int game_handle_debug_cmd(const char *cmd, int id, const char *json) {
    (void)cmd; (void)id; (void)json;
    return 0;
}
