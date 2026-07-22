/* yoshi_full_bank01_part04.c — PRG bank 1 function bodies (sub-part 4).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella yoshi_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "yoshi_full_decls.h"

void func_AD60_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD60_b1");
#endif
label_AD60:;
    /* $AD60: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD63:;
    /* $AD63: 8C */ maybe_trigger_vblank(4); nes_write(0x00EF, g_cpu.Y);
label_AD66:;
    /* $AD66: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD66); return;
}

void func_A284_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A284_b1");
#endif
label_A284:;
    /* $A284: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A286:;
    /* $A286: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A288:;
    /* $A288: 9D */ maybe_trigger_vblank(5); nes_write((0x06A9 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A28B:;
    /* $A28B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A046_b1(); return;
}

void func_A340_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A4D9;
        case 2: goto label_A516;
        case 3: goto label_A357;
        case 4: goto label_A3F2;
        case 5: goto label_A3D5;
        case 6: goto label_A49D;
        case 7: goto label_A4CD;
    }
label_A340:;
    /* $A340: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A341:;
    /* $A341: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A343:;
    /* $A343: 8D */ maybe_trigger_vblank(4); nes_write(0x0634, g_cpu.A);
label_A346:;
    /* $A346: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A347:;
    /* $A347: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A349:;
    /* $A349: 8D */ maybe_trigger_vblank(4); nes_write(0x0633, g_cpu.A);
label_A34C:;
    /* $A34C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06A1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A34F:;
    /* $A34F: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x20; FLAG_NZ(g_cpu.A);
label_A351:;
    /* $A351: 9D */ maybe_trigger_vblank(5); nes_write((0x06A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A354:;
    /* $A354: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A355:;
    /* $A355: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A357:;
    /* $A357: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A359:;
    /* $A359: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A389; }
label_A35B:;
    /* $A35B: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A35D:;
    /* $A35D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A35F:;
    /* $A35F: 9D */ maybe_trigger_vblank(5); nes_write((0x06DB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A362:;
    /* $A362: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A046_b1(); return;
label_A389:;
    /* $A389: 20 */ maybe_trigger_vblank(6); func_A579_b1();
label_A38C:;
    /* $A38C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A38D:;
    /* $A38D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A38F:;
    /* $A38F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A391:;
    /* $A391: 85 */ maybe_trigger_vblank(3); nes_write(0xD8, g_cpu.A);
label_A393:;
    /* $A393: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xD8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A395:;
    /* $A395: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A397:;
    /* $A397: 85 */ maybe_trigger_vblank(3); nes_write(0xE6, g_cpu.A);
label_A399:;
    /* $A399: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_A39B:;
    /* $A39B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0638 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A39E:;
    /* $A39E: 85 */ maybe_trigger_vblank(3); nes_write(0xE7, g_cpu.A);
label_A3A0:;
    /* $A3A0: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xD8; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A3A2:;
    /* $A3A2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A3AB; }
label_A3A4:;
    /* $A3A4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE7); FLAG_NZ(g_cpu.A);
label_A3A6:;
    /* $A3A6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3A7:;
    /* $A3A7: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE6); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A3A9:;
    /* $A3A9: 85 */ maybe_trigger_vblank(3); nes_write(0xE6, g_cpu.A);
label_A3AB:;
    /* $A3AB: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xE7; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3AD:;
    /* $A3AD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD8); FLAG_NZ(g_cpu.A);
label_A3AF:;
    /* $A3AF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A3A0;
    }
label_A3B1:;
    /* $A3B1: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x07; g_cpu.C=(g_cpu.X>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A3B3:;
    /* $A3B3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A3BA; }
label_A3B5:;
    /* $A3B5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE6); FLAG_NZ(g_cpu.A);
label_A3B7:;
    /* $A3B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A3F2_b1(); return;
label_A3BA:;
    /* $A3BA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x04; g_cpu.C=(g_cpu.X>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A3BC:;
    /* $A3BC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A3CB; }
label_A3BE:;
    /* $A3BE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x06FC); FLAG_NZ(g_cpu.A);
label_A3C1:;
    /* $A3C1: 85 */ maybe_trigger_vblank(3); nes_write(0xE7, g_cpu.A);
label_A3C3:;
    /* $A3C3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x06FD); FLAG_NZ(g_cpu.A);
label_A3C6:;
    /* $A3C6: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_A3C8:;
    /* $A3C8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A3D5_b1(); return;
label_A3CB:;
    /* $A3CB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x06FA); FLAG_NZ(g_cpu.A);
label_A3CE:;
    /* $A3CE: 85 */ maybe_trigger_vblank(3); nes_write(0xE7, g_cpu.A);
label_A3D0:;
    /* $A3D0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x06FB); FLAG_NZ(g_cpu.A);
label_A3D3:;
    /* $A3D3: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_A3D5:;
    /* $A3D5: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xE6; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A3D7:;
    /* $A3D7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A3E8; }
label_A3D9:;
    /* $A3D9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE8); FLAG_NZ(g_cpu.A);
label_A3DB:;
    /* $A3DB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3DC:;
    /* $A3DC: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x06E3 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A3DF:;
    /* $A3DF: 9D */ maybe_trigger_vblank(5); nes_write((0x06E3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3E2:;
    /* $A3E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE7); FLAG_NZ(g_cpu.A);
label_A3E4:;
    /* $A3E4: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE9); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A3E6:;
    /* $A3E6: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_A3E8:;
    /* $A3E8: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xE8; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3EA:;
    /* $A3EA: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xE7; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3EC:;
    /* $A3EC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE6); FLAG_NZ(g_cpu.A);
label_A3EE:;
    /* $A3EE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A3D5;
    }
label_A3F0:;
    /* $A3F0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE9); FLAG_NZ(g_cpu.A);
label_A3F2:;
    /* $A3F2: 9D */ maybe_trigger_vblank(5); nes_write((0x0681 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3F5:;
    /* $A3F5: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A3F7:;
    /* $A3F7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3FC; }
label_A3F9:;
    /* $A3F9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A365_b1(); return;
label_A3FC:;
    /* $A3FC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3FE:;
    /* $A3FE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_A400:;
    /* $A400: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_A402:;
    /* $A402: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A41F; }
label_A404:;
    /* $A404: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A406:;
    /* $A406: 9D */ maybe_trigger_vblank(5); nes_write((0x0678 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A409:;
    /* $A409: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A40B:;
    /* $A40B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A41B; }
label_A40D:;
    /* $A40D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x06; g_cpu.C=(g_cpu.X>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A40F:;
    /* $A40F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A41B; }
label_A411:;
    /* $A411: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_A413:;
    /* $A413: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0670 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A416:;
    /* $A416: 20 */ maybe_trigger_vblank(6); func_A5E8_b1();
label_A419:;
    /* $A419: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A41E; }
label_A41B:;
    /* $A41B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A5A8_b1(); return;
label_A41E:;
    /* $A41E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A41F:;
    /* $A41F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A421:;
    /* $A421: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A433; }
label_A423:;
    /* $A423: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06F7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A426:;
    /* $A426: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A427:;
    /* $A427: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A433; }
label_A429:;
    /* $A429: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC1; FLAG_NZ(g_cpu.A);
label_A42B:;
    /* $A42B: 9D */ maybe_trigger_vblank(5); nes_write((0x06F7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A42E:;
    /* $A42E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A430:;
    /* $A430: 9D */ maybe_trigger_vblank(5); nes_write((0x06F4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A433:;
    /* $A433: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06BB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A436:;
    /* $A436: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A438:;
    /* $A438: 85 */ maybe_trigger_vblank(3); nes_write(0xD8, g_cpu.A);
label_A43A:;
    /* $A43A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A45C; }
label_A43C:;
    /* $A43C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A43E:;
    /* $A43E: 85 */ maybe_trigger_vblank(3); nes_write(0xD9, g_cpu.A);
label_A440:;
    /* $A440: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A441:;
    /* $A441: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0681 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A444:;
    /* $A444: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A448; }
label_A446:;
    /* $A446: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xD9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A448:;
    /* $A448: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xD8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A44A:;
    /* $A44A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A440;
    }
label_A44C:;
    /* $A44C: 85 */ maybe_trigger_vblank(3); nes_write(0xD8, g_cpu.A);
label_A44E:;
    /* $A44E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A450:;
    /* $A450: 85 */ maybe_trigger_vblank(3); nes_write(0xE1, g_cpu.A);
label_A452:;
    /* $A452: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xD9; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A454:;
    /* $A454: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xD8; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A456:;
    /* $A456: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xE1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A458:;
    /* $A458: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A452;
    }
label_A45A:;
    /* $A45A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD8); FLAG_NZ(g_cpu.A);
label_A45C:;
    /* $A45C: 9D */ maybe_trigger_vblank(5); nes_write((0x06C3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A45F:;
    /* $A45F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0668 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A462:;
    /* $A462: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A464:;
    /* $A464: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4B5; }
label_A466:;
    /* $A466: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x06; g_cpu.C=(g_cpu.X>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A468:;
    /* $A468: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4B5; }
label_A46A:;
    /* $A46A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06A1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A46D:;
    /* $A46D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A46F:;
    /* $A46F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A495; }
label_A471:;
    /* $A471: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A472:;
    /* $A472: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A473:;
    /* $A473: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06B1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A476:;
    /* $A476: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A477:;
    /* $A477: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A478:;
    /* $A478: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xFC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A47A:;
    /* $A47A: 85 */ maybe_trigger_vblank(3); nes_write(0xD8, g_cpu.A);
label_A47C:;
    /* $A47C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A47D:;
    /* $A47D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xFC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A47F:;
    /* $A47F: 85 */ maybe_trigger_vblank(3); nes_write(0xD9, g_cpu.A);
label_A481:;
    /* $A481: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A483:;
    /* $A483: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xD8) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A485:;
    /* $A485: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0670 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A488:;
    /* $A488: 9D */ maybe_trigger_vblank(5); nes_write((0x0668 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A48B:;
    /* $A48B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A48D:;
    /* $A48D: 9D */ maybe_trigger_vblank(5); nes_write((0x06D3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A490:;
    /* $A490: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A491:;
    /* $A491: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A492:;
    /* $A492: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A49D_b1(); return;
label_A495:;
    /* $A495: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06B1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A498:;
    /* $A498: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A49A:;
    /* $A49A: 9D */ maybe_trigger_vblank(5); nes_write((0x06D3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A49D:;
    /* $A49D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0668 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A0:;
    /* $A4A0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A4A2:;
    /* $A4A2: 9D */ maybe_trigger_vblank(5); nes_write((0x0678 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4A5:;
    /* $A4A5: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A4A6:;
    /* $A4A6: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x06DB + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A4A9:;
    /* $A4A9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A4AD; }
label_A4AB:;
    /* $A4AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A4AD:;
    /* $A4AD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0670 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4B0:;
    /* $A4B0: 20 */ maybe_trigger_vblank(6); func_A5E8_b1();
label_A4B3:;
    /* $A4B3: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A4B8; }
label_A4B5:;
    /* $A4B5: 20 */ maybe_trigger_vblank(6); func_A5A8_b1();
label_A4B8:;
    /* $A4B8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4BA:;
    /* $A4BA: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4BB:;
    /* $A4BB: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4BC:;
    /* $A4BC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4BD:;
    /* $A4BD: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4BE:;
    /* $A4BE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4BF:;
    /* $A4BF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A4C0:;
    /* $A4C0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA53D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C3:;
    /* $A4C3: 85 */ maybe_trigger_vblank(3); nes_write(0xD8, g_cpu.A);
label_A4C5:;
    /* $A4C5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA53C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C8:;
    /* $A4C8: 85 */ maybe_trigger_vblank(3); nes_write(0xD9, g_cpu.A);
label_A4CA:;
    /* $A4CA: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x06A9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A4CD:;
    /* $A4CD: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A4CF:;
    /* $A4CF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4D9; }
label_A4D1:;
    /* $A4D1: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xD8; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A4D3:;
    /* $A4D3: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xD9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4D5:;
    /* $A4D5: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A4D6:;
    /* $A4D6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_A4CD;
label_A4D9:;
    /* $A4D9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06A1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4DC:;
    /* $A4DC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_A4DE:;
    /* $A4DE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4E6; }
label_A4E0:;
    /* $A4E0: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xD9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4E2:;
    /* $A4E2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4E6; }
label_A4E4:;
    /* $A4E4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xD8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4E6:;
    /* $A4E6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD8); FLAG_NZ(g_cpu.A);
label_A4E8:;
    /* $A4E8: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_A4EA:;
    /* $A4EA: 85 */ maybe_trigger_vblank(3); nes_write(0xD8, g_cpu.A);
label_A4EC:;
    /* $A4EC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A4EE:;
    /* $A4EE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A50D; }
label_A4F0:;
    /* $A4F0: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x06; g_cpu.C=(g_cpu.X>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A4F2:;
    /* $A4F2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A516; }
label_A4F4:;
    /* $A4F4: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0658 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A4F7:;
    /* $A4F7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A513; }
label_A4F9:;
    /* $A4F9: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x07; g_cpu.C=(g_cpu.X>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A4FB:;
    /* $A4FB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A520; }
label_A4FD:;
    /* $A4FD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0670 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A500:;
    /* $A500: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A502:;
    /* $A502: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A516; }
label_A504:;
    /* $A504: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06A1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A507:;
    /* $A507: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_A509:;
    /* $A509: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A516; }
label_A50B:;
    /* $A50B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A520; }
label_A50D:;
    /* $A50D: 8D */ maybe_trigger_vblank(4); nes_write(0x0635, g_cpu.A);
label_A510:;
    /* $A510: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A516_b1(); return;
label_A513:;
    /* $A513: 9D */ maybe_trigger_vblank(5); nes_write((0x0658 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A516:;
    /* $A516: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD8); FLAG_NZ(g_cpu.A);
label_A518:;
    /* $A518: 20 */ maybe_trigger_vblank(6); func_A5E8_b1();
label_A51B:;
    /* $A51B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A520; }
label_A51D:;
    /* $A51D: 20 */ maybe_trigger_vblank(6); func_A5C3_b1();
label_A520:;
    /* $A520: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD9); FLAG_NZ(g_cpu.A);
label_A522:;
    /* $A522: 9D */ maybe_trigger_vblank(5); nes_write((0x0660 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A525:;
    /* $A525: 20 */ maybe_trigger_vblank(6); func_A5E8_b1();
label_A528:;
    /* $A528: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A53B; }
label_A52A:;
    /* $A52A: 20 */ maybe_trigger_vblank(6); func_A5BA_b1();
label_A52D:;
    /* $A52D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A52F:;
    /* $A52F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A53B; }
label_A531:;
    /* $A531: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06A1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A534:;
    /* $A534: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_A536:;
    /* $A536: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A53B; }
label_A538:;
    /* $A538: 20 */ maybe_trigger_vblank(6); func_A7C2_b1();
label_A53B:;
    /* $A53B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A340_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A340_b1");
#endif
    func_A340_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4D9_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4D9_b1");
#endif
    func_A340_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A516_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A516_b1");
#endif
    func_A340_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A357_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A357_b1");
#endif
    func_A340_b1_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3F2_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3F2_b1");
#endif
    func_A340_b1_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3D5_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3D5_b1");
#endif
    func_A340_b1_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A49D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A49D_b1");
#endif
    func_A340_b1_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4CD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4CD_b1");
#endif
    func_A340_b1_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A2E2_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2E2_b1");
#endif
label_A2E2:;
    /* $A2E2: DC */ maybe_trigger_vblank(4); (void)nes_read((0xFB8D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A2E5:;
    /* $A2E5: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2E7:;
    /* $A2E7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA2E7); return;
}

