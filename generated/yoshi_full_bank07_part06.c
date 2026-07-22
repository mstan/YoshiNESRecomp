/* yoshi_full_bank07_part06.c — PRG bank 7 function bodies (sub-part 6).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella yoshi_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "yoshi_full_decls.h"

void func_D8C6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D8C6");
#endif
label_D8C6:;
    /* $D8C6: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D8C8:;
    /* $D8C8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D8CA:;
    /* $D8CA: 20 */ maybe_trigger_vblank(6); func_EFD1();
label_D8CD:;
    /* $D8CD: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D8CF:;
    /* $D8CF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D8D1:;
    /* $D8D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_D8D3:;
    /* $D8D3: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0487); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D8D6:;
    /* $D8D6: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xD87F); return; }
label_D8D8:;
    /* $D8D8: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x048B); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D8DB:;
    /* $D8DB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xD87F); return; }
label_D8DD:;
    /* $D8DD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E04F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E04F");
#endif
label_E04F:;
    /* $E04F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xA0; g_cpu.C=(g_cpu.X>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_E051:;
    /* $E051: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x03A2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E054:;
    /* $E054: 20 */ maybe_trigger_vblank(6); func_E0D5();
label_E057:;
    /* $E057: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0A; FLAG_NZ(g_cpu.Y);
label_E059:;
    /* $E059: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_E05B:;
    /* $E05B: 20 */ maybe_trigger_vblank(6); func_E0D5();
label_E05E:;
    /* $E05E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_E060:;
    /* $E060: 8D */ maybe_trigger_vblank(4); nes_write(0x027F, g_cpu.A);
label_E063:;
    /* $E063: 20 */ maybe_trigger_vblank(6); func_E083();
label_E066:;
    /* $E066: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_E068:;
    /* $E068: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x7C); FLAG_NZ(g_cpu.X);
label_E06A:;
    /* $E06A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E072; }
label_E06C:;
    /* $E06C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E06D:;
    /* $E06D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_E06F:;
    /* $E06F: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_E070:;
    /* $E070: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E06C;
    }
label_E072:;
    /* $E072: 8D */ maybe_trigger_vblank(4); nes_write(0x0297, g_cpu.A);
label_E075:;
    /* $E075: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DD22(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DD22");
#endif
label_DD22:;
    /* $DD22: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_DD24:;
    /* $DD24: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xA902 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DD27:;
    /* $DD27: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F00B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F00B");
#endif
label_F00B:;
    /* $F00B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x8D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F00D:;
    /* $F00D: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F00E:;
    /* $F00E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x8D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F010:;
    /* $F010: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F012:;
    /* $F012: 8D */ maybe_trigger_vblank(4); nes_write(0x033B, g_cpu.A);
label_F015:;
    /* $F015: 8D */ maybe_trigger_vblank(4); nes_write(0x033E, g_cpu.A);
label_F018:;
    /* $F018: 8D */ maybe_trigger_vblank(4); nes_write(0x0343, g_cpu.A);
label_F01B:;
    /* $F01B: 8D */ maybe_trigger_vblank(4); nes_write(0x0346, g_cpu.A);
label_F01E:;
    /* $F01E: 8D */ maybe_trigger_vblank(4); nes_write(0x034B, g_cpu.A);
label_F021:;
    /* $F021: 8D */ maybe_trigger_vblank(4); nes_write(0x034E, g_cpu.A);
label_F024:;
    /* $F024: 8D */ maybe_trigger_vblank(4); nes_write(0x0353, g_cpu.A);
label_F027:;
    /* $F027: 8D */ maybe_trigger_vblank(4); nes_write(0x0356, g_cpu.A);
label_F02A:;
    /* $F02A: 8D */ maybe_trigger_vblank(4); nes_write(0x035B, g_cpu.A);
label_F02D:;
    /* $F02D: 8D */ maybe_trigger_vblank(4); nes_write(0x035E, g_cpu.A);
label_F030:;
    /* $F030: 8D */ maybe_trigger_vblank(4); nes_write(0x0363, g_cpu.A);
label_F033:;
    /* $F033: 8D */ maybe_trigger_vblank(4); nes_write(0x0366, g_cpu.A);
label_F036:;
    /* $F036: 8D */ maybe_trigger_vblank(4); nes_write(0x036B, g_cpu.A);
label_F039:;
    /* $F039: 8D */ maybe_trigger_vblank(4); nes_write(0x036E, g_cpu.A);
label_F03C:;
    /* $F03C: 8D */ maybe_trigger_vblank(4); nes_write(0x0373, g_cpu.A);
label_F03F:;
    /* $F03F: 8D */ maybe_trigger_vblank(4); nes_write(0x05FA, g_cpu.A);
label_F042:;
    /* $F042: 8D */ maybe_trigger_vblank(4); nes_write(0x0602, g_cpu.A);
label_F045:;
    /* $F045: 8D */ maybe_trigger_vblank(4); nes_write(0x02C6, g_cpu.A);
label_F048:;
    /* $F048: 8D */ maybe_trigger_vblank(4); nes_write(0x02C9, g_cpu.A);
label_F04B:;
    /* $F04B: 8D */ maybe_trigger_vblank(4); nes_write(0x02CB, g_cpu.A);
label_F04E:;
    /* $F04E: 8D */ maybe_trigger_vblank(4); nes_write(0x02E4, g_cpu.A);
label_F051:;
    /* $F051: 8D */ maybe_trigger_vblank(4); nes_write(0x02E7, g_cpu.A);
label_F054:;
    /* $F054: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F406(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F406");
#endif
label_F406:;
    /* $F406: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBE); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F408:;
    /* $F408: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDD04 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F40B:;
    /* $F40B: 87 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A & g_cpu.X); /* SAX */
label_F40D:;
    /* $F40D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xF3EF); return; }
label_F40F:;
    /* $F40F: 8D */ maybe_trigger_vblank(4); nes_write(0x0445, g_cpu.A);
label_F412:;
    /* $F412: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F414:;
    /* $F414: 8D */ maybe_trigger_vblank(4); nes_write(0x0446, g_cpu.A);
label_F417:;
    /* $F417: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA8D8, -1);
label_F41A:;
    /* $F41A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F506(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F506");
#endif
label_F506:;
    /* $F506: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x20); FLAG_NZ(g_cpu.A);
label_F508:;
    /* $F508: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xAB; g_cpu.C=(g_cpu.X>=0xAB)?1:0; FLAG_NZ(r&0xFF); }
label_F50A:;
    /* $F50A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0518); FLAG_NZ(g_cpu.A);
label_F50D:;
    /* $F50D: 8D */ maybe_trigger_vblank(4); nes_write(0x0446, g_cpu.A);
label_F510:;
    /* $F510: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0514; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F513:;
    /* $F513: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xABE0, -1);
label_F516:;
    /* $F516: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D025(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D025");
#endif
label_D025:;
    /* $D025: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xC6); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D027:;
    /* $D027: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x25F0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_D02A:;
    /* $D02A: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x2002); FLAG_NZ(g_cpu.X);
label_D02D:;
    /* $D02D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D02F:;
    /* $D02F: 84 */ maybe_trigger_vblank(3); nes_write(0xBD, g_cpu.Y);
label_D031:;
    /* $D031: 84 */ maybe_trigger_vblank(3); nes_write(0xBE, g_cpu.Y);
label_D033:;
    /* $D033: 84 */ maybe_trigger_vblank(3); nes_write(0xBF, g_cpu.Y);
label_D035:;
    /* $D035: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D037:;
    /* $D037: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_D039:;
    /* $D039: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D03E; }
label_D03B:;
    /* $D03B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CF8A(); return;
label_D03E:;
    /* $D03E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D040:;
    /* $D040: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_D042:;
    /* $D042: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D044:;
    /* $D044: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_D046:;
    /* $D046: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_D048:;
    /* $D048: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_D04A:;
    /* $D04A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_D04C:;
    /* $D04C: 8D */ maybe_trigger_vblank(4); nes_write(0x0200, g_cpu.A);
label_D04F:;
    /* $D04F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E014(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E014");
#endif
label_E014:;
    /* $E014: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x7CC6; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E017:;
    /* $E017: 20 */ maybe_trigger_vblank(6); func_E099();
label_E01A:;
    /* $E01A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_E01C:;
    /* $E01C: 8D */ maybe_trigger_vblank(4); nes_write(0x0267, g_cpu.A);
label_E01F:;
    /* $E01F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E063(); return;
}

void func_E009(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E009");
#endif
label_E009:;
    /* $E009: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x40A9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E00C:;
    /* $E00C: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x024B); FLAG_NZ(g_cpu.A);
label_E00F:;
    /* $E00F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E022; }
label_E011:;
    /* $E011: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7C); FLAG_NZ(g_cpu.A);
label_E013:;
    /* $E013: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E063; }
label_E015:;
    /* $E015: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x7C; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E017:;
    /* $E017: 20 */ maybe_trigger_vblank(6); func_E099();
label_E01A:;
    /* $E01A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_E01C:;
    /* $E01C: 8D */ maybe_trigger_vblank(4); nes_write(0x0267, g_cpu.A);
label_E01F:;
    /* $E01F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E063(); return;
label_E022:;
    /* $E022: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_E024:;
    /* $E024: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x024B); FLAG_NZ(g_cpu.A);
label_E027:;
    /* $E027: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E03C; }
label_E029:;
    /* $E029: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7C); FLAG_NZ(g_cpu.A);
label_E02B:;
    /* $E02B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_E02D:;
    /* $E02D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E063; }
label_E02F:;
    /* $E02F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x7C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E031:;
    /* $E031: 20 */ maybe_trigger_vblank(6); func_E099();
label_E034:;
    /* $E034: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_E036:;
    /* $E036: 8D */ maybe_trigger_vblank(4); nes_write(0x0267, g_cpu.A);
label_E039:;
    /* $E039: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E063(); return;
label_E03C:;
    /* $E03C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_E03E:;
    /* $E03E: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x024B); FLAG_NZ(g_cpu.A);
label_E041:;
    /* $E041: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E063; }
label_E043:;
    /* $E043: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_E045:;
    /* $E045: 8D */ maybe_trigger_vblank(4); nes_write(0x02F6, g_cpu.A);
label_E048:;
    /* $E048: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_E04A:;
    /* $E04A: 8D */ maybe_trigger_vblank(4); nes_write(0x0267, g_cpu.A);
label_E04D:;
    /* $E04D: 20 */ maybe_trigger_vblank(6); func_E099();
label_E050:;
    /* $E050: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_E052:;
    /* $E052: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_E054:;
    /* $E054: 20 */ maybe_trigger_vblank(6); func_E0D5();
label_E057:;
    /* $E057: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0A; FLAG_NZ(g_cpu.Y);
label_E059:;
    /* $E059: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_E05B:;
    /* $E05B: 20 */ maybe_trigger_vblank(6); func_E0D5();
label_E05E:;
    /* $E05E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_E060:;
    /* $E060: 8D */ maybe_trigger_vblank(4); nes_write(0x027F, g_cpu.A);
label_E063:;
    /* $E063: 20 */ maybe_trigger_vblank(6); func_E083();
label_E066:;
    /* $E066: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_E068:;
    /* $E068: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x7C); FLAG_NZ(g_cpu.X);
label_E06A:;
    /* $E06A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E072; }
label_E06C:;
    /* $E06C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E06D:;
    /* $E06D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_E06F:;
    /* $E06F: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_E070:;
    /* $E070: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E06C;
    }
label_E072:;
    /* $E072: 8D */ maybe_trigger_vblank(4); nes_write(0x0297, g_cpu.A);
label_E075:;
    /* $E075: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D09E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D09E");
#endif
label_D09E:;
    /* $D09E: C2 */ maybe_trigger_vblank(2); /* NOP */
label_D0A0:;
    /* $D0A0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_D0A1:;
    /* $D0A1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_D0A2:;
    /* $D0A2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_D0A3:;
    /* $D0A3: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D0A5:;
    /* $D0A5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_D0A6:;
    /* $D0A6: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D0A8:;
    /* $D0A8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D0A9:;
    /* $D0A9: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC1); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_D0AB:;
    /* $D0AB: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_D0AD:;
    /* $D0AD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_D0AF:;
    /* $D0AF: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_D0B1:;
    /* $D0B1: 85 */ maybe_trigger_vblank(3); nes_write(0xC5, g_cpu.A);
label_D0B3:;
    /* $D0B3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F78D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F78D");
#endif
label_F78D:;
    /* $F78D: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xA9 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F78F:;
    /* $F78F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF78F); return;
}

void func_DE65(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DE65");
#endif
label_DE65:;
    /* $DE65: DC */ maybe_trigger_vblank(4); (void)nes_read((0xCADE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DE68:;
    /* $DE68: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DE6D; }
label_DE6A:;
    /* $DE6A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DF6D(); return;
label_DE6D:;
    /* $DE6D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E000(); return;
}

void func_E284(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E284");
#endif
label_E284:;
    /* $E284: 89 */ maybe_trigger_vblank(2); /* NOP */
label_E286:;
    /* $E286: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x54; g_cpu.C=(g_cpu.A>=0x54)?1:0; FLAG_NZ(r&0xFF); }
label_E288:;
    /* $E288: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xE27C); return; }
label_E28A:;
    /* $E28A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_E28D:;
    /* $E28D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E295; }
label_E28F:;
    /* $E28F: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x89B4, -1);
label_E292:;
    /* $E292: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E29C(); return;
label_E295:;
    /* $E295: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_E297:;
    /* $E297: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_E299:;
    /* $E299: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x806A, -1);
label_E29C:;
    /* $E29C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0122); FLAG_NZ(g_cpu.A);
label_E29F:;
    /* $E29F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E2AA; }
label_E2A1:;
    /* $E2A1: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x9358, -1);
label_E2A4:;
    /* $E2A4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x802B, -1);
label_E2A7:;
    /* $E2A7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CE02(); return;
label_E2AA:;
    /* $E2AA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D211(); return;
}

void func_F410(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F410");
#endif
label_F410:;
    /* $F410: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_F412:;
    /* $F412: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F414:;
    /* $F414: 8D */ maybe_trigger_vblank(4); nes_write(0x0446, g_cpu.A);
label_F417:;
    /* $F417: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0xA8D8, -1);
label_F41A:;
    /* $F41A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DD0C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DD0C");
#endif
label_DD0C:;
    /* $DD0C: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DD0E:;
    /* $DD0E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_DD10:;
    /* $DD10: 20 */ maybe_trigger_vblank(6); func_E0EE();
label_DD13:;
    /* $DD13: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0A; FLAG_NZ(g_cpu.Y);
label_DD15:;
    /* $DD15: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_DD17:;
    /* $DD17: 20 */ maybe_trigger_vblank(6); func_E0D5();
label_DD1A:;
    /* $DD1A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_DD1C:;
    /* $DD1C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_DD1E:;
    /* $DD1E: 20 */ maybe_trigger_vblank(6); func_E0D5();
label_DD21:;
    /* $DD21: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_DD23:;
    /* $DD23: 8D */ maybe_trigger_vblank(4); nes_write(0x027E, g_cpu.A);
label_DD26:;
    /* $DD26: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_DD28:;
    /* $DD28: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x7F); FLAG_NZ(g_cpu.X);
label_DD2A:;
    /* $DD2A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD32; }
label_DD2C:;
    /* $DD2C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DD2D:;
    /* $DD2D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x18 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x18); g_cpu.A=r&0xFF; }
label_DD2F:;
    /* $DD2F: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_DD30:;
    /* $DD30: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD2C;
    }
label_DD32:;
    /* $DD32: 8D */ maybe_trigger_vblank(4); nes_write(0x0296, g_cpu.A);
label_DD35:;
    /* $DD35: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DAB1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DAB1");
#endif
label_DAB1:;
    /* $DAB1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x20); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DAB3:;
    /* $DAB3: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_DAB4:;
    /* $DAB4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DAB5:;
    /* $DAB5: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_DAB8:;
    /* $DAB8: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0527 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DABB:;
    /* $DABB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E4C6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E4C6");
#endif
label_E4C6:;
    /* $E4C6: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x23A9, -1);
label_E4C9:;
    /* $E4C9: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E4CC:;
    /* $E4CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_E4CE:;
    /* $E4CE: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E4D1:;
    /* $E4D1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x030E); FLAG_NZ(g_cpu.A);
label_E4D4:;
    /* $E4D4: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E4D7:;
    /* $E4D7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x030F); FLAG_NZ(g_cpu.A);
label_E4DA:;
    /* $E4DA: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E4DD:;
    /* $E4DD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0310); FLAG_NZ(g_cpu.A);
label_E4E0:;
    /* $E4E0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E4E3:;
    /* $E4E3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0311); FLAG_NZ(g_cpu.A);
label_E4E6:;
    /* $E4E6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E4E9:;
    /* $E4E9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0312); FLAG_NZ(g_cpu.A);
label_E4EC:;
    /* $E4EC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E4EF:;
    /* $E4EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0313); FLAG_NZ(g_cpu.A);
label_E4F2:;
    /* $E4F2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E4F5:;
    /* $E4F5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0314); FLAG_NZ(g_cpu.A);
label_E4F8:;
    /* $E4F8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E4FB:;
    /* $E4FB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0315); FLAG_NZ(g_cpu.A);
label_E4FE:;
    /* $E4FE: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E501:;
    /* $E501: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0316); FLAG_NZ(g_cpu.A);
label_E504:;
    /* $E504: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E507:;
    /* $E507: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0317); FLAG_NZ(g_cpu.A);
label_E50A:;
    /* $E50A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E50D:;
    /* $E50D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0318); FLAG_NZ(g_cpu.A);
label_E510:;
    /* $E510: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E513:;
    /* $E513: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0319); FLAG_NZ(g_cpu.A);
label_E516:;
    /* $E516: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E519:;
    /* $E519: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x031A); FLAG_NZ(g_cpu.A);
label_E51C:;
    /* $E51C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E51F:;
    /* $E51F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x031B); FLAG_NZ(g_cpu.A);
label_E522:;
    /* $E522: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E527; }
label_E524:;
    /* $E524: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_E5D5(); return;
label_E527:;
    /* $E527: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E52A:;
    /* $E52A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_E52C:;
    /* $E52C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E52F:;
    /* $E52F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x031C); FLAG_NZ(g_cpu.A);
label_E532:;
    /* $E532: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E535:;
    /* $E535: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x031D); FLAG_NZ(g_cpu.A);
label_E538:;
    /* $E538: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E53B:;
    /* $E53B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x031E); FLAG_NZ(g_cpu.A);
label_E53E:;
    /* $E53E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E541:;
    /* $E541: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x031F); FLAG_NZ(g_cpu.A);
label_E544:;
    /* $E544: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E547:;
    /* $E547: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0320); FLAG_NZ(g_cpu.A);
label_E54A:;
    /* $E54A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E54D:;
    /* $E54D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0321); FLAG_NZ(g_cpu.A);
label_E550:;
    /* $E550: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E553:;
    /* $E553: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0322); FLAG_NZ(g_cpu.A);
label_E556:;
    /* $E556: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E559:;
    /* $E559: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0323); FLAG_NZ(g_cpu.A);
label_E55C:;
    /* $E55C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E55F:;
    /* $E55F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0324); FLAG_NZ(g_cpu.A);
label_E562:;
    /* $E562: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E565:;
    /* $E565: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0325); FLAG_NZ(g_cpu.A);
label_E568:;
    /* $E568: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E56B:;
    /* $E56B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0326); FLAG_NZ(g_cpu.A);
label_E56E:;
    /* $E56E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E571:;
    /* $E571: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0327); FLAG_NZ(g_cpu.A);
label_E574:;
    /* $E574: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E577:;
    /* $E577: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0328); FLAG_NZ(g_cpu.A);
label_E57A:;
    /* $E57A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E57D:;
    /* $E57D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_E57F:;
    /* $E57F: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E582:;
    /* $E582: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x31; FLAG_NZ(g_cpu.A);
label_E584:;
    /* $E584: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E587:;
    /* $E587: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0329); FLAG_NZ(g_cpu.A);
label_E58A:;
    /* $E58A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E58D:;
    /* $E58D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x032A); FLAG_NZ(g_cpu.A);
label_E590:;
    /* $E590: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E593:;
    /* $E593: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x032B); FLAG_NZ(g_cpu.A);
label_E596:;
    /* $E596: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E599:;
    /* $E599: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x032C); FLAG_NZ(g_cpu.A);
label_E59C:;
    /* $E59C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E59F:;
    /* $E59F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x032D); FLAG_NZ(g_cpu.A);
label_E5A2:;
    /* $E5A2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5A5:;
    /* $E5A5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x032E); FLAG_NZ(g_cpu.A);
label_E5A8:;
    /* $E5A8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5AB:;
    /* $E5AB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x032F); FLAG_NZ(g_cpu.A);
label_E5AE:;
    /* $E5AE: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5B1:;
    /* $E5B1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0330); FLAG_NZ(g_cpu.A);
label_E5B4:;
    /* $E5B4: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5B7:;
    /* $E5B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0331); FLAG_NZ(g_cpu.A);
label_E5BA:;
    /* $E5BA: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5BD:;
    /* $E5BD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0332); FLAG_NZ(g_cpu.A);
label_E5C0:;
    /* $E5C0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5C3:;
    /* $E5C3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0333); FLAG_NZ(g_cpu.A);
label_E5C6:;
    /* $E5C6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5C9:;
    /* $E5C9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0334); FLAG_NZ(g_cpu.A);
label_E5CC:;
    /* $E5CC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5CF:;
    /* $E5CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0335); FLAG_NZ(g_cpu.A);
label_E5D2:;
    /* $E5D2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5D5:;
    /* $E5D5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0447); FLAG_NZ(g_cpu.A);
label_E5D8:;
    /* $E5D8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_E60D; }
label_E5DA:;
    /* $E5DA: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E5DD:;
    /* $E5DD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0448); FLAG_NZ(g_cpu.A);
label_E5E0:;
    /* $E5E0: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E5E3:;
    /* $E5E3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0449); FLAG_NZ(g_cpu.A);
label_E5E6:;
    /* $E5E6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5E9:;
    /* $E5E9: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5EC:;
    /* $E5EC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5EF:;
    /* $E5EF: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5F2:;
    /* $E5F2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5F5:;
    /* $E5F5: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5F8:;
    /* $E5F8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5FB:;
    /* $E5FB: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E5FE:;
    /* $E5FE: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E601:;
    /* $E601: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E604:;
    /* $E604: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E607:;
    /* $E607: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E60A:;
    /* $E60A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E60D:;
    /* $E60D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044A); FLAG_NZ(g_cpu.A);
label_E610:;
    /* $E610: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E645; }
label_E612:;
    /* $E612: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E615:;
    /* $E615: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044B); FLAG_NZ(g_cpu.A);
label_E618:;
    /* $E618: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E61B:;
    /* $E61B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044C); FLAG_NZ(g_cpu.A);
label_E61E:;
    /* $E61E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E621:;
    /* $E621: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E624:;
    /* $E624: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E627:;
    /* $E627: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E62A:;
    /* $E62A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E62D:;
    /* $E62D: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E630:;
    /* $E630: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E633:;
    /* $E633: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E636:;
    /* $E636: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E639:;
    /* $E639: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E63C:;
    /* $E63C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E63F:;
    /* $E63F: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E642:;
    /* $E642: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E645:;
    /* $E645: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0376); FLAG_NZ(g_cpu.A);
label_E648:;
    /* $E648: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E68F; }
label_E64A:;
    /* $E64A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E64D:;
    /* $E64D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0377); FLAG_NZ(g_cpu.A);
label_E650:;
    /* $E650: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E653:;
    /* $E653: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0378); FLAG_NZ(g_cpu.A);
label_E656:;
    /* $E656: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E659:;
    /* $E659: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0379); FLAG_NZ(g_cpu.A);
label_E65C:;
    /* $E65C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E65F:;
    /* $E65F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x037A); FLAG_NZ(g_cpu.A);
label_E662:;
    /* $E662: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E665:;
    /* $E665: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x037B); FLAG_NZ(g_cpu.A);
label_E668:;
    /* $E668: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E66B:;
    /* $E66B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x037C); FLAG_NZ(g_cpu.A);
label_E66E:;
    /* $E66E: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E671:;
    /* $E671: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x037D); FLAG_NZ(g_cpu.A);
label_E674:;
    /* $E674: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E677:;
    /* $E677: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x037E); FLAG_NZ(g_cpu.A);
label_E67A:;
    /* $E67A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E67D:;
    /* $E67D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x037F); FLAG_NZ(g_cpu.A);
label_E680:;
    /* $E680: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E683:;
    /* $E683: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_E686:;
    /* $E686: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E689:;
    /* $E689: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0381); FLAG_NZ(g_cpu.A);
label_E68C:;
    /* $E68C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E68F:;
    /* $E68F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0382); FLAG_NZ(g_cpu.A);
label_E692:;
    /* $E692: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E6D9; }
label_E694:;
    /* $E694: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E697:;
    /* $E697: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0383); FLAG_NZ(g_cpu.A);
label_E69A:;
    /* $E69A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E69D:;
    /* $E69D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0384); FLAG_NZ(g_cpu.A);
label_E6A0:;
    /* $E6A0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6A3:;
    /* $E6A3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0385); FLAG_NZ(g_cpu.A);
label_E6A6:;
    /* $E6A6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6A9:;
    /* $E6A9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0386); FLAG_NZ(g_cpu.A);
label_E6AC:;
    /* $E6AC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6AF:;
    /* $E6AF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0387); FLAG_NZ(g_cpu.A);
label_E6B2:;
    /* $E6B2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6B5:;
    /* $E6B5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0388); FLAG_NZ(g_cpu.A);
label_E6B8:;
    /* $E6B8: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E6BB:;
    /* $E6BB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0389); FLAG_NZ(g_cpu.A);
label_E6BE:;
    /* $E6BE: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E6C1:;
    /* $E6C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x038A); FLAG_NZ(g_cpu.A);
label_E6C4:;
    /* $E6C4: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6C7:;
    /* $E6C7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x038B); FLAG_NZ(g_cpu.A);
label_E6CA:;
    /* $E6CA: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6CD:;
    /* $E6CD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x038C); FLAG_NZ(g_cpu.A);
label_E6D0:;
    /* $E6D0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6D3:;
    /* $E6D3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x038D); FLAG_NZ(g_cpu.A);
label_E6D6:;
    /* $E6D6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6D9:;
    /* $E6D9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x038E); FLAG_NZ(g_cpu.A);
label_E6DC:;
    /* $E6DC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_E723; }
label_E6DE:;
    /* $E6DE: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E6E1:;
    /* $E6E1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x038F); FLAG_NZ(g_cpu.A);
label_E6E4:;
    /* $E6E4: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E6E7:;
    /* $E6E7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0390); FLAG_NZ(g_cpu.A);
label_E6EA:;
    /* $E6EA: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6ED:;
    /* $E6ED: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0391); FLAG_NZ(g_cpu.A);
label_E6F0:;
    /* $E6F0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6F3:;
    /* $E6F3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0392); FLAG_NZ(g_cpu.A);
label_E6F6:;
    /* $E6F6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6F9:;
    /* $E6F9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0393); FLAG_NZ(g_cpu.A);
label_E6FC:;
    /* $E6FC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E6FF:;
    /* $E6FF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0394); FLAG_NZ(g_cpu.A);
label_E702:;
    /* $E702: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E705:;
    /* $E705: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0395); FLAG_NZ(g_cpu.A);
label_E708:;
    /* $E708: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E70B:;
    /* $E70B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0396); FLAG_NZ(g_cpu.A);
label_E70E:;
    /* $E70E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E711:;
    /* $E711: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0397); FLAG_NZ(g_cpu.A);
label_E714:;
    /* $E714: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E717:;
    /* $E717: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0398); FLAG_NZ(g_cpu.A);
label_E71A:;
    /* $E71A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E71D:;
    /* $E71D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0399); FLAG_NZ(g_cpu.A);
label_E720:;
    /* $E720: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E723:;
    /* $E723: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x039A); FLAG_NZ(g_cpu.A);
label_E726:;
    /* $E726: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E76D; }
label_E728:;
    /* $E728: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E72B:;
    /* $E72B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x039B); FLAG_NZ(g_cpu.A);
label_E72E:;
    /* $E72E: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E731:;
    /* $E731: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x039C); FLAG_NZ(g_cpu.A);
label_E734:;
    /* $E734: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E737:;
    /* $E737: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x039D); FLAG_NZ(g_cpu.A);
label_E73A:;
    /* $E73A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E73D:;
    /* $E73D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x039E); FLAG_NZ(g_cpu.A);
label_E740:;
    /* $E740: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E743:;
    /* $E743: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x039F); FLAG_NZ(g_cpu.A);
label_E746:;
    /* $E746: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E749:;
    /* $E749: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03A0); FLAG_NZ(g_cpu.A);
label_E74C:;
    /* $E74C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E74F:;
    /* $E74F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03A1); FLAG_NZ(g_cpu.A);
label_E752:;
    /* $E752: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E755:;
    /* $E755: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03A2); FLAG_NZ(g_cpu.A);
label_E758:;
    /* $E758: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E75B:;
    /* $E75B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03A3); FLAG_NZ(g_cpu.A);
label_E75E:;
    /* $E75E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E761:;
    /* $E761: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03A4); FLAG_NZ(g_cpu.A);
label_E764:;
    /* $E764: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E767:;
    /* $E767: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03A5); FLAG_NZ(g_cpu.A);
label_E76A:;
    /* $E76A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E76D:;
    /* $E76D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03A6); FLAG_NZ(g_cpu.A);
label_E770:;
    /* $E770: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E7B7; }
label_E772:;
    /* $E772: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E775:;
    /* $E775: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03A7); FLAG_NZ(g_cpu.A);
label_E778:;
    /* $E778: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E77B:;
    /* $E77B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03A8); FLAG_NZ(g_cpu.A);
label_E77E:;
    /* $E77E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E781:;
    /* $E781: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03A9); FLAG_NZ(g_cpu.A);
label_E784:;
    /* $E784: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E787:;
    /* $E787: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03AA); FLAG_NZ(g_cpu.A);
label_E78A:;
    /* $E78A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E78D:;
    /* $E78D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03AB); FLAG_NZ(g_cpu.A);
label_E790:;
    /* $E790: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E793:;
    /* $E793: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03AC); FLAG_NZ(g_cpu.A);
label_E796:;
    /* $E796: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E799:;
    /* $E799: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03AD); FLAG_NZ(g_cpu.A);
label_E79C:;
    /* $E79C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E79F:;
    /* $E79F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03AE); FLAG_NZ(g_cpu.A);
label_E7A2:;
    /* $E7A2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E7A5:;
    /* $E7A5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03AF); FLAG_NZ(g_cpu.A);
label_E7A8:;
    /* $E7A8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E7AB:;
    /* $E7AB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03B0); FLAG_NZ(g_cpu.A);
label_E7AE:;
    /* $E7AE: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E7B1:;
    /* $E7B1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03B1); FLAG_NZ(g_cpu.A);
label_E7B4:;
    /* $E7B4: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E7B7:;
    /* $E7B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03B2); FLAG_NZ(g_cpu.A);
label_E7BA:;
    /* $E7BA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_E801; }
label_E7BC:;
    /* $E7BC: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E7BF:;
    /* $E7BF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03B3); FLAG_NZ(g_cpu.A);
label_E7C2:;
    /* $E7C2: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E7C5:;
    /* $E7C5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03B4); FLAG_NZ(g_cpu.A);
label_E7C8:;
    /* $E7C8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E7CB:;
    /* $E7CB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03B5); FLAG_NZ(g_cpu.A);
label_E7CE:;
    /* $E7CE: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E7D1:;
    /* $E7D1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03B6); FLAG_NZ(g_cpu.A);
label_E7D4:;
    /* $E7D4: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E7D7:;
    /* $E7D7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03B7); FLAG_NZ(g_cpu.A);
label_E7DA:;
    /* $E7DA: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E7DD:;
    /* $E7DD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03B8); FLAG_NZ(g_cpu.A);
label_E7E0:;
    /* $E7E0: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E7E3:;
    /* $E7E3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03B9); FLAG_NZ(g_cpu.A);
label_E7E6:;
    /* $E7E6: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E7E9:;
    /* $E7E9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03BA); FLAG_NZ(g_cpu.A);
label_E7EC:;
    /* $E7EC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E7EF:;
    /* $E7EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03BB); FLAG_NZ(g_cpu.A);
label_E7F2:;
    /* $E7F2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E7F5:;
    /* $E7F5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03BC); FLAG_NZ(g_cpu.A);
label_E7F8:;
    /* $E7F8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E7FB:;
    /* $E7FB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03BD); FLAG_NZ(g_cpu.A);
label_E7FE:;
    /* $E7FE: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E801:;
    /* $E801: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03BE); FLAG_NZ(g_cpu.A);
label_E804:;
    /* $E804: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E84B; }
label_E806:;
    /* $E806: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E809:;
    /* $E809: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03BF); FLAG_NZ(g_cpu.A);
label_E80C:;
    /* $E80C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E80F:;
    /* $E80F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_E812:;
    /* $E812: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E815:;
    /* $E815: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C1); FLAG_NZ(g_cpu.A);
label_E818:;
    /* $E818: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E81B:;
    /* $E81B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C2); FLAG_NZ(g_cpu.A);
label_E81E:;
    /* $E81E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E821:;
    /* $E821: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C3); FLAG_NZ(g_cpu.A);
label_E824:;
    /* $E824: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E827:;
    /* $E827: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C4); FLAG_NZ(g_cpu.A);
label_E82A:;
    /* $E82A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E82D:;
    /* $E82D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C5); FLAG_NZ(g_cpu.A);
label_E830:;
    /* $E830: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E833:;
    /* $E833: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C6); FLAG_NZ(g_cpu.A);
label_E836:;
    /* $E836: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E839:;
    /* $E839: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C7); FLAG_NZ(g_cpu.A);
label_E83C:;
    /* $E83C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E83F:;
    /* $E83F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C8); FLAG_NZ(g_cpu.A);
label_E842:;
    /* $E842: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E845:;
    /* $E845: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C9); FLAG_NZ(g_cpu.A);
label_E848:;
    /* $E848: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E84B:;
    /* $E84B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03CA); FLAG_NZ(g_cpu.A);
label_E84E:;
    /* $E84E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E895; }
label_E850:;
    /* $E850: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E853:;
    /* $E853: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03CB); FLAG_NZ(g_cpu.A);
label_E856:;
    /* $E856: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E859:;
    /* $E859: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03CC); FLAG_NZ(g_cpu.A);
label_E85C:;
    /* $E85C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E85F:;
    /* $E85F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03CD); FLAG_NZ(g_cpu.A);
label_E862:;
    /* $E862: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E865:;
    /* $E865: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03CE); FLAG_NZ(g_cpu.A);
label_E868:;
    /* $E868: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E86B:;
    /* $E86B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03CF); FLAG_NZ(g_cpu.A);
label_E86E:;
    /* $E86E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E871:;
    /* $E871: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D0); FLAG_NZ(g_cpu.A);
label_E874:;
    /* $E874: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E877:;
    /* $E877: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D1); FLAG_NZ(g_cpu.A);
label_E87A:;
    /* $E87A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E87D:;
    /* $E87D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D2); FLAG_NZ(g_cpu.A);
label_E880:;
    /* $E880: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E883:;
    /* $E883: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D3); FLAG_NZ(g_cpu.A);
label_E886:;
    /* $E886: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E889:;
    /* $E889: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D4); FLAG_NZ(g_cpu.A);
label_E88C:;
    /* $E88C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E88F:;
    /* $E88F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D5); FLAG_NZ(g_cpu.A);
label_E892:;
    /* $E892: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E895:;
    /* $E895: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D6); FLAG_NZ(g_cpu.A);
label_E898:;
    /* $E898: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E8DF; }
label_E89A:;
    /* $E89A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E89D:;
    /* $E89D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D7); FLAG_NZ(g_cpu.A);
label_E8A0:;
    /* $E8A0: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E8A3:;
    /* $E8A3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D8); FLAG_NZ(g_cpu.A);
label_E8A6:;
    /* $E8A6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E8A9:;
    /* $E8A9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03D9); FLAG_NZ(g_cpu.A);
label_E8AC:;
    /* $E8AC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E8AF:;
    /* $E8AF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03DA); FLAG_NZ(g_cpu.A);
label_E8B2:;
    /* $E8B2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E8B5:;
    /* $E8B5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03DB); FLAG_NZ(g_cpu.A);
label_E8B8:;
    /* $E8B8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E8BB:;
    /* $E8BB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03DC); FLAG_NZ(g_cpu.A);
label_E8BE:;
    /* $E8BE: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E8C1:;
    /* $E8C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03DD); FLAG_NZ(g_cpu.A);
label_E8C4:;
    /* $E8C4: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E8C7:;
    /* $E8C7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03DE); FLAG_NZ(g_cpu.A);
label_E8CA:;
    /* $E8CA: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E8CD:;
    /* $E8CD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03DF); FLAG_NZ(g_cpu.A);
label_E8D0:;
    /* $E8D0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E8D3:;
    /* $E8D3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_E8D6:;
    /* $E8D6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E8D9:;
    /* $E8D9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E1); FLAG_NZ(g_cpu.A);
label_E8DC:;
    /* $E8DC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E8DF:;
    /* $E8DF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E2); FLAG_NZ(g_cpu.A);
label_E8E2:;
    /* $E8E2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_E929; }
label_E8E4:;
    /* $E8E4: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E8E7:;
    /* $E8E7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E3); FLAG_NZ(g_cpu.A);
label_E8EA:;
    /* $E8EA: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E8ED:;
    /* $E8ED: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E4); FLAG_NZ(g_cpu.A);
label_E8F0:;
    /* $E8F0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E8F3:;
    /* $E8F3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E5); FLAG_NZ(g_cpu.A);
label_E8F6:;
    /* $E8F6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E8F9:;
    /* $E8F9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E6); FLAG_NZ(g_cpu.A);
label_E8FC:;
    /* $E8FC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E8FF:;
    /* $E8FF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E7); FLAG_NZ(g_cpu.A);
label_E902:;
    /* $E902: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E905:;
    /* $E905: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E8); FLAG_NZ(g_cpu.A);
label_E908:;
    /* $E908: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E90B:;
    /* $E90B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E9); FLAG_NZ(g_cpu.A);
label_E90E:;
    /* $E90E: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E911:;
    /* $E911: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03EA); FLAG_NZ(g_cpu.A);
label_E914:;
    /* $E914: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E917:;
    /* $E917: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03EB); FLAG_NZ(g_cpu.A);
label_E91A:;
    /* $E91A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E91D:;
    /* $E91D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03EC); FLAG_NZ(g_cpu.A);
label_E920:;
    /* $E920: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E923:;
    /* $E923: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03ED); FLAG_NZ(g_cpu.A);
label_E926:;
    /* $E926: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E929:;
    /* $E929: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03EE); FLAG_NZ(g_cpu.A);
label_E92C:;
    /* $E92C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E973; }
label_E92E:;
    /* $E92E: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E931:;
    /* $E931: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03EF); FLAG_NZ(g_cpu.A);
label_E934:;
    /* $E934: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E937:;
    /* $E937: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F0); FLAG_NZ(g_cpu.A);
label_E93A:;
    /* $E93A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E93D:;
    /* $E93D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F1); FLAG_NZ(g_cpu.A);
label_E940:;
    /* $E940: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E943:;
    /* $E943: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F2); FLAG_NZ(g_cpu.A);
label_E946:;
    /* $E946: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E949:;
    /* $E949: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F3); FLAG_NZ(g_cpu.A);
label_E94C:;
    /* $E94C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E94F:;
    /* $E94F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F4); FLAG_NZ(g_cpu.A);
label_E952:;
    /* $E952: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E955:;
    /* $E955: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F5); FLAG_NZ(g_cpu.A);
label_E958:;
    /* $E958: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E95B:;
    /* $E95B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F6); FLAG_NZ(g_cpu.A);
label_E95E:;
    /* $E95E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E961:;
    /* $E961: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F7); FLAG_NZ(g_cpu.A);
label_E964:;
    /* $E964: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E967:;
    /* $E967: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F8); FLAG_NZ(g_cpu.A);
label_E96A:;
    /* $E96A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E96D:;
    /* $E96D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03F9); FLAG_NZ(g_cpu.A);
label_E970:;
    /* $E970: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E973:;
    /* $E973: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FA); FLAG_NZ(g_cpu.A);
label_E976:;
    /* $E976: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E9BD; }
label_E978:;
    /* $E978: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E97B:;
    /* $E97B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FB); FLAG_NZ(g_cpu.A);
label_E97E:;
    /* $E97E: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E981:;
    /* $E981: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FC); FLAG_NZ(g_cpu.A);
label_E984:;
    /* $E984: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E987:;
    /* $E987: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FD); FLAG_NZ(g_cpu.A);
label_E98A:;
    /* $E98A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E98D:;
    /* $E98D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FE); FLAG_NZ(g_cpu.A);
label_E990:;
    /* $E990: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E993:;
    /* $E993: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03FF); FLAG_NZ(g_cpu.A);
label_E996:;
    /* $E996: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E999:;
    /* $E999: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0400); FLAG_NZ(g_cpu.A);
label_E99C:;
    /* $E99C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E99F:;
    /* $E99F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0401); FLAG_NZ(g_cpu.A);
label_E9A2:;
    /* $E9A2: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E9A5:;
    /* $E9A5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0402); FLAG_NZ(g_cpu.A);
label_E9A8:;
    /* $E9A8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E9AB:;
    /* $E9AB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0403); FLAG_NZ(g_cpu.A);
label_E9AE:;
    /* $E9AE: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E9B1:;
    /* $E9B1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0404); FLAG_NZ(g_cpu.A);
label_E9B4:;
    /* $E9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E9B7:;
    /* $E9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0405); FLAG_NZ(g_cpu.A);
label_E9BA:;
    /* $E9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E9BD:;
    /* $E9BD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0406); FLAG_NZ(g_cpu.A);
label_E9C0:;
    /* $E9C0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_EA07; }
label_E9C2:;
    /* $E9C2: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E9C5:;
    /* $E9C5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0407); FLAG_NZ(g_cpu.A);
label_E9C8:;
    /* $E9C8: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E9CB:;
    /* $E9CB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0408); FLAG_NZ(g_cpu.A);
label_E9CE:;
    /* $E9CE: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E9D1:;
    /* $E9D1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0409); FLAG_NZ(g_cpu.A);
label_E9D4:;
    /* $E9D4: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E9D7:;
    /* $E9D7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040A); FLAG_NZ(g_cpu.A);
label_E9DA:;
    /* $E9DA: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E9DD:;
    /* $E9DD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040B); FLAG_NZ(g_cpu.A);
label_E9E0:;
    /* $E9E0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E9E3:;
    /* $E9E3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040C); FLAG_NZ(g_cpu.A);
label_E9E6:;
    /* $E9E6: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E9E9:;
    /* $E9E9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040D); FLAG_NZ(g_cpu.A);
label_E9EC:;
    /* $E9EC: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_E9EF:;
    /* $E9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040E); FLAG_NZ(g_cpu.A);
label_E9F2:;
    /* $E9F2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E9F5:;
    /* $E9F5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x040F); FLAG_NZ(g_cpu.A);
label_E9F8:;
    /* $E9F8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_E9FB:;
    /* $E9FB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0410); FLAG_NZ(g_cpu.A);
label_E9FE:;
    /* $E9FE: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA01:;
    /* $EA01: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0411); FLAG_NZ(g_cpu.A);
label_EA04:;
    /* $EA04: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA07:;
    /* $EA07: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0412); FLAG_NZ(g_cpu.A);
label_EA0A:;
    /* $EA0A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EA51; }
label_EA0C:;
    /* $EA0C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EA0F:;
    /* $EA0F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0413); FLAG_NZ(g_cpu.A);
label_EA12:;
    /* $EA12: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EA15:;
    /* $EA15: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0414); FLAG_NZ(g_cpu.A);
label_EA18:;
    /* $EA18: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA1B:;
    /* $EA1B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0415); FLAG_NZ(g_cpu.A);
label_EA1E:;
    /* $EA1E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA21:;
    /* $EA21: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0416); FLAG_NZ(g_cpu.A);
label_EA24:;
    /* $EA24: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA27:;
    /* $EA27: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0417); FLAG_NZ(g_cpu.A);
label_EA2A:;
    /* $EA2A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA2D:;
    /* $EA2D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0418); FLAG_NZ(g_cpu.A);
label_EA30:;
    /* $EA30: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EA33:;
    /* $EA33: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0419); FLAG_NZ(g_cpu.A);
label_EA36:;
    /* $EA36: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EA39:;
    /* $EA39: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041A); FLAG_NZ(g_cpu.A);
label_EA3C:;
    /* $EA3C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA3F:;
    /* $EA3F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041B); FLAG_NZ(g_cpu.A);
label_EA42:;
    /* $EA42: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA45:;
    /* $EA45: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041C); FLAG_NZ(g_cpu.A);
label_EA48:;
    /* $EA48: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA4B:;
    /* $EA4B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041D); FLAG_NZ(g_cpu.A);
label_EA4E:;
    /* $EA4E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA51:;
    /* $EA51: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041E); FLAG_NZ(g_cpu.A);
label_EA54:;
    /* $EA54: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EA9B; }
label_EA56:;
    /* $EA56: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EA59:;
    /* $EA59: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x041F); FLAG_NZ(g_cpu.A);
label_EA5C:;
    /* $EA5C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EA5F:;
    /* $EA5F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0420); FLAG_NZ(g_cpu.A);
label_EA62:;
    /* $EA62: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA65:;
    /* $EA65: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0421); FLAG_NZ(g_cpu.A);
label_EA68:;
    /* $EA68: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA6B:;
    /* $EA6B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0422); FLAG_NZ(g_cpu.A);
label_EA6E:;
    /* $EA6E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA71:;
    /* $EA71: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0423); FLAG_NZ(g_cpu.A);
label_EA74:;
    /* $EA74: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA77:;
    /* $EA77: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_EA7A:;
    /* $EA7A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EA7D:;
    /* $EA7D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0425); FLAG_NZ(g_cpu.A);
label_EA80:;
    /* $EA80: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EA83:;
    /* $EA83: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0426); FLAG_NZ(g_cpu.A);
label_EA86:;
    /* $EA86: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA89:;
    /* $EA89: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0427); FLAG_NZ(g_cpu.A);
label_EA8C:;
    /* $EA8C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA8F:;
    /* $EA8F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0428); FLAG_NZ(g_cpu.A);
label_EA92:;
    /* $EA92: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA95:;
    /* $EA95: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_EA98:;
    /* $EA98: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EA9B:;
    /* $EA9B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042A); FLAG_NZ(g_cpu.A);
label_EA9E:;
    /* $EA9E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EAE5; }
label_EAA0:;
    /* $EAA0: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EAA3:;
    /* $EAA3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042B); FLAG_NZ(g_cpu.A);
label_EAA6:;
    /* $EAA6: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EAA9:;
    /* $EAA9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042C); FLAG_NZ(g_cpu.A);
label_EAAC:;
    /* $EAAC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EAAF:;
    /* $EAAF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042D); FLAG_NZ(g_cpu.A);
label_EAB2:;
    /* $EAB2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EAB5:;
    /* $EAB5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042E); FLAG_NZ(g_cpu.A);
label_EAB8:;
    /* $EAB8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EABB:;
    /* $EABB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042F); FLAG_NZ(g_cpu.A);
label_EABE:;
    /* $EABE: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EAC1:;
    /* $EAC1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0430); FLAG_NZ(g_cpu.A);
label_EAC4:;
    /* $EAC4: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EAC7:;
    /* $EAC7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_EACA:;
    /* $EACA: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EACD:;
    /* $EACD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0432); FLAG_NZ(g_cpu.A);
label_EAD0:;
    /* $EAD0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EAD3:;
    /* $EAD3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0433); FLAG_NZ(g_cpu.A);
label_EAD6:;
    /* $EAD6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EAD9:;
    /* $EAD9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0434); FLAG_NZ(g_cpu.A);
label_EADC:;
    /* $EADC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EADF:;
    /* $EADF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0435); FLAG_NZ(g_cpu.A);
label_EAE2:;
    /* $EAE2: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EAE5:;
    /* $EAE5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0336); FLAG_NZ(g_cpu.A);
label_EAE8:;
    /* $EAE8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_EB28; }
label_EAEA:;
    /* $EAEA: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EAED:;
    /* $EAED: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0337); FLAG_NZ(g_cpu.A);
label_EAF0:;
    /* $EAF0: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EAF3:;
    /* $EAF3: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0338); FLAG_NZ(g_cpu.X);
label_EAF6:;
    /* $EAF6: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EAF9:;
    /* $EAF9: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EAFA:;
    /* $EAFA: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EAFD:;
    /* $EAFD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0339); FLAG_NZ(g_cpu.A);
label_EB00:;
    /* $EB00: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB03:;
    /* $EB03: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x033A); FLAG_NZ(g_cpu.A);
label_EB06:;
    /* $EB06: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB09:;
    /* $EB09: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EB0A:;
    /* $EB0A: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EB0D:;
    /* $EB0D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EB0E:;
    /* $EB0E: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EB11:;
    /* $EB11: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x033B); FLAG_NZ(g_cpu.A);
label_EB14:;
    /* $EB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EB28; }
label_EB16:;
    /* $EB16: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB19:;
    /* $EB19: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x033C); FLAG_NZ(g_cpu.A);
label_EB1C:;
    /* $EB1C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB1F:;
    /* $EB1F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x033D); FLAG_NZ(g_cpu.A);
label_EB22:;
    /* $EB22: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EB25:;
    /* $EB25: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EB28:;
    /* $EB28: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x033E); FLAG_NZ(g_cpu.A);
label_EB2B:;
    /* $EB2B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EB6B; }
label_EB2D:;
    /* $EB2D: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB30:;
    /* $EB30: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x033F); FLAG_NZ(g_cpu.A);
label_EB33:;
    /* $EB33: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB36:;
    /* $EB36: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0340); FLAG_NZ(g_cpu.X);
label_EB39:;
    /* $EB39: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EB3C:;
    /* $EB3C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EB3D:;
    /* $EB3D: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EB40:;
    /* $EB40: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0341); FLAG_NZ(g_cpu.A);
label_EB43:;
    /* $EB43: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB46:;
    /* $EB46: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0342); FLAG_NZ(g_cpu.A);
label_EB49:;
    /* $EB49: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB4C:;
    /* $EB4C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EB4D:;
    /* $EB4D: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EB50:;
    /* $EB50: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EB51:;
    /* $EB51: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EB54:;
    /* $EB54: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0343); FLAG_NZ(g_cpu.A);
label_EB57:;
    /* $EB57: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EB6B; }
label_EB59:;
    /* $EB59: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB5C:;
    /* $EB5C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0344); FLAG_NZ(g_cpu.A);
label_EB5F:;
    /* $EB5F: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB62:;
    /* $EB62: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0345); FLAG_NZ(g_cpu.A);
label_EB65:;
    /* $EB65: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EB68:;
    /* $EB68: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EB6B:;
    /* $EB6B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0346); FLAG_NZ(g_cpu.A);
label_EB6E:;
    /* $EB6E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EBAE; }
label_EB70:;
    /* $EB70: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB73:;
    /* $EB73: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0347); FLAG_NZ(g_cpu.A);
label_EB76:;
    /* $EB76: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB79:;
    /* $EB79: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0348); FLAG_NZ(g_cpu.X);
label_EB7C:;
    /* $EB7C: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EB7F:;
    /* $EB7F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EB80:;
    /* $EB80: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EB83:;
    /* $EB83: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0349); FLAG_NZ(g_cpu.A);
label_EB86:;
    /* $EB86: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB89:;
    /* $EB89: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x034A); FLAG_NZ(g_cpu.A);
label_EB8C:;
    /* $EB8C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB8F:;
    /* $EB8F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EB90:;
    /* $EB90: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EB93:;
    /* $EB93: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EB94:;
    /* $EB94: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EB97:;
    /* $EB97: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x034B); FLAG_NZ(g_cpu.A);
label_EB9A:;
    /* $EB9A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EBAE; }
label_EB9C:;
    /* $EB9C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EB9F:;
    /* $EB9F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x034C); FLAG_NZ(g_cpu.A);
label_EBA2:;
    /* $EBA2: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EBA5:;
    /* $EBA5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x034D); FLAG_NZ(g_cpu.A);
label_EBA8:;
    /* $EBA8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EBAB:;
    /* $EBAB: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EBAE:;
    /* $EBAE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x034E); FLAG_NZ(g_cpu.A);
label_EBB1:;
    /* $EBB1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EBF1; }
label_EBB3:;
    /* $EBB3: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EBB6:;
    /* $EBB6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x034F); FLAG_NZ(g_cpu.A);
label_EBB9:;
    /* $EBB9: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EBBC:;
    /* $EBBC: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0350); FLAG_NZ(g_cpu.X);
label_EBBF:;
    /* $EBBF: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EBC2:;
    /* $EBC2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EBC3:;
    /* $EBC3: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EBC6:;
    /* $EBC6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0351); FLAG_NZ(g_cpu.A);
label_EBC9:;
    /* $EBC9: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EBCC:;
    /* $EBCC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0352); FLAG_NZ(g_cpu.A);
label_EBCF:;
    /* $EBCF: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EBD2:;
    /* $EBD2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EBD3:;
    /* $EBD3: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EBD6:;
    /* $EBD6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EBD7:;
    /* $EBD7: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EBDA:;
    /* $EBDA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0353); FLAG_NZ(g_cpu.A);
label_EBDD:;
    /* $EBDD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EBF1; }
label_EBDF:;
    /* $EBDF: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EBE2:;
    /* $EBE2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0354); FLAG_NZ(g_cpu.A);
label_EBE5:;
    /* $EBE5: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EBE8:;
    /* $EBE8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0355); FLAG_NZ(g_cpu.A);
label_EBEB:;
    /* $EBEB: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EBEE:;
    /* $EBEE: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EBF1:;
    /* $EBF1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0356); FLAG_NZ(g_cpu.A);
label_EBF4:;
    /* $EBF4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_EC34; }
label_EBF6:;
    /* $EBF6: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EBF9:;
    /* $EBF9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0357); FLAG_NZ(g_cpu.A);
label_EBFC:;
    /* $EBFC: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EBFF:;
    /* $EBFF: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0358); FLAG_NZ(g_cpu.X);
label_EC02:;
    /* $EC02: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EC05:;
    /* $EC05: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EC06:;
    /* $EC06: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EC09:;
    /* $EC09: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0359); FLAG_NZ(g_cpu.A);
label_EC0C:;
    /* $EC0C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC0F:;
    /* $EC0F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x035A); FLAG_NZ(g_cpu.A);
label_EC12:;
    /* $EC12: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC15:;
    /* $EC15: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EC16:;
    /* $EC16: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EC19:;
    /* $EC19: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EC1A:;
    /* $EC1A: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EC1D:;
    /* $EC1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x035B); FLAG_NZ(g_cpu.A);
label_EC20:;
    /* $EC20: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EC34; }
label_EC22:;
    /* $EC22: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC25:;
    /* $EC25: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x035C); FLAG_NZ(g_cpu.A);
label_EC28:;
    /* $EC28: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC2B:;
    /* $EC2B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x035D); FLAG_NZ(g_cpu.A);
label_EC2E:;
    /* $EC2E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EC31:;
    /* $EC31: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EC34:;
    /* $EC34: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x035E); FLAG_NZ(g_cpu.A);
label_EC37:;
    /* $EC37: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EC77; }
label_EC39:;
    /* $EC39: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC3C:;
    /* $EC3C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x035F); FLAG_NZ(g_cpu.A);
label_EC3F:;
    /* $EC3F: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC42:;
    /* $EC42: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0360); FLAG_NZ(g_cpu.X);
label_EC45:;
    /* $EC45: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EC48:;
    /* $EC48: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EC49:;
    /* $EC49: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EC4C:;
    /* $EC4C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0361); FLAG_NZ(g_cpu.A);
label_EC4F:;
    /* $EC4F: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC52:;
    /* $EC52: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0362); FLAG_NZ(g_cpu.A);
label_EC55:;
    /* $EC55: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC58:;
    /* $EC58: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EC59:;
    /* $EC59: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EC5C:;
    /* $EC5C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EC5D:;
    /* $EC5D: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EC60:;
    /* $EC60: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0363); FLAG_NZ(g_cpu.A);
label_EC63:;
    /* $EC63: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EC77; }
label_EC65:;
    /* $EC65: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC68:;
    /* $EC68: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0364); FLAG_NZ(g_cpu.A);
label_EC6B:;
    /* $EC6B: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC6E:;
    /* $EC6E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0365); FLAG_NZ(g_cpu.A);
label_EC71:;
    /* $EC71: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EC74:;
    /* $EC74: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EC77:;
    /* $EC77: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0366); FLAG_NZ(g_cpu.A);
label_EC7A:;
    /* $EC7A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ECBA; }
label_EC7C:;
    /* $EC7C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC7F:;
    /* $EC7F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0367); FLAG_NZ(g_cpu.A);
label_EC82:;
    /* $EC82: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC85:;
    /* $EC85: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0368); FLAG_NZ(g_cpu.X);
label_EC88:;
    /* $EC88: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EC8B:;
    /* $EC8B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EC8C:;
    /* $EC8C: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EC8F:;
    /* $EC8F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0369); FLAG_NZ(g_cpu.A);
label_EC92:;
    /* $EC92: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC95:;
    /* $EC95: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x036A); FLAG_NZ(g_cpu.A);
label_EC98:;
    /* $EC98: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EC9B:;
    /* $EC9B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EC9C:;
    /* $EC9C: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_EC9F:;
    /* $EC9F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ECA0:;
    /* $ECA0: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_ECA3:;
    /* $ECA3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x036B); FLAG_NZ(g_cpu.A);
label_ECA6:;
    /* $ECA6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ECBA; }
label_ECA8:;
    /* $ECA8: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ECAB:;
    /* $ECAB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x036C); FLAG_NZ(g_cpu.A);
label_ECAE:;
    /* $ECAE: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ECB1:;
    /* $ECB1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x036D); FLAG_NZ(g_cpu.A);
label_ECB4:;
    /* $ECB4: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ECB7:;
    /* $ECB7: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ECBA:;
    /* $ECBA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x036E); FLAG_NZ(g_cpu.A);
label_ECBD:;
    /* $ECBD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ECFD; }
label_ECBF:;
    /* $ECBF: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ECC2:;
    /* $ECC2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x036F); FLAG_NZ(g_cpu.A);
label_ECC5:;
    /* $ECC5: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ECC8:;
    /* $ECC8: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0370); FLAG_NZ(g_cpu.X);
label_ECCB:;
    /* $ECCB: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_ECCE:;
    /* $ECCE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ECCF:;
    /* $ECCF: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_ECD2:;
    /* $ECD2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0371); FLAG_NZ(g_cpu.A);
label_ECD5:;
    /* $ECD5: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ECD8:;
    /* $ECD8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0372); FLAG_NZ(g_cpu.A);
label_ECDB:;
    /* $ECDB: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ECDE:;
    /* $ECDE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ECDF:;
    /* $ECDF: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_ECE2:;
    /* $ECE2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ECE3:;
    /* $ECE3: 8E */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.X);
label_ECE6:;
    /* $ECE6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0373); FLAG_NZ(g_cpu.A);
label_ECE9:;
    /* $ECE9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ECFD; }
label_ECEB:;
    /* $ECEB: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ECEE:;
    /* $ECEE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0374); FLAG_NZ(g_cpu.A);
label_ECF1:;
    /* $ECF1: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ECF4:;
    /* $ECF4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0375); FLAG_NZ(g_cpu.A);
label_ECF7:;
    /* $ECF7: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ECFA:;
    /* $ECFA: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ECFD:;
    /* $ECFD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05FA); FLAG_NZ(g_cpu.A);
label_ED00:;
    /* $ED00: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ED2F; }
label_ED02:;
    /* $ED02: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ED05:;
    /* $ED05: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05FB); FLAG_NZ(g_cpu.A);
label_ED08:;
    /* $ED08: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ED0B:;
    /* $ED0B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05FC); FLAG_NZ(g_cpu.A);
label_ED0E:;
    /* $ED0E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED11:;
    /* $ED11: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05FD); FLAG_NZ(g_cpu.A);
label_ED14:;
    /* $ED14: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED17:;
    /* $ED17: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05FE); FLAG_NZ(g_cpu.A);
label_ED1A:;
    /* $ED1A: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED1D:;
    /* $ED1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05FF); FLAG_NZ(g_cpu.A);
label_ED20:;
    /* $ED20: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED23:;
    /* $ED23: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0600); FLAG_NZ(g_cpu.A);
label_ED26:;
    /* $ED26: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED29:;
    /* $ED29: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0601); FLAG_NZ(g_cpu.A);
label_ED2C:;
    /* $ED2C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED2F:;
    /* $ED2F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0602); FLAG_NZ(g_cpu.A);
label_ED32:;
    /* $ED32: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ED61; }
label_ED34:;
    /* $ED34: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ED37:;
    /* $ED37: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0603); FLAG_NZ(g_cpu.A);
label_ED3A:;
    /* $ED3A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ED3D:;
    /* $ED3D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0604); FLAG_NZ(g_cpu.A);
label_ED40:;
    /* $ED40: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED43:;
    /* $ED43: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0605); FLAG_NZ(g_cpu.A);
label_ED46:;
    /* $ED46: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED49:;
    /* $ED49: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0606); FLAG_NZ(g_cpu.A);
label_ED4C:;
    /* $ED4C: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED4F:;
    /* $ED4F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0607); FLAG_NZ(g_cpu.A);
label_ED52:;
    /* $ED52: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED55:;
    /* $ED55: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0608); FLAG_NZ(g_cpu.A);
label_ED58:;
    /* $ED58: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED5B:;
    /* $ED5B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0609); FLAG_NZ(g_cpu.A);
label_ED5E:;
    /* $ED5E: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED61:;
    /* $ED61: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02C6); FLAG_NZ(g_cpu.A);
label_ED64:;
    /* $ED64: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ED7A; }
label_ED66:;
    /* $ED66: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ED69:;
    /* $ED69: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9D; FLAG_NZ(g_cpu.A);
label_ED6B:;
    /* $ED6B: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ED6E:;
    /* $ED6E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02C7); FLAG_NZ(g_cpu.A);
label_ED71:;
    /* $ED71: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED74:;
    /* $ED74: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02C8); FLAG_NZ(g_cpu.A);
label_ED77:;
    /* $ED77: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED7A:;
    /* $ED7A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02C9); FLAG_NZ(g_cpu.A);
label_ED7D:;
    /* $ED7D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ED96; }
label_ED7F:;
    /* $ED7F: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ED82:;
    /* $ED82: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE2; FLAG_NZ(g_cpu.A);
label_ED84:;
    /* $ED84: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ED87:;
    /* $ED87: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x0D; FLAG_NZ(g_cpu.X);
label_ED89:;
    /* $ED89: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x02CA); FLAG_NZ(g_cpu.Y);
label_ED8C:;
    /* $ED8C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xEFB7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ED8F:;
    /* $ED8F: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_ED92:;
    /* $ED92: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ED93:;
    /* $ED93: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_ED94:;
    /* $ED94: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ED8C;
    }
label_ED96:;
    /* $ED96: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02CB); FLAG_NZ(g_cpu.A);
label_ED99:;
    /* $ED99: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EDD0; }
label_ED9B:;
    /* $ED9B: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_ED9E:;
    /* $ED9E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_EDA0:;
    /* $EDA0: 20 */ maybe_trigger_vblank(6); func_EDBD();
label_EDA3:;
    /* $EDA3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02CC); FLAG_NZ(g_cpu.A);
label_EDA6:;
    /* $EDA6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_EDA7:;
    /* $EDA7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_EDA9:;
    /* $EDA9: 8D */ maybe_trigger_vblank(4); nes_write(0x02CC, g_cpu.A);
label_EDAC:;
    /* $EDAC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_EDB1; }
label_EDAE:;
    /* $EDAE: EE */ maybe_trigger_vblank(6); { uint16_t a=0x02CB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EDB1:;
    /* $EDB1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02CB); FLAG_NZ(g_cpu.A);
label_EDB4:;
    /* $EDB4: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EDB7:;
    /* $EDB7: 20 */ maybe_trigger_vblank(6); func_EDBD();
label_EDBA:;
    /* $EDBA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_EDD0(); return;
label_EDD0:;
    /* $EDD0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02E4); FLAG_NZ(g_cpu.A);
label_EDD3:;
    /* $EDD3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EDE9; }
label_EDD5:;
    /* $EDD5: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EDD8:;
    /* $EDD8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x73; FLAG_NZ(g_cpu.A);
label_EDDA:;
    /* $EDDA: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EDDD:;
    /* $EDDD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02E5); FLAG_NZ(g_cpu.A);
label_EDE0:;
    /* $EDE0: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EDE3:;
    /* $EDE3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02E6); FLAG_NZ(g_cpu.A);
label_EDE6:;
    /* $EDE6: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EDE9:;
    /* $EDE9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02E7); FLAG_NZ(g_cpu.A);
label_EDEC:;
    /* $EDEC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_EE14; }
label_EDEE:;
    /* $EDEE: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EDF1:;
    /* $EDF1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x92; FLAG_NZ(g_cpu.A);
label_EDF3:;
    /* $EDF3: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EDF6:;
    /* $EDF6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02E8); FLAG_NZ(g_cpu.A);
label_EDF9:;
    /* $EDF9: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EDFC:;
    /* $EDFC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02E9); FLAG_NZ(g_cpu.A);
label_EDFF:;
    /* $EDFF: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EE02:;
    /* $EE02: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02EA); FLAG_NZ(g_cpu.A);
label_EE05:;
    /* $EE05: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EE08:;
    /* $EE08: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02EB); FLAG_NZ(g_cpu.A);
label_EE0B:;
    /* $EE0B: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EE0E:;
    /* $EE0E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02EC); FLAG_NZ(g_cpu.A);
label_EE11:;
    /* $EE11: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_EE14:;
    /* $EE14: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_EE17:;
    /* $EE17: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_EE19:;
    /* $EE19: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EE1C:;
    /* $EE1C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EE1E:;
    /* $EE1E: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EE21:;
    /* $EE21: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EE24:;
    /* $EE24: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_EE27:;
    /* $EE27: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EE29:;
    /* $EE29: 85 */ maybe_trigger_vblank(3); nes_write(0xC6, g_cpu.A);
label_EE2B:;
    /* $EE2B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F4DC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F4DC");
#endif
label_F4DC:;
    /* $F4DC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E32E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E32E");
#endif
label_E32E:;
    /* $E32E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DB75(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB75");
#endif
label_DB75:;
    /* $DB75: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xA902 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_DB78:;
    /* $DB78: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xDB07); return; }
label_DB7A:;
    /* $DB7A: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xA902); FLAG_NZ(g_cpu.Y);
label_DB7D:;
    /* $DB7D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x8D; FLAG_NZ(g_cpu.Y);
label_DB7F:;
    /* $DB7F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xA902); FLAG_NZ(g_cpu.X);
label_DB82:;
    /* $DB82: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DB83:;
    /* $DB83: 8D */ maybe_trigger_vblank(4); nes_write(0x02AD, g_cpu.A);
label_DB86:;
    /* $DB86: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB8; FLAG_NZ(g_cpu.A);
label_DB88:;
    /* $DB88: 8D */ maybe_trigger_vblank(4); nes_write(0x02AF, g_cpu.A);
label_DB8B:;
    /* $DB8B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_DB8D:;
    /* $DB8D: 8D */ maybe_trigger_vblank(4); nes_write(0x0547, g_cpu.A);
label_DB90:;
    /* $DB90: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DB92:;
    /* $DB92: 8D */ maybe_trigger_vblank(4); nes_write(0x0545, g_cpu.A);
label_DB95:;
    /* $DB95: 8D */ maybe_trigger_vblank(4); nes_write(0x0546, g_cpu.A);
label_DB98:;
    /* $DB98: 20 */ maybe_trigger_vblank(6); func_DCC1();
label_DB9B:;
    /* $DB9B: 20 */ maybe_trigger_vblank(6); func_DD26();
label_DB9E:;
    /* $DB9E: 20 */ maybe_trigger_vblank(6); func_DD92();
label_DBA1:;
    /* $DBA1: 20 */ maybe_trigger_vblank(6); func_DDF9();
label_DBA4:;
    /* $DBA4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DB07(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB07");
#endif
label_DB07:;
    /* $DB07: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DB08:;
    /* $DB08: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_DB09:;
    /* $DB09: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02D6); FLAG_NZ(g_cpu.A);
label_DB0C:;
    /* $DB0C: 9D */ maybe_trigger_vblank(5); nes_write((0x0280 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DB0F:;
    /* $DB0F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x051A); FLAG_NZ(g_cpu.A);
label_DB12:;
    /* $DB12: 9D */ maybe_trigger_vblank(5); nes_write((0x0298 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DB15:;
    /* $DB15: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x051B); FLAG_NZ(g_cpu.A);
label_DB18:;
    /* $DB18: 9D */ maybe_trigger_vblank(5); nes_write((0x02B0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DB1B:;
    /* $DB1B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_DB1D:;
    /* $DB1D: 9D */ maybe_trigger_vblank(5); nes_write((0x02D7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DB20:;
    /* $DB20: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CFB1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CFB1");
#endif
label_CFB1:;
    /* $CFB1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CFB3:;
    /* $CFB3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xAF); FLAG_NZ(g_cpu.A);
label_CFB5:;
    /* $CFB5: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_CFB8:;
    /* $CFB8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CFBA:;
    /* $CFBA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_CFBC:;
    /* $CFBC: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_CFBD:;
    /* $CFBD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_CFBF:;
    /* $CFBF: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xBD); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_CFC1:;
    /* $CFC1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CFE0; }
label_CFC3:;
    /* $CFC3: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_CFC8; }
label_CFC5:;
    /* $CFC5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D050(); return;
label_CFC8:;
    /* $CFC8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_CFC9:;
    /* $CFC9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_CFCA:;
    /* $CFCA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_CFCB:;
    /* $CFCB: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_CFCC:;
    /* $CFCC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CFCE:;
    /* $CFCE: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_CFCF:;
    /* $CFCF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0221 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CFD2:;
    /* $CFD2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_CFD4:;
    /* $CFD4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CFD6; }
label_CFD6:;
    /* $CFD6: 85 */ maybe_trigger_vblank(3); nes_write(0xC0, g_cpu.A);
label_CFD8:;
    /* $CFD8: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_CFD9:;
    /* $CFD9: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_CFDA:;
    /* $CFDA: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_CFDB:;
    /* $CFDB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CFE0(); return;
label_CFE0:;
    /* $CFE0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_CFE1:;
    /* $CFE1: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CFE3:;
    /* $CFE3: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xBD); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_CFE5:;
    /* $CFE5: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_CFEC; }
label_CFE7:;
    /* $CFE7: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_CFE8:;
    /* $CFE8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_CFE9:;
    /* $CFE9: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC0); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_CFEB:;
    /* $CFEB: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_CFEC:;
    /* $CFEC: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_CFEF:;
    /* $CFEF: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CFF1:;
    /* $CFF1: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_CFF2:;
    /* $CFF2: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_D01D; }
label_CFF4:;
    /* $CFF4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_CFF6:;
    /* $CFF6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x18; FLAG_NZ(g_cpu.A);
label_CFF8:;
    /* $CFF8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xCFDE); return; }
label_CFFA:;
    /* $CFFA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xBC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CFFC:;
    /* $CFFC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xCFDE); return; }
label_CFFE:;
    /* $CFFE: 86 */ maybe_trigger_vblank(3); nes_write(0xBC, g_cpu.X);
label_D000:;
    /* $D000: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_D001:;
    /* $D001: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xBC); FLAG_NZ(g_cpu.A);
label_D003:;
    /* $D003: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xB7) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D005:;
    /* $D005: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D006:;
    /* $D006: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D007:;
    /* $D007: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBE); FLAG_NZ(g_cpu.A);
label_D009:;
    /* $D009: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xBA); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_D00B:;
    /* $D00B: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xB7) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D00D:;
    /* $D00D: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D00E:;
    /* $D00E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D010:;
    /* $D010: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xBB); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_D012:;
    /* $D012: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xB7) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D014:;
    /* $D014: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D015:;
    /* $D015: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_D04F; }
label_D017:;
    /* $D017: 20 */ maybe_trigger_vblank(6); func_D050();
label_D01A:;
    /* $D01A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D04F(); return;
label_D01D:;
    /* $D01D: 20 */ maybe_trigger_vblank(6); func_D050();
label_D020:;
    /* $D020: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_D022:;
    /* $D022: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x18; FLAG_NZ(g_cpu.A);
label_D024:;
    /* $D024: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D02A; }
label_D026:;
    /* $D026: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xBC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D028:;
    /* $D028: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D04F; }
label_D02A:;
    /* $D02A: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x2002); FLAG_NZ(g_cpu.X);
label_D02D:;
    /* $D02D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D02F:;
    /* $D02F: 84 */ maybe_trigger_vblank(3); nes_write(0xBD, g_cpu.Y);
label_D031:;
    /* $D031: 84 */ maybe_trigger_vblank(3); nes_write(0xBE, g_cpu.Y);
label_D033:;
    /* $D033: 84 */ maybe_trigger_vblank(3); nes_write(0xBF, g_cpu.Y);
label_D035:;
    /* $D035: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D037:;
    /* $D037: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_D039:;
    /* $D039: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D03E; }
label_D03B:;
    /* $D03B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CF8A(); return;
label_D03E:;
    /* $D03E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D040:;
    /* $D040: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_D042:;
    /* $D042: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D044:;
    /* $D044: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_D046:;
    /* $D046: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_D048:;
    /* $D048: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_D04A:;
    /* $D04A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_D04C:;
    /* $D04C: 8D */ maybe_trigger_vblank(4); nes_write(0x0200, g_cpu.A);
label_D04F:;
    /* $D04F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

