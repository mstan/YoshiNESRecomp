/*
 * nestopia_bridge.h — Nestopia libretro core bridge for NES recomp
 */
#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int  nestopia_bridge_init(const char *rom_path);
void nestopia_bridge_run_frame(uint8_t buttons);
void nestopia_bridge_get_ram(uint8_t *out);       /* 2KB work RAM */
void nestopia_bridge_get_sram(uint8_t *out);      /* 8KB save RAM */
void nestopia_bridge_get_framebuf_argb(uint32_t *out);  /* 256x240 ARGB */
void nestopia_bridge_write_ram(uint16_t addr, uint8_t val);
void nestopia_bridge_get_vram(uint8_t *out, int *out_size); /* PPU VRAM */

/* PPU state accessors — read directly from Nestopia's internal PPU */
void nestopia_bridge_get_chr(uint8_t *out, int size);    /* CHR as seen by PPU (8KB) */
void nestopia_bridge_get_nametable(uint8_t *out);         /* 2KB nametable RAM */
void nestopia_bridge_get_palette(uint8_t *out);           /* 32 bytes palette RAM */
void nestopia_bridge_get_oam(uint8_t *out);               /* 256 bytes OAM */

void nestopia_bridge_shutdown(void);

#ifdef __cplusplus
}
#endif
