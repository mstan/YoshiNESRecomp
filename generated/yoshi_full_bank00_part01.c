/* yoshi_full_bank00_part01.c — PRG bank 0 function bodies (sub-part 1).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella yoshi_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "yoshi_full_decls.h"

void func_8505_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8505_b0");
#endif
label_8505:;
    /* $8505: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8506:;
    /* $8506: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8508:;
    /* $8508: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8509:;
    /* $8509: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_850B:;
    /* $850B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_850D:;
    /* $850D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_850E:;
    /* $850E: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8510:;
    /* $8510: 20 */ maybe_trigger_vblank(6); func_8521_b0();
label_8513:;
    /* $8513: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A986_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A986_b0");
#endif
label_A986:;
    /* $A986: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x4C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A988:;
    /* $A988: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xA9); FLAG_NZ(g_cpu.X);
label_A98A:;
    /* $A98A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A98D:;
    /* $A98D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A98F:;
    /* $A98F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A99B; }
label_A991:;
    /* $A991: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A993:;
    /* $A993: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A996:;
    /* $A996: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A998:;
    /* $A998: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A0_b0(); return;
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A9A0:;
    /* $A9A0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9A1:;
    /* $A9A1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9A3:;
    /* $A9A3: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A9A6:;
    /* $A9A6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0444); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9AB:;
    /* $A9AB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9AD:;
    /* $A9AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9B1:;
    /* $A9B1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B2:;
    /* $A9B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9B4:;
    /* $A9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8506_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8506_b0");
#endif
label_8506:;
    /* $8506: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8508:;
    /* $8508: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8509:;
    /* $8509: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_850B:;
    /* $850B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_850D:;
    /* $850D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_850E:;
    /* $850E: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8510:;
    /* $8510: 20 */ maybe_trigger_vblank(6); func_8521_b0();
label_8513:;
    /* $8513: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8504_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8504_b0");
#endif
label_8504:;
    /* $8504: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xC8 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8506:;
    /* $8506: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8508:;
    /* $8508: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8509:;
    /* $8509: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_850B:;
    /* $850B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_850D:;
    /* $850D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_850E:;
    /* $850E: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8510:;
    /* $8510: 20 */ maybe_trigger_vblank(6); func_8521_b0();
label_8513:;
    /* $8513: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_858E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_858E_b0");
#endif
label_858E:;
    /* $858E: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x05 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8590:;
    /* $8590: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8592:;
    /* $8592: 8D */ maybe_trigger_vblank(4); nes_write(0x05B2, g_cpu.A);
label_8595:;
    /* $8595: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8597:;
    /* $8597: 8D */ maybe_trigger_vblank(4); nes_write(0x05B3, g_cpu.A);
label_859A:;
    /* $859A: 20 */ maybe_trigger_vblank(6); func_BBCB_b0();
label_859D:;
    /* $859D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8520_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8520_b0");
#endif
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85C2_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85C2_b0");
#endif
label_85C2:;
    /* $85C2: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85C4:;
    /* $85C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85C6:;
    /* $85C6: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A976_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A976_b0");
#endif
label_A976:;
    /* $A976: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x8D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A978:;
    /* $A978: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4C04 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A97B:;
    /* $A97B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xA9); FLAG_NZ(g_cpu.X);
label_A97D:;
    /* $A97D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A97F:;
    /* $A97F: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A982:;
    /* $A982: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A984:;
    /* $A984: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A987:;
    /* $A987: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A6_b0(); return;
}

void func_8590_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8590_b0");
#endif
label_8590:;
    /* $8590: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8592:;
    /* $8592: 8D */ maybe_trigger_vblank(4); nes_write(0x05B2, g_cpu.A);
label_8595:;
    /* $8595: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8597:;
    /* $8597: 8D */ maybe_trigger_vblank(4); nes_write(0x05B3, g_cpu.A);
label_859A:;
    /* $859A: 20 */ maybe_trigger_vblank(6); func_BBCB_b0();
label_859D:;
    /* $859D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8560_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8560_b0");
#endif
label_8560:;
    /* $8560: 20 */ maybe_trigger_vblank(6); func_EFD1();
label_8563:;
    /* $8563: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_850E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_850E_b0");
#endif
label_850E:;
    /* $850E: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8510:;
    /* $8510: 20 */ maybe_trigger_vblank(6); func_8521_b0();
label_8513:;
    /* $8513: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_988D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_988D_b0");
#endif
label_988D:;
    /* $988D: 9D */ maybe_trigger_vblank(5); nes_write((0xB785 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9890:;
    /* $9890: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x98; FLAG_NZ(g_cpu.A);
label_9892:;
    /* $9892: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_9894:;
    /* $9894: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_9897:;
    /* $9897: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8510_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8510_b0");
#endif
label_8510:;
    /* $8510: 20 */ maybe_trigger_vblank(6); func_8521_b0();
label_8513:;
    /* $8513: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9A3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9A3_b0");
#endif
label_A9A3:;
    /* $A9A3: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A9A6:;
    /* $A9A6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0444); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9AB:;
    /* $A9AB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9AD:;
    /* $A9AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9B1:;
    /* $A9B1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B2:;
    /* $A9B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9B4:;
    /* $A9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8501_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8501_b0");
#endif
label_8501:;
    /* $8501: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xC8 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8503:;
    /* $8503: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8505:;
    /* $8505: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8506:;
    /* $8506: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8508:;
    /* $8508: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8509:;
    /* $8509: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_850B:;
    /* $850B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_850D:;
    /* $850D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_850E:;
    /* $850E: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8510:;
    /* $8510: 20 */ maybe_trigger_vblank(6); func_8521_b0();
label_8513:;
    /* $8513: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9C7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9C7_b0");
#endif
label_A9C7:;
    /* $A9C7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_A9C9:;
    /* $A9C9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x46AD, -1);
label_A9CC:;
    /* $A9CC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9CE:;
    /* $A9CE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xAD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D0:;
    /* $A9D0: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
}

void func_A9C9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9C9_b0");
#endif
label_A9C9:;
    /* $A9C9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x46AD, -1);
label_A9CC:;
    /* $A9CC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9CE:;
    /* $A9CE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xAD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D0:;
    /* $A9D0: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
}

void func_A9B4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B4_b0");
#endif
label_A9B4:;
    /* $A9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8507_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8507_b0");
#endif
label_8507:;
    /* $8507: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x4A + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8509:;
    /* $8509: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_850B:;
    /* $850B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_850D:;
    /* $850D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_850E:;
    /* $850E: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8510:;
    /* $8510: 20 */ maybe_trigger_vblank(6); func_8521_b0();
label_8513:;
    /* $8513: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8485_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8485_b0");
#endif
label_8485:;
    /* $8485: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8487:;
    /* $8487: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xEF) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8489:;
    /* $8489: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB4); FLAG_NZ(g_cpu.A);
label_848B:;
    /* $848B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_848C:;
    /* $848C: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0552); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_848F:;
    /* $848F: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_8491:;
    /* $8491: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0567); FLAG_NZ(g_cpu.A);
label_8494:;
    /* $8494: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8499; }
label_8496:;
    /* $8496: 20 */ maybe_trigger_vblank(6); func_920F_b0();
label_8499:;
    /* $8499: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_849B:;
    /* $849B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_849C:;
    /* $849C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x40 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x40); g_cpu.A=r&0xFF; }
label_849E:;
    /* $849E: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_84A0:;
    /* $84A0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84A4; }
label_84A2:;
    /* $84A2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84A4:;
    /* $84A4: 20 */ maybe_trigger_vblank(6); func_84AF_b0();
label_84A7:;
    /* $84A7: 20 */ maybe_trigger_vblank(6); func_84AF_b0();
label_84AA:;
    /* $84AA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84AC:;
    /* $84AC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x8472); return; }
label_84AE:;
    /* $84AE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B020_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B020_b0");
#endif
label_B020:;
    /* $B020: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x20); FLAG_NZ(g_cpu.A);
label_B022:;
    /* $B022: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address(0xB01B); return; }
label_B024:;
    /* $B024: 20 */ maybe_trigger_vblank(6); func_B4D0_b0();
label_B027:;
    /* $B027: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B048_b0(); return;
}

void func_8577_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8577_b0");
#endif
label_8577:;
    /* $8577: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_8579:;
    /* $8579: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x8D); FLAG_NZ(g_cpu.A);
label_857B:;
    /* $857B: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_857D:;
    /* $857D: 20 */ maybe_trigger_vblank(6); func_BBCB_b0();
label_8580:;
    /* $8580: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_858B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_858B_b0");
#endif
label_858B:;
    /* $858B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_858D:;
    /* $858D: 8D */ maybe_trigger_vblank(4); nes_write(0x05B4, g_cpu.A);
label_8590:;
    /* $8590: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8592:;
    /* $8592: 8D */ maybe_trigger_vblank(4); nes_write(0x05B2, g_cpu.A);
label_8595:;
    /* $8595: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8597:;
    /* $8597: 8D */ maybe_trigger_vblank(4); nes_write(0x05B3, g_cpu.A);
label_859A:;
    /* $859A: 20 */ maybe_trigger_vblank(6); func_BBCB_b0();
label_859D:;
    /* $859D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8595_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8595_b0");
#endif
label_8595:;
    /* $8595: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8597:;
    /* $8597: 8D */ maybe_trigger_vblank(4); nes_write(0x05B3, g_cpu.A);
label_859A:;
    /* $859A: 20 */ maybe_trigger_vblank(6); func_BBCB_b0();
label_859D:;
    /* $859D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9B7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B7_b0");
#endif
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8596_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8596_b0");
#endif
label_8596:;
    /* $8596: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x8D); FLAG_NZ(g_cpu.A);
label_8598:;
    /* $8598: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_859A:;
    /* $859A: 20 */ maybe_trigger_vblank(6); func_BBCB_b0();
label_859D:;
    /* $859D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A910_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A910_b0");
#endif
label_A910:;
    /* $A910: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A911:;
    /* $A911: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0436; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A914:;
    /* $A914: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8597_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8597_b0");
#endif
label_8597:;
    /* $8597: 8D */ maybe_trigger_vblank(4); nes_write(0x05B3, g_cpu.A);
label_859A:;
    /* $859A: 20 */ maybe_trigger_vblank(6); func_BBCB_b0();
label_859D:;
    /* $859D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9B8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B8_b0");
#endif
label_A9B8:;
    /* $A9B8: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D00_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D00_b0");
#endif
label_8D00:;
    /* $8D00: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_8D02:;
    /* $8D02: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D09; }
label_8D04:;
    /* $8D04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_8D06:;
    /* $8D06: 9D */ maybe_trigger_vblank(5); nes_write((0x027C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8D09:;
    /* $8D09: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8D0B:;
    /* $8D0B: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_8D0D:;
    /* $8D0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8E; FLAG_NZ(g_cpu.A);
label_8D0F:;
    /* $8D0F: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_8D11:;
    /* $8D11: 20 */ maybe_trigger_vblank(6); func_84AF_b0();
label_8D14:;
    /* $8D14: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_8D16:;
    /* $8D16: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8D18:;
    /* $8D18: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_8D1A:;
    /* $8D1A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8D1B:;
    /* $8D1B: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D1E:;
    /* $8D1E: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D21:;
    /* $8D21: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D24:;
    /* $8D24: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_8D26:;
    /* $8D26: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D28:;
    /* $8D28: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_8D2A:;
    /* $8D2A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D2C:;
    /* $8D2C: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_8D2F:;
    /* $8D2F: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8D32:;
    /* $8D32: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A994_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A994_b0");
#endif
label_A994:;
    /* $A994: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A995:;
    /* $A995: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A997:;
    /* $A997: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x4C + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A999:;
    /* $A999: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA9; FLAG_NZ(g_cpu.Y);
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A9A0:;
    /* $A9A0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9A1:;
    /* $A9A1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9A3:;
    /* $A9A3: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A9A6:;
    /* $A9A6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0444); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9AB:;
    /* $A9AB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9AD:;
    /* $A9AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9B1:;
    /* $A9B1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B2:;
    /* $A9B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9B4:;
    /* $A9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8561_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8561_b0");
#endif
label_8561:;
    /* $8561: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xEF) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8563:;
    /* $8563: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85B5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85B5_b0");
#endif
label_85B5:;
    /* $85B5: 20 */ maybe_trigger_vblank(6); func_8564_b0();
label_85B8:;
    /* $85B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_85BA:;
    /* $85BA: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85BC:;
    /* $85BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85C0:;
    /* $85C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85C2:;
    /* $85C2: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85C4:;
    /* $85C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85C6:;
    /* $85C6: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8529_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8529_b0");
#endif
label_8529:;
    /* $8529: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_852B:;
    /* $852B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_852D:;
    /* $852D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_852F:;
    /* $852F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8538; }
label_8531:;
    /* $8531: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8532:;
    /* $8532: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8533:;
    /* $8533: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8535:;
    /* $8535: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_852D;
label_8538:;
    /* $8538: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_853A:;
    /* $853A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_853B:;
    /* $853B: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_853D:;
    /* $853D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8513_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8513_b0");
#endif
label_8513:;
    /* $8513: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8516_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8516_b0");
#endif
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A997_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A997_b0");
#endif
label_A997:;
    /* $A997: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x4C + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A999:;
    /* $A999: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA9; FLAG_NZ(g_cpu.Y);
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A9A0:;
    /* $A9A0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9A1:;
    /* $A9A1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9A3:;
    /* $A9A3: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A9A6:;
    /* $A9A6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0444); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9AB:;
    /* $A9AB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9AD:;
    /* $A9AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9B1:;
    /* $A9B1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B2:;
    /* $A9B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9B4:;
    /* $A9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8503_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8503_b0");
#endif
label_8503:;
    /* $8503: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8505:;
    /* $8505: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8506:;
    /* $8506: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8508:;
    /* $8508: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8509:;
    /* $8509: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_850B:;
    /* $850B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_850D:;
    /* $850D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_850E:;
    /* $850E: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8510:;
    /* $8510: 20 */ maybe_trigger_vblank(6); func_8521_b0();
label_8513:;
    /* $8513: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A995_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A995_b0");
#endif
label_A995:;
    /* $A995: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A997:;
    /* $A997: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x4C + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A999:;
    /* $A999: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA9; FLAG_NZ(g_cpu.Y);
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A9A0:;
    /* $A9A0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9A1:;
    /* $A9A1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9A3:;
    /* $A9A3: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A9A6:;
    /* $A9A6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0444); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9AB:;
    /* $A9AB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9AD:;
    /* $A9AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9B1:;
    /* $A9B1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B2:;
    /* $A9B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9B4:;
    /* $A9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85C8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85C8_b0");
#endif
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85A8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A8_b0");
#endif
label_85A8:;
    /* $85A8: 20 */ maybe_trigger_vblank(6); func_CDF0();
label_85AB:;
    /* $85AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85AD:;
    /* $85AD: 8D */ maybe_trigger_vblank(4); nes_write(0x027A, g_cpu.A);
label_85B0:;
    /* $85B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D2; }
label_85B5:;
    /* $85B5: 20 */ maybe_trigger_vblank(6); func_8564_b0();
label_85B8:;
    /* $85B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_85BA:;
    /* $85BA: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85BC:;
    /* $85BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85C0:;
    /* $85C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85C2:;
    /* $85C2: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85C4:;
    /* $85C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85C6:;
    /* $85C6: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_85D2:;
    /* $85D2: 20 */ maybe_trigger_vblank(6); func_8581_b0();
label_85D5:;
    /* $85D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_85D7:;
    /* $85D7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x86; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85DD:;
    /* $85DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85DF:;
    /* $85DF: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85E1:;
    /* $85E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8528_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8528_b0");
#endif
label_8528:;
    /* $8528: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_852A:;
    /* $852A: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_852C:;
    /* $852C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC9); FLAG_NZ(g_cpu.A);
label_852E:;
    /* $852E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_852F:;
    /* $852F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8538; }
label_8531:;
    /* $8531: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8532:;
    /* $8532: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8533:;
    /* $8533: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8535:;
    /* $8535: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_852D_b0(); return;
label_8538:;
    /* $8538: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_853A:;
    /* $853A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_853B:;
    /* $853B: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_853D:;
    /* $853D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AAAA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AAAA_b0");
#endif
label_AAAA:;
    /* $AAAA: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAAC:;
    /* $AAAC: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AAAD:;
    /* $AAAD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0438); FLAG_NZ(g_cpu.A);
label_AAB0:;
    /* $AAB0: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAB2:;
    /* $AAB2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AAB3:;
    /* $AAB3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0439); FLAG_NZ(g_cpu.A);
label_AAB6:;
    /* $AAB6: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAB8:;
    /* $AAB8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AAB9:;
    /* $AAB9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043A); FLAG_NZ(g_cpu.A);
label_AABC:;
    /* $AABC: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AABE:;
    /* $AABE: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AABF:;
    /* $AABF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043B); FLAG_NZ(g_cpu.A);
label_AAC2:;
    /* $AAC2: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAC4:;
    /* $AAC4: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AAC5:;
    /* $AAC5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x90); FLAG_NZ(g_cpu.A);
label_AAC7:;
    /* $AAC7: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAC9:;
    /* $AAC9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AACA:;
    /* $AACA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8F); FLAG_NZ(g_cpu.A);
label_AACC:;
    /* $AACC: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AACE:;
    /* $AACE: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AACF:;
    /* $AACF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043C); FLAG_NZ(g_cpu.A);
label_AAD2:;
    /* $AAD2: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAD4:;
    /* $AAD4: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AAD5:;
    /* $AAD5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043D); FLAG_NZ(g_cpu.A);
label_AAD8:;
    /* $AAD8: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AADA:;
    /* $AADA: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AADB:;
    /* $AADB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043E); FLAG_NZ(g_cpu.A);
label_AADE:;
    /* $AADE: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAE0:;
    /* $AAE0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AAE1:;
    /* $AAE1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043F); FLAG_NZ(g_cpu.A);
label_AAE4:;
    /* $AAE4: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAE6:;
    /* $AAE6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9A7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9A7_b0");
#endif
label_A9A7:;
    /* $A9A7: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9A9:;
    /* $A9A9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9AB:;
    /* $A9AB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9AD:;
    /* $A9AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9B1:;
    /* $A9B1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B2:;
    /* $A9B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9B4:;
    /* $A9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_859D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_859D_b0");
#endif
label_859D:;
    /* $859D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8598_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8598_b0");
#endif
label_8598:;
    /* $8598: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_859A:;
    /* $859A: 20 */ maybe_trigger_vblank(6); func_BBCB_b0();
label_859D:;
    /* $859D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8592_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8592_b0");
#endif
label_8592:;
    /* $8592: 8D */ maybe_trigger_vblank(4); nes_write(0x05B2, g_cpu.A);
label_8595:;
    /* $8595: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8597:;
    /* $8597: 8D */ maybe_trigger_vblank(4); nes_write(0x05B3, g_cpu.A);
label_859A:;
    /* $859A: 20 */ maybe_trigger_vblank(6); func_BBCB_b0();
label_859D:;
    /* $859D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9AF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9AF_b0");
#endif
label_A9AF:;
    /* $A9AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9B1:;
    /* $A9B1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B2:;
    /* $A9B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9B4:;
    /* $A9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9B5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B5_b0");
#endif
label_A9B5:;
    /* $A9B5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x04; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A977_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A977_b0");
#endif
label_A977:;
    /* $A977: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A97A:;
    /* $A97A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A6_b0(); return;
}

void func_8D20_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D20_b0");
#endif
label_8D20:;
    /* $8D20: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x6D); FLAG_NZ(g_cpu.A);
label_8D22:;
    /* $8D22: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_8D24:;
    /* $8D24: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_8D26:;
    /* $8D26: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D28:;
    /* $8D28: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_8D2A:;
    /* $8D2A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D2C:;
    /* $8D2C: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_8D2F:;
    /* $8D2F: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8D32:;
    /* $8D32: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A980_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A980_b0");
#endif
label_A980:;
    /* $A980: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A981:;
    /* $A981: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A983:;
    /* $A983: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA983); return;
}

void func_8D32_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D32_b0");
#endif
label_8D32:;
    /* $8D32: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9C8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9C8_b0");
#endif
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8533_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8533_b0");
#endif
label_8533:;
    /* $8533: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8535:;
    /* $8535: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_852D_b0(); return;
}

void func_850A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_850A_b0");
#endif
label_850A:;
    /* $850A: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_850C:;
    /* $850C: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_850D:;
    /* $850D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_850E:;
    /* $850E: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8510:;
    /* $8510: 20 */ maybe_trigger_vblank(6); func_8521_b0();
label_8513:;
    /* $8513: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85EB_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85EB_b0");
#endif
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85F0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85F0_b0");
#endif
label_85F0:;
    /* $85F0: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85F3:;
    /* $85F3: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85F6:;
    /* $85F6: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85F9:;
    /* $85F9: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x00FE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85FC:;
    /* $85FC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85FC); return;
}

void func_A3A9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3A9_b0");
#endif
label_A3A9:;
    /* $A3A9: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xAE + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3AB:;
    /* $A3AB: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xAFB5 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3AE:;
    /* $A3AE: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A3B0:;
    /* $A3B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x91; FLAG_NZ(g_cpu.A);
label_A3B2:;
    /* $A3B2: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_A3B4:;
    /* $A3B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A3B6:;
    /* $A3B6: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_A3B8:;
    /* $A3B8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A3BA:;
    /* $A3BA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3BC:;
    /* $A3BC: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A3BD:;
    /* $A3BD: 85 */ maybe_trigger_vblank(3); nes_write(0x91, g_cpu.A);
label_A3BF:;
    /* $A3BF: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3C1:;
    /* $A3C1: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A3C2:;
    /* $A3C2: 85 */ maybe_trigger_vblank(3); nes_write(0x92, g_cpu.A);
label_A3C4:;
    /* $A3C4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3C6:;
    /* $A3C6: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A3C7:;
    /* $A3C7: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_A3C9:;
    /* $A3C9: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A3CA:;
    /* $A3CA: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A3CC:;
    /* $A3CC: 85 */ maybe_trigger_vblank(3); nes_write(0x93, g_cpu.A);
label_A3CE:;
    /* $A3CE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3D0:;
    /* $A3D0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A3D1:;
    /* $A3D1: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A3D2:;
    /* $A3D2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3D4:;
    /* $A3D4: 85 */ maybe_trigger_vblank(3); nes_write(0x94, g_cpu.A);
label_A3D6:;
    /* $A3D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A3D8:;
    /* $A3D8: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A3DA:;
    /* $A3DA: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A3DB:;
    /* $A3DB: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A3DC:;
    /* $A3DC: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_A3DF:;
    /* $A3DF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A3E0:;
    /* $A3E0: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A3E1:;
    /* $A3E1: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A3E2:;
    /* $A3E2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3FA; }
label_A3E4:;
    /* $A3E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x91; FLAG_NZ(g_cpu.A);
label_A3E6:;
    /* $A3E6: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_A3E8:;
    /* $A3E8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A3EA:;
    /* $A3EA: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_A3EC:;
    /* $A3EC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_A3EE:;
    /* $A3EE: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3EF:;
    /* $A3EF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_A3F1:;
    /* $A3F1: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A3F5; }
label_A3F3:;
    /* $A3F3: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x91; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3F5:;
    /* $A3F5: 85 */ maybe_trigger_vblank(3); nes_write(0x92, g_cpu.A);
label_A3F7:;
    /* $A3F7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_A3DA;
label_A3FA:;
    /* $A3FA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8563_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8563_b0");
#endif
label_8563:;
    /* $8563: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8568_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8568_b0");
#endif
label_8568:;
    /* $8568: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_856A:;
    /* $856A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_856B:;
    /* $856B: 8D */ maybe_trigger_vblank(4); nes_write(0x05B1, g_cpu.A);
label_856E:;
    /* $856E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8570:;
    /* $8570: 8D */ maybe_trigger_vblank(4); nes_write(0x05B4, g_cpu.A);
label_8573:;
    /* $8573: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8575:;
    /* $8575: 8D */ maybe_trigger_vblank(4); nes_write(0x05B2, g_cpu.A);
label_8578:;
    /* $8578: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_857A:;
    /* $857A: 8D */ maybe_trigger_vblank(4); nes_write(0x05B3, g_cpu.A);
label_857D:;
    /* $857D: 20 */ maybe_trigger_vblank(6); func_BBCB_b0();
label_8580:;
    /* $8580: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_856D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_856D_b0");
#endif
label_856D:;
    /* $856D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_856F:;
    /* $856F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x856F); return;
}

void func_8557_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8557_b0");
#endif
label_8557:;
    /* $8557: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8559:;
    /* $8559: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_855B:;
    /* $855B: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_855C:;
    /* $855C: 80 */ maybe_trigger_vblank(2); /* NOP */
label_855E:;
    /* $855E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xE4; FLAG_NZ(g_cpu.A);
label_8560:;
    /* $8560: 20 */ maybe_trigger_vblank(6); func_EFD1();
label_8563:;
    /* $8563: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85A2_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A2_b0");
#endif
label_85A2:;
    /* $85A2: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_85A5:;
    /* $85A5: 20 */ maybe_trigger_vblank(6); func_E449();
label_85A8:;
    /* $85A8: 20 */ maybe_trigger_vblank(6); func_CDF0();
label_85AB:;
    /* $85AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85AD:;
    /* $85AD: 8D */ maybe_trigger_vblank(4); nes_write(0x027A, g_cpu.A);
label_85B0:;
    /* $85B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D2; }
label_85B5:;
    /* $85B5: 20 */ maybe_trigger_vblank(6); func_8564_b0();
label_85B8:;
    /* $85B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_85BA:;
    /* $85BA: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85BC:;
    /* $85BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85C0:;
    /* $85C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85C2:;
    /* $85C2: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85C4:;
    /* $85C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85C6:;
    /* $85C6: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_85D2:;
    /* $85D2: 20 */ maybe_trigger_vblank(6); func_8581_b0();
label_85D5:;
    /* $85D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_85D7:;
    /* $85D7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x86; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85DD:;
    /* $85DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85DF:;
    /* $85DF: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85E1:;
    /* $85E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85A4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A4_b0");
#endif
label_85A4:;
    /* $85A4: 80 */ maybe_trigger_vblank(2); /* NOP */
label_85A6:;
    /* $85A6: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xE4; FLAG_NZ(g_cpu.A);
label_85A8:;
    /* $85A8: 20 */ maybe_trigger_vblank(6); func_CDF0();
label_85AB:;
    /* $85AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85AD:;
    /* $85AD: 8D */ maybe_trigger_vblank(4); nes_write(0x027A, g_cpu.A);
label_85B0:;
    /* $85B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D2; }
label_85B5:;
    /* $85B5: 20 */ maybe_trigger_vblank(6); func_8564_b0();
label_85B8:;
    /* $85B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_85BA:;
    /* $85BA: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85BC:;
    /* $85BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85C0:;
    /* $85C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85C2:;
    /* $85C2: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85C4:;
    /* $85C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85C6:;
    /* $85C6: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_85D2:;
    /* $85D2: 20 */ maybe_trigger_vblank(6); func_8581_b0();
label_85D5:;
    /* $85D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_85D7:;
    /* $85D7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x86; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85DD:;
    /* $85DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85DF:;
    /* $85DF: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85E1:;
    /* $85E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8985_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8985_b0");
#endif
label_8985:;
    /* $8985: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_8987:;
    /* $8987: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xC905); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_898A:;
    /* $898A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_898B:;
    /* $898B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_89A4; }
label_898D:;
    /* $898D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_898E:;
    /* $898E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8990:;
    /* $8990: 9D */ maybe_trigger_vblank(5); nes_write((0x05ED + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8993:;
    /* $8993: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8995:;
    /* $8995: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_8997:;
    /* $8997: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8998:;
    /* $8998: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x8980); return; }
label_899A:;
    /* $899A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x06; FLAG_NZ(g_cpu.X);
label_899C:;
    /* $899C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_899E:;
    /* $899E: 9D */ maybe_trigger_vblank(5); nes_write((0x05ED + g_cpu.X) & 0xFFFF, g_cpu.A);
label_89A1:;
    /* $89A1: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_89A2:;
    /* $89A2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_899E;
    }
label_89A4:;
    /* $89A4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8A26_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A26_b0");
#endif
label_8A26:;
    /* $8A26: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0535); FLAG_NZ(g_cpu.A);
label_8A29:;
    /* $8A29: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8A2B:;
    /* $8A2B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8A38; }
label_8A2D:;
    /* $8A2D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_8A2F:;
    /* $8A2F: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_8A31:;
    /* $8A31: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8E; FLAG_NZ(g_cpu.A);
label_8A33:;
    /* $8A33: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_8A35:;
    /* $8A35: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8A40_b0(); return;
label_8A38:;
    /* $8A38: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3E; FLAG_NZ(g_cpu.A);
label_8A3A:;
    /* $8A3A: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_8A3C:;
    /* $8A3C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8E; FLAG_NZ(g_cpu.A);
label_8A3E:;
    /* $8A3E: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_8A40:;
    /* $8A40: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_8A42:;
    /* $8A42: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8A44:;
    /* $8A44: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_8A46:;
    /* $8A46: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_8A48:;
    /* $8A48: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_8A4A:;
    /* $8A4A: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_8A4C:;
    /* $8A4C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8A4E:;
    /* $8A4E: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_8A51:;
    /* $8A51: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0536); FLAG_NZ(g_cpu.A);
label_8A54:;
    /* $8A54: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A5E; }
label_8A56:;
    /* $8A56: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8A58:;
    /* $8A58: 8D */ maybe_trigger_vblank(4); nes_write(0x0551, g_cpu.A);
label_8A5B:;
    /* $8A5B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8A73_b0(); return;
label_8A5E:;
    /* $8A5E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0535); FLAG_NZ(g_cpu.A);
label_8A61:;
    /* $8A61: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8A63:;
    /* $8A63: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8A6D; }
label_8A65:;
    /* $8A65: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8A67:;
    /* $8A67: 8D */ maybe_trigger_vblank(4); nes_write(0x0551, g_cpu.A);
label_8A6A:;
    /* $8A6A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8A73_b0(); return;
label_8A6D:;
    /* $8A6D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8A6E:;
    /* $8A6E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 8D */ maybe_trigger_vblank(4); nes_write(0x0551, g_cpu.A);
label_8A73:;
    /* $8A73: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8A75:;
    /* $8A75: 8D */ maybe_trigger_vblank(4); nes_write(0x0567, g_cpu.A);
label_8A78:;
    /* $8A78: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A7A:;
    /* $8A7A: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_8A7D:;
    /* $8A7D: 8D */ maybe_trigger_vblank(4); nes_write(0x0525, g_cpu.A);
label_8A80:;
    /* $8A80: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8A82:;
    /* $8A82: 8D */ maybe_trigger_vblank(4); nes_write(0x054E, g_cpu.A);
label_8A85:;
    /* $8A85: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_8A87:;
    /* $8A87: 8D */ maybe_trigger_vblank(4); nes_write(0x0527, g_cpu.A);
label_8A8A:;
    /* $8A8A: 20 */ maybe_trigger_vblank(6); func_8C6D_b0();
label_8A8D:;
    /* $8A8D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8A8F:;
    /* $8A8F: 8D */ maybe_trigger_vblank(4); nes_write(0x054F, g_cpu.A);
label_8A92:;
    /* $8A92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A94:;
    /* $8A94: 8D */ maybe_trigger_vblank(4); nes_write(0x0550, g_cpu.A);
label_8A97:;
    /* $8A97: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8A99:;
    /* $8A99: 20 */ maybe_trigger_vblank(6); func_8C4C_b0();
label_8A9C:;
    /* $8A9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_8A9E:;
    /* $8A9E: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8AA1:;
    /* $8AA1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0550); FLAG_NZ(g_cpu.A);
label_8AA4:;
    /* $8AA4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8ABA; }
label_8AA6:;
    /* $8AA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8AA8:;
    /* $8AA8: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8AAB:;
    /* $8AAB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_8AAD:;
    /* $8AAD: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8AAF:;
    /* $8AAF: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8AB2:;
    /* $8AB2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8AB4:;
    /* $8AB4: 8D */ maybe_trigger_vblank(4); nes_write(0x0550, g_cpu.A);
label_8AB7:;
    /* $8AB7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8ACE_b0(); return;
label_8ABA:;
    /* $8ABA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8ABC:;
    /* $8ABC: 8D */ maybe_trigger_vblank(4); nes_write(0x054F, g_cpu.A);
label_8ABF:;
    /* $8ABF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8AC1:;
    /* $8AC1: 8D */ maybe_trigger_vblank(4); nes_write(0x0550, g_cpu.A);
label_8AC4:;
    /* $8AC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8AC6:;
    /* $8AC6: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8AC9:;
    /* $8AC9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_8ACB:;
    /* $8ACB: 20 */ maybe_trigger_vblank(6); func_8C4C_b0();
label_8ACE:;
    /* $8ACE: 20 */ maybe_trigger_vblank(6); func_91C9_b0();
label_8AD1:;
    /* $8AD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8AD3:;
    /* $8AD3: 8D */ maybe_trigger_vblank(4); nes_write(0x0530, g_cpu.A);
label_8AD6:;
    /* $8AD6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0551); FLAG_NZ(g_cpu.A);
label_8AD9:;
    /* $8AD9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8ADA:;
    /* $8ADA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8ADB:;
    /* $8ADB: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8ADC:;
    /* $8ADC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0550); FLAG_NZ(g_cpu.A);
label_8ADF:;
    /* $8ADF: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8FB8 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8AE2:;
    /* $8AE2: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_8B17; }
label_8AE4:;
    /* $8AE4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8AE6:;
    /* $8AE6: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8AE9:;
    /* $8AE9: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8AEC:;
    /* $8AEC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AEE:;
    /* $8AEE: 20 */ maybe_trigger_vblank(6); func_8CB0_b0();
label_8AF1:;
    /* $8AF1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AF3:;
    /* $8AF3: 20 */ maybe_trigger_vblank(6); func_8CDA_b0();
label_8AF6:;
    /* $8AF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AF8:;
    /* $8AF8: 20 */ maybe_trigger_vblank(6); func_8D33_b0();
label_8AFB:;
    /* $8AFB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8AFD:;
    /* $8AFD: 20 */ maybe_trigger_vblank(6); func_8D33_b0();
label_8B00:;
    /* $8B00: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2E; FLAG_NZ(g_cpu.A);
label_8B02:;
    /* $8B02: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8B05:;
    /* $8B05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_8B07:;
    /* $8B07: 8D */ maybe_trigger_vblank(4); nes_write(0x0280, g_cpu.A);
label_8B0A:;
    /* $8B0A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA0; FLAG_NZ(g_cpu.A);
label_8B0C:;
    /* $8B0C: 8D */ maybe_trigger_vblank(4); nes_write(0x02B0, g_cpu.A);
label_8B0F:;
    /* $8B0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8B11:;
    /* $8B11: 20 */ maybe_trigger_vblank(6); func_8D8C_b0();
label_8B14:;
    /* $8B14: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8B17:;
    /* $8B17: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8B18:;
    /* $8B18: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8FB8 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8B1B:;
    /* $8B1B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8B4B; }
label_8B1D:;
    /* $8B1D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8B1F:;
    /* $8B1F: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8B22:;
    /* $8B22: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8B25:;
    /* $8B25: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B27:;
    /* $8B27: 20 */ maybe_trigger_vblank(6); func_8CB0_b0();
label_8B2A:;
    /* $8B2A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B2C:;
    /* $8B2C: 20 */ maybe_trigger_vblank(6); func_8CDA_b0();
label_8B2F:;
    /* $8B2F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8B31:;
    /* $8B31: 20 */ maybe_trigger_vblank(6); func_8CDA_b0();
label_8B34:;
    /* $8B34: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_8B36:;
    /* $8B36: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8B39:;
    /* $8B39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8B3B:;
    /* $8B3B: 8D */ maybe_trigger_vblank(4); nes_write(0x0280, g_cpu.A);
label_8B3E:;
    /* $8B3E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_8B40:;
    /* $8B40: 8D */ maybe_trigger_vblank(4); nes_write(0x02B0, g_cpu.A);
label_8B43:;
    /* $8B43: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8B45:;
    /* $8B45: 20 */ maybe_trigger_vblank(6); func_8D8C_b0();
label_8B48:;
    /* $8B48: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8B4B:;
    /* $8B4B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8B4C:;
    /* $8B4C: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8FB8 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8B4F:;
    /* $8B4F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8B7A; }
label_8B51:;
    /* $8B51: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8B53:;
    /* $8B53: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8B56:;
    /* $8B56: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8B59:;
    /* $8B59: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B5B:;
    /* $8B5B: 20 */ maybe_trigger_vblank(6); func_8CB0_b0();
label_8B5E:;
    /* $8B5E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8B60:;
    /* $8B60: 20 */ maybe_trigger_vblank(6); func_8CB0_b0();
label_8B63:;
    /* $8B63: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_8B65:;
    /* $8B65: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8B68:;
    /* $8B68: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8B6A:;
    /* $8B6A: 8D */ maybe_trigger_vblank(4); nes_write(0x0280, g_cpu.A);
label_8B6D:;
    /* $8B6D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_8B6F:;
    /* $8B6F: 8D */ maybe_trigger_vblank(4); nes_write(0x02B0, g_cpu.A);
label_8B72:;
    /* $8B72: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8B74:;
    /* $8B74: 20 */ maybe_trigger_vblank(6); func_8D8C_b0();
label_8B77:;
    /* $8B77: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8B7A:;
    /* $8B7A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8B7B:;
    /* $8B7B: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8FB8 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8B7E:;
    /* $8B7E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8BA4; }
label_8B80:;
    /* $8B80: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8B82:;
    /* $8B82: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8B85:;
    /* $8B85: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8B88:;
    /* $8B88: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_8B8A:;
    /* $8B8A: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8B8D:;
    /* $8B8D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_8B8F:;
    /* $8B8F: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8B92:;
    /* $8B92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B94:;
    /* $8B94: 8D */ maybe_trigger_vblank(4); nes_write(0x0280, g_cpu.A);
label_8B97:;
    /* $8B97: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_8B99:;
    /* $8B99: 8D */ maybe_trigger_vblank(4); nes_write(0x02B0, g_cpu.A);
label_8B9C:;
    /* $8B9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B9E:;
    /* $8B9E: 20 */ maybe_trigger_vblank(6); func_8D8C_b0();
label_8BA1:;
    /* $8BA1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8BA4:;
    /* $8BA4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0551); FLAG_NZ(g_cpu.A);
label_8BA7:;
    /* $8BA7: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8BAA:;
    /* $8BAA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_8BAC:;
    /* $8BAC: 8D */ maybe_trigger_vblank(4); nes_write(0x05AB, g_cpu.A);
label_8BAF:;
    /* $8BAF: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0551); FLAG_NZ(g_cpu.X);
label_8BB2:;
    /* $8BB2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8FB1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BB5:;
    /* $8BB5: 8D */ maybe_trigger_vblank(4); nes_write(0x05B4, g_cpu.A);
label_8BB8:;
    /* $8BB8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0525); FLAG_NZ(g_cpu.A);
label_8BBB:;
    /* $8BBB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BD0; }
label_8BBD:;
    /* $8BBD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8BBF:;
    /* $8BBF: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BC2:;
    /* $8BC2: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BC5:;
    /* $8BC5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8BC7:;
    /* $8BC7: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BCA:;
    /* $8BCA: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BCD:;
    /* $8BCD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8BD0:;
    /* $8BD0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8BD2:;
    /* $8BD2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BDF; }
label_8BD4:;
    /* $8BD4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8BD6:;
    /* $8BD6: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BD9:;
    /* $8BD9: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BDC:;
    /* $8BDC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8BDF:;
    /* $8BDF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8BE1:;
    /* $8BE1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BF6; }
label_8BE3:;
    /* $8BE3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8BE5:;
    /* $8BE5: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BE8:;
    /* $8BE8: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BEB:;
    /* $8BEB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8BED:;
    /* $8BED: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BF0:;
    /* $8BF0: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BF3:;
    /* $8BF3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8BF6:;
    /* $8BF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8BF8:;
    /* $8BF8: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BFB:;
    /* $8BFB: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BFE:;
    /* $8BFE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8C00:;
    /* $8C00: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8C02:;
    /* $8C02: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8C05:;
    /* $8C05: 20 */ maybe_trigger_vblank(6); func_920F_b0();
label_8C08:;
    /* $8C08: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0530); FLAG_NZ(g_cpu.A);
label_8C0B:;
    /* $8C0B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8C0D:;
    /* $8C0D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8BFE;
    }
label_8C0F:;
    /* $8C0F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0525; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C12:;
    /* $8C12: CE */ maybe_trigger_vblank(6); { uint16_t a=0x054E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C15:;
    /* $8C15: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C1A; }
label_8C17:;
    /* $8C17: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8A8A;
label_8C1A:;
    /* $8C1A: 20 */ maybe_trigger_vblank(6); func_8C6D_b0();
label_8C1D:;
    /* $8C1D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8C1F:;
    /* $8C1F: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8C21:;
    /* $8C21: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8C24:;
    /* $8C24: 20 */ maybe_trigger_vblank(6); func_D16E();
label_8C27:;
    /* $8C27: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x024B); FLAG_NZ(g_cpu.A);
label_8C2A:;
    /* $8C2A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8C2C:;
    /* $8C2C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8C1D;
    }
label_8C2E:;
    /* $8C2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C30:;
    /* $8C30: 8D */ maybe_trigger_vblank(4); nes_write(0x0567, g_cpu.A);
label_8C33:;
    /* $8C33: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8C35:;
    /* $8C35: 8D */ maybe_trigger_vblank(4); nes_write(0x0248, g_cpu.A);
label_8C38:;
    /* $8C38: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8AA5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AA5_b0");
#endif
label_8AA5:;
    /* $8AA5: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xA9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8AA7:;
    /* $8AA7: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF20 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AAA:;
    /* $8AAA: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xA9 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AAC:;
    /* $8AAC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8AAD:;
    /* $8AAD: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8AAF:;
    /* $8AAF: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8AB2:;
    /* $8AB2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8AB4:;
    /* $8AB4: 8D */ maybe_trigger_vblank(4); nes_write(0x0550, g_cpu.A);
label_8AB7:;
    /* $8AB7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8ACE_b0(); return;
}

void func_8AE6_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AE6_b0");
#endif
label_8AE6:;
    /* $8AE6: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8AE9:;
    /* $8AE9: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8AEC:;
    /* $8AEC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AEE:;
    /* $8AEE: 20 */ maybe_trigger_vblank(6); func_8CB0_b0();
label_8AF1:;
    /* $8AF1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AF3:;
    /* $8AF3: 20 */ maybe_trigger_vblank(6); func_8CDA_b0();
label_8AF6:;
    /* $8AF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AF8:;
    /* $8AF8: 20 */ maybe_trigger_vblank(6); func_8D33_b0();
label_8AFB:;
    /* $8AFB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8AFD:;
    /* $8AFD: 20 */ maybe_trigger_vblank(6); func_8D33_b0();
label_8B00:;
    /* $8B00: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2E; FLAG_NZ(g_cpu.A);
label_8B02:;
    /* $8B02: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8B05:;
    /* $8B05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_8B07:;
    /* $8B07: 8D */ maybe_trigger_vblank(4); nes_write(0x0280, g_cpu.A);
label_8B0A:;
    /* $8B0A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA0; FLAG_NZ(g_cpu.A);
label_8B0C:;
    /* $8B0C: 8D */ maybe_trigger_vblank(4); nes_write(0x02B0, g_cpu.A);
label_8B0F:;
    /* $8B0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8B11:;
    /* $8B11: 20 */ maybe_trigger_vblank(6); func_8D8C_b0();
label_8B14:;
    /* $8B14: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
}

void func_A97F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A97F_b0");
#endif
label_A97F:;
    /* $A97F: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A982:;
    /* $A982: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A984:;
    /* $A984: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A987:;
    /* $A987: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A6_b0(); return;
}

void func_8536_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8536_b0");
#endif
label_8536:;
    /* $8536: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x8585); FLAG_NZ(g_cpu.A);
label_8539:;
    /* $8539: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x8A); FLAG_NZ(g_cpu.Y);
label_853B:;
    /* $853B: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_853D:;
    /* $853D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A98D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A98D_b0");
#endif
label_A98D:;
    /* $A98D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A98F:;
    /* $A98F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A99B; }
label_A991:;
    /* $A991: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A993:;
    /* $A993: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A996:;
    /* $A996: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A998:;
    /* $A998: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A0_b0(); return;
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A9A0:;
    /* $A9A0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9A1:;
    /* $A9A1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9A3:;
    /* $A9A3: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A9A6:;
    /* $A9A6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0444); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9AB:;
    /* $A9AB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9AD:;
    /* $A9AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9B1:;
    /* $A9B1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B2:;
    /* $A9B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9B4:;
    /* $A9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9AD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9AD_b0");
#endif
label_A9AD:;
    /* $A9AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9B1:;
    /* $A9B1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B2:;
    /* $A9B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9B4:;
    /* $A9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_859F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_859F_b0");
#endif
label_859F:;
    /* $859F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_85A1:;
    /* $85A1: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85A3:;
    /* $85A3: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_85A4:;
    /* $85A4: 80 */ maybe_trigger_vblank(2); /* NOP */
label_85A6:;
    /* $85A6: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xE4; FLAG_NZ(g_cpu.A);
label_85A8:;
    /* $85A8: 20 */ maybe_trigger_vblank(6); func_CDF0();
label_85AB:;
    /* $85AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85AD:;
    /* $85AD: 8D */ maybe_trigger_vblank(4); nes_write(0x027A, g_cpu.A);
label_85B0:;
    /* $85B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D2; }
label_85B5:;
    /* $85B5: 20 */ maybe_trigger_vblank(6); func_8564_b0();
label_85B8:;
    /* $85B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_85BA:;
    /* $85BA: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85BC:;
    /* $85BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85C0:;
    /* $85C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85C2:;
    /* $85C2: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85C4:;
    /* $85C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85C6:;
    /* $85C6: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_85D2:;
    /* $85D2: 20 */ maybe_trigger_vblank(6); func_8581_b0();
label_85D5:;
    /* $85D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_85D7:;
    /* $85D7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x86; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85DD:;
    /* $85DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85DF:;
    /* $85DF: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85E1:;
    /* $85E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85AD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AD_b0");
#endif
label_85AD:;
    /* $85AD: 8D */ maybe_trigger_vblank(4); nes_write(0x027A, g_cpu.A);
label_85B0:;
    /* $85B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D2; }
label_85B5:;
    /* $85B5: 20 */ maybe_trigger_vblank(6); func_8564_b0();
label_85B8:;
    /* $85B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_85BA:;
    /* $85BA: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85BC:;
    /* $85BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85C0:;
    /* $85C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85C2:;
    /* $85C2: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85C4:;
    /* $85C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85C6:;
    /* $85C6: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_85D2:;
    /* $85D2: 20 */ maybe_trigger_vblank(6); func_8581_b0();
label_85D5:;
    /* $85D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_85D7:;
    /* $85D7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x86; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85DD:;
    /* $85DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85DF:;
    /* $85DF: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85E1:;
    /* $85E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85A5_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A5_b0");
#endif
label_85A5:;
    /* $85A5: 20 */ maybe_trigger_vblank(6); func_E449();
label_85A8:;
    /* $85A8: 20 */ maybe_trigger_vblank(6); func_CDF0();
label_85AB:;
    /* $85AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85AD:;
    /* $85AD: 8D */ maybe_trigger_vblank(4); nes_write(0x027A, g_cpu.A);
label_85B0:;
    /* $85B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D2; }
label_85B5:;
    /* $85B5: 20 */ maybe_trigger_vblank(6); func_8564_b0();
label_85B8:;
    /* $85B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_85BA:;
    /* $85BA: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85BC:;
    /* $85BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85C0:;
    /* $85C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85C2:;
    /* $85C2: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85C4:;
    /* $85C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85C6:;
    /* $85C6: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_85D2:;
    /* $85D2: 20 */ maybe_trigger_vblank(6); func_8581_b0();
label_85D5:;
    /* $85D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_85D7:;
    /* $85D7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x86; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85DD:;
    /* $85DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85DF:;
    /* $85DF: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85E1:;
    /* $85E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A92A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A92A_b0");
#endif
label_A92A:;
    /* $A92A: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A92D:;
    /* $A92D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A92F:;
    /* $A92F: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A931:;
    /* $A931: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A957; }
label_A933:;
    /* $A933: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A935:;
    /* $A935: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A957; }
label_A937:;
    /* $A937: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A93A:;
    /* $A93A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A952; }
label_A93C:;
    /* $A93C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A93F:;
    /* $A93F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A941:;
    /* $A941: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A94D; }
label_A943:;
    /* $A943: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_A945:;
    /* $A945: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A948:;
    /* $A948: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_A94A:;
    /* $A94A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A0_b0(); return;
label_A94D:;
    /* $A94D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_A94F:;
    /* $A94F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A99D_b0(); return;
label_A952:;
    /* $A952: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A99D_b0(); return;
label_A957:;
    /* $A957: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A95A:;
    /* $A95A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A98A; }
label_A95C:;
    /* $A95C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A95F:;
    /* $A95F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A961:;
    /* $A961: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A972; }
label_A963:;
    /* $A963: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A965:;
    /* $A965: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A97D; }
label_A967:;
    /* $A967: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A969:;
    /* $A969: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A96C:;
    /* $A96C: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A96F:;
    /* $A96F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A6_b0(); return;
label_A972:;
    /* $A972: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A974:;
    /* $A974: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A977:;
    /* $A977: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A97A:;
    /* $A97A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A6_b0(); return;
label_A97D:;
    /* $A97D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A97F:;
    /* $A97F: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A982:;
    /* $A982: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A984:;
    /* $A984: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A987:;
    /* $A987: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A6_b0(); return;
label_A98A:;
    /* $A98A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A98D:;
    /* $A98D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A98F:;
    /* $A98F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A99B; }
label_A991:;
    /* $A991: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A993:;
    /* $A993: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A996:;
    /* $A996: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A998:;
    /* $A998: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A0_b0(); return;
label_A99B:;
    /* $A99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A9A0:;
    /* $A9A0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9A1:;
    /* $A9A1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9A3:;
    /* $A9A3: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A9A6:;
    /* $A9A6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0444); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A9AB:;
    /* $A9AB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9AD:;
    /* $A9AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_A9AF:;
    /* $A9AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9B1:;
    /* $A9B1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9B2:;
    /* $A9B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A9B4:;
    /* $A9B4: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85AB_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AB_b0");
#endif
label_85AB:;
    /* $85AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_85AD:;
    /* $85AD: 8D */ maybe_trigger_vblank(4); nes_write(0x027A, g_cpu.A);
label_85B0:;
    /* $85B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D2; }
label_85B5:;
    /* $85B5: 20 */ maybe_trigger_vblank(6); func_8564_b0();
label_85B8:;
    /* $85B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_85BA:;
    /* $85BA: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85BC:;
    /* $85BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85C0:;
    /* $85C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85C2:;
    /* $85C2: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85C4:;
    /* $85C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85C6:;
    /* $85C6: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_85D2:;
    /* $85D2: 20 */ maybe_trigger_vblank(6); func_8581_b0();
label_85D5:;
    /* $85D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_85D7:;
    /* $85D7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x86; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85DD:;
    /* $85DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85DF:;
    /* $85DF: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85E1:;
    /* $85E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_898A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_898A_b0");
#endif
label_898A:;
    /* $898A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_898B:;
    /* $898B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_89A4; }
label_898D:;
    /* $898D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_898E:;
    /* $898E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8990:;
    /* $8990: 9D */ maybe_trigger_vblank(5); nes_write((0x05ED + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8993:;
    /* $8993: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8995:;
    /* $8995: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_8997:;
    /* $8997: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8998:;
    /* $8998: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x8980); return; }
label_899A:;
    /* $899A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x06; FLAG_NZ(g_cpu.X);
label_899C:;
    /* $899C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_899E:;
    /* $899E: 9D */ maybe_trigger_vblank(5); nes_write((0x05ED + g_cpu.X) & 0xFFFF, g_cpu.A);
label_89A1:;
    /* $89A1: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_89A2:;
    /* $89A2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_899E;
    }
label_89A4:;
    /* $89A4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B8A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B8A_b0");
#endif
label_8B8A:;
    /* $8B8A: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8B8D:;
    /* $8B8D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_8B8F:;
    /* $8B8F: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8B92:;
    /* $8B92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B94:;
    /* $8B94: 8D */ maybe_trigger_vblank(4); nes_write(0x0280, g_cpu.A);
label_8B97:;
    /* $8B97: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_8B99:;
    /* $8B99: 8D */ maybe_trigger_vblank(4); nes_write(0x02B0, g_cpu.A);
label_8B9C:;
    /* $8B9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B9E:;
    /* $8B9E: 20 */ maybe_trigger_vblank(6); func_8D8C_b0();
label_8BA1:;
    /* $8BA1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
}

void func_8B8C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B8C_b0");
#endif
label_8B8C:;
    /* $8B8C: 8C */ maybe_trigger_vblank(4); nes_write(0x2CA9, g_cpu.Y);
label_8B8F:;
    /* $8B8F: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8B92:;
    /* $8B92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B94:;
    /* $8B94: 8D */ maybe_trigger_vblank(4); nes_write(0x0280, g_cpu.A);
label_8B97:;
    /* $8B97: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_8B99:;
    /* $8B99: 8D */ maybe_trigger_vblank(4); nes_write(0x02B0, g_cpu.A);
label_8B9C:;
    /* $8B9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B9E:;
    /* $8B9E: 20 */ maybe_trigger_vblank(6); func_8D8C_b0();
label_8BA1:;
    /* $8BA1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
}

void func_9E8C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9E8C_b0");
#endif
label_9E8C:;
    /* $9E8C: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_9E8F:;
    /* $9E8F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEB; FLAG_NZ(g_cpu.A);
label_9E91:;
    /* $9E91: 20 */ maybe_trigger_vblank(6); func_9C02_b0();
label_9E94:;
    /* $9E94: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05EE); FLAG_NZ(g_cpu.A);
label_9E97:;
    /* $9E97: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9E98:;
    /* $9E98: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9E9A:;
    /* $9E9A: 8D */ maybe_trigger_vblank(4); nes_write(0x0553, g_cpu.A);
label_9E9D:;
    /* $9E9D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05EF); FLAG_NZ(g_cpu.A);
label_9EA0:;
    /* $9EA0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9EA1:;
    /* $9EA1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9EA3:;
    /* $9EA3: 8D */ maybe_trigger_vblank(4); nes_write(0x0554, g_cpu.A);
label_9EA6:;
    /* $9EA6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F0); FLAG_NZ(g_cpu.A);
label_9EA9:;
    /* $9EA9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9EAA:;
    /* $9EAA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9EAC:;
    /* $9EAC: 8D */ maybe_trigger_vblank(4); nes_write(0x0555, g_cpu.A);
label_9EAF:;
    /* $9EAF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F1); FLAG_NZ(g_cpu.A);
label_9EB2:;
    /* $9EB2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9EB3:;
    /* $9EB3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9EB5:;
    /* $9EB5: 8D */ maybe_trigger_vblank(4); nes_write(0x0556, g_cpu.A);
label_9EB8:;
    /* $9EB8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F2); FLAG_NZ(g_cpu.A);
label_9EBB:;
    /* $9EBB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9EBC:;
    /* $9EBC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9EBE:;
    /* $9EBE: 8D */ maybe_trigger_vblank(4); nes_write(0x0557, g_cpu.A);
label_9EC1:;
    /* $9EC1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F3); FLAG_NZ(g_cpu.A);
label_9EC4:;
    /* $9EC4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9EC5:;
    /* $9EC5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9EC7:;
    /* $9EC7: 8D */ maybe_trigger_vblank(4); nes_write(0x0558, g_cpu.A);
label_9ECA:;
    /* $9ECA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9ECC:;
    /* $9ECC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0553 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9ECF:;
    /* $9ECF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_9ED1:;
    /* $9ED1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9EDD; }
label_9ED3:;
    /* $9ED3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEB; FLAG_NZ(g_cpu.A);
label_9ED5:;
    /* $9ED5: 9D */ maybe_trigger_vblank(5); nes_write((0x0553 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9ED8:;
    /* $9ED8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9ED9:;
    /* $9ED9: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9EDB:;
    /* $9EDB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9ECC;
    }
label_9EDD:;
    /* $9EDD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x53; FLAG_NZ(g_cpu.A);
label_9EDF:;
    /* $9EDF: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9EE1:;
    /* $9EE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9EE3:;
    /* $9EE3: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9EE5:;
    /* $9EE5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_9EE7:;
    /* $9EE7: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_9EE9:;
    /* $9EE9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9EEB:;
    /* $9EEB: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_9EED:;
    /* $9EED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_9EEF:;
    /* $9EEF: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_9EF1:;
    /* $9EF1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9EF3:;
    /* $9EF3: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_9EF6:;
    /* $9EF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEA; FLAG_NZ(g_cpu.A);
label_9EF8:;
    /* $9EF8: 20 */ maybe_trigger_vblank(6); func_9C02_b0();
label_9EFB:;
    /* $9EFB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02EE); FLAG_NZ(g_cpu.A);
label_9EFE:;
    /* $9EFE: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9EFF:;
    /* $9EFF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F01:;
    /* $9F01: 8D */ maybe_trigger_vblank(4); nes_write(0x0553, g_cpu.A);
label_9F04:;
    /* $9F04: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02ED); FLAG_NZ(g_cpu.A);
label_9F07:;
    /* $9F07: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F08:;
    /* $9F08: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F0A:;
    /* $9F0A: 8D */ maybe_trigger_vblank(4); nes_write(0x0554, g_cpu.A);
label_9F0D:;
    /* $9F0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF5; FLAG_NZ(g_cpu.A);
label_9F0F:;
    /* $9F0F: 8D */ maybe_trigger_vblank(4); nes_write(0x0555, g_cpu.A);
label_9F12:;
    /* $9F12: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02F0); FLAG_NZ(g_cpu.A);
label_9F15:;
    /* $9F15: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F16:;
    /* $9F16: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F18:;
    /* $9F18: 8D */ maybe_trigger_vblank(4); nes_write(0x0556, g_cpu.A);
label_9F1B:;
    /* $9F1B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02EF); FLAG_NZ(g_cpu.A);
label_9F1E:;
    /* $9F1E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F1F:;
    /* $9F1F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F21:;
    /* $9F21: 8D */ maybe_trigger_vblank(4); nes_write(0x0557, g_cpu.A);
label_9F24:;
    /* $9F24: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02C5); FLAG_NZ(g_cpu.A);
label_9F27:;
    /* $9F27: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F28:;
    /* $9F28: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F2A:;
    /* $9F2A: 8D */ maybe_trigger_vblank(4); nes_write(0x055B, g_cpu.A);
label_9F2D:;
    /* $9F2D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02C4); FLAG_NZ(g_cpu.A);
label_9F30:;
    /* $9F30: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F31:;
    /* $9F31: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F33:;
    /* $9F33: 8D */ maybe_trigger_vblank(4); nes_write(0x055C, g_cpu.A);
label_9F36:;
    /* $9F36: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_9F39:;
    /* $9F39: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F4B; }
label_9F3B:;
    /* $9F3B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x3D; FLAG_NZ(g_cpu.X);
label_9F3D:;
    /* $9F3D: 8E */ maybe_trigger_vblank(4); nes_write(0x055F, g_cpu.X);
label_9F40:;
    /* $9F40: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F41:;
    /* $9F41: 8E */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.X);
label_9F44:;
    /* $9F44: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F45:;
    /* $9F45: 8E */ maybe_trigger_vblank(4); nes_write(0x0561, g_cpu.X);
label_9F48:;
    /* $9F48: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9F5C_b0(); return;
label_9F4B:;
    /* $9F4B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xBC; FLAG_NZ(g_cpu.X);
label_9F4D:;
    /* $9F4D: 8E */ maybe_trigger_vblank(4); nes_write(0x055E, g_cpu.X);
label_9F50:;
    /* $9F50: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F51:;
    /* $9F51: 8E */ maybe_trigger_vblank(4); nes_write(0x055F, g_cpu.X);
label_9F54:;
    /* $9F54: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F55:;
    /* $9F55: 8E */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.X);
label_9F58:;
    /* $9F58: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F59:;
    /* $9F59: 8E */ maybe_trigger_vblank(4); nes_write(0x0561, g_cpu.X);
label_9F5C:;
    /* $9F5C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0553); FLAG_NZ(g_cpu.A);
label_9F5F:;
    /* $9F5F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_9F61:;
    /* $9F61: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F68; }
label_9F63:;
    /* $9F63: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEA; FLAG_NZ(g_cpu.A);
label_9F65:;
    /* $9F65: 8D */ maybe_trigger_vblank(4); nes_write(0x0553, g_cpu.A);
label_9F68:;
    /* $9F68: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x055B); FLAG_NZ(g_cpu.A);
label_9F6B:;
    /* $9F6B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_9F6D:;
    /* $9F6D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F74; }
label_9F6F:;
    /* $9F6F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEA; FLAG_NZ(g_cpu.A);
label_9F71:;
    /* $9F71: 8D */ maybe_trigger_vblank(4); nes_write(0x055B, g_cpu.A);
label_9F74:;
    /* $9F74: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x53; FLAG_NZ(g_cpu.A);
label_9F76:;
    /* $9F76: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9F78:;
    /* $9F78: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9F7A:;
    /* $9F7A: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9F7C:;
    /* $9F7C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_9F7E:;
    /* $9F7E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_9F80:;
    /* $9F80: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_9F82:;
    /* $9F82: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_9F84:;
    /* $9F84: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9F86:;
    /* $9F86: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_9F88:;
    /* $9F88: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9F8A:;
    /* $9F8A: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_9F8D:;
    /* $9F8D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_899F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_899F_b0");
#endif
label_899F:;
    /* $899F: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCA05); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_89A2:;
    /* $89A2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0x899E); return; }
label_89A4:;
    /* $89A4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8BAF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BAF_b0");
#endif
label_8BAF:;
    /* $8BAF: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0551); FLAG_NZ(g_cpu.X);
label_8BB2:;
    /* $8BB2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8FB1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BB5:;
    /* $8BB5: 8D */ maybe_trigger_vblank(4); nes_write(0x05B4, g_cpu.A);
label_8BB8:;
    /* $8BB8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0525); FLAG_NZ(g_cpu.A);
label_8BBB:;
    /* $8BBB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BD0; }
label_8BBD:;
    /* $8BBD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8BBF:;
    /* $8BBF: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BC2:;
    /* $8BC2: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BC5:;
    /* $8BC5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8BC7:;
    /* $8BC7: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BCA:;
    /* $8BCA: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BCD:;
    /* $8BCD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8BD0:;
    /* $8BD0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8BD2:;
    /* $8BD2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BDF; }
label_8BD4:;
    /* $8BD4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8BD6:;
    /* $8BD6: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BD9:;
    /* $8BD9: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BDC:;
    /* $8BDC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8BDF:;
    /* $8BDF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8BE1:;
    /* $8BE1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BF6; }
label_8BE3:;
    /* $8BE3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8BE5:;
    /* $8BE5: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BE8:;
    /* $8BE8: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BEB:;
    /* $8BEB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8BED:;
    /* $8BED: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BF0:;
    /* $8BF0: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BF3:;
    /* $8BF3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8BF6:;
    /* $8BF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8BF8:;
    /* $8BF8: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BFB:;
    /* $8BFB: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BFE:;
    /* $8BFE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8C00:;
    /* $8C00: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8C02:;
    /* $8C02: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8C05:;
    /* $8C05: 20 */ maybe_trigger_vblank(6); func_920F_b0();
label_8C08:;
    /* $8C08: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0530); FLAG_NZ(g_cpu.A);
label_8C0B:;
    /* $8C0B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8C0D:;
    /* $8C0D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8BFE;
    }
label_8C0F:;
    /* $8C0F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0525; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C12:;
    /* $8C12: CE */ maybe_trigger_vblank(6); { uint16_t a=0x054E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C15:;
    /* $8C15: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C1A; }
label_8C17:;
    /* $8C17: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8A8A_b0(); return;
label_8C1A:;
    /* $8C1A: 20 */ maybe_trigger_vblank(6); func_8C6D_b0();
label_8C1D:;
    /* $8C1D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8C1F:;
    /* $8C1F: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8C21:;
    /* $8C21: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8C24:;
    /* $8C24: 20 */ maybe_trigger_vblank(6); func_D16E();
label_8C27:;
    /* $8C27: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x024B); FLAG_NZ(g_cpu.A);
label_8C2A:;
    /* $8C2A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8C2C:;
    /* $8C2C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8C1D;
    }
label_8C2E:;
    /* $8C2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C30:;
    /* $8C30: 8D */ maybe_trigger_vblank(4); nes_write(0x0567, g_cpu.A);
label_8C33:;
    /* $8C33: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8C35:;
    /* $8C35: 8D */ maybe_trigger_vblank(4); nes_write(0x0248, g_cpu.A);
label_8C38:;
    /* $8C38: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9E9F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9E9F_b0");
#endif
label_9E9F:;
    /* $9E9F: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_9EA1:;
    /* $9EA1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9EA3:;
    /* $9EA3: 8D */ maybe_trigger_vblank(4); nes_write(0x0554, g_cpu.A);
label_9EA6:;
    /* $9EA6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F0); FLAG_NZ(g_cpu.A);
label_9EA9:;
    /* $9EA9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9EAA:;
    /* $9EAA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9EAC:;
    /* $9EAC: 8D */ maybe_trigger_vblank(4); nes_write(0x0555, g_cpu.A);
label_9EAF:;
    /* $9EAF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F1); FLAG_NZ(g_cpu.A);
label_9EB2:;
    /* $9EB2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9EB3:;
    /* $9EB3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9EB5:;
    /* $9EB5: 8D */ maybe_trigger_vblank(4); nes_write(0x0556, g_cpu.A);
label_9EB8:;
    /* $9EB8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F2); FLAG_NZ(g_cpu.A);
label_9EBB:;
    /* $9EBB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9EBC:;
    /* $9EBC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9EBE:;
    /* $9EBE: 8D */ maybe_trigger_vblank(4); nes_write(0x0557, g_cpu.A);
label_9EC1:;
    /* $9EC1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05F3); FLAG_NZ(g_cpu.A);
label_9EC4:;
    /* $9EC4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9EC5:;
    /* $9EC5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9EC7:;
    /* $9EC7: 8D */ maybe_trigger_vblank(4); nes_write(0x0558, g_cpu.A);
label_9ECA:;
    /* $9ECA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9ECC:;
    /* $9ECC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0553 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9ECF:;
    /* $9ECF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_9ED1:;
    /* $9ED1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9EDD; }
label_9ED3:;
    /* $9ED3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEB; FLAG_NZ(g_cpu.A);
label_9ED5:;
    /* $9ED5: 9D */ maybe_trigger_vblank(5); nes_write((0x0553 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9ED8:;
    /* $9ED8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9ED9:;
    /* $9ED9: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9EDB:;
    /* $9EDB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9ECC;
    }
label_9EDD:;
    /* $9EDD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x53; FLAG_NZ(g_cpu.A);
label_9EDF:;
    /* $9EDF: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9EE1:;
    /* $9EE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9EE3:;
    /* $9EE3: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9EE5:;
    /* $9EE5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_9EE7:;
    /* $9EE7: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_9EE9:;
    /* $9EE9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9EEB:;
    /* $9EEB: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_9EED:;
    /* $9EED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_9EEF:;
    /* $9EEF: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_9EF1:;
    /* $9EF1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9EF3:;
    /* $9EF3: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_9EF6:;
    /* $9EF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEA; FLAG_NZ(g_cpu.A);
label_9EF8:;
    /* $9EF8: 20 */ maybe_trigger_vblank(6); func_9C02_b0();
label_9EFB:;
    /* $9EFB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02EE); FLAG_NZ(g_cpu.A);
label_9EFE:;
    /* $9EFE: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9EFF:;
    /* $9EFF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F01:;
    /* $9F01: 8D */ maybe_trigger_vblank(4); nes_write(0x0553, g_cpu.A);
label_9F04:;
    /* $9F04: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02ED); FLAG_NZ(g_cpu.A);
label_9F07:;
    /* $9F07: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F08:;
    /* $9F08: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F0A:;
    /* $9F0A: 8D */ maybe_trigger_vblank(4); nes_write(0x0554, g_cpu.A);
label_9F0D:;
    /* $9F0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF5; FLAG_NZ(g_cpu.A);
label_9F0F:;
    /* $9F0F: 8D */ maybe_trigger_vblank(4); nes_write(0x0555, g_cpu.A);
label_9F12:;
    /* $9F12: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02F0); FLAG_NZ(g_cpu.A);
label_9F15:;
    /* $9F15: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F16:;
    /* $9F16: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F18:;
    /* $9F18: 8D */ maybe_trigger_vblank(4); nes_write(0x0556, g_cpu.A);
label_9F1B:;
    /* $9F1B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02EF); FLAG_NZ(g_cpu.A);
label_9F1E:;
    /* $9F1E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F1F:;
    /* $9F1F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F21:;
    /* $9F21: 8D */ maybe_trigger_vblank(4); nes_write(0x0557, g_cpu.A);
label_9F24:;
    /* $9F24: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02C5); FLAG_NZ(g_cpu.A);
label_9F27:;
    /* $9F27: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F28:;
    /* $9F28: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F2A:;
    /* $9F2A: 8D */ maybe_trigger_vblank(4); nes_write(0x055B, g_cpu.A);
label_9F2D:;
    /* $9F2D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02C4); FLAG_NZ(g_cpu.A);
label_9F30:;
    /* $9F30: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9F31:;
    /* $9F31: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xF6 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xF6); g_cpu.A=r&0xFF; }
label_9F33:;
    /* $9F33: 8D */ maybe_trigger_vblank(4); nes_write(0x055C, g_cpu.A);
label_9F36:;
    /* $9F36: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_9F39:;
    /* $9F39: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F4B; }
label_9F3B:;
    /* $9F3B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x3D; FLAG_NZ(g_cpu.X);
label_9F3D:;
    /* $9F3D: 8E */ maybe_trigger_vblank(4); nes_write(0x055F, g_cpu.X);
label_9F40:;
    /* $9F40: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F41:;
    /* $9F41: 8E */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.X);
label_9F44:;
    /* $9F44: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F45:;
    /* $9F45: 8E */ maybe_trigger_vblank(4); nes_write(0x0561, g_cpu.X);
label_9F48:;
    /* $9F48: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9F5C_b0(); return;
label_9F4B:;
    /* $9F4B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xBC; FLAG_NZ(g_cpu.X);
label_9F4D:;
    /* $9F4D: 8E */ maybe_trigger_vblank(4); nes_write(0x055E, g_cpu.X);
label_9F50:;
    /* $9F50: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F51:;
    /* $9F51: 8E */ maybe_trigger_vblank(4); nes_write(0x055F, g_cpu.X);
label_9F54:;
    /* $9F54: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F55:;
    /* $9F55: 8E */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.X);
label_9F58:;
    /* $9F58: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F59:;
    /* $9F59: 8E */ maybe_trigger_vblank(4); nes_write(0x0561, g_cpu.X);
label_9F5C:;
    /* $9F5C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0553); FLAG_NZ(g_cpu.A);
label_9F5F:;
    /* $9F5F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_9F61:;
    /* $9F61: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F68; }
label_9F63:;
    /* $9F63: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEA; FLAG_NZ(g_cpu.A);
label_9F65:;
    /* $9F65: 8D */ maybe_trigger_vblank(4); nes_write(0x0553, g_cpu.A);
label_9F68:;
    /* $9F68: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x055B); FLAG_NZ(g_cpu.A);
label_9F6B:;
    /* $9F6B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF6; g_cpu.C=(g_cpu.A>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_9F6D:;
    /* $9F6D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F74; }
label_9F6F:;
    /* $9F6F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEA; FLAG_NZ(g_cpu.A);
label_9F71:;
    /* $9F71: 8D */ maybe_trigger_vblank(4); nes_write(0x055B, g_cpu.A);
label_9F74:;
    /* $9F74: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x53; FLAG_NZ(g_cpu.A);
label_9F76:;
    /* $9F76: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9F78:;
    /* $9F78: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9F7A:;
    /* $9F7A: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9F7C:;
    /* $9F7C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_9F7E:;
    /* $9F7E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_9F80:;
    /* $9F80: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_9F82:;
    /* $9F82: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_9F84:;
    /* $9F84: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9F86:;
    /* $9F86: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_9F88:;
    /* $9F88: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9F8A:;
    /* $9F8A: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_9F8D:;
    /* $9F8D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AFAE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFAE_b0");
#endif
label_AFAE:;
    /* $AFAE: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AFAF:;
    /* $AFAF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C8B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C8B_b0");
#endif
label_8C8B:;
    /* $8C8B: 20 */ maybe_trigger_vblank(6); func_84AF_b0();
label_8C8E:;
    /* $8C8E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_8C90:;
    /* $8C90: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8C92:;
    /* $8C92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC3; FLAG_NZ(g_cpu.A);
label_8C94:;
    /* $8C94: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8C95:;
    /* $8C95: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C98:;
    /* $8C98: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C9B:;
    /* $8C9B: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C9E:;
    /* $8C9E: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_8CA0:;
    /* $8CA0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8CA2:;
    /* $8CA2: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_8CA4:;
    /* $8CA4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8CA6:;
    /* $8CA6: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_8CA9:;
    /* $8CA9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_856A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_856A_b0");
#endif
label_856A:;
    /* $856A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_856B:;
    /* $856B: 8D */ maybe_trigger_vblank(4); nes_write(0x05B1, g_cpu.A);
label_856E:;
    /* $856E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8570:;
    /* $8570: 8D */ maybe_trigger_vblank(4); nes_write(0x05B4, g_cpu.A);
label_8573:;
    /* $8573: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8575:;
    /* $8575: 8D */ maybe_trigger_vblank(4); nes_write(0x05B2, g_cpu.A);
label_8578:;
    /* $8578: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_857A:;
    /* $857A: 8D */ maybe_trigger_vblank(4); nes_write(0x05B3, g_cpu.A);
label_857D:;
    /* $857D: 20 */ maybe_trigger_vblank(6); func_BBCB_b0();
label_8580:;
    /* $8580: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8540_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8540_b0");
#endif
label_8540:;
    /* $8540: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8542:;
    /* $8542: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8544:;
    /* $8544: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8546:;
    /* $8546: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8548:;
    /* $8548: 8D */ maybe_trigger_vblank(4); nes_write(0x02CA, g_cpu.A);
label_854B:;
    /* $854B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9F6_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9F6_b0");
#endif
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
}

void func_A938_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A938_b0");
#endif
label_A938:;
    /* $A938: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A93A:;
    /* $A93A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A952; }
label_A93C:;
    /* $A93C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A93F:;
    /* $A93F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A941:;
    /* $A941: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A94D; }
label_A943:;
    /* $A943: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_A945:;
    /* $A945: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A948:;
    /* $A948: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_A94A:;
    /* $A94A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A0_b0(); return;
label_A94D:;
    /* $A94D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_A94F:;
    /* $A94F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A99D_b0(); return;
label_A952:;
    /* $A952: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A954:;
    /* $A954: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A99D_b0(); return;
}

void func_8508_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8508_b0");
#endif
label_8508:;
    /* $8508: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8509:;
    /* $8509: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_850B:;
    /* $850B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_850D:;
    /* $850D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_850E:;
    /* $850E: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8510:;
    /* $8510: 20 */ maybe_trigger_vblank(6); func_8521_b0();
label_8513:;
    /* $8513: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9B0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B0_b0");
#endif
label_A9B0:;
    /* $A9B0: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x6918 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9B3:;
    /* $A9B3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9B5:;
    /* $A9B5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x04; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9B7:;
    /* $A9B7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9BA:;
    /* $A9BA: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_A9BD:;
    /* $A9BD: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_A9C0:;
    /* $A9C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A9C2:;
    /* $A9C2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9C6:;
    /* $A9C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A9C8:;
    /* $A9C8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9EA; }
label_A9CA:;
    /* $A9CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9CD:;
    /* $A9CD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E5; }
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9E5:;
    /* $A9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_A9E7:;
    /* $A9E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
label_A9EA:;
    /* $A9EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0446); FLAG_NZ(g_cpu.A);
label_A9ED:;
    /* $A9ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA1D; }
label_A9EF:;
    /* $A9EF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A9F4:;
    /* $A9F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA05; }
label_A9F6:;
    /* $A9F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9F8:;
    /* $A9F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AA10; }
label_A9FA:;
    /* $A9FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A9FC:;
    /* $A9FC: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9FF:;
    /* $A9FF: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA02:;
    /* $AA02: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA05:;
    /* $AA05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA0A:;
    /* $AA0A: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA0D:;
    /* $AA0D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA10:;
    /* $AA10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA15:;
    /* $AA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA1A:;
    /* $AA1A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA39_b0(); return;
label_AA1D:;
    /* $AA1D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA22:;
    /* $AA22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2E; }
label_AA24:;
    /* $AA24: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA29:;
    /* $AA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA2B:;
    /* $AA2B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_AA2E:;
    /* $AA2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_AA30:;
    /* $AA30: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AA33:;
    /* $AA33: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA34:;
    /* $AA34: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA36:;
    /* $AA36: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AA39:;
    /* $AA39: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0446); FLAG_NZ(g_cpu.X);
label_AA3C:;
    /* $AA3C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA56; }
label_AA3E:;
    /* $AA3E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA3F:;
    /* $AA3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA8C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA42:;
    /* $AA42: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AA45:;
    /* $AA45: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA46:;
    /* $AA46: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA48:;
    /* $AA48: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AA4B:;
    /* $AA4B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA4D:;
    /* $AA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.A);
label_AA50:;
    /* $AA50: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AA52:;
    /* $AA52: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AA55:;
    /* $AA55: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA56:;
    /* $AA56: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_AA59:;
    /* $AA59: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AA5B:;
    /* $AA5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA7F; }
label_AA5D:;
    /* $AA5D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AA5F:;
    /* $AA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA70; }
label_AA61:;
    /* $AA61: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA64:;
    /* $AA64: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA67:;
    /* $AA67: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA69:;
    /* $AA69: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA6C:;
    /* $AA6C: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA6F:;
    /* $AA6F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA70:;
    /* $AA70: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA73:;
    /* $AA73: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA76:;
    /* $AA76: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_AA78:;
    /* $AA78: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA7B:;
    /* $AA7B: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA7E:;
    /* $AA7E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA7F:;
    /* $AA7F: 8E */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.X);
label_AA82:;
    /* $AA82: 8E */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.X);
label_AA85:;
    /* $AA85: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_AA88:;
    /* $AA88: 8E */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.X);
label_AA8B:;
    /* $AA8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D92_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D92_b0");
#endif
label_8D92:;
    /* $8D92: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0525); FLAG_NZ(g_cpu.A);
label_8D95:;
    /* $8D95: 8D */ maybe_trigger_vblank(4); nes_write(0x0444, g_cpu.A);
label_8D98:;
    /* $8D98: 20 */ maybe_trigger_vblank(6); func_AC39_b0();
label_8D9B:;
    /* $8D9B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x051A); FLAG_NZ(g_cpu.A);
label_8D9E:;
    /* $8D9E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8D9F:;
    /* $8D9F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_8DA1:;
    /* $8DA1: 8D */ maybe_trigger_vblank(4); nes_write(0x0298, g_cpu.A);
label_8DA4:;
    /* $8DA4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_8DA6:;
    /* $8DA6: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_8DA8:;
    /* $8DA8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8DAA:;
    /* $8DAA: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8DAC:;
    /* $8DAC: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8DAF:;
    /* $8DAF: 20 */ maybe_trigger_vblank(6); func_920F_b0();
label_8DB2:;
    /* $8DB2: CE */ maybe_trigger_vblank(6); { uint16_t a=0x02B0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DB5:;
    /* $8DB5: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DB7:;
    /* $8DB7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8DA8;
    }
label_8DB9:;
    /* $8DB9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD6; FLAG_NZ(g_cpu.A);
label_8DBB:;
    /* $8DBB: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_8DBD:;
    /* $8DBD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8D; FLAG_NZ(g_cpu.A);
label_8DBF:;
    /* $8DBF: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_8DC1:;
    /* $8DC1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8DC2:;
    /* $8DC2: 20 */ maybe_trigger_vblank(6); func_8939_b0();
label_8DC5:;
    /* $8DC5: 20 */ maybe_trigger_vblank(6); func_8883_b0();
label_8DC8:;
    /* $8DC8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8DCA:;
    /* $8DCA: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8DCC:;
    /* $8DCC: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8DCF:;
    /* $8DCF: 20 */ maybe_trigger_vblank(6); func_E449();
label_8DD2:;
    /* $8DD2: 20 */ maybe_trigger_vblank(6); func_EFD1();
label_8DD5:;
    /* $8DD5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_994C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_994C_b0");
#endif
label_994C:;
    /* $994C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_994E:;
    /* $994E: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_9950:;
    /* $9950: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9952:;
    /* $9952: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_9954:;
    /* $9954: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9956:;
    /* $9956: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9959:;
    /* $9959: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_995B:;
    /* $995B: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_995E:;
    /* $995E: 20 */ maybe_trigger_vblank(6); func_9D03_b0();
label_9961:;
    /* $9961: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_9963:;
    /* $9963: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_9966:;
    /* $9966: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9968:;
    /* $9968: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_996B:;
    /* $996B: 20 */ maybe_trigger_vblank(6); func_9D03_b0();
label_996E:;
    /* $996E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02DF); FLAG_NZ(g_cpu.A);
label_9971:;
    /* $9971: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1C; g_cpu.C=(g_cpu.A>=0x1C)?1:0; FLAG_NZ(r&0xFF); }
label_9973:;
    /* $9973: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9977; }
label_9975:;
    /* $9975: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_9977:;
    /* $9977: 8D */ maybe_trigger_vblank(4); nes_write(0x0551, g_cpu.A);
label_997A:;
    /* $997A: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_997B:;
    /* $997B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D74 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_997E:;
    /* $997E: 8D */ maybe_trigger_vblank(4); nes_write(0x027C, g_cpu.A);
label_9981:;
    /* $9981: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_9983:;
    /* $9983: 8D */ maybe_trigger_vblank(4); nes_write(0x0264, g_cpu.A);
label_9986:;
    /* $9986: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_9988:;
    /* $9988: 8D */ maybe_trigger_vblank(4); nes_write(0x0294, g_cpu.A);
label_998B:;
    /* $998B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_998D:;
    /* $998D: 8D */ maybe_trigger_vblank(4); nes_write(0x02AC, g_cpu.A);
label_9990:;
    /* $9990: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0551); FLAG_NZ(g_cpu.X);
label_9993:;
    /* $9993: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D74 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9996:;
    /* $9996: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_9998:;
    /* $9998: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9999:;
    /* $9999: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_999B:;
    /* $999B: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_999D:;
    /* $999D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_999E:;
    /* $999E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9E17 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99A1:;
    /* $99A1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_99A2:;
    /* $99A2: 8D */ maybe_trigger_vblank(4); nes_write(0x011D, g_cpu.A);
label_99A5:;
    /* $99A5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9E17 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99A8:;
    /* $99A8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_99A9:;
    /* $99A9: 8D */ maybe_trigger_vblank(4); nes_write(0x011E, g_cpu.A);
label_99AC:;
    /* $99AC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9E17 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99AF:;
    /* $99AF: 8D */ maybe_trigger_vblank(4); nes_write(0x011F, g_cpu.A);
label_99B2:;
    /* $99B2: 20 */ maybe_trigger_vblank(6); func_809B_b0();
label_99B5:;
    /* $99B5: 20 */ maybe_trigger_vblank(6); func_8061_b0();
label_99B8:;
    /* $99B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_99BA:;
    /* $99BA: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_99BC:;
    /* $99BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_99BE:;
    /* $99BE: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_99C0:;
    /* $99C0: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_99C3:;
    /* $99C3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_99C5:;
    /* $99C5: 8D */ maybe_trigger_vblank(4); nes_write(0x0552, g_cpu.A);
label_99C8:;
    /* $99C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_99CA:;
    /* $99CA: 8D */ maybe_trigger_vblank(4); nes_write(0x054E, g_cpu.A);
label_99CD:;
    /* $99CD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_99CF:;
    /* $99CF: 8D */ maybe_trigger_vblank(4); nes_write(0x054F, g_cpu.A);
label_99D2:;
    /* $99D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_99D4:;
    /* $99D4: 8D */ maybe_trigger_vblank(4); nes_write(0x0550, g_cpu.A);
label_99D7:;
    /* $99D7: CE */ maybe_trigger_vblank(6); { uint16_t a=0x054E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99DA:;
    /* $99DA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_99F0; }
label_99DC:;
    /* $99DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_99DE:;
    /* $99DE: 8D */ maybe_trigger_vblank(4); nes_write(0x054E, g_cpu.A);
label_99E1:;
    /* $99E1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x054F); FLAG_NZ(g_cpu.A);
label_99E4:;
    /* $99E4: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_99E6:;
    /* $99E6: 8D */ maybe_trigger_vblank(4); nes_write(0x054F, g_cpu.A);
label_99E9:;
    /* $99E9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_99F0; }
label_99EB:;
    /* $99EB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x15; FLAG_NZ(g_cpu.A);
label_99ED:;
    /* $99ED: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_99F0:;
    /* $99F0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x054F); FLAG_NZ(g_cpu.A);
label_99F3:;
    /* $99F3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9A03; }
label_99F5:;
    /* $99F5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_99F7:;
    /* $99F7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_99F9:;
    /* $99F9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_99FB:;
    /* $99FB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_99FD:;
    /* $99FD: 20 */ maybe_trigger_vblank(6); func_9BCC_b0();
label_9A00:;
    /* $9A00: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9A0E_b0(); return;
label_9A03:;
    /* $9A03: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_9A05:;
    /* $9A05: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9A07:;
    /* $9A07: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9A09:;
    /* $9A09: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9A0B:;
    /* $9A0B: 20 */ maybe_trigger_vblank(6); func_9BCC_b0();
label_9A0E:;
    /* $9A0E: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0550; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A11:;
    /* $9A11: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99D7;
    }
label_9A13:;
    /* $9A13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A15:;
    /* $9A15: 8D */ maybe_trigger_vblank(4); nes_write(0x0552, g_cpu.A);
label_9A18:;
    /* $9A18: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2F; FLAG_NZ(g_cpu.A);
label_9A1A:;
    /* $9A1A: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9A1C:;
    /* $9A1C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9A1E:;
    /* $9A1E: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9A20:;
    /* $9A20: 20 */ maybe_trigger_vblank(6); func_9BCC_b0();
label_9A23:;
    /* $9A23: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_9A25:;
    /* $9A25: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_9A27:;
    /* $9A27: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_9A2A:;
    /* $9A2A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x96; FLAG_NZ(g_cpu.A);
label_9A2C:;
    /* $9A2C: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_9A2E:;
    /* $9A2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x32; FLAG_NZ(g_cpu.A);
label_9A30:;
    /* $9A30: 8D */ maybe_trigger_vblank(4); nes_write(0x0550, g_cpu.A);
label_9A33:;
    /* $9A33: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9A35:;
    /* $9A35: 8D */ maybe_trigger_vblank(4); nes_write(0x0552, g_cpu.A);
label_9A38:;
    /* $9A38: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A3A:;
    /* $9A3A: 8D */ maybe_trigger_vblank(4); nes_write(0x054E, g_cpu.A);
label_9A3D:;
    /* $9A3D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A3F:;
    /* $9A3F: 8D */ maybe_trigger_vblank(4); nes_write(0x054F, g_cpu.A);
label_9A42:;
    /* $9A42: CE */ maybe_trigger_vblank(6); { uint16_t a=0x054E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A45:;
    /* $9A45: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A5B; }
label_9A47:;
    /* $9A47: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A49:;
    /* $9A49: 8D */ maybe_trigger_vblank(4); nes_write(0x054E, g_cpu.A);
label_9A4C:;
    /* $9A4C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x054F); FLAG_NZ(g_cpu.A);
label_9A4F:;
    /* $9A4F: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_9A51:;
    /* $9A51: 8D */ maybe_trigger_vblank(4); nes_write(0x054F, g_cpu.A);
label_9A54:;
    /* $9A54: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A5B; }
label_9A56:;
    /* $9A56: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_9A58:;
    /* $9A58: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_9A5B:;
    /* $9A5B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x054F); FLAG_NZ(g_cpu.A);
label_9A5E:;
    /* $9A5E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A6E; }
label_9A60:;
    /* $9A60: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3B; FLAG_NZ(g_cpu.A);
label_9A62:;
    /* $9A62: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9A64:;
    /* $9A64: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9A66:;
    /* $9A66: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9A68:;
    /* $9A68: 20 */ maybe_trigger_vblank(6); func_9BDE_b0();
label_9A6B:;
    /* $9A6B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9A79_b0(); return;
label_9A6E:;
    /* $9A6E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x65; FLAG_NZ(g_cpu.A);
label_9A70:;
    /* $9A70: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9A72:;
    /* $9A72: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9A74:;
    /* $9A74: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9A76:;
    /* $9A76: 20 */ maybe_trigger_vblank(6); func_9BDE_b0();
label_9A79:;
    /* $9A79: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0550; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A7C:;
    /* $9A7C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A42;
    }
label_9A7E:;
    /* $9A7E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A80:;
    /* $9A80: 8D */ maybe_trigger_vblank(4); nes_write(0x0552, g_cpu.A);
label_9A83:;
    /* $9A83: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3B; FLAG_NZ(g_cpu.A);
label_9A85:;
    /* $9A85: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9A87:;
    /* $9A87: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9A89:;
    /* $9A89: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9A8B:;
    /* $9A8B: 20 */ maybe_trigger_vblank(6); func_9BDE_b0();
label_9A8E:;
    /* $9A8E: 20 */ maybe_trigger_vblank(6); func_9E44_b0();
label_9A91:;
    /* $9A91: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_9A93:;
    /* $9A93: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_9A95:;
    /* $9A95: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_9A98:;
    /* $9A98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8F; FLAG_NZ(g_cpu.A);
label_9A9A:;
    /* $9A9A: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9A9C:;
    /* $9A9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9A9E:;
    /* $9A9E: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9AA0:;
    /* $9AA0: 20 */ maybe_trigger_vblank(6); func_9BDE_b0();
label_9AA3:;
    /* $9AA3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9AA5:;
    /* $9AA5: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_9AA7:;
    /* $9AA7: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_9AAA:;
    /* $9AAA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB9; FLAG_NZ(g_cpu.A);
label_9AAC:;
    /* $9AAC: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9AAE:;
    /* $9AAE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9AB0:;
    /* $9AB0: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9AB2:;
    /* $9AB2: 20 */ maybe_trigger_vblank(6); func_9BDE_b0();
label_9AB5:;
    /* $9AB5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_9AB7:;
    /* $9AB7: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_9ABA:;
    /* $9ABA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9ABC:;
    /* $9ABC: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_9ABE:;
    /* $9ABE: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_9AC1:;
    /* $9AC1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_9AC3:;
    /* $9AC3: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9AC5:;
    /* $9AC5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9AC7:;
    /* $9AC7: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9AC9:;
    /* $9AC9: 20 */ maybe_trigger_vblank(6); func_9BF0_b0();
label_9ACC:;
    /* $9ACC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_9ACE:;
    /* $9ACE: 8D */ maybe_trigger_vblank(4); nes_write(0x0265, g_cpu.A);
label_9AD1:;
    /* $9AD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_9AD3:;
    /* $9AD3: 8D */ maybe_trigger_vblank(4); nes_write(0x027D, g_cpu.A);
label_9AD6:;
    /* $9AD6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA0; FLAG_NZ(g_cpu.A);
label_9AD8:;
    /* $9AD8: 8D */ maybe_trigger_vblank(4); nes_write(0x02AD, g_cpu.A);
label_9ADB:;
    /* $9ADB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x98; FLAG_NZ(g_cpu.A);
label_9ADD:;
    /* $9ADD: 8D */ maybe_trigger_vblank(4); nes_write(0x0295, g_cpu.A);
label_9AE0:;
    /* $9AE0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9AE2:;
    /* $9AE2: 8D */ maybe_trigger_vblank(4); nes_write(0x054E, g_cpu.A);
label_9AE5:;
    /* $9AE5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9AE7:;
    /* $9AE7: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_9AE9:;
    /* $9AE9: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_9AEC:;
    /* $9AEC: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0295; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9AEF:;
    /* $9AEF: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0295; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9AF2:;
    /* $9AF2: CE */ maybe_trigger_vblank(6); { uint16_t a=0x054E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9AF5:;
    /* $9AF5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9AE5;
    }
label_9AF7:;
    /* $9AF7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9AF9:;
    /* $9AF9: 8D */ maybe_trigger_vblank(4); nes_write(0x054E, g_cpu.A);
label_9AFC:;
    /* $9AFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9AFE:;
    /* $9AFE: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_9B00:;
    /* $9B00: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_9B03:;
    /* $9B03: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0294; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B06:;
    /* $9B06: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0294; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B09:;
    /* $9B09: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0295; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B0C:;
    /* $9B0C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0295; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B0F:;
    /* $9B0F: CE */ maybe_trigger_vblank(6); { uint16_t a=0x054E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B12:;
    /* $9B12: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9AFC;
    }
label_9B14:;
    /* $9B14: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9B16:;
    /* $9B16: 8D */ maybe_trigger_vblank(4); nes_write(0x0265, g_cpu.A);
label_9B19:;
    /* $9B19: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_9B1B:;
    /* $9B1B: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9B1D:;
    /* $9B1D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9B1F:;
    /* $9B1F: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9B21:;
    /* $9B21: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_9B23:;
    /* $9B23: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_9B25:;
    /* $9B25: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x93; FLAG_NZ(g_cpu.A);
label_9B27:;
    /* $9B27: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_9B29:;
    /* $9B29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9B2B:;
    /* $9B2B: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_9B2D:;
    /* $9B2D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9B2F:;
    /* $9B2F: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_9B32:;
    /* $9B32: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB9; FLAG_NZ(g_cpu.A);
label_9B34:;
    /* $9B34: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9B36:;
    /* $9B36: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9B38:;
    /* $9B38: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9B3A:;
    /* $9B3A: 20 */ maybe_trigger_vblank(6); func_9BDE_b0();
label_9B3D:;
    /* $9B3D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9B3F:;
    /* $9B3F: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_9B41:;
    /* $9B41: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_9B44:;
    /* $9B44: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9B46:;
    /* $9B46: 8D */ maybe_trigger_vblank(4); nes_write(0x0264, g_cpu.A);
label_9B49:;
    /* $9B49: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8F; FLAG_NZ(g_cpu.A);
label_9B4B:;
    /* $9B4B: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9B4D:;
    /* $9B4D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9B4F:;
    /* $9B4F: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9B51:;
    /* $9B51: 20 */ maybe_trigger_vblank(6); func_9BDE_b0();
label_9B54:;
    /* $9B54: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_9B56:;
    /* $9B56: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_9B58:;
    /* $9B58: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_9B5B:;
    /* $9B5B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3B; FLAG_NZ(g_cpu.A);
label_9B5D:;
    /* $9B5D: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9B5F:;
    /* $9B5F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9B61:;
    /* $9B61: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9B63:;
    /* $9B63: 20 */ maybe_trigger_vblank(6); func_9BDE_b0();
label_9B66:;
    /* $9B66: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B68:;
    /* $9B68: 8D */ maybe_trigger_vblank(4); nes_write(0x0264, g_cpu.A);
label_9B6B:;
    /* $9B6B: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0551); FLAG_NZ(g_cpu.X);
label_9B6E:;
    /* $9B6E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D74 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B71:;
    /* $9B71: 8D */ maybe_trigger_vblank(4); nes_write(0x027C, g_cpu.A);
label_9B74:;
    /* $9B74: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9B76:;
    /* $9B76: 8D */ maybe_trigger_vblank(4); nes_write(0x02AC, g_cpu.A);
label_9B79:;
    /* $9B79: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9B7B:;
    /* $9B7B: 8D */ maybe_trigger_vblank(4); nes_write(0x0294, g_cpu.A);
label_9B7E:;
    /* $9B7E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9B80:;
    /* $9B80: 8D */ maybe_trigger_vblank(4); nes_write(0x054E, g_cpu.A);
label_9B83:;
    /* $9B83: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9B85:;
    /* $9B85: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_9B87:;
    /* $9B87: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_9B8A:;
    /* $9B8A: CE */ maybe_trigger_vblank(6); { uint16_t a=0x02AC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B8D:;
    /* $9B8D: CE */ maybe_trigger_vblank(6); { uint16_t a=0x054E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B90:;
    /* $9B90: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B83;
    }
label_9B92:;
    /* $9B92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_9B94:;
    /* $9B94: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9B96:;
    /* $9B96: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9D; FLAG_NZ(g_cpu.A);
label_9B98:;
    /* $9B98: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9B9A:;
    /* $9B9A: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0551); FLAG_NZ(g_cpu.X);
label_9B9D:;
    /* $9B9D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D74 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BA0:;
    /* $9BA0: 20 */ maybe_trigger_vblank(6); func_8939_b0();
label_9BA3:;
    /* $9BA3: 20 */ maybe_trigger_vblank(6); func_9E44_b0();
label_9BA6:;
    /* $9BA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5A; FLAG_NZ(g_cpu.A);
label_9BA8:;
    /* $9BA8: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_9BAB:;
    /* $9BAB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9BAD:;
    /* $9BAD: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_9BAF:;
    /* $9BAF: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_9BB2:;
    /* $9BB2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0689); FLAG_NZ(g_cpu.A);
label_9BB5:;
    /* $9BB5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x5A; g_cpu.C=(g_cpu.A>=0x5A)?1:0; FLAG_NZ(r&0xFF); }
label_9BB7:;
    /* $9BB7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9BAB;
    }
label_9BB9:;
    /* $9BB9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_9BBB:;
    /* $9BBB: 85 */ maybe_trigger_vblank(3); nes_write(0x75, g_cpu.A);
label_9BBD:;
    /* $9BBD: 20 */ maybe_trigger_vblank(6); func_CF23();
label_9BC0:;
    /* $9BC0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9BC2:;
    /* $9BC2: 8D */ maybe_trigger_vblank(4); nes_write(0x0248, g_cpu.A);
label_9BC5:;
    /* $9BC5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85AA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AA_b0");
#endif
label_85AA:;
    /* $85AA: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03A9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_85AD:;
    /* $85AD: 8D */ maybe_trigger_vblank(4); nes_write(0x027A, g_cpu.A);
label_85B0:;
    /* $85B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D2; }
label_85B5:;
    /* $85B5: 20 */ maybe_trigger_vblank(6); func_8564_b0();
label_85B8:;
    /* $85B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_85BA:;
    /* $85BA: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85BC:;
    /* $85BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85C0:;
    /* $85C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85C2:;
    /* $85C2: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85C4:;
    /* $85C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85C6:;
    /* $85C6: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_85D2:;
    /* $85D2: 20 */ maybe_trigger_vblank(6); func_8581_b0();
label_85D5:;
    /* $85D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_85D7:;
    /* $85D7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x86; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85DD:;
    /* $85DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85DF:;
    /* $85DF: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85E1:;
    /* $85E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9CF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9CF_b0");
#endif
label_A9CF:;
    /* $A9CF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0445); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
}

void func_85D7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85D7_b0");
#endif
label_85D7:;
    /* $85D7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x86; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85DD:;
    /* $85DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85DF:;
    /* $85DF: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85E1:;
    /* $85E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85B0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85B0_b0");
#endif
label_85B0:;
    /* $85B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D2; }
label_85B5:;
    /* $85B5: 20 */ maybe_trigger_vblank(6); func_8564_b0();
label_85B8:;
    /* $85B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_85BA:;
    /* $85BA: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85BC:;
    /* $85BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_85BE:;
    /* $85BE: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85C0:;
    /* $85C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85C2:;
    /* $85C2: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85C4:;
    /* $85C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85C6:;
    /* $85C6: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85C8:;
    /* $85C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85CC:;
    /* $85CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_85D2:;
    /* $85D2: 20 */ maybe_trigger_vblank(6); func_8581_b0();
label_85D5:;
    /* $85D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_85D7:;
    /* $85D7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x86; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_85DD:;
    /* $85DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_85DF:;
    /* $85DF: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_85E1:;
    /* $85E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_85E3:;
    /* $85E3: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_85E5:;
    /* $85E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_85E7:;
    /* $85E7: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85CE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85CE_b0");
#endif
label_85CE:;
    /* $85CE: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85D1:;
    /* $85D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85E0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85E0_b0");
#endif
label_85E0:;
    /* $85E0: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA9); FLAG_NZ(g_cpu.Y);
label_85E2:;
    /* $85E2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85E4:;
    /* $85E4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_85E6:;
    /* $85E6: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xA685); FLAG_NZ(g_cpu.A);
label_85E9:;
    /* $85E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_85EB:;
    /* $85EB: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_85EE:;
    /* $85EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_852C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_852C_b0");
#endif
label_852C:;
    /* $852C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC9); FLAG_NZ(g_cpu.A);
label_852E:;
    /* $852E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_852F:;
    /* $852F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8538; }
label_8531:;
    /* $8531: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8532:;
    /* $8532: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8533:;
    /* $8533: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8535:;
    /* $8535: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_852D_b0(); return;
label_8538:;
    /* $8538: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_853A:;
    /* $853A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_853B:;
    /* $853B: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_853D:;
    /* $853D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8527_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8527_b0");
#endif
label_8527:;
    /* $8527: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_8529:;
    /* $8529: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_852B:;
    /* $852B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_852D:;
    /* $852D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_852F:;
    /* $852F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8538; }
label_8531:;
    /* $8531: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8532:;
    /* $8532: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8533:;
    /* $8533: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8535:;
    /* $8535: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_852D;
label_8538:;
    /* $8538: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_853A:;
    /* $853A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_853B:;
    /* $853B: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_853D:;
    /* $853D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8531_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8531_b0");
#endif
label_8531:;
    /* $8531: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8532:;
    /* $8532: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8533:;
    /* $8533: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8535:;
    /* $8535: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_852D_b0(); return;
}

void func_B613_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B613_b0");
#endif
label_B613:;
    /* $B613: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B615:;
    /* $B615: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B618:;
    /* $B618: 20 */ maybe_trigger_vblank(6); func_B61C_b0();
label_B61B:;
    /* $B61B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A940_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A940_b0");
#endif
label_A940:;
    /* $A940: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A942:;
    /* $A942: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A943:;
    /* $A943: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF4; FLAG_NZ(g_cpu.A);
label_A945:;
    /* $A945: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A948:;
    /* $A948: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_A94A:;
    /* $A94A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A0_b0(); return;
}

void func_851F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_851F_b0");
#endif
label_851F:;
    /* $851F: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x60); FLAG_NZ(g_cpu.Y);
label_8521:;
    /* $8521: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8523:;
    /* $8523: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_8525:;
    /* $8525: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8527:;
    /* $8527: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_8529:;
    /* $8529: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_852B:;
    /* $852B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_852D:;
    /* $852D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_852F:;
    /* $852F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8538; }
label_8531:;
    /* $8531: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8532:;
    /* $8532: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8533:;
    /* $8533: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8535:;
    /* $8535: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_852D;
label_8538:;
    /* $8538: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_853A:;
    /* $853A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_853B:;
    /* $853B: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_853D:;
    /* $853D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A975_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A975_b0");
#endif
label_A975:;
    /* $A975: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A976:;
    /* $A976: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x8D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A978:;
    /* $A978: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4C04 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A97B:;
    /* $A97B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xA9); FLAG_NZ(g_cpu.X);
label_A97D:;
    /* $A97D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A97F:;
    /* $A97F: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_A982:;
    /* $A982: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A984:;
    /* $A984: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_A987:;
    /* $A987: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A6_b0(); return;
}

void func_A9CE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9CE_b0");
#endif
label_A9CE:;
    /* $A9CE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xAD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D0:;
    /* $A9D0: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A9D2:;
    /* $A9D2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A9D4:;
    /* $A9D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D6:;
    /* $A9D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF3; FLAG_NZ(g_cpu.A);
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
label_A9E0:;
    /* $A9E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9E2:;
    /* $A9E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA30_b0(); return;
}

void func_A560_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A560_b0");
#endif
label_A560:;
    /* $A560: 8D */ maybe_trigger_vblank(4); nes_write(0x008E, g_cpu.A);
label_A563:;
    /* $A563: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA563); return;
}

void func_8D75_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D75_b0");
#endif
label_8D75:;
    /* $8D75: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_8D77:;
    /* $8D77: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D7A:;
    /* $8D7A: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D7D:;
    /* $8D7D: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_8D7F:;
    /* $8D7F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D81:;
    /* $8D81: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_8D83:;
    /* $8D83: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D85:;
    /* $8D85: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_8D88:;
    /* $8D88: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8D8B:;
    /* $8D8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D4A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D4A_b0");
#endif
label_8D4A:;
    /* $8D4A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x6D); FLAG_NZ(g_cpu.A);
label_8D4C:;
    /* $8D4C: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_8D4E:;
    /* $8D4E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8D4F:;
    /* $8D4F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8D50:;
    /* $8D50: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8D51:;
    /* $8D51: 9D */ maybe_trigger_vblank(5); nes_write((0x0294 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8D54:;
    /* $8D54: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8D56:;
    /* $8D56: 9D */ maybe_trigger_vblank(5); nes_write((0x027C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8D59:;
    /* $8D59: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_8D5B:;
    /* $8D5B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8D62; }
label_8D5D:;
    /* $8D5D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_8D5F:;
    /* $8D5F: 9D */ maybe_trigger_vblank(5); nes_write((0x027C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8D62:;
    /* $8D62: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2E; FLAG_NZ(g_cpu.A);
label_8D64:;
    /* $8D64: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_8D66:;
    /* $8D66: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8E; FLAG_NZ(g_cpu.A);
label_8D68:;
    /* $8D68: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_8D6A:;
    /* $8D6A: 20 */ maybe_trigger_vblank(6); func_84AF_b0();
label_8D6D:;
    /* $8D6D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_8D6F:;
    /* $8D6F: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8D71:;
    /* $8D71: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_8D73:;
    /* $8D73: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8D74:;
    /* $8D74: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D77:;
    /* $8D77: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D7A:;
    /* $8D7A: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D7D:;
    /* $8D7D: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_8D7F:;
    /* $8D7F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D81:;
    /* $8D81: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_8D83:;
    /* $8D83: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D85:;
    /* $8D85: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_8D88:;
    /* $8D88: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8D8B:;
    /* $8D8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D77_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D77_b0");
#endif
label_8D77:;
    /* $8D77: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D7A:;
    /* $8D7A: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0525); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D7D:;
    /* $8D7D: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_8D7F:;
    /* $8D7F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D81:;
    /* $8D81: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_8D83:;
    /* $8D83: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8D85:;
    /* $8D85: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_8D88:;
    /* $8D88: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8D8B:;
    /* $8D8B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8A4C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A4C_b0");
#endif
label_8A4C:;
    /* $8A4C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8A4E:;
    /* $8A4E: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_8A51:;
    /* $8A51: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0536); FLAG_NZ(g_cpu.A);
label_8A54:;
    /* $8A54: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A5E; }
label_8A56:;
    /* $8A56: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8A58:;
    /* $8A58: 8D */ maybe_trigger_vblank(4); nes_write(0x0551, g_cpu.A);
label_8A5B:;
    /* $8A5B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8A73_b0(); return;
label_8A5E:;
    /* $8A5E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0535); FLAG_NZ(g_cpu.A);
label_8A61:;
    /* $8A61: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8A63:;
    /* $8A63: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8A6D; }
label_8A65:;
    /* $8A65: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8A67:;
    /* $8A67: 8D */ maybe_trigger_vblank(4); nes_write(0x0551, g_cpu.A);
label_8A6A:;
    /* $8A6A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8A73_b0(); return;
label_8A6D:;
    /* $8A6D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8A6E:;
    /* $8A6E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A70:;
    /* $8A70: 8D */ maybe_trigger_vblank(4); nes_write(0x0551, g_cpu.A);
label_8A73:;
    /* $8A73: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8A75:;
    /* $8A75: 8D */ maybe_trigger_vblank(4); nes_write(0x0567, g_cpu.A);
label_8A78:;
    /* $8A78: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A7A:;
    /* $8A7A: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_8A7D:;
    /* $8A7D: 8D */ maybe_trigger_vblank(4); nes_write(0x0525, g_cpu.A);
label_8A80:;
    /* $8A80: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8A82:;
    /* $8A82: 8D */ maybe_trigger_vblank(4); nes_write(0x054E, g_cpu.A);
label_8A85:;
    /* $8A85: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_8A87:;
    /* $8A87: 8D */ maybe_trigger_vblank(4); nes_write(0x0527, g_cpu.A);
label_8A8A:;
    /* $8A8A: 20 */ maybe_trigger_vblank(6); func_8C6D_b0();
label_8A8D:;
    /* $8A8D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8A8F:;
    /* $8A8F: 8D */ maybe_trigger_vblank(4); nes_write(0x054F, g_cpu.A);
label_8A92:;
    /* $8A92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A94:;
    /* $8A94: 8D */ maybe_trigger_vblank(4); nes_write(0x0550, g_cpu.A);
label_8A97:;
    /* $8A97: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8A99:;
    /* $8A99: 20 */ maybe_trigger_vblank(6); func_8C4C_b0();
label_8A9C:;
    /* $8A9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_8A9E:;
    /* $8A9E: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8AA1:;
    /* $8AA1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0550); FLAG_NZ(g_cpu.A);
label_8AA4:;
    /* $8AA4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8ABA; }
label_8AA6:;
    /* $8AA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8AA8:;
    /* $8AA8: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8AAB:;
    /* $8AAB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_8AAD:;
    /* $8AAD: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8AAF:;
    /* $8AAF: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8AB2:;
    /* $8AB2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8AB4:;
    /* $8AB4: 8D */ maybe_trigger_vblank(4); nes_write(0x0550, g_cpu.A);
label_8AB7:;
    /* $8AB7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8ACE_b0(); return;
label_8ABA:;
    /* $8ABA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8ABC:;
    /* $8ABC: 8D */ maybe_trigger_vblank(4); nes_write(0x054F, g_cpu.A);
label_8ABF:;
    /* $8ABF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8AC1:;
    /* $8AC1: 8D */ maybe_trigger_vblank(4); nes_write(0x0550, g_cpu.A);
label_8AC4:;
    /* $8AC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_8AC6:;
    /* $8AC6: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8AC9:;
    /* $8AC9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_8ACB:;
    /* $8ACB: 20 */ maybe_trigger_vblank(6); func_8C4C_b0();
label_8ACE:;
    /* $8ACE: 20 */ maybe_trigger_vblank(6); func_91C9_b0();
label_8AD1:;
    /* $8AD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8AD3:;
    /* $8AD3: 8D */ maybe_trigger_vblank(4); nes_write(0x0530, g_cpu.A);
label_8AD6:;
    /* $8AD6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0551); FLAG_NZ(g_cpu.A);
label_8AD9:;
    /* $8AD9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8ADA:;
    /* $8ADA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8ADB:;
    /* $8ADB: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8ADC:;
    /* $8ADC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0550); FLAG_NZ(g_cpu.A);
label_8ADF:;
    /* $8ADF: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8FB8 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8AE2:;
    /* $8AE2: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_8B17; }
label_8AE4:;
    /* $8AE4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8AE6:;
    /* $8AE6: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8AE9:;
    /* $8AE9: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8AEC:;
    /* $8AEC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AEE:;
    /* $8AEE: 20 */ maybe_trigger_vblank(6); func_8CB0_b0();
label_8AF1:;
    /* $8AF1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AF3:;
    /* $8AF3: 20 */ maybe_trigger_vblank(6); func_8CDA_b0();
label_8AF6:;
    /* $8AF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AF8:;
    /* $8AF8: 20 */ maybe_trigger_vblank(6); func_8D33_b0();
label_8AFB:;
    /* $8AFB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8AFD:;
    /* $8AFD: 20 */ maybe_trigger_vblank(6); func_8D33_b0();
label_8B00:;
    /* $8B00: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2E; FLAG_NZ(g_cpu.A);
label_8B02:;
    /* $8B02: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8B05:;
    /* $8B05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_8B07:;
    /* $8B07: 8D */ maybe_trigger_vblank(4); nes_write(0x0280, g_cpu.A);
label_8B0A:;
    /* $8B0A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA0; FLAG_NZ(g_cpu.A);
label_8B0C:;
    /* $8B0C: 8D */ maybe_trigger_vblank(4); nes_write(0x02B0, g_cpu.A);
label_8B0F:;
    /* $8B0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8B11:;
    /* $8B11: 20 */ maybe_trigger_vblank(6); func_8D8C_b0();
label_8B14:;
    /* $8B14: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8B17:;
    /* $8B17: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8B18:;
    /* $8B18: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8FB8 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8B1B:;
    /* $8B1B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8B4B; }
label_8B1D:;
    /* $8B1D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8B1F:;
    /* $8B1F: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8B22:;
    /* $8B22: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8B25:;
    /* $8B25: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B27:;
    /* $8B27: 20 */ maybe_trigger_vblank(6); func_8CB0_b0();
label_8B2A:;
    /* $8B2A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B2C:;
    /* $8B2C: 20 */ maybe_trigger_vblank(6); func_8CDA_b0();
label_8B2F:;
    /* $8B2F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8B31:;
    /* $8B31: 20 */ maybe_trigger_vblank(6); func_8CDA_b0();
label_8B34:;
    /* $8B34: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_8B36:;
    /* $8B36: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8B39:;
    /* $8B39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8B3B:;
    /* $8B3B: 8D */ maybe_trigger_vblank(4); nes_write(0x0280, g_cpu.A);
label_8B3E:;
    /* $8B3E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_8B40:;
    /* $8B40: 8D */ maybe_trigger_vblank(4); nes_write(0x02B0, g_cpu.A);
label_8B43:;
    /* $8B43: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8B45:;
    /* $8B45: 20 */ maybe_trigger_vblank(6); func_8D8C_b0();
label_8B48:;
    /* $8B48: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8B4B:;
    /* $8B4B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8B4C:;
    /* $8B4C: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8FB8 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8B4F:;
    /* $8B4F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8B7A; }
label_8B51:;
    /* $8B51: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8B53:;
    /* $8B53: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8B56:;
    /* $8B56: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8B59:;
    /* $8B59: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B5B:;
    /* $8B5B: 20 */ maybe_trigger_vblank(6); func_8CB0_b0();
label_8B5E:;
    /* $8B5E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8B60:;
    /* $8B60: 20 */ maybe_trigger_vblank(6); func_8CB0_b0();
label_8B63:;
    /* $8B63: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_8B65:;
    /* $8B65: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8B68:;
    /* $8B68: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8B6A:;
    /* $8B6A: 8D */ maybe_trigger_vblank(4); nes_write(0x0280, g_cpu.A);
label_8B6D:;
    /* $8B6D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_8B6F:;
    /* $8B6F: 8D */ maybe_trigger_vblank(4); nes_write(0x02B0, g_cpu.A);
label_8B72:;
    /* $8B72: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8B74:;
    /* $8B74: 20 */ maybe_trigger_vblank(6); func_8D8C_b0();
label_8B77:;
    /* $8B77: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8B7A:;
    /* $8B7A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8B7B:;
    /* $8B7B: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8FB8 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8B7E:;
    /* $8B7E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8BA4; }
label_8B80:;
    /* $8B80: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8B82:;
    /* $8B82: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8B85:;
    /* $8B85: 20 */ maybe_trigger_vblank(6); func_8C39_b0();
label_8B88:;
    /* $8B88: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_8B8A:;
    /* $8B8A: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8B8D:;
    /* $8B8D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_8B8F:;
    /* $8B8F: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_8B92:;
    /* $8B92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B94:;
    /* $8B94: 8D */ maybe_trigger_vblank(4); nes_write(0x0280, g_cpu.A);
label_8B97:;
    /* $8B97: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_8B99:;
    /* $8B99: 8D */ maybe_trigger_vblank(4); nes_write(0x02B0, g_cpu.A);
label_8B9C:;
    /* $8B9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B9E:;
    /* $8B9E: 20 */ maybe_trigger_vblank(6); func_8D8C_b0();
label_8BA1:;
    /* $8BA1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8BA4:;
    /* $8BA4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0551); FLAG_NZ(g_cpu.A);
label_8BA7:;
    /* $8BA7: 20 */ maybe_trigger_vblank(6); func_8C7F_b0();
label_8BAA:;
    /* $8BAA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_8BAC:;
    /* $8BAC: 8D */ maybe_trigger_vblank(4); nes_write(0x05AB, g_cpu.A);
label_8BAF:;
    /* $8BAF: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0551); FLAG_NZ(g_cpu.X);
label_8BB2:;
    /* $8BB2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8FB1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BB5:;
    /* $8BB5: 8D */ maybe_trigger_vblank(4); nes_write(0x05B4, g_cpu.A);
label_8BB8:;
    /* $8BB8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0525); FLAG_NZ(g_cpu.A);
label_8BBB:;
    /* $8BBB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BD0; }
label_8BBD:;
    /* $8BBD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8BBF:;
    /* $8BBF: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BC2:;
    /* $8BC2: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BC5:;
    /* $8BC5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8BC7:;
    /* $8BC7: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BCA:;
    /* $8BCA: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BCD:;
    /* $8BCD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8BD0:;
    /* $8BD0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8BD2:;
    /* $8BD2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BDF; }
label_8BD4:;
    /* $8BD4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8BD6:;
    /* $8BD6: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BD9:;
    /* $8BD9: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BDC:;
    /* $8BDC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8BDF:;
    /* $8BDF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8BE1:;
    /* $8BE1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BF6; }
label_8BE3:;
    /* $8BE3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8BE5:;
    /* $8BE5: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BE8:;
    /* $8BE8: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BEB:;
    /* $8BEB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_8BED:;
    /* $8BED: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BF0:;
    /* $8BF0: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BF3:;
    /* $8BF3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_8BFE_b0(); return;
label_8BF6:;
    /* $8BF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_8BF8:;
    /* $8BF8: 8D */ maybe_trigger_vblank(4); nes_write(0x05AA, g_cpu.A);
label_8BFB:;
    /* $8BFB: 20 */ maybe_trigger_vblank(6); func_BBC1_b0();
label_8BFE:;
    /* $8BFE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8C00:;
    /* $8C00: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8C02:;
    /* $8C02: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8C05:;
    /* $8C05: 20 */ maybe_trigger_vblank(6); func_920F_b0();
label_8C08:;
    /* $8C08: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0530); FLAG_NZ(g_cpu.A);
label_8C0B:;
    /* $8C0B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8C0D:;
    /* $8C0D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8BFE;
    }
label_8C0F:;
    /* $8C0F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0525; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C12:;
    /* $8C12: CE */ maybe_trigger_vblank(6); { uint16_t a=0x054E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C15:;
    /* $8C15: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C1A; }
label_8C17:;
    /* $8C17: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_8A8A;
label_8C1A:;
    /* $8C1A: 20 */ maybe_trigger_vblank(6); func_8C6D_b0();
label_8C1D:;
    /* $8C1D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8C1F:;
    /* $8C1F: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8C21:;
    /* $8C21: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8C24:;
    /* $8C24: 20 */ maybe_trigger_vblank(6); func_D16E();
label_8C27:;
    /* $8C27: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x024B); FLAG_NZ(g_cpu.A);
label_8C2A:;
    /* $8C2A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8C2C:;
    /* $8C2C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8C1D;
    }
label_8C2E:;
    /* $8C2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C30:;
    /* $8C30: 8D */ maybe_trigger_vblank(4); nes_write(0x0567, g_cpu.A);
label_8C33:;
    /* $8C33: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8C35:;
    /* $8C35: 8D */ maybe_trigger_vblank(4); nes_write(0x0248, g_cpu.A);
label_8C38:;
    /* $8C38: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9B9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B9_b0");
#endif
label_A9B9:;
    /* $A9B9: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x8D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9BB:;
    /* $A9BB: EA */ maybe_trigger_vblank(2); /* NOP */
label_A9BC:;
    /* $A9BC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x20); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9BE:;
    /* $A9BE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xA0A8); FLAG_NZ(g_cpu.A);
label_A9C1:;
    /* $A9C1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C1); return;
}

void func_A9D8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9D8_b0");
#endif
label_A9D8:;
    /* $A9D8: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_A9DB:;
    /* $A9DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A9DD:;
    /* $A9DD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_AA33_b0(); return;
}

void func_8512_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8512_b0");
#endif
label_8512:;
    /* $8512: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8514_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8514_b0");
#endif
label_8514:;
    /* $8514: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8516:;
    /* $8516: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8518:;
    /* $8518: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_851A:;
    /* $851A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_851C:;
    /* $851C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_851E:;
    /* $851E: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8520:;
    /* $8520: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8DC0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DC0_b0");
#endif
label_8DC0:;
    /* $8DC0: 84 */ maybe_trigger_vblank(3); nes_write(0x68, g_cpu.Y);
label_8DC2:;
    /* $8DC2: 20 */ maybe_trigger_vblank(6); func_8939_b0();
label_8DC5:;
    /* $8DC5: 20 */ maybe_trigger_vblank(6); func_8883_b0();
label_8DC8:;
    /* $8DC8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8DCA:;
    /* $8DCA: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8DCC:;
    /* $8DCC: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8DCF:;
    /* $8DCF: 20 */ maybe_trigger_vblank(6); func_E449();
label_8DD2:;
    /* $8DD2: 20 */ maybe_trigger_vblank(6); func_EFD1();
label_8DD5:;
    /* $8DD5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A998_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A998_b0");
#endif
label_A998:;
    /* $A998: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_A9A0_b0(); return;
}

void func_A912_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A912_b0");
#endif
label_A912:;
    /* $A912: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A914:;
    /* $A914: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A981_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A981_b0");
#endif
label_A981:;
    /* $A981: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A983:;
    /* $A983: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA983); return;
}

void func_8472_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8472_b0");
#endif
label_8472:;
    /* $8472: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8474:;
    /* $8474: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8476:;
    /* $8476: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_8479:;
    /* $8479: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA4); FLAG_NZ(g_cpu.A);
label_847B:;
    /* $847B: 8D */ maybe_trigger_vblank(4); nes_write(0x02CB, g_cpu.A);
label_847E:;
    /* $847E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_8480:;
    /* $8480: 8D */ maybe_trigger_vblank(4); nes_write(0x02CC, g_cpu.A);
label_8483:;
    /* $8483: 20 */ maybe_trigger_vblank(6); func_E449();
label_8486:;
    /* $8486: 20 */ maybe_trigger_vblank(6); func_EFD1();
label_8489:;
    /* $8489: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB4); FLAG_NZ(g_cpu.A);
label_848B:;
    /* $848B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_848C:;
    /* $848C: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0552); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_848F:;
    /* $848F: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_8491:;
    /* $8491: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0567); FLAG_NZ(g_cpu.A);
label_8494:;
    /* $8494: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8499; }
label_8496:;
    /* $8496: 20 */ maybe_trigger_vblank(6); func_920F_b0();
label_8499:;
    /* $8499: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_849B:;
    /* $849B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_849C:;
    /* $849C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x40 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x40); g_cpu.A=r&0xFF; }
label_849E:;
    /* $849E: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_84A0:;
    /* $84A0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84A4; }
label_84A2:;
    /* $84A2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xA4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84A4:;
    /* $84A4: 20 */ maybe_trigger_vblank(6); func_84AF_b0();
label_84A7:;
    /* $84A7: 20 */ maybe_trigger_vblank(6); func_84AF_b0();
label_84AA:;
    /* $84AA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xA3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84AC:;
    /* $84AC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8472;
    }
label_84AE:;
    /* $84AE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B01B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B01B_b0");
#endif
label_B01B:;
    /* $B01B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xAFC6); return; }
label_B01D:;
    /* $B01D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B01E:;
    /* $B01E: 8D */ maybe_trigger_vblank(4); nes_write(0x0544, g_cpu.A);
label_B021:;
    /* $B021: 20 */ maybe_trigger_vblank(6); func_F750();
label_B024:;
    /* $B024: 20 */ maybe_trigger_vblank(6); func_B4D0_b0();
label_B027:;
    /* $B027: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B048_b0(); return;
}

void func_B4D0_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B4DC;
    }
label_B4D0:;
    /* $B4D0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_B4D3:;
    /* $B4D3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4DA; }
label_B4D5:;
    /* $B4D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B4D7:;
    /* $B4D7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B4DC_b0(); return;
label_B4DA:;
    /* $B4DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B4DC:;
    /* $B4DC: 20 */ maybe_trigger_vblank(6); func_D124();
label_B4DF:;
    /* $B4DF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEB; FLAG_NZ(g_cpu.A);
label_B4E1:;
    /* $B4E1: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B4E3:;
    /* $B4E3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_B4E5:;
    /* $B4E5: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B4E7:;
    /* $B4E7: 20 */ maybe_trigger_vblank(6); func_ADC3_b0();
label_B4EA:;
    /* $B4EA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4D0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4D0_b0");
#endif
    func_B4D0_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4DC_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4DC_b0");
#endif
    func_B4D0_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B048_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B048_b0");
#endif
label_B048:;
    /* $B048: 20 */ maybe_trigger_vblank(6); func_809B_b0();
label_B04B:;
    /* $B04B: 20 */ maybe_trigger_vblank(6); func_8061_b0();
label_B04E:;
    /* $B04E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AF93_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF93_b0");
#endif
label_AF93:;
    /* $AF93: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AF95:;
    /* $AF95: 8D */ maybe_trigger_vblank(4); nes_write(0x0474, g_cpu.A);
label_AF98:;
    /* $AF98: 20 */ maybe_trigger_vblank(6); func_D4E5();
label_AF9B:;
    /* $AF9B: 20 */ maybe_trigger_vblank(6); func_F0BC();
label_AF9E:;
    /* $AF9E: 20 */ maybe_trigger_vblank(6); func_F061();
label_AFA1:;
    /* $AFA1: 20 */ maybe_trigger_vblank(6); func_D517();
label_AFA4:;
    /* $AFA4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AFA6:;
    /* $AFA6: 8D */ maybe_trigger_vblank(4); nes_write(0x0474, g_cpu.A);
label_AFA9:;
    /* $AFA9: 20 */ maybe_trigger_vblank(6); func_F0BC();
label_AFAC:;
    /* $AFAC: 20 */ maybe_trigger_vblank(6); func_A87D_b0();
label_AFAF:;
    /* $AFAF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B20C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B20C_b0");
#endif
label_B20C:;
    /* $B20C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B20E:;
    /* $B20E: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B211:;
    /* $B211: 20 */ maybe_trigger_vblank(6); func_84BB_b0();
label_B214:;
    /* $B214: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B216:;
    /* $B216: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B219:;
    /* $B219: 20 */ maybe_trigger_vblank(6); func_84BB_b0();
label_B21C:;
    /* $B21C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AEE1_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEE1_b0");
#endif
label_AEE1:;
    /* $AEE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AEE3:;
    /* $AEE3: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_AEE6:;
    /* $AEE6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AEE8:;
    /* $AEE8: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_AEEB:;
    /* $AEEB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AEED:;
    /* $AEED: 8D */ maybe_trigger_vblank(4); nes_write(0x0442, g_cpu.A);
label_AEF0:;
    /* $AEF0: 20 */ maybe_trigger_vblank(6); func_A3FB_b0();
label_AEF3:;
    /* $AEF3: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_AEF5:;
    /* $AEF5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_AEF7:;
    /* $AEF7: 9D */ maybe_trigger_vblank(5); nes_write((0x0487 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEFA:;
    /* $AEFA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AEFC:;
    /* $AEFC: 9D */ maybe_trigger_vblank(5); nes_write((0x0462 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEFF:;
    /* $AEFF: 9D */ maybe_trigger_vblank(5); nes_write((0x045A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF02:;
    /* $AF02: 9D */ maybe_trigger_vblank(5); nes_write((0x0452 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF05:;
    /* $AF05: 9D */ maybe_trigger_vblank(5); nes_write((0x0475 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF08:;
    /* $AF08: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF09:;
    /* $AF09: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x04; g_cpu.C=(g_cpu.X>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AF0B:;
    /* $AF0B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AEF5;
    }
label_AF0D:;
    /* $AF0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AF0F:;
    /* $AF0F: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AF10:;
    /* $AF10: 9D */ maybe_trigger_vblank(5); nes_write((0x048F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF13:;
    /* $AF13: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF14:;
    /* $AF14: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x24; g_cpu.C=(g_cpu.X>=0x24)?1:0; FLAG_NZ(r&0xFF); }
label_AF16:;
    /* $AF16: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AF10;
    }
label_AF18:;
    /* $AF18: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AF1A:;
    /* $AF1A: 8D */ maybe_trigger_vblank(4); nes_write(0x050A, g_cpu.A);
label_AF1D:;
    /* $AF1D: 8D */ maybe_trigger_vblank(4); nes_write(0x0507, g_cpu.A);
label_AF20:;
    /* $AF20: 8D */ maybe_trigger_vblank(4); nes_write(0x0505, g_cpu.A);
label_AF23:;
    /* $AF23: 8D */ maybe_trigger_vblank(4); nes_write(0x050E, g_cpu.A);
label_AF26:;
    /* $AF26: 8D */ maybe_trigger_vblank(4); nes_write(0x060C, g_cpu.A);
label_AF29:;
    /* $AF29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AF2B:;
    /* $AF2B: 8D */ maybe_trigger_vblank(4); nes_write(0x0569, g_cpu.A);
label_AF2E:;
    /* $AF2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_AF30:;
    /* $AF30: 8D */ maybe_trigger_vblank(4); nes_write(0x0568, g_cpu.A);
label_AF33:;
    /* $AF33: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AF34_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF34_b0");
#endif
label_AF34:;
    /* $AF34: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AF36:;
    /* $AF36: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_AF39:;
    /* $AF39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AF3B:;
    /* $AF3B: 8D */ maybe_trigger_vblank(4); nes_write(0x0441, g_cpu.A);
label_AF3E:;
    /* $AF3E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AF40:;
    /* $AF40: 8D */ maybe_trigger_vblank(4); nes_write(0x0443, g_cpu.A);
label_AF43:;
    /* $AF43: 20 */ maybe_trigger_vblank(6); func_A42E_b0();
label_AF46:;
    /* $AF46: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_AF48:;
    /* $AF48: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_AF4A:;
    /* $AF4A: 9D */ maybe_trigger_vblank(5); nes_write((0x0487 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF4D:;
    /* $AF4D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AF4F:;
    /* $AF4F: 9D */ maybe_trigger_vblank(5); nes_write((0x0462 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF52:;
    /* $AF52: 9D */ maybe_trigger_vblank(5); nes_write((0x045A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF55:;
    /* $AF55: 9D */ maybe_trigger_vblank(5); nes_write((0x0452 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF58:;
    /* $AF58: 9D */ maybe_trigger_vblank(5); nes_write((0x0475 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF5B:;
    /* $AF5B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF5C:;
    /* $AF5C: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_AF5E:;
    /* $AF5E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AF48;
    }
label_AF60:;
    /* $AF60: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AF62:;
    /* $AF62: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AF63:;
    /* $AF63: 9D */ maybe_trigger_vblank(5); nes_write((0x04B3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF66:;
    /* $AF66: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AF67:;
    /* $AF67: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x24; g_cpu.C=(g_cpu.X>=0x24)?1:0; FLAG_NZ(r&0xFF); }
label_AF69:;
    /* $AF69: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AF63;
    }
label_AF6B:;
    /* $AF6B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AF6D:;
    /* $AF6D: 8D */ maybe_trigger_vblank(4); nes_write(0x050B, g_cpu.A);
label_AF70:;
    /* $AF70: 8D */ maybe_trigger_vblank(4); nes_write(0x0508, g_cpu.A);
label_AF73:;
    /* $AF73: 8D */ maybe_trigger_vblank(4); nes_write(0x0506, g_cpu.A);
label_AF76:;
    /* $AF76: 8D */ maybe_trigger_vblank(4); nes_write(0x050F, g_cpu.A);
label_AF79:;
    /* $AF79: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AED2_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AED2_b0");
#endif
label_AED2:;
    /* $AED2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AED4:;
    /* $AED4: 8D */ maybe_trigger_vblank(4); nes_write(0x053A, g_cpu.A);
label_AED7:;
    /* $AED7: 8D */ maybe_trigger_vblank(4); nes_write(0x053B, g_cpu.A);
label_AEDA:;
    /* $AEDA: 8D */ maybe_trigger_vblank(4); nes_write(0x053C, g_cpu.A);
label_AEDD:;
    /* $AEDD: 8D */ maybe_trigger_vblank(4); nes_write(0x053D, g_cpu.A);
label_AEE0:;
    /* $AEE0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA5D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA5D_b0");
#endif
label_BA5D:;
    /* $BA5D: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_BA60:;
    /* $BA60: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0512 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA63:;
    /* $BA63: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA9A; }
label_BA65:;
    /* $BA65: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x044F); FLAG_NZ(g_cpu.Y);
label_BA68:;
    /* $BA68: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x050A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA6B:;
    /* $BA6B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB9FA); return; }
label_BA6D:;
    /* $BA6D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BA6F:;
    /* $BA6F: 99 */ maybe_trigger_vblank(5); nes_write((0x050A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BA72:;
    /* $BA72: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BA73:;
    /* $BA73: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BA74:;
    /* $BA74: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BA75:;
    /* $BA75: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BA76:;
    /* $BA76: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_BA78:;
    /* $BA78: 8E */ maybe_trigger_vblank(4); nes_write(0x0444, g_cpu.X);
label_BA7B:;
    /* $BA7B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_BA7D:;
    /* $BA7D: 8D */ maybe_trigger_vblank(4); nes_write(0x0445, g_cpu.A);
label_BA80:;
    /* $BA80: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0475 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA83:;
    /* $BA83: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA93; }
label_BA85:;
    /* $BA85: 8D */ maybe_trigger_vblank(4); nes_write(0x0446, g_cpu.A);
label_BA88:;
    /* $BA88: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BA89:;
    /* $BA89: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BA8A:;
    /* $BA8A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BA8B:;
    /* $BA8B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BA8C:;
    /* $BA8C: 20 */ maybe_trigger_vblank(6); func_A77D_b0();
label_BA8F:;
    /* $BA8F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA90:;
    /* $BA90: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BA91:;
    /* $BA91: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BA92:;
    /* $BA92: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BA93:;
    /* $BA93: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA94:;
    /* $BA94: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA95:;
    /* $BA95: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_BA97:;
    /* $BA97: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BA78;
    }
label_BA99:;
    /* $BA99: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BA9A:;
    /* $BA9A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B61C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B61C_b0");
#endif
label_B61C:;
    /* $B61C: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x044F); FLAG_NZ(g_cpu.Y);
label_B61F:;
    /* $B61F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB5D1); return; }
label_B621:;
    /* $B621: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x051E); FLAG_NZ(g_cpu.A);
label_B624:;
    /* $B624: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB5D1); return; }
label_B626:;
    /* $B626: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_B628:;
    /* $B628: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B634; }
label_B62A:;
    /* $B62A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0249); FLAG_NZ(g_cpu.A);
label_B62D:;
    /* $B62D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_B62F:;
    /* $B62F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB5D1); return; }
label_B631:;
    /* $B631: 20 */ maybe_trigger_vblank(6); func_8FD4_b0();
label_B634:;
    /* $B634: 20 */ maybe_trigger_vblank(6); func_8415_b0();
label_B637:;
    /* $B637: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B639:;
    /* $B639: 8D */ maybe_trigger_vblank(4); nes_write(0x0512, g_cpu.A);
label_B63C:;
    /* $B63C: 8D */ maybe_trigger_vblank(4); nes_write(0x0513, g_cpu.A);
label_B63F:;
    /* $B63F: 8D */ maybe_trigger_vblank(4); nes_write(0x051E, g_cpu.A);
label_B642:;
    /* $B642: 8D */ maybe_trigger_vblank(4); nes_write(0x051F, g_cpu.A);
label_B645:;
    /* $B645: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B647:;
    /* $B647: 8D */ maybe_trigger_vblank(4); nes_write(0x0510, g_cpu.A);
label_B64A:;
    /* $B64A: 8D */ maybe_trigger_vblank(4); nes_write(0x0511, g_cpu.A);
label_B64D:;
    /* $B64D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AFC6_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFC6_b0");
#endif
label_AFC6:;
    /* $AFC6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AFC7:;
    /* $AFC7: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_AFC9:;
    /* $AFC9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_AFCB:;
    /* $AFCB: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_AFCD:;
    /* $AFCD: 20 */ maybe_trigger_vblank(6); func_9881_b0();
label_AFD0:;
    /* $AFD0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDE; FLAG_NZ(g_cpu.A);
label_AFD2:;
    /* $AFD2: 8D */ maybe_trigger_vblank(4); nes_write(0x0700, g_cpu.A);
label_AFD5:;
    /* $AFD5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AFD7:;
    /* $AFD7: 8D */ maybe_trigger_vblank(4); nes_write(0x0701, g_cpu.A);
label_AFDA:;
    /* $AFDA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AFDC:;
    /* $AFDC: 8D */ maybe_trigger_vblank(4); nes_write(0x0702, g_cpu.A);
label_AFDF:;
    /* $AFDF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFE; FLAG_NZ(g_cpu.A);
label_AFE1:;
    /* $AFE1: 8D */ maybe_trigger_vblank(4); nes_write(0x0703, g_cpu.A);
label_AFE4:;
    /* $AFE4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_AFE6:;
    /* $AFE6: 8D */ maybe_trigger_vblank(4); nes_write(0x0262, g_cpu.A);
label_AFE9:;
    /* $AFE9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AFEB:;
    /* $AFEB: 8D */ maybe_trigger_vblank(4); nes_write(0x0260, g_cpu.A);
label_AFEE:;
    /* $AFEE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_AFF0:;
    /* $AFF0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_B02A; }
label_AFF2:;
    /* $AFF2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_AFF4:;
    /* $AFF4: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_AFF6:;
    /* $AFF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC8; FLAG_NZ(g_cpu.A);
label_AFF8:;
    /* $AFF8: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_AFFA:;
    /* $AFFA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x15; FLAG_NZ(g_cpu.X);
label_AFFC:;
    /* $AFFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_AFFE:;
    /* $AFFE: 9D */ maybe_trigger_vblank(5); nes_write((0x0264 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B001:;
    /* $B001: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B003:;
    /* $B003: 9D */ maybe_trigger_vblank(5); nes_write((0x027C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B006:;
    /* $B006: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8B; FLAG_NZ(g_cpu.A);
label_B008:;
    /* $B008: 9D */ maybe_trigger_vblank(5); nes_write((0x0294 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B00B:;
    /* $B00B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_B00D:;
    /* $B00D: 9D */ maybe_trigger_vblank(5); nes_write((0x02AC + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B010:;
    /* $B010: 20 */ maybe_trigger_vblank(6); func_B058_b0();
label_B013:;
    /* $B013: 20 */ maybe_trigger_vblank(6); func_B197_b0();
label_B016:;
    /* $B016: 20 */ maybe_trigger_vblank(6); func_B1DA_b0();
label_B019:;
    /* $B019: 20 */ maybe_trigger_vblank(6); func_B070_b0();
label_B01C:;
    /* $B01C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B01E:;
    /* $B01E: 8D */ maybe_trigger_vblank(4); nes_write(0x0544, g_cpu.A);
label_B021:;
    /* $B021: 20 */ maybe_trigger_vblank(6); func_F750();
label_B024:;
    /* $B024: 20 */ maybe_trigger_vblank(6); func_B4D0_b0();
label_B027:;
    /* $B027: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B048_b0(); return;
label_B02A:;
    /* $B02A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B02C:;
    /* $B02C: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_B02E:;
    /* $B02E: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_B030:;
    /* $B030: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x92; FLAG_NZ(g_cpu.A);
label_B032:;
    /* $B032: 8D */ maybe_trigger_vblank(4); nes_write(0x0246, g_cpu.A);
label_B035:;
    /* $B035: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_B037:;
    /* $B037: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_B039:;
    /* $B039: 20 */ maybe_trigger_vblank(6); func_B064_b0();
label_B03C:;
    /* $B03C: 20 */ maybe_trigger_vblank(6); func_B197_b0();
label_B03F:;
    /* $B03F: 20 */ maybe_trigger_vblank(6); func_B1AE_b0();
label_B042:;
    /* $B042: 20 */ maybe_trigger_vblank(6); func_B0FD_b0();
label_B045:;
    /* $B045: 20 */ maybe_trigger_vblank(6); func_B52B_b0();
label_B048:;
    /* $B048: 20 */ maybe_trigger_vblank(6); func_809B_b0();
label_B04B:;
    /* $B04B: 20 */ maybe_trigger_vblank(6); func_8061_b0();
label_B04E:;
    /* $B04E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A87D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A87D_b0");
#endif
label_A87D:;
    /* $A87D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A87F:;
    /* $A87F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_A882:;
    /* $A882: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A883:;
    /* $A883: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A884:;
    /* $A884: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A885:;
    /* $A885: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0462 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A888:;
    /* $A888: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A8A6; }
label_A88A:;
    /* $A88A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A88D:;
    /* $A88D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A8A6; }
label_A88F:;
    /* $A88F: 8D */ maybe_trigger_vblank(4); nes_write(0x0446, g_cpu.A);
label_A892:;
    /* $A892: 8E */ maybe_trigger_vblank(4); nes_write(0x0444, g_cpu.X);
label_A895:;
    /* $A895: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A898:;
    /* $A898: 8D */ maybe_trigger_vblank(4); nes_write(0x0445, g_cpu.A);
label_A89B:;
    /* $A89B: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A89C:;
    /* $A89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A89D:;
    /* $A89D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A89E:;
    /* $A89E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A89F:;
    /* $A89F: 20 */ maybe_trigger_vblank(6); func_A77D_b0();
label_A8A2:;
    /* $A8A2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A8A3:;
    /* $A8A3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8A4:;
    /* $A8A4: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A8A5:;
    /* $A8A5: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A8A6:;
    /* $A8A6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A8A7:;
    /* $A8A7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A8A8:;
    /* $A8A8: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A8AA:;
    /* $A8AA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A885;
    }
label_A8AC:;
    /* $A8AC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8FD4_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8FFF;
    }
label_8FD4:;
    /* $8FD4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8FD6:;
    /* $8FD6: 8D */ maybe_trigger_vblank(4); nes_write(0x02ED, g_cpu.A);
label_8FD9:;
    /* $8FD9: 8D */ maybe_trigger_vblank(4); nes_write(0x02EE, g_cpu.A);
label_8FDC:;
    /* $8FDC: 8D */ maybe_trigger_vblank(4); nes_write(0x02EF, g_cpu.A);
label_8FDF:;
    /* $8FDF: 8D */ maybe_trigger_vblank(4); nes_write(0x02F0, g_cpu.A);
label_8FE2:;
    /* $8FE2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_8FE4:;
    /* $8FE4: 8D */ maybe_trigger_vblank(4); nes_write(0x02E7, g_cpu.A);
label_8FE7:;
    /* $8FE7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_8FE9:;
    /* $8FE9: 8D */ maybe_trigger_vblank(4); nes_write(0x02E8, g_cpu.A);
label_8FEC:;
    /* $8FEC: 8D */ maybe_trigger_vblank(4); nes_write(0x02E9, g_cpu.A);
label_8FEF:;
    /* $8FEF: 8D */ maybe_trigger_vblank(4); nes_write(0x02EB, g_cpu.A);
label_8FF2:;
    /* $8FF2: 8D */ maybe_trigger_vblank(4); nes_write(0x02EC, g_cpu.A);
label_8FF5:;
    /* $8FF5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8F; FLAG_NZ(g_cpu.A);
label_8FF7:;
    /* $8FF7: 8D */ maybe_trigger_vblank(4); nes_write(0x02EA, g_cpu.A);
label_8FFA:;
    /* $8FFA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_8FFC:;
    /* $8FFC: 8D */ maybe_trigger_vblank(4); nes_write(0x02F1, g_cpu.A);
label_8FFF:;
    /* $8FFF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8FD4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8FD4_b0");
#endif
    func_8FD4_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8FFF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8FFF_b0");
#endif
    func_8FD4_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8415_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8415_b0");
#endif
label_8415:;
    /* $8415: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_8417:;
    /* $8417: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8450; }
label_8419:;
    /* $8419: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_841C:;
    /* $841C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8450; }
label_841E:;
    /* $841E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x51; FLAG_NZ(g_cpu.A);
label_8420:;
    /* $8420: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_8422:;
    /* $8422: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x84; FLAG_NZ(g_cpu.A);
label_8424:;
    /* $8424: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_8426:;
    /* $8426: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_8428:;
    /* $8428: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_842A:;
    /* $842A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_842C:;
    /* $842C: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_842E:;
    /* $842E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_8430:;
    /* $8430: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_8432:;
    /* $8432: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8434:;
    /* $8434: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_8437:;
    /* $8437: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x51; FLAG_NZ(g_cpu.A);
label_8439:;
    /* $8439: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_843B:;
    /* $843B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x84; FLAG_NZ(g_cpu.A);
label_843D:;
    /* $843D: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_843F:;
    /* $843F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_8441:;
    /* $8441: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_8443:;
    /* $8443: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_8445:;
    /* $8445: 85 */ maybe_trigger_vblank(3); nes_write(0xA5, g_cpu.A);
label_8447:;
    /* $8447: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_8449:;
    /* $8449: 85 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A);
label_844B:;
    /* $844B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_844D:;
    /* $844D: 20 */ maybe_trigger_vblank(6); func_846B_b0();
label_8450:;
    /* $8450: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B058_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B058_b0");
#endif
label_B058:;
    /* $B058: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD0; FLAG_NZ(g_cpu.A);
label_B05A:;
    /* $B05A: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B05C:;
    /* $B05C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB1; FLAG_NZ(g_cpu.A);
label_B05E:;
    /* $B05E: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B060:;
    /* $B060: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_B063:;
    /* $B063: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B197_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B197_b0");
#endif
label_B197:;
    /* $B197: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_B199:;
    /* $B199: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B19B:;
    /* $B19B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B19D:;
    /* $B19D: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B19F:;
    /* $B19F: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_B1A2:;
    /* $B1A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_B1A4:;
    /* $B1A4: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B1A6:;
    /* $B1A6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1A8:;
    /* $B1A8: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B1AA:;
    /* $B1AA: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_B1AD:;
    /* $B1AD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1DA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1DA_b0");
#endif
label_B1DA:;
    /* $B1DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_B1DC:;
    /* $B1DC: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B1DE:;
    /* $B1DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1E0:;
    /* $B1E0: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B1E2:;
    /* $B1E2: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_B1E5:;
    /* $B1E5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_B1E8:;
    /* $B1E8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B1F5; }
label_B1EA:;
    /* $B1EA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3B; FLAG_NZ(g_cpu.A);
label_B1EC:;
    /* $B1EC: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B1EE:;
    /* $B1EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1F0:;
    /* $B1F0: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B1F2:;
    /* $B1F2: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_B1F5:;
    /* $B1F5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B1F7:;
    /* $B1F7: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B1F9:;
    /* $B1F9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1FB:;
    /* $B1FB: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B1FD:;
    /* $B1FD: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_B200:;
    /* $B200: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x45; FLAG_NZ(g_cpu.A);
label_B202:;
    /* $B202: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B204:;
    /* $B204: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B206:;
    /* $B206: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B208:;
    /* $B208: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_B20B:;
    /* $B20B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B070_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B099;
        case 2: goto label_B0C2;
    }
label_B070:;
    /* $B070: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x73; FLAG_NZ(g_cpu.A);
label_B072:;
    /* $B072: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B074:;
    /* $B074: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB3; FLAG_NZ(g_cpu.A);
label_B076:;
    /* $B076: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B078:;
    /* $B078: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B07B:;
    /* $B07B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_B07E:;
    /* $B07E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B08E; }
label_B080:;
    /* $B080: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_B082:;
    /* $B082: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B084:;
    /* $B084: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_B086:;
    /* $B086: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B088:;
    /* $B088: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B08B:;
    /* $B08B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B099_b0(); return;
label_B08E:;
    /* $B08E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_B090:;
    /* $B090: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B092:;
    /* $B092: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_B094:;
    /* $B094: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B096:;
    /* $B096: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B099:;
    /* $B099: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_B09C:;
    /* $B09C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B0B7; }
label_B09E:;
    /* $B09E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7B; FLAG_NZ(g_cpu.A);
label_B0A0:;
    /* $B0A0: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B0A2:;
    /* $B0A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_B0A4:;
    /* $B0A4: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B0A6:;
    /* $B0A6: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B0A9:;
    /* $B0A9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD7; FLAG_NZ(g_cpu.A);
label_B0AB:;
    /* $B0AB: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B0AD:;
    /* $B0AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_B0AF:;
    /* $B0AF: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B0B1:;
    /* $B0B1: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B0B4:;
    /* $B0B4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B0C2_b0(); return;
label_B0B7:;
    /* $B0B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCE; FLAG_NZ(g_cpu.A);
label_B0B9:;
    /* $B0B9: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B0BB:;
    /* $B0BB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_B0BD:;
    /* $B0BD: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B0BF:;
    /* $B0BF: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B0C2:;
    /* $B0C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_B0C4:;
    /* $B0C4: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B0C6:;
    /* $B0C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_B0C8:;
    /* $B0C8: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B0CA:;
    /* $B0CA: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B0CD:;
    /* $B0CD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B070_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B070_b0");
#endif
    func_B070_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B099_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B099_b0");
#endif
    func_B070_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0C2_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0C2_b0");
#endif
    func_B070_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B064_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B064_b0");
#endif
label_B064:;
    /* $B064: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD5; FLAG_NZ(g_cpu.A);
label_B066:;
    /* $B066: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B068:;
    /* $B068: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB1; FLAG_NZ(g_cpu.A);
label_B06A:;
    /* $B06A: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B06C:;
    /* $B06C: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_B06F:;
    /* $B06F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1AE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1AE_b0");
#endif
label_B1AE:;
    /* $B1AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_B1B0:;
    /* $B1B0: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B1B2:;
    /* $B1B2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1B4:;
    /* $B1B4: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B1B6:;
    /* $B1B6: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_B1B9:;
    /* $B1B9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_B1BB:;
    /* $B1BB: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B1BD:;
    /* $B1BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1BF:;
    /* $B1BF: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B1C1:;
    /* $B1C1: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_B1C4:;
    /* $B1C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x31; FLAG_NZ(g_cpu.A);
label_B1C6:;
    /* $B1C6: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B1C8:;
    /* $B1C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B1CA:;
    /* $B1CA: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B1CC:;
    /* $B1CC: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_B1CF:;
    /* $B1CF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B0FD_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B13C;
        case 2: goto label_B15A;
    }
label_B0FD:;
    /* $B0FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4F; FLAG_NZ(g_cpu.A);
label_B0FF:;
    /* $B0FF: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B101:;
    /* $B101: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B103:;
    /* $B103: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B105:;
    /* $B105: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B108:;
    /* $B108: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x16; FLAG_NZ(g_cpu.X);
label_B10A:;
    /* $B10A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B10C:;
    /* $B10C: 9D */ maybe_trigger_vblank(5); nes_write((0x0264 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B10F:;
    /* $B10F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B111:;
    /* $B111: 9D */ maybe_trigger_vblank(5); nes_write((0x027C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B114:;
    /* $B114: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6C; FLAG_NZ(g_cpu.A);
label_B116:;
    /* $B116: 9D */ maybe_trigger_vblank(5); nes_write((0x0294 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B119:;
    /* $B119: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B11B:;
    /* $B11B: 9D */ maybe_trigger_vblank(5); nes_write((0x02AC + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B11E:;
    /* $B11E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_B121:;
    /* $B121: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B131; }
label_B123:;
    /* $B123: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_B125:;
    /* $B125: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B127:;
    /* $B127: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_B129:;
    /* $B129: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B12B:;
    /* $B12B: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B12E:;
    /* $B12E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B13C_b0(); return;
label_B131:;
    /* $B131: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB9; FLAG_NZ(g_cpu.A);
label_B133:;
    /* $B133: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B135:;
    /* $B135: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_B137:;
    /* $B137: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B139:;
    /* $B139: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B13C:;
    /* $B13C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0522); FLAG_NZ(g_cpu.A);
label_B13F:;
    /* $B13F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B14F; }
label_B141:;
    /* $B141: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC1; FLAG_NZ(g_cpu.A);
label_B143:;
    /* $B143: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B145:;
    /* $B145: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_B147:;
    /* $B147: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B149:;
    /* $B149: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B14C:;
    /* $B14C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B15A_b0(); return;
label_B14F:;
    /* $B14F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC8; FLAG_NZ(g_cpu.A);
label_B151:;
    /* $B151: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_B153:;
    /* $B153: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_B155:;
    /* $B155: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_B157:;
    /* $B157: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B15A:;
    /* $B15A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B15C:;
    /* $B15C: 20 */ maybe_trigger_vblank(6); func_D05D();
label_B15F:;
    /* $B15F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4C; FLAG_NZ(g_cpu.A);
label_B161:;
    /* $B161: 20 */ maybe_trigger_vblank(6); func_D05D();
label_B164:;
    /* $B164: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B166:;
    /* $B166: 20 */ maybe_trigger_vblank(6); func_D05D();
label_B169:;
    /* $B169: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02DF); FLAG_NZ(g_cpu.A);
label_B16C:;
    /* $B16C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B16D:;
    /* $B16D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x1C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x1C); g_cpu.A=r&0xFF; }
label_B16F:;
    /* $B16F: 20 */ maybe_trigger_vblank(6); func_D05D();
label_B172:;
    /* $B172: 20 */ maybe_trigger_vblank(6); func_D065();
label_B175:;
    /* $B175: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B178:;
    /* $B178: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B17A:;
    /* $B17A: 20 */ maybe_trigger_vblank(6); func_D05D();
label_B17D:;
    /* $B17D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x53; FLAG_NZ(g_cpu.A);
label_B17F:;
    /* $B17F: 20 */ maybe_trigger_vblank(6); func_D05D();
label_B182:;
    /* $B182: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B184:;
    /* $B184: 20 */ maybe_trigger_vblank(6); func_D05D();
label_B187:;
    /* $B187: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x02E0); FLAG_NZ(g_cpu.A);
label_B18A:;
    /* $B18A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B18B:;
    /* $B18B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x1C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x1C); g_cpu.A=r&0xFF; }
label_B18D:;
    /* $B18D: 20 */ maybe_trigger_vblank(6); func_D05D();
label_B190:;
    /* $B190: 20 */ maybe_trigger_vblank(6); func_D065();
label_B193:;
    /* $B193: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_B196:;
    /* $B196: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B0FD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0FD_b0");
#endif
    func_B0FD_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B13C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B13C_b0");
#endif
    func_B0FD_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B15A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B15A_b0");
#endif
    func_B0FD_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B52B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B52B_b0");
#endif
label_B52B:;
    /* $B52B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B52D:;
    /* $B52D: 20 */ maybe_trigger_vblank(6); func_D124();
label_B530:;
    /* $B530: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_B532:;
    /* $B532: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_B534:;
    /* $B534: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_B536:;
    /* $B536: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_B538:;
    /* $B538: 20 */ maybe_trigger_vblank(6); func_ADC3_b0();
label_B53B:;
    /* $B53B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9F8E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F8E_b0");
#endif
label_9F8E:;
    /* $9F8E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_9F90:;
    /* $9F90: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F98; }
label_9F92:;
    /* $9F92: 20 */ maybe_trigger_vblank(6); func_9F9F_b0();
label_9F95:;
    /* $9F95: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_9F9B_b0(); return;
label_9F98:;
    /* $9F98: 20 */ maybe_trigger_vblank(6); func_A029_b0();
label_9F9B:;
    /* $9F9B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0248; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9F9E:;
    /* $9F9E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE16_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AE27;
    }
label_AE16:;
    /* $AE16: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE18:;
    /* $AE18: 8D */ maybe_trigger_vblank(4); nes_write(0x0510, g_cpu.A);
label_AE1B:;
    /* $AE1B: 8D */ maybe_trigger_vblank(4); nes_write(0x0511, g_cpu.A);
label_AE1E:;
    /* $AE1E: 20 */ maybe_trigger_vblank(6); func_AFB0_b0();
label_AE21:;
    /* $AE21: 20 */ maybe_trigger_vblank(6); func_B04F_b0();
label_AE24:;
    /* $AE24: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0248; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE27:;
    /* $AE27: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE16_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE16_b0");
#endif
    func_AE16_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AE27_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE27_b0");
#endif
    func_AE16_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B57C_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B5D1;
    }
label_B57C:;
    /* $B57C: 20 */ maybe_trigger_vblank(6); func_B601_b0();
label_B57F:;
    /* $B57F: 20 */ maybe_trigger_vblank(6); func_EFD1();
label_B582:;
    /* $B582: 20 */ maybe_trigger_vblank(6); func_98A6_b0();
label_B585:;
    /* $B585: 20 */ maybe_trigger_vblank(6); func_AE28_b0();
label_B588:;
    /* $B588: 20 */ maybe_trigger_vblank(6); func_B6B0_b0();
label_B58B:;
    /* $B58B: 20 */ maybe_trigger_vblank(6); func_B69E_b0();
label_B58E:;
    /* $B58E: 20 */ maybe_trigger_vblank(6); func_B68C_b0();
label_B591:;
    /* $B591: 20 */ maybe_trigger_vblank(6); func_F65A();
label_B594:;
    /* $B594: 20 */ maybe_trigger_vblank(6); func_B6DE_b0();
label_B597:;
    /* $B597: 20 */ maybe_trigger_vblank(6); func_B5EF_b0();
label_B59A:;
    /* $B59A: 20 */ maybe_trigger_vblank(6); func_B64E_b0();
label_B59D:;
    /* $B59D: 20 */ maybe_trigger_vblank(6); func_B60A_b0();
label_B5A0:;
    /* $B5A0: 20 */ maybe_trigger_vblank(6); func_8883_b0();
label_B5A3:;
    /* $B5A3: 20 */ maybe_trigger_vblank(6); func_BCB3_b0();
label_B5A6:;
    /* $B5A6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_B5A8:;
    /* $B5A8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B5C2; }
label_B5AA:;
    /* $B5AA: 20 */ maybe_trigger_vblank(6); func_B6C7_b0();
label_B5AD:;
    /* $B5AD: 20 */ maybe_trigger_vblank(6); func_B6A7_b0();
label_B5B0:;
    /* $B5B0: 20 */ maybe_trigger_vblank(6); func_B695_b0();
label_B5B3:;
    /* $B5B3: 20 */ maybe_trigger_vblank(6); func_F663();
label_B5B6:;
    /* $B5B6: 20 */ maybe_trigger_vblank(6); func_B6FA_b0();
label_B5B9:;
    /* $B5B9: 20 */ maybe_trigger_vblank(6); func_B5F8_b0();
label_B5BC:;
    /* $B5BC: 20 */ maybe_trigger_vblank(6); func_B657_b0();
label_B5BF:;
    /* $B5BF: 20 */ maybe_trigger_vblank(6); func_B613_b0();
label_B5C2:;
    /* $B5C2: 20 */ maybe_trigger_vblank(6); func_DB21();
label_B5C5:;
    /* $B5C5: 20 */ maybe_trigger_vblank(6); func_9000_b0();
label_B5C8:;
    /* $B5C8: 20 */ maybe_trigger_vblank(6); func_B5D2_b0();
label_B5CB:;
    /* $B5CB: 20 */ maybe_trigger_vblank(6); func_80CB_b0();
label_B5CE:;
    /* $B5CE: 20 */ maybe_trigger_vblank(6); func_E449();
label_B5D1:;
    /* $B5D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B57C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B57C_b0");
#endif
    func_B57C_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5D1_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5D1_b0");
#endif
    func_B57C_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3AF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3AF_b0");
#endif
label_A3AF:;
    /* $A3AF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9F9F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F9F_b0");
#endif
label_9F9F:;
    /* $9F9F: 20 */ maybe_trigger_vblank(6); func_802B_b0();
label_9FA2:;
    /* $9FA2: 20 */ maybe_trigger_vblank(6); func_8086_b0();
label_9FA5:;
    /* $9FA5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_9FA7:;
    /* $9FA7: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_9FA9:;
    /* $9FA9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9FAB:;
    /* $9FAB: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_9FAD:;
    /* $9FAD: 20 */ maybe_trigger_vblank(6); func_A206_b0();
label_9FB0:;
    /* $9FB0: 20 */ maybe_trigger_vblank(6); func_9FBD_b0();
label_9FB3:;
    /* $9FB3: 20 */ maybe_trigger_vblank(6); func_809B_b0();
label_9FB6:;
    /* $9FB6: 20 */ maybe_trigger_vblank(6); func_8061_b0();
label_9FB9:;
    /* $9FB9: 20 */ maybe_trigger_vblank(6); func_E083();
label_9FBC:;
    /* $9FBC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9F9B_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9F9E;
    }
label_9F9B:;
    /* $9F9B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0248; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9F9E:;
    /* $9F9E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9F9B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F9B_b0");
#endif
    func_9F9B_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9F9E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F9E_b0");
#endif
    func_9F9B_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A029_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A029_b0");
#endif
label_A029:;
    /* $A029: 20 */ maybe_trigger_vblank(6); func_802B_b0();
label_A02C:;
    /* $A02C: 20 */ maybe_trigger_vblank(6); func_8086_b0();
label_A02F:;
    /* $A02F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A031:;
    /* $A031: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A033:;
    /* $A033: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A035:;
    /* $A035: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_A037:;
    /* $A037: 20 */ maybe_trigger_vblank(6); func_A0AE_b0();
label_A03A:;
    /* $A03A: 20 */ maybe_trigger_vblank(6); func_A049_b0();
label_A03D:;
    /* $A03D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A03F:;
    /* $A03F: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_A042:;
    /* $A042: 20 */ maybe_trigger_vblank(6); func_809B_b0();
label_A045:;
    /* $A045: 20 */ maybe_trigger_vblank(6); func_8061_b0();
label_A048:;
    /* $A048: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AFB0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFB0_b0");
#endif
label_AFB0:;
    /* $AFB0: 20 */ maybe_trigger_vblank(6); func_802B_b0();
label_AFB3:;
    /* $AFB3: 20 */ maybe_trigger_vblank(6); func_8086_b0();
label_AFB6:;
    /* $AFB6: 20 */ maybe_trigger_vblank(6); func_8006_b0();
label_AFB9:;
    /* $AFB9: 20 */ maybe_trigger_vblank(6); func_80A4_b0();
label_AFBC:;
    /* $AFBC: 20 */ maybe_trigger_vblank(6); func_80BA_b0();
label_AFBF:;
    /* $AFBF: 20 */ maybe_trigger_vblank(6); func_CDEB();
label_AFC2:;
    /* $AFC2: 20 */ maybe_trigger_vblank(6); func_F6B3();
label_AFC5:;
    /* $AFC5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AFC7:;
    /* $AFC7: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_AFC9:;
    /* $AFC9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_AFCB:;
    /* $AFCB: 85 */ maybe_trigger_vblank(3); nes_write(0x77, g_cpu.A);
label_AFCD:;
    /* $AFCD: 20 */ maybe_trigger_vblank(6); func_9881_b0();
label_AFD0:;
    /* $AFD0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDE; FLAG_NZ(g_cpu.A);
label_AFD2:;
    /* $AFD2: 8D */ maybe_trigger_vblank(4); nes_write(0x0700, g_cpu.A);
label_AFD5:;
    /* $AFD5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AFD7:;
    /* $AFD7: 8D */ maybe_trigger_vblank(4); nes_write(0x0701, g_cpu.A);
label_AFDA:;
    /* $AFDA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AFDC:;
    /* $AFDC: 8D */ maybe_trigger_vblank(4); nes_write(0x0702, g_cpu.A);
label_AFDF:;
    /* $AFDF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFE; FLAG_NZ(g_cpu.A);
label_AFE1:;
    /* $AFE1: 8D */ maybe_trigger_vblank(4); nes_write(0x0703, g_cpu.A);
label_AFE4:;
    /* $AFE4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_AFE6:;
    /* $AFE6: 8D */ maybe_trigger_vblank(4); nes_write(0x0262, g_cpu.A);
label_AFE9:;
    /* $AFE9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AFEB:;
    /* $AFEB: 8D */ maybe_trigger_vblank(4); nes_write(0x0260, g_cpu.A);
label_AFEE:;
    /* $AFEE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_AFF0:;
    /* $AFF0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_B02A; }
label_AFF2:;
    /* $AFF2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_AFF4:;
    /* $AFF4: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_AFF6:;
    /* $AFF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC8; FLAG_NZ(g_cpu.A);
label_AFF8:;
    /* $AFF8: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_AFFA:;
    /* $AFFA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x15; FLAG_NZ(g_cpu.X);
label_AFFC:;
    /* $AFFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_AFFE:;
    /* $AFFE: 9D */ maybe_trigger_vblank(5); nes_write((0x0264 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B001:;
    /* $B001: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B003:;
    /* $B003: 9D */ maybe_trigger_vblank(5); nes_write((0x027C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B006:;
    /* $B006: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8B; FLAG_NZ(g_cpu.A);
label_B008:;
    /* $B008: 9D */ maybe_trigger_vblank(5); nes_write((0x0294 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B00B:;
    /* $B00B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_B00D:;
    /* $B00D: 9D */ maybe_trigger_vblank(5); nes_write((0x02AC + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B010:;
    /* $B010: 20 */ maybe_trigger_vblank(6); func_B058_b0();
label_B013:;
    /* $B013: 20 */ maybe_trigger_vblank(6); func_B197_b0();
label_B016:;
    /* $B016: 20 */ maybe_trigger_vblank(6); func_B1DA_b0();
label_B019:;
    /* $B019: 20 */ maybe_trigger_vblank(6); func_B070_b0();
label_B01C:;
    /* $B01C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B01E:;
    /* $B01E: 8D */ maybe_trigger_vblank(4); nes_write(0x0544, g_cpu.A);
label_B021:;
    /* $B021: 20 */ maybe_trigger_vblank(6); func_F750();
label_B024:;
    /* $B024: 20 */ maybe_trigger_vblank(6); func_B4D0_b0();
label_B027:;
    /* $B027: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B048_b0(); return;
label_B02A:;
    /* $B02A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B02C:;
    /* $B02C: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_B02E:;
    /* $B02E: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_B030:;
    /* $B030: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x92; FLAG_NZ(g_cpu.A);
label_B032:;
    /* $B032: 8D */ maybe_trigger_vblank(4); nes_write(0x0246, g_cpu.A);
label_B035:;
    /* $B035: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_B037:;
    /* $B037: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_B039:;
    /* $B039: 20 */ maybe_trigger_vblank(6); func_B064_b0();
label_B03C:;
    /* $B03C: 20 */ maybe_trigger_vblank(6); func_B197_b0();
label_B03F:;
    /* $B03F: 20 */ maybe_trigger_vblank(6); func_B1AE_b0();
label_B042:;
    /* $B042: 20 */ maybe_trigger_vblank(6); func_B0FD_b0();
label_B045:;
    /* $B045: 20 */ maybe_trigger_vblank(6); func_B52B_b0();
label_B048:;
    /* $B048: 20 */ maybe_trigger_vblank(6); func_809B_b0();
label_B04B:;
    /* $B04B: 20 */ maybe_trigger_vblank(6); func_8061_b0();
label_B04E:;
    /* $B04E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B04F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B04F_b0");
#endif
label_B04F:;
    /* $B04F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B051:;
    /* $B051: 8D */ maybe_trigger_vblank(4); nes_write(0x050C, g_cpu.A);
label_B054:;
    /* $B054: 8D */ maybe_trigger_vblank(4); nes_write(0x050D, g_cpu.A);
label_B057:;
    /* $B057: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_98A6_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_98A9;
    }
label_98A6:;
    /* $98A6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0512); FLAG_NZ(g_cpu.A);
label_98A9:;
    /* $98A9: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0513); FLAG_NZ(g_cpu.A);
label_98AC:;
    /* $98AC: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x051E); FLAG_NZ(g_cpu.A);
label_98AF:;
    /* $98AF: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x051F); FLAG_NZ(g_cpu.A);
label_98B2:;
    /* $98B2: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x050C); FLAG_NZ(g_cpu.A);
label_98B5:;
    /* $98B5: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x050D); FLAG_NZ(g_cpu.A);
label_98B8:;
    /* $98B8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_990F; }
label_98BA:;
    /* $98BA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x024B); FLAG_NZ(g_cpu.A);
label_98BD:;
    /* $98BD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_98BF:;
    /* $98BF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_990F; }
label_98C1:;
    /* $98C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98C3:;
    /* $98C3: 8D */ maybe_trigger_vblank(4); nes_write(0x0260, g_cpu.A);
label_98C6:;
    /* $98C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_98C8:;
    /* $98C8: 8D */ maybe_trigger_vblank(4); nes_write(0x0636, g_cpu.A);
label_98CB:;
    /* $98CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x31; FLAG_NZ(g_cpu.A);
label_98CD:;
    /* $98CD: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_98D0:;
    /* $98D0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB4); FLAG_NZ(g_cpu.A);
label_98D2:;
    /* $98D2: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_98D4:;
    /* $98D4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB5); FLAG_NZ(g_cpu.A);
label_98D6:;
    /* $98D6: 85 */ maybe_trigger_vblank(3); nes_write(0xA4, g_cpu.A);
label_98D8:;
    /* $98D8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98DA:;
    /* $98DA: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_98DC:;
    /* $98DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x92; FLAG_NZ(g_cpu.A);
label_98DE:;
    /* $98DE: 85 */ maybe_trigger_vblank(3); nes_write(0xAF, g_cpu.A);
label_98E0:;
    /* $98E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98E2:;
    /* $98E2: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_98E4:;
    /* $98E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_98E6:;
    /* $98E6: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_98E8:;
    /* $98E8: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_98EB:;
    /* $98EB: 20 */ maybe_trigger_vblank(6); func_D16E();
label_98EE:;
    /* $98EE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x024B); FLAG_NZ(g_cpu.A);
label_98F1:;
    /* $98F1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_98F3:;
    /* $98F3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_98E4;
    }
label_98F5:;
    /* $98F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_98F7:;
    /* $98F7: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_98F9:;
    /* $98F9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA4); FLAG_NZ(g_cpu.A);
label_98FB:;
    /* $98FB: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_98FD:;
    /* $98FD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_98FF:;
    /* $98FF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9905; }
label_9901:;
    /* $9901: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_9903:;
    /* $9903: 85 */ maybe_trigger_vblank(3); nes_write(0xAF, g_cpu.A);
label_9905:;
    /* $9905: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9907:;
    /* $9907: 8D */ maybe_trigger_vblank(4); nes_write(0x0260, g_cpu.A);
label_990A:;
    /* $990A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_990C:;
    /* $990C: 8D */ maybe_trigger_vblank(4); nes_write(0x0636, g_cpu.A);
label_990F:;
    /* $990F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_98A6_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98A6_b0");
#endif
    func_98A6_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_98A9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98A9_b0");
#endif
    func_98A6_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AE28_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AEA9;
        case 2: goto label_AE8A;
        case 3: goto label_AE8D;
    }
label_AE28:;
    /* $AE28: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x050C); FLAG_NZ(g_cpu.A);
label_AE2B:;
    /* $AE2B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xAE27); return; }
label_AE2D:;
    /* $AE2D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE2F:;
    /* $AE2F: 8D */ maybe_trigger_vblank(4); nes_write(0x050C, g_cpu.A);
label_AE32:;
    /* $AE32: 8D */ maybe_trigger_vblank(4); nes_write(0x050D, g_cpu.A);
label_AE35:;
    /* $AE35: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_AE37:;
    /* $AE37: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AE88; }
label_AE39:;
    /* $AE39: 20 */ maybe_trigger_vblank(6); func_AEE1_b0();
label_AE3C:;
    /* $AE3C: 20 */ maybe_trigger_vblank(6); func_E076();
label_AE3F:;
    /* $AE3F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_AE42:;
    /* $AE42: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AE4B; }
label_AE44:;
    /* $AE44: 20 */ maybe_trigger_vblank(6); func_AF7A_b0();
label_AE47:;
    /* $AE47: 20 */ maybe_trigger_vblank(6); func_D9D3();
label_AE4A:;
    /* $AE4A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AE4B:;
    /* $AE4B: 20 */ maybe_trigger_vblank(6); func_AF93_b0();
label_AE4E:;
    /* $AE4E: 20 */ maybe_trigger_vblank(6); func_8864_b0();
label_AE51:;
    /* $AE51: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE53:;
    /* $AE53: 8D */ maybe_trigger_vblank(4); nes_write(0x0532, g_cpu.A);
label_AE56:;
    /* $AE56: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_AE59:;
    /* $AE59: 8D */ maybe_trigger_vblank(4); nes_write(0x0534, g_cpu.A);
label_AE5C:;
    /* $AE5C: 8D */ maybe_trigger_vblank(4); nes_write(0x0535, g_cpu.A);
label_AE5F:;
    /* $AE5F: 8D */ maybe_trigger_vblank(4); nes_write(0x0536, g_cpu.A);
label_AE62:;
    /* $AE62: 8D */ maybe_trigger_vblank(4); nes_write(0x0537, g_cpu.A);
label_AE65:;
    /* $AE65: 8D */ maybe_trigger_vblank(4); nes_write(0x0538, g_cpu.A);
label_AE68:;
    /* $AE68: 8D */ maybe_trigger_vblank(4); nes_write(0x0539, g_cpu.A);
label_AE6B:;
    /* $AE6B: 20 */ maybe_trigger_vblank(6); func_D9D3();
label_AE6E:;
    /* $AE6E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AE70:;
    /* $AE70: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_AE72:;
    /* $AE72: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_AE75:;
    /* $AE75: 20 */ maybe_trigger_vblank(6); func_E449();
label_AE78:;
    /* $AE78: 20 */ maybe_trigger_vblank(6); func_EFD1();
label_AE7B:;
    /* $AE7B: 20 */ maybe_trigger_vblank(6); func_8883_b0();
label_AE7E:;
    /* $AE7E: 20 */ maybe_trigger_vblank(6); func_8FD4_b0();
label_AE81:;
    /* $AE81: 20 */ maybe_trigger_vblank(6); func_9000_b0();
label_AE84:;
    /* $AE84: 20 */ maybe_trigger_vblank(6); func_D849();
label_AE87:;
    /* $AE87: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AE88:;
    /* $AE88: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE8A:;
    /* $AE8A: 8D */ maybe_trigger_vblank(4); nes_write(0x053C, g_cpu.A);
label_AE8D:;
    /* $AE8D: 8D */ maybe_trigger_vblank(4); nes_write(0x053D, g_cpu.A);
label_AE90:;
    /* $AE90: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AE92:;
    /* $AE92: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_AE95:;
    /* $AE95: 20 */ maybe_trigger_vblank(6); func_ACD9_b0();
label_AE98:;
    /* $AE98: 20 */ maybe_trigger_vblank(6); func_AEE1_b0();
label_AE9B:;
    /* $AE9B: 20 */ maybe_trigger_vblank(6); func_AF34_b0();
label_AE9E:;
    /* $AE9E: 20 */ maybe_trigger_vblank(6); func_AED2_b0();
label_AEA1:;
    /* $AEA1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AEA3:;
    /* $AEA3: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_AEA6:;
    /* $AEA6: 20 */ maybe_trigger_vblank(6); func_AF93_b0();
label_AEA9:;
    /* $AEA9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AEAB:;
    /* $AEAB: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_AEAE:;
    /* $AEAE: 20 */ maybe_trigger_vblank(6); func_AF93_b0();
label_AEB1:;
    /* $AEB1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AEB3:;
    /* $AEB3: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_AEB5:;
    /* $AEB5: 20 */ maybe_trigger_vblank(6); func_806A_b0();
label_AEB8:;
    /* $AEB8: 20 */ maybe_trigger_vblank(6); func_E449();
label_AEBB:;
    /* $AEBB: 20 */ maybe_trigger_vblank(6); func_EFD1();
label_AEBE:;
    /* $AEBE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0122); FLAG_NZ(g_cpu.A);
label_AEC1:;
    /* $AEC1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AEC8; }
label_AEC3:;
    /* $AEC3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_AEC5:;
    /* $AEC5: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_AEC8:;
    /* $AEC8: 20 */ maybe_trigger_vblank(6); func_8883_b0();
label_AECB:;
    /* $AECB: 20 */ maybe_trigger_vblank(6); func_D849();
label_AECE:;
    /* $AECE: 20 */ maybe_trigger_vblank(6); func_B20C_b0();
label_AED1:;
    /* $AED1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE28_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE28_b0");
#endif
    func_AE28_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AEA9_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEA9_b0");
#endif
    func_AE28_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AE8A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE8A_b0");
#endif
    func_AE28_b0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AE8D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE8D_b0");
#endif
    func_AE28_b0_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6B0_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B6B6;
    }
label_B6B0:;
    /* $B6B0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0510); FLAG_NZ(g_cpu.A);
label_B6B3:;
    /* $B6B3: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x050E); FLAG_NZ(g_cpu.A);
label_B6B6:;
    /* $B6B6: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0512); FLAG_NZ(g_cpu.A);
label_B6B9:;
    /* $B6B9: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x051E); FLAG_NZ(g_cpu.A);
label_B6BC:;
    /* $B6BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB6AF); return; }
label_B6BE:;
    /* $B6BE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B6C0:;
    /* $B6C0: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B6C3:;
    /* $B6C3: 20 */ maybe_trigger_vblank(6); func_BA5D_b0();
label_B6C6:;
    /* $B6C6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6B0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6B0_b0");
#endif
    func_B6B0_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6B6_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6B6_b0");
#endif
    func_B6B0_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B69E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B69E_b0");
#endif
label_B69E:;
    /* $B69E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B6A0:;
    /* $B6A0: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B6A3:;
    /* $B6A3: 20 */ maybe_trigger_vblank(6); func_F272();
label_B6A6:;
    /* $B6A6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B68C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B68C_b0");
#endif
label_B68C:;
    /* $B68C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B68E:;
    /* $B68E: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B691:;
    /* $B691: 20 */ maybe_trigger_vblank(6); func_F2E0();
label_B694:;
    /* $B694: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6DE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6DE_b0");
#endif
label_B6DE:;
    /* $B6DE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0510); FLAG_NZ(g_cpu.A);
label_B6E1:;
    /* $B6E1: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0512); FLAG_NZ(g_cpu.A);
label_B6E4:;
    /* $B6E4: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x051E); FLAG_NZ(g_cpu.A);
label_B6E7:;
    /* $B6E7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB6AF); return; }
label_B6E9:;
    /* $B6E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B6EB:;
    /* $B6EB: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B6EE:;
    /* $B6EE: 20 */ maybe_trigger_vblank(6); func_B72C_b0();
label_B6F1:;
    /* $B6F1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0523); FLAG_NZ(g_cpu.A);
label_B6F4:;
    /* $B6F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB6AF); return; }
label_B6F6:;
    /* $B6F6: 20 */ maybe_trigger_vblank(6); func_B800_b0();
label_B6F9:;
    /* $B6F9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5EF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5EF_b0");
#endif
label_B5EF:;
    /* $B5EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B5F1:;
    /* $B5F1: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B5F4:;
    /* $B5F4: 20 */ maybe_trigger_vblank(6); func_D9F6();
label_B5F7:;
    /* $B5F7: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B64E_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B64E_b0");
#endif
label_B64E:;
    /* $B64E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B650:;
    /* $B650: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B653:;
    /* $B653: 20 */ maybe_trigger_vblank(6); func_B660_b0();
label_B656:;
    /* $B656: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B60A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B60A_b0");
#endif
label_B60A:;
    /* $B60A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B60C:;
    /* $B60C: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B60F:;
    /* $B60F: 20 */ maybe_trigger_vblank(6); func_B61C_b0();
label_B612:;
    /* $B612: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BCB3_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BCCE;
    }
label_BCB3:;
    /* $BCB3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_BCB5:;
    /* $BCB5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BCCE; }
label_BCB7:;
    /* $BCB7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_BCBA:;
    /* $BCBA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BCCE; }
label_BCBC:;
    /* $BCBC: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0611; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCBF:;
    /* $BCBF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BCCE; }
label_BCC1:;
    /* $BCC1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_BCC3:;
    /* $BCC3: 8D */ maybe_trigger_vblank(4); nes_write(0x0544, g_cpu.A);
label_BCC6:;
    /* $BCC6: 20 */ maybe_trigger_vblank(6); func_F750();
label_BCC9:;
    /* $BCC9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BCCB:;
    /* $BCCB: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_BCCE:;
    /* $BCCE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BCB3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCB3_b0");
#endif
    func_BCB3_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCCE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCCE_b0");
#endif
    func_BCB3_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6C7_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B6D0;
    }
label_B6C7:;
    /* $B6C7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0511); FLAG_NZ(g_cpu.A);
label_B6CA:;
    /* $B6CA: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x050F); FLAG_NZ(g_cpu.A);
label_B6CD:;
    /* $B6CD: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0513); FLAG_NZ(g_cpu.A);
label_B6D0:;
    /* $B6D0: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x051F); FLAG_NZ(g_cpu.A);
label_B6D3:;
    /* $B6D3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB6AF); return; }
label_B6D5:;
    /* $B6D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B6D7:;
    /* $B6D7: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B6DA:;
    /* $B6DA: 20 */ maybe_trigger_vblank(6); func_BA5D_b0();
label_B6DD:;
    /* $B6DD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6C7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C7_b0");
#endif
    func_B6C7_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6D0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6D0_b0");
#endif
    func_B6C7_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6A7_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B6AF;
    }
label_B6A7:;
    /* $B6A7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B6A9:;
    /* $B6A9: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B6AC:;
    /* $B6AC: 20 */ maybe_trigger_vblank(6); func_F272();
label_B6AF:;
    /* $B6AF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6A7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6A7_b0");
#endif
    func_B6A7_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6AF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6AF_b0");
#endif
    func_B6A7_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B695_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B695_b0");
#endif
label_B695:;
    /* $B695: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B697:;
    /* $B697: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B69A:;
    /* $B69A: 20 */ maybe_trigger_vblank(6); func_F2E0();
label_B69D:;
    /* $B69D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6FA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6FA_b0");
#endif
label_B6FA:;
    /* $B6FA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0511); FLAG_NZ(g_cpu.A);
label_B6FD:;
    /* $B6FD: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0513); FLAG_NZ(g_cpu.A);
label_B700:;
    /* $B700: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x051F); FLAG_NZ(g_cpu.A);
label_B703:;
    /* $B703: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6AF); return; }
label_B705:;
    /* $B705: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B707:;
    /* $B707: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B70A:;
    /* $B70A: 20 */ maybe_trigger_vblank(6); func_B72C_b0();
label_B70D:;
    /* $B70D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0524); FLAG_NZ(g_cpu.A);
label_B710:;
    /* $B710: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xB6AF); return; }
label_B712:;
    /* $B712: 20 */ maybe_trigger_vblank(6); func_B800_b0();
label_B715:;
    /* $B715: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5F8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5F8_b0");
#endif
label_B5F8:;
    /* $B5F8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B5FA:;
    /* $B5FA: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B5FD:;
    /* $B5FD: 20 */ maybe_trigger_vblank(6); func_D9F6();
label_B600:;
    /* $B600: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B657_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B657_b0");
#endif
label_B657:;
    /* $B657: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B659:;
    /* $B659: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_B65C:;
    /* $B65C: 20 */ maybe_trigger_vblank(6); func_B660_b0();
label_B65F:;
    /* $B65F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5D2_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5D2_b0");
#endif
label_B5D2:;
    /* $B5D2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0512); FLAG_NZ(g_cpu.A);
label_B5D5:;
    /* $B5D5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB5D1); return; }
label_B5D7:;
    /* $B5D7: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0568; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B5DA:;
    /* $B5DA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0568); FLAG_NZ(g_cpu.A);
label_B5DD:;
    /* $B5DD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB5D1); return; }
label_B5DF:;
    /* $B5DF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B5E1:;
    /* $B5E1: 8D */ maybe_trigger_vblank(4); nes_write(0x0568, g_cpu.A);
label_B5E4:;
    /* $B5E4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0569); FLAG_NZ(g_cpu.A);
label_B5E7:;
    /* $B5E7: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_B5E9:;
    /* $B5E9: 8D */ maybe_trigger_vblank(4); nes_write(0x0569, g_cpu.A);
label_B5EC:;
    /* $B5EC: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_B5EE:;
    /* $B5EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A206_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A206_b0");
#endif
label_A206:;
    /* $A206: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A208:;
    /* $A208: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_A20A:;
    /* $A20A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_A20C:;
    /* $A20C: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_A20E:;
    /* $A20E: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_A211:;
    /* $A211: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x63; FLAG_NZ(g_cpu.A);
label_A213:;
    /* $A213: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_A215:;
    /* $A215: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_A217:;
    /* $A217: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_A219:;
    /* $A219: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_A21C:;
    /* $A21C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_A21E:;
    /* $A21E: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_A220:;
    /* $A220: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_A222:;
    /* $A222: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_A224:;
    /* $A224: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_A227:;
    /* $A227: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6D; FLAG_NZ(g_cpu.A);
label_A229:;
    /* $A229: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_A22B:;
    /* $A22B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_A22D:;
    /* $A22D: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_A22F:;
    /* $A22F: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_A232:;
    /* $A232: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x72; FLAG_NZ(g_cpu.A);
label_A234:;
    /* $A234: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_A236:;
    /* $A236: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_A238:;
    /* $A238: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_A23A:;
    /* $A23A: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_A23D:;
    /* $A23D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x77; FLAG_NZ(g_cpu.A);
label_A23F:;
    /* $A23F: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_A241:;
    /* $A241: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_A243:;
    /* $A243: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_A245:;
    /* $A245: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_A248:;
    /* $A248: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x57; FLAG_NZ(g_cpu.A);
label_A24A:;
    /* $A24A: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_A24C:;
    /* $A24C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA2; FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_A250:;
    /* $A250: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_A253:;
    /* $A253: 20 */ maybe_trigger_vblank(6); func_DBA5();
label_A256:;
    /* $A256: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9FBD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9FBD_b0");
#endif
label_9FBD:;
    /* $9FBD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9FBF:;
    /* $9FBF: 20 */ maybe_trigger_vblank(6); func_D124();
label_9FC2:;
    /* $9FC2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE9; FLAG_NZ(g_cpu.A);
label_9FC4:;
    /* $9FC4: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_9FC6:;
    /* $9FC6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9F; FLAG_NZ(g_cpu.A);
label_9FC8:;
    /* $9FC8: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_9FCA:;
    /* $9FCA: 20 */ maybe_trigger_vblank(6); func_ADC3_b0();
label_9FCD:;
    /* $9FCD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9FCF:;
    /* $9FCF: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_9FD1:;
    /* $9FD1: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_9FD3:;
    /* $9FD3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_9FD5:;
    /* $9FD5: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_9FD7:;
    /* $9FD7: 20 */ maybe_trigger_vblank(6); func_E0D5();
label_9FDA:;
    /* $9FDA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0A; FLAG_NZ(g_cpu.Y);
label_9FDC:;
    /* $9FDC: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_9FDE:;
    /* $9FDE: 20 */ maybe_trigger_vblank(6); func_E0D5();
label_9FE1:;
    /* $9FE1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_9FE3:;
    /* $9FE3: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_9FE5:;
    /* $9FE5: 20 */ maybe_trigger_vblank(6); func_E0D5();
label_9FE8:;
    /* $9FE8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A0AE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0AE_b0");
#endif
label_A0AE:;
    /* $A0AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A0B0:;
    /* $A0B0: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_A0B2:;
    /* $A0B2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_A0B4:;
    /* $A0B4: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_A0B6:;
    /* $A0B6: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_A0B9:;
    /* $A0B9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFC; FLAG_NZ(g_cpu.A);
label_A0BB:;
    /* $A0BB: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_A0BD:;
    /* $A0BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_A0BF:;
    /* $A0BF: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_A0C1:;
    /* $A0C1: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_A0C4:;
    /* $A0C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A0C6:;
    /* $A0C6: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_A0C8:;
    /* $A0C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA2; FLAG_NZ(g_cpu.A);
label_A0CA:;
    /* $A0CA: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_A0CC:;
    /* $A0CC: 20 */ maybe_trigger_vblank(6); func_A3B0_b0();
label_A0CF:;
    /* $A0CF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDE; FLAG_NZ(g_cpu.A);
label_A0D1:;
    /* $A0D1: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_A0D3:;
    /* $A0D3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA0; FLAG_NZ(g_cpu.A);
label_A0D5:;
    /* $A0D5: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_A0D7:;
    /* $A0D7: 20 */ maybe_trigger_vblank(6); func_CF7F();
label_A0DA:;
    /* $A0DA: 20 */ maybe_trigger_vblank(6); func_DB56();
label_A0DD:;
    /* $A0DD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A049_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A049_b0");
#endif
label_A049:;
    /* $A049: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A04B:;
    /* $A04B: 20 */ maybe_trigger_vblank(6); func_D124();
label_A04E:;
    /* $A04E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_A050:;
    /* $A050: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_A052:;
    /* $A052: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA0; FLAG_NZ(g_cpu.A);
label_A054:;
    /* $A054: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_A056:;
    /* $A056: 20 */ maybe_trigger_vblank(6); func_ADC3_b0();
label_A059:;
    /* $A059: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A05B:;
    /* $A05B: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_A05D:;
    /* $A05D: 85 */ maybe_trigger_vblank(3); nes_write(0xB5, g_cpu.A);
label_A05F:;
    /* $A05F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_A061:;
    /* $A061: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_A063:;
    /* $A063: 20 */ maybe_trigger_vblank(6); func_E0D5();
label_A066:;
    /* $A066: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0C; FLAG_NZ(g_cpu.Y);
label_A068:;
    /* $A068: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_A06A:;
    /* $A06A: 20 */ maybe_trigger_vblank(6); func_E0D5();
label_A06D:;
    /* $A06D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AF7A_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF7A_b0");
#endif
label_AF7A:;
    /* $AF7A: 20 */ maybe_trigger_vblank(6); func_D543();
label_AF7D:;
    /* $AF7D: 20 */ maybe_trigger_vblank(6); func_F0BC();
label_AF80:;
    /* $AF80: 20 */ maybe_trigger_vblank(6); func_F061();
label_AF83:;
    /* $AF83: 20 */ maybe_trigger_vblank(6); func_D582();
label_AF86:;
    /* $AF86: 20 */ maybe_trigger_vblank(6); func_F0BC();
label_AF89:;
    /* $AF89: 20 */ maybe_trigger_vblank(6); func_A87D_b0();
label_AF8C:;
    /* $AF8C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0472); FLAG_NZ(g_cpu.A);
label_AF8F:;
    /* $AF8F: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_AF92:;
    /* $AF92: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B72C_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B765;
    }
label_B72C:;
    /* $B72C: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_B72F:;
    /* $B72F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x024B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B732:;
    /* $B732: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_B734:;
    /* $B734: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B739; }
label_B736:;
    /* $B736: 20 */ maybe_trigger_vblank(6); func_B78F_b0();
label_B739:;
    /* $B739: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_B73C:;
    /* $B73C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x024B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B73F:;
    /* $B73F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_B741:;
    /* $B741: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B746; }
label_B743:;
    /* $B743: 20 */ maybe_trigger_vblank(6); func_B7A3_b0();
label_B746:;
    /* $B746: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_B749:;
    /* $B749: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x024B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B74C:;
    /* $B74C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B74E:;
    /* $B74E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B766; }
label_B750:;
    /* $B750: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x024B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B753:;
    /* $B753: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_B755:;
    /* $B755: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B766; }
label_B757:;
    /* $B757: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x024B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B75A:;
    /* $B75A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_B75C:;
    /* $B75C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7B9; }
label_B75E:;
    /* $B75E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0249 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B761:;
    /* $B761: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_B763:;
    /* $B763: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7BA; }
label_B765:;
    /* $B765: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B766:;
    /* $B766: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_B769:;
    /* $B769: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x050E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B76C:;
    /* $B76C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0523 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B76F:;
    /* $B76F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B765;
    }
label_B771:;
    /* $B771: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0440 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B774:;
    /* $B774: 9D */ maybe_trigger_vblank(5); nes_write((0x04FD + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B777:;
    /* $B777: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_B77A:;
    /* $B77A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B785; }
label_B77C:;
    /* $B77C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B77E:;
    /* $B77E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B77F:;
    /* $B77F: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x04FD + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B782:;
    /* $B782: 9D */ maybe_trigger_vblank(5); nes_write((0x04FD + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B785:;
    /* $B785: 20 */ maybe_trigger_vblank(6); func_F600();
label_B788:;
    /* $B788: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_B78B:;
    /* $B78B: 20 */ maybe_trigger_vblank(6); func_F647();
label_B78E:;
    /* $B78E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B78F:;
    /* $B78F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_B792:;
    /* $B792: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0440 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B795:;
    /* $B795: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B765;
    }
label_B797:;
    /* $B797: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_B799:;
    /* $B799: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_B79C:;
    /* $B79C: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0440 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B79F:;
    /* $B79F: 20 */ maybe_trigger_vblank(6); func_A3FB_b0();
label_B7A2:;
    /* $B7A2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B7A3:;
    /* $B7A3: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_B7A6:;
    /* $B7A6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0440 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7A9:;
    /* $B7A9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B7AB:;
    /* $B7AB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B765;
    }
label_B7AD:;
    /* $B7AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_B7AF:;
    /* $B7AF: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_B7B2:;
    /* $B7B2: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0440 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7B5:;
    /* $B7B5: 20 */ maybe_trigger_vblank(6); func_A3FB_b0();
label_B7B8:;
    /* $B7B8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B7B9:;
    /* $B7B9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B7BA:;
    /* $B7BA: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_B7BD:;
    /* $B7BD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0523 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7C0:;
    /* $B7C0: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7C3:;
    /* $B7C3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B765;
    }
label_B7C5:;
    /* $B7C5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_B7C8:;
    /* $B7C8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7E5; }
label_B7CA:;
    /* $B7CA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_B7CC:;
    /* $B7CC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0462 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7CF:;
    /* $B7CF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B7D1:;
    /* $B7D1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7DF; }
label_B7D3:;
    /* $B7D3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x046A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7D6:;
    /* $B7D6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B7D8:;
    /* $B7D8: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B7DF; }
label_B7DA:;
    /* $B7DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B7DC:;
    /* $B7DC: 9D */ maybe_trigger_vblank(5); nes_write((0x046A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B7DF:;
    /* $B7DF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B7E0:;
    /* $B7E0: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x04; g_cpu.C=(g_cpu.X>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B7E2:;
    /* $B7E2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B7CC;
    }
label_B7E4:;
    /* $B7E4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B7E5:;
    /* $B7E5: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_B7E7:;
    /* $B7E7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0462 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7EA:;
    /* $B7EA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B7EC:;
    /* $B7EC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7FA; }
label_B7EE:;
    /* $B7EE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x046A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7F1:;
    /* $B7F1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B7F3:;
    /* $B7F3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B7FA; }
label_B7F5:;
    /* $B7F5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B7F7:;
    /* $B7F7: 9D */ maybe_trigger_vblank(5); nes_write((0x046A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B7FA:;
    /* $B7FA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B7FB:;
    /* $B7FB: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_B7FD:;
    /* $B7FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B7E7;
    }
label_B7FF:;
    /* $B7FF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B72C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B72C_b0");
#endif
    func_B72C_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B765_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B765_b0");
#endif
    func_B72C_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B800_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B834;
    }
label_B800:;
    /* $B800: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_B803:;
    /* $B803: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B804:;
    /* $B804: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B805:;
    /* $B805: 8D */ maybe_trigger_vblank(4); nes_write(0x0451, g_cpu.A);
label_B808:;
    /* $B808: 20 */ maybe_trigger_vblank(6); func_B8CC_b0();
label_B80B:;
    /* $B80B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0451; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B80E:;
    /* $B80E: 20 */ maybe_trigger_vblank(6); func_B8CC_b0();
label_B811:;
    /* $B811: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0451; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B814:;
    /* $B814: 20 */ maybe_trigger_vblank(6); func_B8CC_b0();
label_B817:;
    /* $B817: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0451; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B81A:;
    /* $B81A: 20 */ maybe_trigger_vblank(6); func_B8CC_b0();
label_B81D:;
    /* $B81D: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_B820:;
    /* $B820: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0512 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B823:;
    /* $B823: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x050C); FLAG_NZ(g_cpu.A);
label_B826:;
    /* $B826: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x050D); FLAG_NZ(g_cpu.A);
label_B829:;
    /* $B829: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0510); FLAG_NZ(g_cpu.A);
label_B82C:;
    /* $B82C: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0511); FLAG_NZ(g_cpu.A);
label_B82F:;
    /* $B82F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B834; }
label_B831:;
    /* $B831: 20 */ maybe_trigger_vblank(6); func_B835_b0();
label_B834:;
    /* $B834: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B800_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B800_b0");
#endif
    func_B800_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B834_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B834_b0");
#endif
    func_B800_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B660_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B660_b0");
#endif
label_B660:;
    /* $B660: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x044F); FLAG_NZ(g_cpu.Y);
label_B663:;
    /* $B663: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B68B; }
label_B665:;
    /* $B665: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0512); FLAG_NZ(g_cpu.A);
label_B668:;
    /* $B668: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B68B; }
label_B66A:;
    /* $B66A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_B66C:;
    /* $B66C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B678; }
label_B66E:;
    /* $B66E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0249); FLAG_NZ(g_cpu.A);
label_B671:;
    /* $B671: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_B673:;
    /* $B673: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B68B; }
label_B675:;
    /* $B675: 20 */ maybe_trigger_vblank(6); func_8FD4_b0();
label_B678:;
    /* $B678: 20 */ maybe_trigger_vblank(6); func_8415_b0();
label_B67B:;
    /* $B67B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B67D:;
    /* $B67D: 8D */ maybe_trigger_vblank(4); nes_write(0x0512, g_cpu.A);
label_B680:;
    /* $B680: 8D */ maybe_trigger_vblank(4); nes_write(0x0513, g_cpu.A);
label_B683:;
    /* $B683: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B685:;
    /* $B685: 8D */ maybe_trigger_vblank(4); nes_write(0x0510, g_cpu.A);
label_B688:;
    /* $B688: 8D */ maybe_trigger_vblank(4); nes_write(0x0511, g_cpu.A);
label_B68B:;
    /* $B68B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B78F_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B78F_b0");
#endif
label_B78F:;
    /* $B78F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_B792:;
    /* $B792: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0440 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B795:;
    /* $B795: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB765); return; }
label_B797:;
    /* $B797: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_B799:;
    /* $B799: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_B79C:;
    /* $B79C: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0440 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B79F:;
    /* $B79F: 20 */ maybe_trigger_vblank(6); func_A3FB_b0();
label_B7A2:;
    /* $B7A2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7A3_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7A3_b0");
#endif
label_B7A3:;
    /* $B7A3: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x044F); FLAG_NZ(g_cpu.X);
label_B7A6:;
    /* $B7A6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0440 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7A9:;
    /* $B7A9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B7AB:;
    /* $B7AB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB765); return; }
label_B7AD:;
    /* $B7AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_B7AF:;
    /* $B7AF: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_B7B2:;
    /* $B7B2: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0440 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7B5:;
    /* $B7B5: 20 */ maybe_trigger_vblank(6); func_A3FB_b0();
label_B7B8:;
    /* $B7B8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8CC_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8CC_b0");
#endif
label_B8CC:;
    /* $B8CC: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_B8CF:;
    /* $B8CF: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x044F); FLAG_NZ(g_cpu.Y);
label_B8D2:;
    /* $B8D2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0462 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8D5:;
    /* $B8D5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_B908; }
label_B8D7:;
    /* $B8D7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B8D9:;
    /* $B8D9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_B909; }
label_B8DB:;
    /* $B8DB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x050E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8DE:;
    /* $B8DE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8E7; }
label_B8E0:;
    /* $B8E0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x046A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8E3:;
    /* $B8E3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B8E5:;
    /* $B8E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_B908; }
label_B8E7:;
    /* $B8E7: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x046A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8EA:;
    /* $B8EA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_B908; }
label_B8EC:;
    /* $B8EC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0472 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8EF:;
    /* $B8EF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B8F1:;
    /* $B8F1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8FF; }
label_B8F3:;
    /* $B8F3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8F6:;
    /* $B8F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B8F8:;
    /* $B8F8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B8FF; }
label_B8FA:;
    /* $B8FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B8FC:;
    /* $B8FC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B902_b0(); return;
label_B8FF:;
    /* $B8FF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0472 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B902:;
    /* $B902: 9D */ maybe_trigger_vblank(5); nes_write((0x046A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B905:;
    /* $B905: 20 */ maybe_trigger_vblank(6); func_B930_b0();
label_B908:;
    /* $B908: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B909:;
    /* $B909: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x050E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B90C:;
    /* $B90C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B915; }
label_B90E:;
    /* $B90E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x046A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B911:;
    /* $B911: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B913:;
    /* $B913: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B908;
    }
label_B915:;
    /* $B915: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x046A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B918:;
    /* $B918: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x046A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B91B:;
    /* $B91B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B925; }
label_B91D:;
    /* $B91D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x26; g_cpu.C=(g_cpu.A>=0x26)?1:0; FLAG_NZ(r&0xFF); }
label_B91F:;
    /* $B91F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B924; }
label_B921:;
    /* $B921: 20 */ maybe_trigger_vblank(6); func_A87D_b0();
label_B924:;
    /* $B924: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B925:;
    /* $B925: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B927:;
    /* $B927: 9D */ maybe_trigger_vblank(5); nes_write((0x046A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B92A:;
    /* $B92A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B92C:;
    /* $B92C: 9D */ maybe_trigger_vblank(5); nes_write((0x0462 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B92F:;
    /* $B92F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B835_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B835_b0");
#endif
label_B835:;
    /* $B835: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_B838:;
    /* $B838: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_B83A:;
    /* $B83A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B83B:;
    /* $B83B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B83C:;
    /* $B83C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B83D:;
    /* $B83D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0462 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B840:;
    /* $B840: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB834); return; }
label_B842:;
    /* $B842: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B843:;
    /* $B843: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B844:;
    /* $B844: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B83D;
    }
label_B846:;
    /* $B846: 20 */ maybe_trigger_vblank(6); func_F061();
label_B849:;
    /* $B849: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_B84C:;
    /* $B84C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B865; }
label_B84E:;
    /* $B84E: 20 */ maybe_trigger_vblank(6); func_D582();
label_B851:;
    /* $B851: 20 */ maybe_trigger_vblank(6); func_F0BC();
label_B854:;
    /* $B854: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0613); FLAG_NZ(g_cpu.A);
label_B857:;
    /* $B857: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_B859:;
    /* $B859: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0472); FLAG_NZ(g_cpu.A);
label_B85C:;
    /* $B85C: 8D */ maybe_trigger_vblank(4); nes_write(0x0613, g_cpu.A);
label_B85F:;
    /* $B85F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA3); FLAG_NZ(g_cpu.A);
label_B861:;
    /* $B861: 8D */ maybe_trigger_vblank(4); nes_write(0x0472, g_cpu.A);
label_B864:;
    /* $B864: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B865:;
    /* $B865: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x81); FLAG_NZ(g_cpu.A);
label_B867:;
    /* $B867: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B86F; }
label_B869:;
    /* $B869: 20 */ maybe_trigger_vblank(6); func_B898_b0();
label_B86C:;
    /* $B86C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B874_b0(); return;
label_B86F:;
    /* $B86F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B871:;
    /* $B871: 8D */ maybe_trigger_vblank(4); nes_write(0x0474, g_cpu.A);
label_B874:;
    /* $B874: 20 */ maybe_trigger_vblank(6); func_D517();
label_B877:;
    /* $B877: 20 */ maybe_trigger_vblank(6); func_F0BC();
label_B87A:;
    /* $B87A: 20 */ maybe_trigger_vblank(6); func_84BB_b0();
label_B87D:;
    /* $B87D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_B880:;
    /* $B880: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B881:;
    /* $B881: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B882:;
    /* $B882: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x044F); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B885:;
    /* $B885: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B886:;
    /* $B886: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02CF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B889:;
    /* $B889: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1B; g_cpu.C=(g_cpu.A>=0x1B)?1:0; FLAG_NZ(r&0xFF); }
label_B88B:;
    /* $B88B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB834); return; }
label_B88D:;
    /* $B88D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02D0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B890:;
    /* $B890: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1B; g_cpu.C=(g_cpu.A>=0x1B)?1:0; FLAG_NZ(r&0xFF); }
label_B892:;
    /* $B892: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB834); return; }
label_B894:;
    /* $B894: 20 */ maybe_trigger_vblank(6); func_E32F();
label_B897:;
    /* $B897: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B902_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B902_b0");
#endif
label_B902:;
    /* $B902: 9D */ maybe_trigger_vblank(5); nes_write((0x046A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B905:;
    /* $B905: 20 */ maybe_trigger_vblank(6); func_B930_b0();
label_B908:;
    /* $B908: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B930_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B930_b0");
#endif
label_B930:;
    /* $B930: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_B933:;
    /* $B933: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B936:;
    /* $B936: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B938:;
    /* $B938: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B93D; }
label_B93A:;
    /* $B93A: 20 */ maybe_trigger_vblank(6); func_BA12_b0();
label_B93D:;
    /* $B93D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B940:;
    /* $B940: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B941:;
    /* $B941: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_B943:;
    /* $B943: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0487 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B946:;
    /* $B946: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B94B; }
label_B948:;
    /* $B948: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_B9F4_b0(); return;
label_B94B:;
    /* $B94B: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_B94E:;
    /* $B94E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B951:;
    /* $B951: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_B953:;
    /* $B953: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B998; }
label_B955:;
    /* $B955: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x044F); FLAG_NZ(g_cpu.Y);
label_B958:;
    /* $B958: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0523 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B95B:;
    /* $B95B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B968; }
label_B95D:;
    /* $B95D: 20 */ maybe_trigger_vblank(6); func_D94C();
label_B960:;
    /* $B960: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x044F); FLAG_NZ(g_cpu.Y);
label_B963:;
    /* $B963: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0523 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B966:;
    /* $B966: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B969; }
label_B968:;
    /* $B968: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B969:;
    /* $B969: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0451); FLAG_NZ(g_cpu.A);
label_B96C:;
    /* $B96C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B96D:;
    /* $B96D: 8D */ maybe_trigger_vblank(4); nes_write(0x02D4, g_cpu.A);
label_B970:;
    /* $B970: 8D */ maybe_trigger_vblank(4); nes_write(0x0444, g_cpu.A);
label_B973:;
    /* $B973: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B976:;
    /* $B976: 8D */ maybe_trigger_vblank(4); nes_write(0x02D5, g_cpu.A);
label_B979:;
    /* $B979: 8D */ maybe_trigger_vblank(4); nes_write(0x0445, g_cpu.A);
label_B97C:;
    /* $B97C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B97E:;
    /* $B97E: 8D */ maybe_trigger_vblank(4); nes_write(0x02D6, g_cpu.A);
label_B981:;
    /* $B981: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B983:;
    /* $B983: 8D */ maybe_trigger_vblank(4); nes_write(0x0446, g_cpu.A);
label_B986:;
    /* $B986: 20 */ maybe_trigger_vblank(6); func_A8D8_b0();
label_B989:;
    /* $B989: 20 */ maybe_trigger_vblank(6); func_DAF2();
label_B98C:;
    /* $B98C: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_B98F:;
    /* $B98F: 20 */ maybe_trigger_vblank(6); func_BA9B_b0();
label_B992:;
    /* $B992: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_B994:;
    /* $B994: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_B997:;
    /* $B997: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B998:;
    /* $B998: 20 */ maybe_trigger_vblank(6); func_BA1B_b0();
label_B99B:;
    /* $B99B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0509); FLAG_NZ(g_cpu.A);
label_B99E:;
    /* $B99E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B9A4; }
label_B9A0:;
    /* $B9A0: 20 */ maybe_trigger_vblank(6); func_BAAA_b0();
label_B9A3:;
    /* $B9A3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B9A4:;
    /* $B9A4: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_B9A7:;
    /* $B9A7: 8E */ maybe_trigger_vblank(4); nes_write(0x0444, g_cpu.X);
label_B9AA:;
    /* $B9AA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9AD:;
    /* $B9AD: 8D */ maybe_trigger_vblank(4); nes_write(0x0445, g_cpu.A);
label_B9B0:;
    /* $B9B0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9B3:;
    /* $B9B3: 8D */ maybe_trigger_vblank(4); nes_write(0x0446, g_cpu.A);
label_B9B6:;
    /* $B9B6: 20 */ maybe_trigger_vblank(6); func_A8D8_b0();
label_B9B9:;
    /* $B9B9: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_B9BC:;
    /* $B9BC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9BF:;
    /* $B9BF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B9C1:;
    /* $B9C1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B9CD; }
label_B9C3:;
    /* $B9C3: 20 */ maybe_trigger_vblank(6); func_E25D();
label_B9C6:;
    /* $B9C6: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_B9C9:;
    /* $B9C9: 20 */ maybe_trigger_vblank(6); func_B9D4_b0();
label_B9CC:;
    /* $B9CC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B9CD:;
    /* $B9CD: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_B9D0:;
    /* $B9D0: 20 */ maybe_trigger_vblank(6); func_B9D4_b0();
label_B9D3:;
    /* $B9D3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B898_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B898_b0");
#endif
label_B898:;
    /* $B898: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_B89B:;
    /* $B89B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_B89D:;
    /* $B89D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B89E:;
    /* $B89E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x053C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8A1:;
    /* $B8A1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8C6; }
label_B8A3:;
    /* $B8A3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B8A5:;
    /* $B8A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8B8; }
label_B8A7:;
    /* $B8A7: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x053C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8AA:;
    /* $B8AA: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x053C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8AD:;
    /* $B8AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B8AF:;
    /* $B8AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0474, g_cpu.A);
label_B8B2:;
    /* $B8B2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_B8B4:;
    /* $B8B4: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_B8B7:;
    /* $B8B7: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B8B8:;
    /* $B8B8: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x053C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8BB:;
    /* $B8BB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B8BD:;
    /* $B8BD: 8D */ maybe_trigger_vblank(4); nes_write(0x0474, g_cpu.A);
label_B8C0:;
    /* $B8C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_B8C2:;
    /* $B8C2: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_B8C5:;
    /* $B8C5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B8C6:;
    /* $B8C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B8C8:;
    /* $B8C8: 8D */ maybe_trigger_vblank(4); nes_write(0x0474, g_cpu.A);
label_B8CB:;
    /* $B8CB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B874_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B874_b0");
#endif
label_B874:;
    /* $B874: 20 */ maybe_trigger_vblank(6); func_D517();
label_B877:;
    /* $B877: 20 */ maybe_trigger_vblank(6); func_F0BC();
label_B87A:;
    /* $B87A: 20 */ maybe_trigger_vblank(6); func_84BB_b0();
label_B87D:;
    /* $B87D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044F); FLAG_NZ(g_cpu.A);
label_B880:;
    /* $B880: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B881:;
    /* $B881: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B882:;
    /* $B882: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x044F); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B885:;
    /* $B885: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B886:;
    /* $B886: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02CF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B889:;
    /* $B889: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1B; g_cpu.C=(g_cpu.A>=0x1B)?1:0; FLAG_NZ(r&0xFF); }
label_B88B:;
    /* $B88B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB834); return; }
label_B88D:;
    /* $B88D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02D0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B890:;
    /* $B890: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1B; g_cpu.C=(g_cpu.A>=0x1B)?1:0; FLAG_NZ(r&0xFF); }
label_B892:;
    /* $B892: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xB834); return; }
label_B894:;
    /* $B894: 20 */ maybe_trigger_vblank(6); func_E32F();
label_B897:;
    /* $B897: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA12_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA12_b0");
#endif
label_BA12:;
    /* $BA12: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x044F); FLAG_NZ(g_cpu.Y);
label_BA15:;
    /* $BA15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_BA17:;
    /* $BA17: 99 */ maybe_trigger_vblank(5); nes_write((0x050A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BA1A:;
    /* $BA1A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9F4_b0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B9FA;
    }
label_B9F4:;
    /* $B9F4: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0452 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9F7:;
    /* $B9F7: 20 */ maybe_trigger_vblank(6); func_B9FB_b0();
label_B9FA:;
    /* $B9FA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9F4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F4_b0");
#endif
    func_B9F4_b0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9FA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9FA_b0");
#endif
    func_B9F4_b0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA1B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA1B_b0");
#endif
label_BA1B:;
    /* $BA1B: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_BA1E:;
    /* $BA1E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA21:;
    /* $BA21: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_BA23:;
    /* $BA23: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA47; }
label_BA25:;
    /* $BA25: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA28:;
    /* $BA28: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_BA2B:;
    /* $BA2B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x04EA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA2E:;
    /* $BA2E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x04EA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA31:;
    /* $BA31: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0451); FLAG_NZ(g_cpu.A);
label_BA34:;
    /* $BA34: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_BA37:;
    /* $BA37: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_BA3A:;
    /* $BA3A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_BA3C:;
    /* $BA3C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA3E:;
    /* $BA3E: 85 */ maybe_trigger_vblank(3); nes_write(0xA3, g_cpu.A);
label_BA40:;
    /* $BA40: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA43:;
    /* $BA43: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA3); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA45:;
    /* $BA45: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA52; }
label_BA47:;
    /* $BA47: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_BA49:;
    /* $BA49: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_BA4C:;
    /* $BA4C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BA4E:;
    /* $BA4E: 8D */ maybe_trigger_vblank(4); nes_write(0x0509, g_cpu.A);
label_BA51:;
    /* $BA51: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BA52:;
    /* $BA52: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_BA54:;
    /* $BA54: 8D */ maybe_trigger_vblank(4); nes_write(0x0509, g_cpu.A);
label_BA57:;
    /* $BA57: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_BA59:;
    /* $BA59: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_BA5C:;
    /* $BA5C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BAAA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAAA_b0");
#endif
label_BAAA:;
    /* $BAAA: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_BAAD:;
    /* $BAAD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAB0:;
    /* $BAB0: 8E */ maybe_trigger_vblank(4); nes_write(0x02D4, g_cpu.X);
label_BAB3:;
    /* $BAB3: 8D */ maybe_trigger_vblank(4); nes_write(0x02D5, g_cpu.A);
label_BAB6:;
    /* $BAB6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BAB8:;
    /* $BAB8: 8D */ maybe_trigger_vblank(4); nes_write(0x02D6, g_cpu.A);
label_BABB:;
    /* $BABB: 20 */ maybe_trigger_vblank(6); func_DAF2();
label_BABE:;
    /* $BABE: 8E */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.X);
label_BAC1:;
    /* $BAC1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAC4:;
    /* $BAC4: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_BAC7:;
    /* $BAC7: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_BACA:;
    /* $BACA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BACC:;
    /* $BACC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BACD:;
    /* $BACD: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BACF:;
    /* $BACF: EE */ maybe_trigger_vblank(6); { uint16_t a=0x04EA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAD2:;
    /* $BAD2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x04EA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAD5:;
    /* $BAD5: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_BAD8:;
    /* $BAD8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BADA:;
    /* $BADA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BADB:;
    /* $BADB: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BADD:;
    /* $BADD: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_BAE0:;
    /* $BAE0: 8E */ maybe_trigger_vblank(4); nes_write(0x0444, g_cpu.X);
label_BAE3:;
    /* $BAE3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAE6:;
    /* $BAE6: 8D */ maybe_trigger_vblank(4); nes_write(0x0445, g_cpu.A);
label_BAE9:;
    /* $BAE9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BAEB:;
    /* $BAEB: 8D */ maybe_trigger_vblank(4); nes_write(0x0446, g_cpu.A);
label_BAEE:;
    /* $BAEE: 20 */ maybe_trigger_vblank(6); func_A8D8_b0();
label_BAF1:;
    /* $BAF1: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0445; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAF4:;
    /* $BAF4: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0445; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAF7:;
    /* $BAF7: 20 */ maybe_trigger_vblank(6); func_A8D8_b0();
label_BAFA:;
    /* $BAFA: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0451); FLAG_NZ(g_cpu.X);
label_BAFD:;
    /* $BAFD: 20 */ maybe_trigger_vblank(6); func_BA9B_b0();
label_BB00:;
    /* $BB00: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0487 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB03:;
    /* $BB03: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0487 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB06:;
    /* $BB06: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_BB08:;
    /* $BB08: 20 */ maybe_trigger_vblank(6); func_F6FF();
label_BB0B:;
    /* $BB0B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_BB0D:;
    /* $BB0D: 85 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.A);
label_BB0F:;
    /* $BB0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBB; FLAG_NZ(g_cpu.A);
label_BB11:;
    /* $BB11: 85 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.A);
label_BB13:;
    /* $BB13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB15:;
    /* $BB15: 20 */ maybe_trigger_vblank(6); func_8939_b0();
label_BB18:;
    /* $BB18: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9D4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9D4_b0");
#endif
label_B9D4:;
    /* $B9D4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9D7:;
    /* $B9D7: 8D */ maybe_trigger_vblank(4); nes_write(0x04EA, g_cpu.A);
label_B9DA:;
    /* $B9DA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0451); FLAG_NZ(g_cpu.A);
label_B9DD:;
    /* $B9DD: 8D */ maybe_trigger_vblank(4); nes_write(0x04E9, g_cpu.A);
label_B9E0:;
    /* $B9E0: 20 */ maybe_trigger_vblank(6); func_A8AD_b0();
label_B9E3:;
    /* $B9E3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9E6:;
    /* $B9E6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B9E8:;
    /* $B9E8: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B9EA:;
    /* $B9EA: 20 */ maybe_trigger_vblank(6); func_BA9B_b0();
label_B9ED:;
    /* $B9ED: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0487 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9F0:;
    /* $B9F0: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0487 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9F3:;
    /* $B9F3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9FB_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9FB_b0");
#endif
label_B9FB:;
    /* $B9FB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0451); FLAG_NZ(g_cpu.A);
label_B9FE:;
    /* $B9FE: 8D */ maybe_trigger_vblank(4); nes_write(0x0444, g_cpu.A);
label_BA01:;
    /* $BA01: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BA02:;
    /* $BA02: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0452 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA05:;
    /* $BA05: 8D */ maybe_trigger_vblank(4); nes_write(0x0445, g_cpu.A);
label_BA08:;
    /* $BA08: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA0B:;
    /* $BA0B: 8D */ maybe_trigger_vblank(4); nes_write(0x0446, g_cpu.A);
label_BA0E:;
    /* $BA0E: 20 */ maybe_trigger_vblank(6); func_A77D_b0();
label_BA11:;
    /* $BA11: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

