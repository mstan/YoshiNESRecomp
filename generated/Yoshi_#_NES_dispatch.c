/* AUTO-GENERATED dispatch table. DO NOT EDIT. */
#include "nes_runtime.h"
extern int g_current_bank;

void call_by_address(uint16_t addr) {
    switch (addr) {
        case 0xFFDA:
            func_FFDA(); break;
        case 0xE122:
            func_E122(); break;
        case 0xE1ED:
            func_E1ED(); break;
        case 0x8000:
            func_8000_b0(); break;
        case 0xCE02:
            func_CE02(); break;
        case 0xE185:
            func_E185(); break;
        case 0xCF4F:
            func_CF4F(); break;
        case 0xCF39:
            func_CF39(); break;
        case 0xE1EE:
            func_E1EE(); break;
        case 0xE157:
            func_E157(); break;
        case 0xE18C:
            func_E18C(); break;
        case 0xCF65:
            func_CF65(); break;
        case 0xA670:
            switch (g_current_bank) {
                case 0: func_A670_b0(); break;
                case 1: func_A670_b1(); break;
                case 2: func_A670_b2(); break;
                case 3: func_A670_b3(); break;
                case 4: func_A670_b4(); break;
                case 5: func_A670_b5(); break;
                case 6: func_A670_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9E77:
            switch (g_current_bank) {
                case 0: func_9E77_b0(); break;
                case 1: func_9E77_b1(); break;
                case 2: func_9E77_b2(); break;
                case 3: func_9E77_b3(); break;
                case 4: func_9E77_b4(); break;
                case 5: func_9E77_b5(); break;
                case 6: func_9E77_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCF69:
            func_CF69(); break;
        case 0xCF12:
            func_CF12(); break;
        case 0xCF16:
            func_CF16(); break;
        case 0xCECF:
            func_CECF(); break;
        case 0x809B:
            switch (g_current_bank) {
                case 7: func_C09B(); break;
                case 0: func_809B_b0(); break;
                case 1: func_809B_b1(); break;
                case 2: func_809B_b2(); break;
                case 3: func_809B_b3(); break;
                case 4: func_809B_b4(); break;
                case 5: func_809B_b5(); break;
                case 6: func_809B_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA37C:
            switch (g_current_bank) {
                case 0: func_A37C_b0(); break;
                case 1: func_A37C_b1(); break;
                case 2: func_A37C_b2(); break;
                case 3: func_A37C_b3(); break;
                case 4: func_A37C_b4(); break;
                case 5: func_A37C_b5(); break;
                case 6: func_A37C_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xEE2C:
            func_EE2C(); break;
        case 0xD0BF:
            func_D0BF(); break;
        case 0xCF7F:
            func_CF7F(); break;
        case 0xCCA8:
            func_CCA8(); break;
        case 0xD0F2:
            func_D0F2(); break;
        case 0xA723:
            func_A723_b1(); break;
        case 0x846B:
            func_846B_b0(); break;
        case 0x9C02:
            func_9C02_b0(); break;
        case 0x9F5C:
            func_9F5C_b0(); break;
        case 0xA60E:
            func_A60E_b1(); break;
        case 0xA642:
            func_A642_b1(); break;
        case 0x9EE7:
            func_9EE7_b1(); break;
        case 0xCF23:
            func_CF23(); break;
        case 0x8006:
            switch (g_current_bank) {
                case 7: func_C006(); break;
                case 0: func_8006_b0(); break;
                case 1: func_8006_b1(); break;
                case 2: func_8006_b2(); break;
                case 3: func_8006_b3(); break;
                case 4: func_8006_b4(); break;
                case 5: func_8006_b5(); break;
                case 6: func_8006_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x80BA:
            switch (g_current_bank) {
                case 0: func_80BA_b0(); break;
                case 1: func_80BA_b1(); break;
                case 2: func_80BA_b2(); break;
                case 3: func_80BA_b3(); break;
                case 4: func_80BA_b4(); break;
                case 5: func_80BA_b5(); break;
                case 6: func_80BA_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xF6B3:
            func_F6B3(); break;
        case 0xE610:
            func_E610(); break;
        case 0xF48A:
            func_F48A(); break;
        case 0xE601:
            func_E601(); break;
        case 0xE600:
            func_E600(); break;
        case 0xE501:
            func_E501(); break;
        case 0xE500:
            func_E500(); break;
        case 0xB1E5:
            func_B1E5_b1(); break;
        case 0xE400:
            func_E400(); break;
        case 0xD16E:
            func_D16E(); break;
        case 0xA381:
            func_A381_b0(); break;
        case 0xA579:
            func_A579_b1(); break;
        case 0xA5D6:
            func_A5D6_b1(); break;
        case 0xD02A:
            func_D02A(); break;
        case 0xCD1F:
            func_CD1F(); break;
        case 0xCD38:
            func_CD38(); break;
        case 0xA6FE:
            func_A6FE_b1(); break;
        case 0xA720:
            func_A720_b1(); break;
        case 0x806A:
            switch (g_current_bank) {
                case 0: func_806A_b0(); break;
                case 1: func_806A_b1(); break;
                case 2: func_806A_b2(); break;
                case 3: func_806A_b3(); break;
                case 4: func_806A_b4(); break;
                case 5: func_806A_b5(); break;
                case 6: func_806A_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xE449:
            func_E449(); break;
        case 0xEFD1:
            func_EFD1(); break;
        case 0x920F:
            switch (g_current_bank) {
                case 0: func_920F_b0(); break;
                case 1: func_920F_b1(); break;
                case 2: func_920F_b2(); break;
                case 3: func_920F_b3(); break;
                case 4: func_920F_b4(); break;
                case 5: func_920F_b5(); break;
                case 6: func_920F_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x84AF:
            func_84AF_b0(); break;
        case 0xA66C:
            func_A66C_b1(); break;
        case 0xA56C:
            func_A56C_b1(); break;
        case 0xA047:
            func_A047_b1(); break;
        case 0xA5E8:
            func_A5E8_b1(); break;
        case 0xA897:
            func_A897_b1(); break;
        case 0x9EE6:
            func_9EE6_b1(); break;
        case 0x9FB8:
            func_9FB8_b1(); break;
        case 0xA5A8:
            func_A5A8_b1(); break;
        case 0x9FB0:
            func_9FB0_b1(); break;
        case 0xA023:
            func_A023_b1(); break;
        case 0xA02D:
            func_A02D_b1(); break;
        case 0x800D:
            func_800D_b0(); break;
        case 0x80A4:
            func_80A4_b0(); break;
        case 0xE650:
            func_E650(); break;
        case 0x80B3:
            func_80B3_b1(); break;
        case 0xEDBD:
            func_EDBD(); break;
        case 0xEDD0:
            func_EDD0(); break;
        case 0xA8AD:
            switch (g_current_bank) {
                case 0: func_A8AD_b0(); break;
                case 1: func_A8AD_b1(); break;
                case 2: func_A8AD_b2(); break;
                case 3: func_A8AD_b3(); break;
                case 4: func_A8AD_b4(); break;
                case 5: func_A8AD_b5(); break;
                case 6: func_A8AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAB29:
            switch (g_current_bank) {
                case 0: func_AB29_b0(); break;
                case 1: func_AB29_b1(); break;
                case 2: func_AB29_b2(); break;
                case 3: func_AB29_b3(); break;
                case 4: func_AB29_b4(); break;
                case 5: func_AB29_b5(); break;
                case 6: func_AB29_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAC6C:
            switch (g_current_bank) {
                case 0: func_AC6C_b0(); break;
                case 1: func_AC6C_b1(); break;
                case 2: func_AC6C_b2(); break;
                case 3: func_AC6C_b3(); break;
                case 4: func_AC6C_b4(); break;
                case 5: func_AC6C_b5(); break;
                case 6: func_AC6C_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xE5D5:
            func_E5D5(); break;
        case 0x859E:
            switch (g_current_bank) {
                case 0: func_859E_b0(); break;
                case 1: func_859E_b1(); break;
                case 2: func_859E_b2(); break;
                case 3: func_859E_b3(); break;
                case 4: func_859E_b4(); break;
                case 5: func_859E_b5(); break;
                case 6: func_859E_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x86F3:
            switch (g_current_bank) {
                case 0: func_86F3_b0(); break;
                case 1: func_86F3_b1(); break;
                case 2: func_86F3_b2(); break;
                case 3: func_86F3_b3(); break;
                case 4: func_86F3_b4(); break;
                case 5: func_86F3_b5(); break;
                case 6: func_86F3_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD2D8:
            func_D2D8(); break;
        case 0xD203:
            func_D203(); break;
        case 0x802B:
            switch (g_current_bank) {
                case 0: func_802B_b0(); break;
                case 1: func_802B_b1(); break;
                case 2: func_802B_b2(); break;
                case 3: func_802B_b3(); break;
                case 4: func_802B_b4(); break;
                case 5: func_802B_b5(); break;
                case 6: func_802B_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCF8A:
            func_CF8A(); break;
        case 0xCDB4:
            func_CDB4(); break;
        case 0xA7B9:
            func_A7B9_b1(); break;
        case 0xE51F:
            func_E51F(); break;
        case 0x920E:
            func_920E_b0(); break;
        case 0x925A:
            func_925A_b0(); break;
        case 0x92A4:
            func_92A4_b0(); break;
        case 0x9286:
            func_9286_b0(); break;
        case 0xA12B:
            func_A12B_b1(); break;
        case 0xA58B:
            func_A58B_b1(); break;
        case 0xA598:
            func_A598_b1(); break;
        case 0xA622:
            func_A622_b1(); break;
        case 0xA632:
            func_A632_b1(); break;
        case 0xA97B:
            func_A97B_b1(); break;
        case 0xA958:
            func_A958_b1(); break;
        case 0xA963:
            func_A963_b1(); break;
        case 0xA5CC:
            func_A5CC_b1(); break;
        case 0xA8D8:
            switch (g_current_bank) {
                case 0: func_A8D8_b0(); break;
                case 1: func_A8D8_b1(); break;
                case 2: func_A8D8_b2(); break;
                case 3: func_A8D8_b3(); break;
                case 4: func_A8D8_b4(); break;
                case 5: func_A8D8_b5(); break;
                case 6: func_A8D8_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA7F5:
            func_A7F5_b0(); break;
        case 0xAB72:
            func_AB72_b0(); break;
        case 0xA915:
            func_A915_b0(); break;
        case 0xAB97:
            func_AB97_b0(); break;
        case 0xAAE7:
            func_AAE7_b0(); break;
        case 0xAA9F:
            func_AA9F_b0(); break;
        case 0xBC1D:
            func_BC1D_b0(); break;
        case 0xACA9:
            func_ACA9_b0(); break;
        case 0xAC39:
            switch (g_current_bank) {
                case 0: func_AC39_b0(); break;
                case 1: func_AC39_b1(); break;
                case 2: func_AC39_b2(); break;
                case 3: func_AC39_b3(); break;
                case 4: func_AC39_b4(); break;
                case 5: func_AC39_b5(); break;
                case 6: func_AC39_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCDF0:
            func_CDF0(); break;
        case 0x8564:
            func_8564_b0(); break;
        case 0x8581:
            func_8581_b0(); break;
        case 0x8690:
            func_8690_b1(); break;
        case 0x8689:
            func_8689_b1(); break;
        case 0x86AD:
            switch (g_current_bank) {
                case 1: func_86AD_b1(); break;
                case 0: func_86AD_b0(); break;
                case 2: func_86AD_b2(); break;
                case 3: func_86AD_b3(); break;
                case 4: func_86AD_b4(); break;
                case 5: func_86AD_b5(); break;
                case 6: func_86AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD202:
            func_D202(); break;
        case 0xD050:
            func_D050(); break;
        case 0xCFE0:
            func_CFE0(); break;
        case 0xD04F:
            func_D04F(); break;
        case 0xD097:
            func_D097(); break;
        case 0xD56E:
            func_D56E(); break;
        case 0x8864:
            switch (g_current_bank) {
                case 0: func_8864_b0(); break;
                case 1: func_8864_b1(); break;
                case 2: func_8864_b2(); break;
                case 3: func_8864_b3(); break;
                case 4: func_8864_b4(); break;
                case 5: func_8864_b5(); break;
                case 6: func_8864_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8840:
            switch (g_current_bank) {
                case 0: func_8840_b0(); break;
                case 1: func_8840_b1(); break;
                case 2: func_8840_b2(); break;
                case 3: func_8840_b3(); break;
                case 4: func_8840_b4(); break;
                case 5: func_8840_b5(); break;
                case 6: func_8840_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD5C6:
            func_D5C6(); break;
        case 0xD916:
            func_D916(); break;
        case 0xD8DE:
            func_D8DE(); break;
        case 0xF6FF:
            func_F6FF(); break;
        case 0xB601:
            switch (g_current_bank) {
                case 0: func_B601_b0(); break;
                case 1: func_B601_b1(); break;
                case 2: func_B601_b2(); break;
                case 3: func_B601_b3(); break;
                case 4: func_B601_b4(); break;
                case 5: func_B601_b5(); break;
                case 6: func_B601_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x80CB:
            switch (g_current_bank) {
                case 0: func_80CB_b0(); break;
                case 1: func_80CB_b1(); break;
                case 2: func_80CB_b2(); break;
                case 3: func_80CB_b3(); break;
                case 4: func_80CB_b4(); break;
                case 5: func_80CB_b5(); break;
                case 6: func_80CB_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD929:
            func_D929(); break;
        case 0x9118:
            switch (g_current_bank) {
                case 0: func_9118_b0(); break;
                case 1: func_9118_b1(); break;
                case 2: func_9118_b2(); break;
                case 3: func_9118_b3(); break;
                case 4: func_9118_b4(); break;
                case 5: func_9118_b5(); break;
                case 6: func_9118_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xBA9B:
            switch (g_current_bank) {
                case 0: func_BA9B_b0(); break;
                case 1: func_BA9B_b1(); break;
                case 2: func_BA9B_b2(); break;
                case 3: func_BA9B_b3(); break;
                case 4: func_BA9B_b4(); break;
                case 5: func_BA9B_b5(); break;
                case 6: func_BA9B_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD9D3:
            func_D9D3(); break;
        case 0xBC9C:
            switch (g_current_bank) {
                case 0: func_BC9C_b0(); break;
                case 1: func_BC9C_b1(); break;
                case 2: func_BC9C_b2(); break;
                case 3: func_BC9C_b3(); break;
                case 4: func_BC9C_b4(); break;
                case 5: func_BC9C_b5(); break;
                case 6: func_BC9C_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xDA76:
            func_DA76(); break;
        case 0xA77D:
            switch (g_current_bank) {
                case 0: func_A77D_b0(); break;
                case 1: func_A77D_b1(); break;
                case 2: func_A77D_b2(); break;
                case 3: func_A77D_b3(); break;
                case 4: func_A77D_b4(); break;
                case 5: func_A77D_b5(); break;
                case 6: func_A77D_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x90CE:
            switch (g_current_bank) {
                case 0: func_90CE_b0(); break;
                case 1: func_90CE_b1(); break;
                case 2: func_90CE_b2(); break;
                case 3: func_90CE_b3(); break;
                case 4: func_90CE_b4(); break;
                case 5: func_90CE_b5(); break;
                case 6: func_90CE_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xDCC1:
            func_DCC1(); break;
        case 0xDD26:
            func_DD26(); break;
        case 0xDD92:
            func_DD92(); break;
        case 0xDDF9:
            func_DDF9(); break;
        case 0xDECC:
            func_DECC(); break;
        case 0xDF5D:
            func_DF5D(); break;
        case 0xDFF0:
            func_DFF0(); break;
        case 0xE063:
            func_E063(); break;
        case 0xDE2C:
            func_DE2C(); break;
        case 0xDC20:
            func_DC20(); break;
        case 0xDC21:
            func_DC21(); break;
        case 0xDC4E:
            func_DC4E(); break;
        case 0xDC67:
            func_DC67(); break;
        case 0xDC5C:
            func_DC5C(); break;
        case 0xDD36:
            func_DD36(); break;
        case 0xDCD1:
            func_DCD1(); break;
        case 0xDDA2:
            func_DDA2(); break;
        case 0xDE09:
            func_DE09(); break;
        case 0xE0EE:
            func_E0EE(); break;
        case 0xE0D5:
            func_E0D5(); break;
        case 0x92CC:
            func_92CC_b0(); break;
        case 0xA1D3:
            func_A1D3_b1(); break;
        case 0xA046:
            func_A046_b1(); break;
        case 0xA5B1:
            func_A5B1_b1(); break;
        case 0xA1BF:
            func_A1BF_b1(); break;
        case 0xA4D9:
            func_A4D9_b1(); break;
        case 0xA5BA:
            func_A5BA_b1(); break;
        case 0xA5C3:
            func_A5C3_b1(); break;
        case 0xA8F7:
            func_A8F7_b0(); break;
        case 0xAA92:
            func_AA92_b0(); break;
        case 0xA9A0:
            func_A9A0_b0(); break;
        case 0xA99D:
            func_A99D_b0(); break;
        case 0xA9A6:
            func_A9A6_b0(); break;
        case 0xAA33:
            func_AA33_b0(); break;
        case 0xAA30:
            func_AA30_b0(); break;
        case 0xAA39:
            func_AA39_b0(); break;
        case 0xBC1C:
            func_BC1C_b0(); break;
        case 0xBBCB:
            switch (g_current_bank) {
                case 0: func_BBCB_b0(); break;
                case 1: func_BBCB_b1(); break;
                case 2: func_BBCB_b2(); break;
                case 3: func_BBCB_b3(); break;
                case 4: func_BBCB_b4(); break;
                case 5: func_BBCB_b5(); break;
                case 6: func_BBCB_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAC58:
            func_AC58_b0(); break;
        case 0xCFDE:
            func_CFDE(); break;
        case 0x8825:
            func_8825_b1(); break;
        case 0x8817:
            func_8817_b1(); break;
        case 0x80EE:
            func_80EE_b0(); break;
        case 0x80BB:
            func_80BB_b1(); break;
        case 0x9117:
            func_9117_b0(); break;
        case 0x91C9:
            func_91C9_b0(); break;
        case 0x8939:
            func_8939_b0(); break;
        case 0x91AC:
            func_91AC_b0(); break;
        case 0xE598:
            func_E598(); break;
        case 0xDC12:
            func_DC12(); break;
        case 0xD9D2:
            func_D9D2(); break;
        case 0xF750:
            func_F750(); break;
        case 0xA841:
            func_A841_b0(); break;
        case 0xA865:
            func_A865_b0(); break;
        case 0xA7A1:
            func_A7A1_b0(); break;
        case 0xA7BC:
            func_A7BC_b0(); break;
        case 0xA7D8:
            func_A7D8_b0(); break;
        case 0xE083:
            func_E083(); break;
        case 0xDE70:
            func_DE70(); break;
        case 0xDEDC:
            func_DEDC(); break;
        case 0xDF6D:
            func_DF6D(); break;
        case 0xE000:
            func_E000(); break;
        case 0xE100:
            func_E100(); break;
        case 0xE112:
            func_E112(); break;
        case 0xA241:
            switch (g_current_bank) {
                case 1: func_A241_b1(); break;
                case 0: func_A241_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA516:
            func_A516_b1(); break;
        case 0xA7C2:
            func_A7C2_b1(); break;
        case 0xBBC1:
            func_BBC1_b0(); break;
        case 0xBBDC:
            func_BBDC_b0(); break;
        case 0xBBCA:
            func_BBCA_b0(); break;
        case 0x8978:
            func_8978_b0(); break;
        case 0xA7CA:
            func_A7CA_b0(); break;
        case 0xE0AE:
            func_E0AE(); break;
        case 0xE099:
            func_E099(); break;
        case 0xA357:
            func_A357_b1(); break;
        case 0xA7DD:
            func_A7DD_b1(); break;
        case 0xA85B:
            func_A85B_b1(); break;
        case 0xA860:
            func_A860_b1(); break;
        case 0xBB9A:
            func_BB9A_b0(); break;
        case 0xBB77:
            func_BB77_b0(); break;
        case 0xBB1D:
            func_BB1D_b0(); break;
        case 0xA5DC:
            func_A5DC_b1(); break;
        case 0xA3F2:
            func_A3F2_b1(); break;
        case 0xA3D5:
            func_A3D5_b1(); break;
        case 0xA365:
            func_A365_b1(); break;
        case 0xA49D:
            func_A49D_b1(); break;
        case 0xA4CD:
            func_A4CD_b1(); break;
        case 0xBBAA:
            func_BBAA_b0(); break;
        case 0xBBBD:
            func_BBBD_b0(); break;
        case 0xBB57:
            func_BB57_b0(); break;
        case 0xE386:
            func_E386(); break;
        case 0xE387:
            func_E387(); break;
        case 0xC7C7:
            func_C7C7(); break;
        case 0xC7C8:
            func_C7C8(); break;
        case 0xC157:
            func_C157(); break;
        case 0xC158:
            func_C158(); break;
        case 0xC003:
            func_C003(); break;
        case 0xC004:
            func_C004(); break;
        case 0xDAB5:
            func_DAB5(); break;
        case 0xDFFD:
            func_DFFD(); break;
        case 0xFFE0:
            func_FFE0(); break;
        case 0xEAAA:
            func_EAAA(); break;
        case 0xE2FA:
            func_E2FA(); break;
        case 0xE2FB:
            func_E2FB(); break;
        case 0xDDE3:
            func_DDE3(); break;
        case 0xEDDD:
            func_EDDD(); break;
        case 0xEDDE:
            func_EDDE(); break;
        case 0xEE6E:
            func_EE6E(); break;
        case 0xEE6F:
            func_EE6F(); break;
        case 0xF8EE:
            func_F8EE(); break;
        case 0xF8EF:
            func_F8EF(); break;
        case 0xDABA:
            func_DABA(); break;
        case 0xDABB:
            func_DABB(); break;
        case 0xF5DA:
            func_F5DA(); break;
        case 0xF576:
            func_F576(); break;
        case 0xF577:
            func_F577(); break;
        case 0xD56A:
            func_D56A(); break;
        case 0xEABA:
            func_EABA(); break;
        case 0xEABB:
            func_EABB(); break;
        case 0xD554:
            func_D554(); break;
        case 0xD555:
            func_D555(); break;
        case 0xD545:
            func_D545(); break;
        case 0xD556:
            func_D556(); break;
        case 0xEAA6:
            func_EAA6(); break;
        case 0xEAEA:
            func_EAEA(); break;
        case 0xEAEB:
            func_EAEB(); break;
        case 0xD55A:
            func_D55A(); break;
        case 0xD55B:
            func_D55B(); break;
        case 0xF39E:
            func_F39E(); break;
        case 0xC055:
            func_C055(); break;
        case 0xC056:
            func_C056(); break;
        case 0xDBB6:
            func_DBB6(); break;
        case 0xFFDB:
            func_FFDB(); break;
        case 0xEE6B:
            func_EE6B(); break;
        case 0xCFFB:
            func_CFFB(); break;
        case 0xCFFC:
            func_CFFC(); break;
        case 0xC819:
            func_C819(); break;
        case 0xE645:
            func_E645(); break;
        case 0xE646:
            func_E646(); break;
        case 0xC1E6:
            func_C1E6(); break;
        case 0xC1E7:
            func_C1E7(); break;
        case 0xE6C1:
            func_E6C1(); break;
        case 0xE6C2:
            func_E6C2(); break;
        case 0xCCE6:
            func_CCE6(); break;
        case 0xCCE7:
            func_CCE7(); break;
        case 0xC0CD:
            func_C0CD(); break;
        case 0xEDC0:
            func_EDC0(); break;
        case 0xEDC1:
            func_EDC1(); break;
        case 0xE79F:
            func_E79F(); break;
        case 0xE7A0:
            func_E7A0(); break;
        case 0xD932:
            func_D932(); break;
        case 0xE4BA:
            func_E4BA(); break;
        case 0xE59E:
            func_E59E(); break;
        case 0xE3E5:
            func_E3E5(); break;
        case 0xC63A:
            func_C63A(); break;
        case 0xC688:
            func_C688(); break;
        case 0xC689:
            func_C689(); break;
        case 0xF0F0:
            func_F0F0(); break;
        case 0xF0F1:
            func_F0F1(); break;
        case 0xF8F0:
            func_F8F0(); break;
        case 0xF8F1:
            func_F8F1(); break;
        case 0xF333:
            func_F333(); break;
        case 0xF334:
            func_F334(); break;
        case 0xF4F4:
            func_F4F4(); break;
        case 0xCF73:
            func_CF73(); break;
        case 0xCF74:
            func_CF74(); break;
        case 0xE6D0:
            func_E6D0(); break;
        case 0xC666:
            func_C666(); break;
        case 0xE045:
            func_E045(); break;
        case 0xC4E0:
            func_C4E0(); break;
        case 0xE0C4:
            func_E0C4(); break;
        case 0xE0C5:
            func_E0C5(); break;
        case 0xC0E1:
            func_C0E1(); break;
        case 0xC8C0:
            func_C8C0(); break;
        case 0xC8C1:
            func_C8C1(); break;
        case 0xE121:
            func_E121(); break;
        case 0xC67C:
            func_C67C(); break;
        case 0xC67D:
            func_C67D(); break;
        case 0xE671:
            func_E671(); break;
        case 0xE672:
            func_E672(); break;
        case 0xD33A:
            func_D33A(); break;
        case 0xDED3:
            func_DED3(); break;
        case 0xF43C:
            func_F43C(); break;
        case 0xF43D:
            func_F43D(); break;
        case 0xDE3E:
            func_DE3E(); break;
        case 0xE758:
            func_E758(); break;
        case 0xECC7:
            func_ECC7(); break;
        case 0xECC8:
            func_ECC8(); break;
        case 0xCC79:
            func_CC79(); break;
        case 0xCC7A:
            func_CC7A(); break;
        case 0xF679:
            func_F679(); break;
        case 0xF67A:
            func_F67A(); break;
        case 0xCF33:
            func_CF33(); break;
        case 0xCF34:
            func_CF34(); break;
        case 0xC633:
            func_C633(); break;
        case 0xC634:
            func_C634(); break;
        case 0xD09C:
            func_D09C(); break;
        case 0xD09D:
            func_D09D(); break;
        case 0xF199:
            func_F199(); break;
        case 0xF19A:
            func_F19A(); break;
        case 0xE4F2:
            func_E4F2(); break;
        case 0xD3AE:
            func_D3AE(); break;
        case 0xD3AF:
            func_D3AF(); break;
        case 0xF06C:
            func_F06C(); break;
        case 0xF06D:
            func_F06D(); break;
        case 0xC9B3:
            func_C9B3(); break;
        case 0xD9C9:
            func_D9C9(); break;
        case 0xF8FF:
            func_F8FF(); break;
        case 0xC62C:
            func_C62C(); break;
        case 0xC36D:
            func_C36D(); break;
        case 0xC36E:
            func_C36E(); break;
        case 0xE0C3:
            func_E0C3(); break;
        case 0xDBD7:
            func_DBD7(); break;
        case 0xDBD8:
            func_DBD8(); break;
        case 0xF38F:
            func_F38F(); break;
        case 0xF390:
            func_F390(); break;
        case 0xE4CC:
            func_E4CC(); break;
        case 0xE38F:
            func_E38F(); break;
        case 0xE390:
            func_E390(); break;
        case 0xD886:
            func_D886(); break;
        case 0xD887:
            func_D887(); break;
        case 0xDC52:
            func_DC52(); break;
        case 0xDC53:
            func_DC53(); break;
        case 0xECDC:
            func_ECDC(); break;
        case 0xECDD:
            func_ECDD(); break;
        case 0xE664:
            func_E664(); break;
        case 0xF0E6:
            func_F0E6(); break;
        case 0xF0E7:
            func_F0E7(); break;
        case 0xE630:
            func_E630(); break;
        case 0xD8E6:
            func_D8E6(); break;
        case 0xE2D8:
            func_E2D8(); break;
        case 0xE2D9:
            func_E2D9(); break;
        case 0xCDAD:
            func_CDAD(); break;
        case 0xCDAE:
            func_CDAE(); break;
        case 0xC01D:
            func_C01D(); break;
        case 0xC01E:
            func_C01E(); break;
        case 0xF051:
            func_F051(); break;
        case 0xEC37:
            func_EC37(); break;
        case 0xE338:
            func_E338(); break;
        case 0xE339:
            func_E339(); break;
        case 0xE78A:
            func_E78A(); break;
        case 0xE2E7:
            func_E2E7(); break;
        case 0xE2E8:
            func_E2E8(); break;
        case 0xDD17:
            func_DD17(); break;
        case 0xDD18:
            func_DD18(); break;
        case 0xE461:
            func_E461(); break;
        case 0xE462:
            func_E462(); break;
        case 0xCCE4:
            func_CCE4(); break;
        case 0xF152:
            func_F152(); break;
        case 0xF153:
            func_F153(); break;
        case 0xE0F1:
            func_E0F1(); break;
        case 0xE0F2:
            func_E0F2(); break;
        case 0xCF27:
            func_CF27(); break;
        case 0xCF28:
            func_CF28(); break;
        case 0xC9D0:
            func_C9D0(); break;
        case 0xD9C6:
            func_D9C6(); break;
        case 0xD9C7:
            func_D9C7(); break;
        case 0xD0DA:
            func_D0DA(); break;
        case 0xE62F:
            func_E62F(); break;
        case 0xF1E6:
            func_F1E6(); break;
        case 0xF1E7:
            func_F1E7(); break;
        case 0xCC59:
            func_CC59(); break;
        case 0xCC5A:
            func_CC5A(); break;
        case 0xCCCD:
            func_CCCD(); break;
        case 0xD4CC:
            func_D4CC(); break;
        case 0xD4CD:
            func_D4CD(); break;
        case 0xE38E:
            func_E38E(); break;
        case 0xD4E4:
            func_D4E4(); break;
        case 0xEDD5:
            func_EDD5(); break;
        case 0xEE62:
            func_EE62(); break;
        case 0xEE63:
            func_EE63(); break;
        case 0xCA94:
            func_CA94(); break;
        case 0xD18E:
            func_D18E(); break;
        case 0xE662:
            func_E662(); break;
        case 0xD590:
            func_D590(); break;
        case 0xD591:
            func_D591(); break;
        case 0xE8D6:
            func_E8D6(); break;
        case 0xC331:
            func_C331(); break;
        case 0xCB20:
            func_CB20(); break;
        case 0xD953:
            func_D953(); break;
        case 0xD954:
            func_D954(); break;
        case 0xEC3F:
            func_EC3F(); break;
        case 0xDD6D:
            func_DD6D(); break;
        case 0xD9DE:
            func_D9DE(); break;
        case 0xD1D9:
            func_D1D9(); break;
        case 0xCCAB:
            func_CCAB(); break;
        case 0xF33A:
            func_F33A(); break;
        case 0xCE8B:
            func_CE8B(); break;
        case 0xCE8C:
            func_CE8C(); break;
        case 0xC564:
            func_C564(); break;
        case 0xE9C5:
            func_E9C5(); break;
        case 0xDC76:
            func_DC76(); break;
        case 0xC7AA:
            func_C7AA(); break;
        case 0xE987:
            func_E987(); break;
        case 0xE988:
            func_E988(); break;
        case 0xCED1:
            func_CED1(); break;
        case 0xCED2:
            func_CED2(); break;
        case 0xC75A:
            func_C75A(); break;
        case 0xD38C:
            func_D38C(); break;
        case 0xD38D:
            func_D38D(); break;
        case 0xC732:
            func_C732(); break;
        case 0xC733:
            func_C733(); break;
        case 0xD515:
            func_D515(); break;
        case 0xD516:
            func_D516(); break;
        case 0xC2D5:
            func_C2D5(); break;
        case 0xD44D:
            func_D44D(); break;
        case 0xD44E:
            func_D44E(); break;
        case 0xD563:
            func_D563(); break;
        case 0xD564:
            func_D564(); break;
        case 0xEB2B:
            func_EB2B(); break;
        case 0xEB2C:
            func_EB2C(); break;
        case 0xC6B2:
            func_C6B2(); break;
        case 0xC6B3:
            func_C6B3(); break;
        case 0xD635:
            func_D635(); break;
        case 0xD14A:
            func_D14A(); break;
        case 0xD14B:
            func_D14B(); break;
        case 0xC566:
            func_C566(); break;
        case 0xD3C5:
            func_D3C5(); break;
        case 0xD3C6:
            func_D3C6(); break;
        case 0xE9D4:
            func_E9D4(); break;
        case 0xC355:
            func_C355(); break;
        case 0xC356:
            func_C356(); break;
        case 0xC658:
            func_C658(); break;
        case 0xCB07:
            func_CB07(); break;
        case 0xCB08:
            func_CB08(); break;
        case 0xCA71:
            func_CA71(); break;
        case 0xCA72:
            func_CA72(); break;
        case 0xCD56:
            func_CD56(); break;
        case 0xD52E:
            func_D52E(); break;
        case 0xD52F:
            func_D52F(); break;
        case 0xCAAC:
            func_CAAC(); break;
        case 0xCAAD:
            func_CAAD(); break;
        case 0xC62A:
            func_C62A(); break;
        case 0xD2C6:
            func_D2C6(); break;
        case 0xD2C7:
            func_D2C7(); break;
        case 0xE07F:
            func_E07F(); break;
        case 0xE080:
            func_E080(); break;
        case 0xF80F:
            func_F80F(); break;
        case 0xC0FE:
            func_C0FE(); break;
        case 0xC0FF:
            func_C0FF(); break;
        case 0xE01F:
            func_E01F(); break;
        case 0xC03F:
            func_C03F(); break;
        case 0xC040:
            func_C040(); break;
        case 0xC080:
            func_C080(); break;
        case 0xC07E:
            func_C07E(); break;
        case 0xF03F:
            func_F03F(); break;
        case 0xF00F:
            func_F00F(); break;
        case 0xF010:
            func_F010(); break;
        case 0xF808:
            func_F808(); break;
        case 0xC05F:
            func_C05F(); break;
        case 0xC060:
            func_C060(); break;
        case 0xC01F:
            func_C01F(); break;
        case 0xE00F:
            func_E00F(); break;
        case 0xE010:
            func_E010(); break;
        case 0xC02F:
            func_C02F(); break;
        case 0xC030:
            func_C030(); break;
        case 0xF803:
            func_F803(); break;
        case 0xF80C:
            func_F80C(); break;
        case 0xD017:
            func_D017(); break;
        case 0xD018:
            func_D018(); break;
        case 0xE007:
            func_E007(); break;
        case 0xE008:
            func_E008(); break;
        case 0xF805:
            func_F805(); break;
        case 0xF806:
            func_F806(); break;
        case 0xD007:
            func_D007(); break;
        case 0xD008:
            func_D008(); break;
        case 0xF404:
            func_F404(); break;
        case 0xD00F:
            func_D00F(); break;
        case 0xD010:
            func_D010(); break;
        case 0xF402:
            func_F402(); break;
        case 0xE075:
            func_E075(); break;
        case 0xE076:
            func_E076(); break;
        case 0xF20E:
            func_F20E(); break;
        case 0xF20C:
            func_F20C(); break;
        case 0xD40B:
            func_D40B(); break;
        case 0xD40C:
            func_D40C(); break;
        case 0xE82B:
            func_E82B(); break;
        case 0xE82C:
            func_E82C(); break;
        case 0xF018:
            func_F018(); break;
        case 0xC41F:
            func_C41F(); break;
        case 0xC420:
            func_C420(); break;
        case 0xDFC4:
            func_DFC4(); break;
        case 0xC82F:
            func_C82F(); break;
        case 0xC830:
            func_C830(); break;
        case 0xEEAA:
            func_EEAA(); break;
        case 0xEEAB:
            func_EEAB(); break;
        case 0xF003:
            func_F003(); break;
        case 0xF004:
            func_F004(); break;
        case 0xF640:
            func_F640(); break;
        case 0xF641:
            func_F641(); break;
        case 0xEA06:
            func_EA06(); break;
        case 0xE05B:
            func_E05B(); break;
        case 0xE05C:
            func_E05C(); break;
        case 0xE02F:
            func_E02F(); break;
        case 0xD3FF:
            func_D3FF(); break;
        case 0xD400:
            func_D400(); break;
        case 0xC041:
            func_C041(); break;
        case 0xEE08:
            func_EE08(); break;
        case 0xFFEE:
            func_FFEE(); break;
        case 0xFFEF:
            func_FFEF(); break;
        case 0xC202:
            func_C202(); break;
        case 0xC203:
            func_C203(); break;
        case 0xE7C2:
            func_E7C2(); break;
        case 0xE7C3:
            func_E7C3(); break;
        case 0xFFE7:
            func_FFE7(); break;
        case 0xFFE8:
            func_FFE8(); break;
        case 0xF041:
            func_F041(); break;
        case 0xFFFB:
            func_FFFB(); break;
        case 0xF860:
            func_F860(); break;
        case 0xF0F8:
            func_F0F8(); break;
        case 0xF3F0:
            func_F3F0(); break;
        case 0xC5FB:
            func_C5FB(); break;
        case 0xC5FC:
            func_C5FC(); break;
        case 0xE180:
            func_E180(); break;
        case 0xE181:
            func_E181(); break;
        case 0xC002:
            func_C002(); break;
        case 0xE0C0:
            func_E0C0(); break;
        case 0xE009:
            func_E009(); break;
        case 0xF0E0:
            func_F0E0(); break;
        case 0xF0E1:
            func_F0E1(); break;
        case 0xF7F9:
            func_F7F9(); break;
        case 0xDFF7:
            func_DFF7(); break;
        case 0xE005:
            func_E005(); break;
        case 0xF1F0:
            func_F1F0(); break;
        case 0xD3F1:
            func_D3F1(); break;
        case 0xD3F2:
            func_D3F2(); break;
        case 0xF870:
            func_F870(); break;
        case 0xF871:
            func_F871(); break;
        case 0xC3F2:
            func_C3F2(); break;
        case 0xF071:
            func_F071(); break;
        case 0xE0F0:
            func_E0F0(); break;
        case 0xC3E0:
            func_C3E0(); break;
        case 0xC3E1:
            func_C3E1(); break;
        case 0xC7C3:
            func_C7C3(); break;
        case 0xC7C4:
            func_C7C4(); break;
        case 0xE0F8:
            func_E0F8(); break;
        case 0xE0F9:
            func_E0F9(); break;
        case 0xD0F8:
            func_D0F8(); break;
        case 0xE201:
            func_E201(); break;
        case 0xF0E3:
            func_F0E3(); break;
        case 0xE1F0:
            func_E1F0(); break;
        case 0xF87C:
            func_F87C(); break;
        case 0xC310:
            func_C310(); break;
        case 0xC311:
            func_C311(); break;
        case 0xE3A3:
            func_E3A3(); break;
        case 0xE1F2:
            func_E1F2(); break;
        case 0xCBE2:
            func_CBE2(); break;
        case 0xE80C:
            func_E80C(); break;
        case 0xE80D:
            func_E80D(); break;
        case 0xC2E8:
            func_C2E8(); break;
        case 0xC2E9:
            func_C2E9(); break;
        case 0xC3C2:
            func_C3C2(); break;
        case 0xF93C:
            func_F93C(); break;
        case 0xF93D:
            func_F93D(); break;
        case 0xF0FA:
            func_F0FA(); break;
        case 0xC3E2:
            func_C3E2(); break;
        case 0xEA07:
            func_EA07(); break;
        case 0xF13F:
            func_F13F(); break;
        case 0xE8F2:
            func_E8F2(); break;
        case 0xC3E8:
            func_C3E8(); break;
        case 0xC3E9:
            func_C3E9(); break;
        case 0xC5DA:
            func_C5DA(); break;
        case 0xC5DB:
            func_C5DB(); break;
        case 0xE47E:
            func_E47E(); break;
        case 0xE47F:
            func_E47F(); break;
        case 0xD174:
            func_D174(); break;
        case 0xD175:
            func_D175(); break;
        case 0xF17C:
            func_F17C(); break;
        case 0xE4FA:
            func_E4FA(); break;
        case 0xE4FB:
            func_E4FB(); break;
        case 0xE5E4:
            func_E5E4(); break;
        case 0xF874:
            func_F874(); break;
        case 0xF875:
            func_F875(); break;
        case 0xF8F8:
            func_F8F8(); break;
        case 0xF8F9:
            func_F8F9(); break;
        case 0xCA55:
            func_CA55(); break;
        case 0xCA56:
            func_CA56(); break;
        case 0xCA64:
            func_CA64(); break;
        case 0xCA65:
            func_CA65(); break;
        case 0xCA78:
            func_CA78(); break;
        case 0xCA8C:
            func_CA8C(); break;
        case 0xCA8D:
            func_CA8D(); break;
        case 0xCA9B:
            func_CA9B(); break;
        case 0xCA9C:
            func_CA9C(); break;
        case 0xCAA8:
            func_CAA8(); break;
        case 0xCAA9:
            func_CAA9(); break;
        case 0xCAB5:
            func_CAB5(); break;
        case 0xCAB6:
            func_CAB6(); break;
        case 0xCAC6:
            func_CAC6(); break;
        case 0xCAC7:
            func_CAC7(); break;
        case 0xD708:
            func_D708(); break;
        case 0xCAD7:
            func_CAD7(); break;
        case 0xCAD8:
            func_CAD8(); break;
        case 0xE607:
            func_E607(); break;
        case 0xCAE6:
            func_CAE6(); break;
        case 0xCAE7:
            func_CAE7(); break;
        case 0xC801:
            func_C801(); break;
        case 0xC805:
            func_C805(); break;
        case 0xC808:
            func_C808(); break;
        case 0xC809:
            func_C809(); break;
        case 0xC80D:
            func_C80D(); break;
        case 0xC818:
            func_C818(); break;
        case 0xC810:
            func_C810(); break;
        case 0xC811:
            func_C811(); break;
        case 0xC815:
            func_C815(); break;
        case 0xF507:
            func_F507(); break;
        case 0xF508:
            func_F508(); break;
        case 0xCAF5:
            func_CAF5(); break;
        case 0xCAF6:
            func_CAF6(); break;
        case 0xF344:
            func_F344(); break;
        case 0xCBF3:
            func_CBF3(); break;
        case 0xE205:
            func_E205(); break;
        case 0xE206:
            func_E206(); break;
        case 0xC105:
            func_C105(); break;
        case 0xCBC2:
            func_CBC2(); break;
        case 0xCBC9:
            func_CBC9(); break;
        case 0xEB06:
            func_EB06(); break;
        case 0xDD05:
            func_DD05(); break;
        case 0xCB77:
            func_CB77(); break;
        case 0xCF06:
            func_CF06(); break;
        case 0xCBCF:
            func_CBCF(); break;
        case 0xCBD0:
            func_CBD0(); break;
        case 0xCB69:
            func_CB69(); break;
        case 0xCB6A:
            func_CB6A(); break;
        case 0xCB54:
            func_CB54(); break;
        case 0xCB55:
            func_CB55(); break;
        case 0xCB44:
            func_CB44(); break;
        case 0xCB3C:
            func_CB3C(); break;
        case 0xCB35:
            func_CB35(); break;
        case 0xCB2E:
            func_CB2E(); break;
        case 0xCB27:
            func_CB27(); break;
        case 0xCB19:
            func_CB19(); break;
        case 0xCB12:
            func_CB12(); break;
        case 0xCB01:
            func_CB01(); break;
        case 0xCB8E:
            func_CB8E(); break;
        case 0xCB7D:
            func_CB7D(); break;
        case 0xCBB0:
            func_CBB0(); break;
        case 0xCB9F:
            func_CB9F(); break;
        case 0xCC16:
            func_CC16(); break;
        case 0xCC04:
            func_CC04(); break;
        case 0xCC05:
            func_CC05(); break;
        case 0xC0C0:
            func_C0C0(); break;
        case 0xC0C1:
            func_C0C1(); break;
        case 0xC085:
            func_C085(); break;
        case 0xC090:
            func_C090(); break;
        case 0xCDC0:
            func_CDC0(); break;
        case 0xCDC1:
            func_CDC1(); break;
        case 0xD301:
            func_D301(); break;
        case 0xEE03:
            func_EE03(); break;
        case 0xC094:
            func_C094(); break;
        case 0xC095:
            func_C095(); break;
        case 0xE8C0:
            func_E8C0(); break;
        case 0xE8C1:
            func_E8C1(); break;
        case 0xF181:
            func_F181(); break;
        case 0xCC02:
            func_CC02(); break;
        case 0xC09A:
            func_C09A(); break;
        case 0xC09B:
            func_C09B(); break;
        case 0xCD03:
            func_CD03(); break;
        case 0xCD04:
            func_CD04(); break;
        case 0xCCC0:
            func_CCC0(); break;
        case 0xCCC1:
            func_CCC1(); break;
        case 0xE402:
            func_E402(); break;
        case 0xC09C:
            func_C09C(); break;
        case 0xC986:
            func_C986(); break;
        case 0xC996:
            func_C996(); break;
        case 0xC9A6:
            func_C9A6(); break;
        case 0xC9AF:
            func_C9AF(); break;
        case 0xC9CA:
            func_C9CA(); break;
        case 0xDAC9:
            func_DAC9(); break;
        case 0xDACA:
            func_DACA(); break;
        case 0xC9DA:
            func_C9DA(); break;
        case 0xEBC9:
            func_EBC9(); break;
        case 0xEBCA:
            func_EBCA(); break;
        case 0xC9FC:
            func_C9FC(); break;
        case 0xCA14:
            func_CA14(); break;
        case 0xCA25:
            func_CA25(); break;
        case 0xCA46:
            func_CA46(); break;
        case 0xD030:
            func_D030(); break;
        case 0xD031:
            func_D031(); break;
        case 0xF030:
            func_F030(); break;
        case 0xF00C:
            func_F00C(); break;
        case 0xF00D:
            func_F00D(); break;
        case 0xD00A:
            func_D00A(); break;
        case 0xD00B:
            func_D00B(); break;
        case 0xE006:
            func_E006(); break;
        case 0xD003:
            func_D003(); break;
        case 0xC006:
            func_C006(); break;
        case 0xD00E:
            func_D00E(); break;
        case 0xC00B:
            func_C00B(); break;
        case 0xC00C:
            func_C00C(); break;
        case 0xD00D:
            func_D00D(); break;
        case 0xD48B:
            func_D48B(); break;
        case 0xD48C:
            func_D48C(); break;
        case 0xD101:
            func_D101(); break;
        case 0xF000:
            func_F000(); break;
        case 0xD180:
            func_D180(); break;
        case 0xD084:
            func_D084(); break;
        case 0xD085:
            func_D085(); break;
        case 0xC0D0:
            func_C0D0(); break;
        case 0xC0D1:
            func_C0D1(); break;
        case 0xF184:
            func_F184(); break;
        case 0xC0F1:
            func_C0F1(); break;
        case 0xC0F2:
            func_C0F2(); break;
        case 0xD081:
            func_D081(); break;
        case 0xC081:
            func_C081(); break;
        case 0xC082:
            func_C082(); break;
        case 0xC180:
            func_C180(); break;
        case 0xC181:
            func_C181(); break;
        case 0xF0AB:
            func_F0AB(); break;
        case 0xC0F0:
            func_C0F0(); break;
        case 0xE0BB:
            func_E0BB(); break;
        case 0xE0BC:
            func_E0BC(); break;
        case 0xD226:
            func_D226(); break;
        case 0xD227:
            func_D227(); break;
        case 0xF19C:
            func_F19C(); break;
        case 0xD12A:
            func_D12A(); break;
        case 0xD12B:
            func_D12B(); break;
        case 0xD22A:
            func_D22A(); break;
        case 0xD22B:
            func_D22B(); break;
        case 0xF193:
            func_F193(); break;
        case 0xF194:
            func_F194(); break;
        case 0xF083:
            func_F083(); break;
        case 0xFFE1:
            func_FFE1(); break;
        case 0xF39C:
            func_F39C(); break;
        case 0xD22F:
            func_D22F(); break;
        case 0xF3A4:
            func_F3A4(); break;
        case 0xF2AB:
            func_F2AB(); break;
        case 0xE0F3:
            func_E0F3(); break;
        case 0xF292:
            func_F292(); break;
        case 0xF293:
            func_F293(); break;
        case 0xF289:
            func_F289(); break;
        case 0xF0BB:
            func_F0BB(); break;
        case 0xF0BC:
            func_F0BC(); break;
        case 0xD1AB:
            func_D1AB(); break;
        case 0xF282:
            func_F282(); break;
        case 0xF283:
            func_F283(); break;
        case 0xC0B1:
            func_C0B1(); break;
        case 0xC0B2:
            func_C0B2(); break;
        case 0xD293:
            func_D293(); break;
        case 0xD294:
            func_D294(); break;
        case 0xC0D3:
            func_C0D3(); break;
        case 0xC0A1:
            func_C0A1(); break;
        case 0xE182:
            func_E182(); break;
        case 0xE081:
            func_E081(); break;
        case 0xE082:
            func_E082(); break;
        case 0xE0E0:
            func_E0E0(); break;
        case 0xDCFF:
            func_DCFF(); break;
        case 0xDD00:
            func_DD00(); break;
        case 0xE804:
            func_E804(); break;
        case 0xE805:
            func_E805(); break;
        case 0xD0E8:
            func_D0E8(); break;
        case 0xD0E9:
            func_D0E9(); break;
        case 0xCD20:
            func_CD20(); break;
        case 0xCF66:
            func_CF66(); break;
        case 0xC909:
            func_C909(); break;
        case 0xF080:
            func_F080(); break;
        case 0xE485:
            func_E485(); break;
        case 0xCACD:
            func_CACD(); break;
        case 0xCACE:
            func_CACE(); break;
        case 0xE0CA:
            func_E0CA(); break;
        case 0xE0CB:
            func_E0CB(); break;
        case 0xD0FF:
            func_D0FF(); break;
        case 0xE7D0:
            func_E7D0(); break;
        case 0xE7D1:
            func_E7D1(); break;
        case 0xE8CD:
            func_E8CD(); break;
        case 0xE0E9:
            func_E0E9(); break;
        case 0xEDD1:
            func_EDD1(); break;
        case 0xF0ED:
            func_F0ED(); break;
        case 0xF0EE:
            func_F0EE(); break;
        case 0xCF6A:
            func_CF6A(); break;
        case 0xF8A9:
            func_F8A9(); break;
        case 0xF8AA:
            func_F8AA(); break;
        case 0xE807:
            func_E807(); break;
        case 0xE808:
            func_E808(); break;
        case 0xF5D1:
            func_F5D1(); break;
        case 0xDA86:
            func_DA86(); break;
        case 0xDA87:
            func_DA87(); break;
        case 0xDB84:
            func_DB84(); break;
        case 0xDC86:
            func_DC86(); break;
        case 0xDD85:
            func_DD85(); break;
        case 0xDD86:
            func_DD86(); break;
        case 0xE285:
            func_E285(); break;
        case 0xE286:
            func_E286(); break;
        case 0xF0B5:
            func_F0B5(); break;
        case 0xF0B6:
            func_F0B6(); break;
        case 0xD002:
            func_D002(); break;
        case 0xE385:
            func_E385(); break;
        case 0xDCB1:
            func_DCB1(); break;
        case 0xDCB2:
            func_DCB2(); break;
        case 0xDE85:
            func_DE85(); break;
        case 0xDE86:
            func_DE86(); break;
        case 0xC8DE:
            func_C8DE(); break;
        case 0xDF86:
            func_DF86(); break;
        case 0xE686:
            func_E686(); break;
        case 0xC8E6:
            func_C8E6(); break;
        case 0xC8E7:
            func_C8E7(); break;
        case 0xE786:
            func_E786(); break;
        case 0xDEB1:
            func_DEB1(); break;
        case 0xDEB2:
            func_DEB2(); break;
        case 0xE6B2:
            func_E6B2(); break;
        case 0xE585:
            func_E585(); break;
        case 0xE586:
            func_E586(); break;
        case 0xE886:
            func_E886(); break;
        case 0xE986:
            func_E986(); break;
        case 0xCDB5:
            func_CDB5(); break;
        case 0xDAA6:
            func_DAA6(); break;
        case 0xDAA7:
            func_DAA7(); break;
        case 0xDBA4:
            func_DBA4(); break;
        case 0xDBA5:
            func_DBA5(); break;
        case 0xE9A4:
            func_E9A4(); break;
        case 0xE9A5:
            func_E9A5(); break;
        case 0xE6E6:
            func_E6E6(); break;
        case 0xE6E7:
            func_E6E7(); break;
        case 0xE9E6:
            func_E9E6(); break;
        case 0xE9E7:
            func_E9E7(); break;
        case 0xE366:
            func_E366(); break;
        case 0xE8A4:
            func_E8A4(); break;
        case 0xE6DE:
            func_E6DE(); break;
        case 0xE6DF:
            func_E6DF(); break;
        case 0xE8E6:
            func_E8E6(); break;
        case 0xE8E7:
            func_E8E7(); break;
        case 0xE5A5:
            func_E5A5(); break;
        case 0xE5A6:
            func_E5A6(); break;
        case 0xE265:
            func_E265(); break;
        case 0xE1C7:
            func_E1C7(); break;
        case 0xD0E1:
            func_D0E1(); break;
        case 0xD0E2:
            func_D0E2(); break;
        case 0xD0D0:
            func_D0D0(); break;
        case 0xD0D1:
            func_D0D1(); break;
        case 0xE802:
            func_E802(); break;
        case 0xD019:
            func_D019(); break;
        case 0xF8D0:
            func_F8D0(); break;
        case 0xF8D1:
            func_F8D1(); break;
        case 0xD878:
            func_D878(); break;
        case 0xD879:
            func_D879(); break;
        case 0xCAFC:
            func_CAFC(); break;
        case 0xF811:
            func_F811(); break;
        case 0xC900:
            func_C900(); break;
        case 0xC901:
            func_C901(); break;
        case 0xD012:
            func_D012(); break;
        case 0xC902:
            func_C902(); break;
        case 0xD048:
            func_D048(); break;
        case 0xD049:
            func_D049(); break;
        case 0xF09E:
            func_F09E(); break;
        case 0xF09F:
            func_F09F(); break;
        case 0xE800:
            func_E800(); break;
        case 0xE801:
            func_E801(); break;
        case 0xE8D0:
            func_E8D0(); break;
        case 0xCF20:
            func_CF20(); break;
        case 0xCED0:
            func_CED0(); break;
        case 0xC385:
            func_C385(); break;
        case 0xF6B4:
            func_F6B4(); break;
        case 0xEE01:
            func_EE01(); break;
        case 0xCF24:
            func_CF24(); break;
        case 0xCF50:
            func_CF50(); break;
        case 0xD000:
            func_D000(); break;
        case 0xD001:
            func_D001(); break;
        case 0xC02A:
            func_C02A(); break;
        case 0xC8BD:
            func_C8BD(); break;
        case 0xF0BE:
            func_F0BE(); break;
        case 0xD051:
            func_D051(); break;
        case 0xE04D:
            func_E04D(); break;
        case 0xCFE1:
            func_CFE1(); break;
        case 0xC802:
            func_C802(); break;
        case 0xC065:
            func_C065(); break;
        case 0xC066:
            func_C066(); break;
        case 0xE620:
            func_E620(); break;
        case 0xE621:
            func_E621(); break;
        case 0xCABF:
            func_CABF(); break;
        case 0xD0BC:
            func_D0BC(); break;
        case 0xE0D0:
            func_E0D0(); break;
        case 0xE0D1:
            func_E0D1(); break;
        case 0xF0FF:
            func_F0FF(); break;
        case 0xF100:
            func_F100(); break;
        case 0xE603:
            func_E603(); break;
        case 0xD098:
            func_D098(); break;
        case 0xC5A5:
            func_C5A5(); break;
        case 0xC5A6:
            func_C5A6(); break;
        case 0xC586:
            func_C586(); break;
        case 0xC2A6:
            func_C2A6(); break;
        case 0xC527:
            func_C527(); break;
        case 0xC165:
            func_C165(); break;
        case 0xC166:
            func_C166(); break;
        case 0xC3A5:
            func_C3A5(); break;
        case 0xE820:
            func_E820(); break;
        case 0xE821:
            func_E821(); break;
        case 0xF610:
            func_F610(); break;
        case 0xF611:
            func_F611(); break;
        case 0xF02A:
            func_F02A(); break;
        case 0xCE2C:
            func_CE2C(); break;
        case 0xCE2D:
            func_CE2D(); break;
        case 0xE938:
            func_E938(); break;
        case 0xED39:
            func_ED39(); break;
        case 0xEEEC:
            func_EEEC(); break;
        case 0xEEED:
            func_EEED(); break;
        case 0xC8E8:
            func_C8E8(); break;
        case 0xC8E9:
            func_C8E9(); break;
        case 0xC0C8:
            func_C0C8(); break;
        case 0xC0C9:
            func_C0C9(); break;
        case 0xD020:
            func_D020(); break;
        case 0xD021:
            func_D021(); break;
        case 0xEFD0:
            func_EFD0(); break;
        case 0xF4D0:
            func_F4D0(); break;
        case 0xF006:
            func_F006(); break;
        case 0xD2D9:
            func_D2D9(); break;
        case 0xD204:
            func_D204(); break;
        case 0xC9C0:
            func_C9C0(); break;
        case 0xC9C1:
            func_C9C1(); break;
        case 0xC0CA:
            func_C0CA(); break;
        case 0xD0C0:
            func_D0C0(); break;
        case 0xC931:
            func_C931(); break;
        case 0xC910:
            func_C910(); break;
        case 0xCE03:
            func_CE03(); break;
        case 0xD005:
            func_D005(); break;
        case 0xD006:
            func_D006(); break;
        case 0xF009:
            func_F009(); break;
        case 0xE882:
            func_E882(); break;
        case 0xE883:
            func_E883(); break;
        case 0xD306:
            func_D306(); break;
        case 0xEE02:
            func_EE02(); break;
        case 0xD1C8:
            func_D1C8(); break;
        case 0xD083:
            func_D083(); break;
        case 0xD009:
            func_D009(); break;
        case 0xD086:
            func_D086(); break;
        case 0xD30E:
            func_D30E(); break;
        case 0xD30F:
            func_D30F(); break;
        case 0xD310:
            func_D310(); break;
        case 0xD311:
            func_D311(); break;
        case 0xD312:
            func_D312(); break;
        case 0xD102:
            func_D102(); break;
        case 0xC888:
            func_C888(); break;
        case 0xC889:
            func_C889(); break;
        case 0xC8C8:
            func_C8C8(); break;
        case 0xC8C9:
            func_C8C9(); break;
        case 0xC904:
            func_C904(); break;
        case 0xF310:
            func_F310(); break;
        case 0xF311:
            func_F311(); break;
        case 0xD088:
            func_D088(); break;
        case 0xD089:
            func_D089(); break;
        case 0xEED1:
            func_EED1(); break;
        case 0xD31A:
            func_D31A(); break;
        case 0xD31B:
            func_D31B(); break;
        case 0xD3A4:
            func_D3A4(); break;
        case 0xD3A5:
            func_D3A5(); break;
        case 0xD43C:
            func_D43C(); break;
        case 0xD43D:
            func_D43D(); break;
        case 0xD49B:
            func_D49B(); break;
        case 0xD49C:
            func_D49C(); break;
        case 0xF600:
            func_F600(); break;
        case 0xDC00:
            func_DC00(); break;
        case 0xC700:
            func_C700(); break;
        case 0xCA00:
            func_CA00(); break;
        case 0xCA01:
            func_CA01(); break;
        case 0xDFAE:
            func_DFAE(); break;
        case 0xDFAF:
            func_DFAF(); break;
        case 0xC98B:
            func_C98B(); break;
        case 0xDE04:
            func_DE04(); break;
        case 0xDE05:
            func_DE05(); break;
        case 0xDE03:
            func_DE03(); break;
        case 0xE28D:
            func_E28D(); break;
        case 0xE28E:
            func_E28E(); break;
        case 0xD3BE:
            func_D3BE(); break;
        case 0xD5D3:
            func_D5D3(); break;
        case 0xD5D4:
            func_D5D4(); break;
        case 0xD8BD:
            func_D8BD(); break;
        case 0xD8BE:
            func_D8BE(); break;
        case 0xD5D9:
            func_D5D9(); break;
        case 0xD585:
            func_D585(); break;
        case 0xD586:
            func_D586(); break;
        case 0xD5B1:
            func_D5B1(); break;
        case 0xD5B2:
            func_D5B2(); break;
        case 0xE18E:
            func_E18E(); break;
        case 0xD56F:
            func_D56F(); break;
        case 0xCE61:
            func_CE61(); break;
        case 0xE1CE:
            func_E1CE(); break;
        case 0xE1CF:
            func_E1CF(); break;
        case 0xCCA9:
            func_CCA9(); break;
        case 0xCDCD:
            func_CDCD(); break;
        case 0xE3CE:
            func_E3CE(); break;
        case 0xD8A9:
            func_D8A9(); break;
        case 0xD8AA:
            func_D8AA(); break;
        case 0xC8A9:
            func_C8A9(); break;
        case 0xC64C:
            func_C64C(); break;
        case 0xD5C7:
            func_D5C7(); break;
        case 0xEED5:
            func_EED5(); break;
        case 0xE3EF:
            func_E3EF(); break;
        case 0xE2EE:
            func_E2EE(); break;
        case 0xE2EF:
            func_E2EF(); break;
        case 0xE2CD:
            func_E2CD(); break;
        case 0xE2CE:
            func_E2CE(); break;
        case 0xD5A5:
            func_D5A5(); break;
        case 0xD5A6:
            func_D5A6(); break;
        case 0xD6E6:
            func_D6E6(); break;
        case 0xE228:
            func_E228(); break;
        case 0xE229:
            func_E229(); break;
        case 0xDE20:
            func_DE20(); break;
        case 0xDE21:
            func_DE21(); break;
        case 0xF700:
            func_F700(); break;
        case 0xEA8E:
            func_EA8E(); break;
        case 0xE98D:
            func_E98D(); break;
        case 0xE98E:
            func_E98E(); break;
        case 0xC7B2:
            func_C7B2(); break;
        case 0xE6A8:
            func_E6A8(); break;
        case 0xE6A9:
            func_E6A9(); break;
        case 0xC6A4:
            func_C6A4(); break;
        case 0xD0A6:
            func_D0A6(); break;
        case 0xD0A7:
            func_D0A7(); break;
        case 0xE5D0:
            func_E5D0(); break;
        case 0xD120:
            func_D120(); break;
        case 0xD121:
            func_D121(); break;
        case 0xEFD2:
            func_EFD2(); break;
        case 0xC6A6:
            func_C6A6(); break;
        case 0xCDA5:
            func_CDA5(); break;
        case 0xCDA6:
            func_CDA6(); break;
        case 0xCDA7:
            func_CDA7(); break;
        case 0xCDA8:
            func_CDA8(); break;
        case 0xC501:
            func_C501(); break;
        case 0xC502:
            func_C502(); break;
        case 0xF0A8:
            func_F0A8(); break;
        case 0xD0A5:
            func_D0A5(); break;
        case 0xE4D0:
            func_E4D0(); break;
        case 0xE4D1:
            func_E4D1(); break;
        case 0xD0A8:
            func_D0A8(); break;
        case 0xCDD0:
            func_CDD0(); break;
        case 0xCDD1:
            func_CDD1(); break;
        case 0xE538:
            func_E538(); break;
        case 0xD0A4:
            func_D0A4(); break;
        case 0xC983:
            func_C983(); break;
        case 0xC984:
            func_C984(); break;
        case 0xD0A3:
            func_D0A3(); break;
        case 0xECD1:
            func_ECD1(); break;
        case 0xD106:
            func_D106(); break;
        case 0xD107:
            func_D107(); break;
        case 0xC7D1:
            func_C7D1(); break;
        case 0xC7D2:
            func_C7D2(); break;
        case 0xD0C7:
            func_D0C7(); break;
        case 0xC968:
            func_C968(); break;
        case 0xC969:
            func_C969(); break;
        case 0xF3D1:
            func_F3D1(); break;
        case 0xF0C7:
            func_F0C7(); break;
        case 0xF0C8:
            func_F0C8(); break;
        case 0xE606:
            func_E606(); break;
        case 0xE6A4:
            func_E6A4(); break;
        case 0xC8A4:
            func_C8A4(); break;
        case 0xE48E:
            func_E48E(); break;
        case 0xE58D:
            func_E58D(); break;
        case 0xE58E:
            func_E58E(); break;
        case 0xE68E:
            func_E68E(); break;
        case 0xD4D1:
            func_D4D1(); break;
        case 0xCFF0:
            func_CFF0(); break;
        case 0xCFF1:
            func_CFF1(); break;
        case 0xD9D4:
            func_D9D4(); break;
        case 0xDE60:
            func_DE60(); break;
        case 0xDE61:
            func_DE61(); break;
        case 0xDD01:
            func_DD01(); break;
        case 0xDD02:
            func_DD02(); break;
        case 0xEE05:
            func_EE05(); break;
        case 0xCEA8:
            func_CEA8(); break;
        case 0xCEA9:
            func_CEA9(); break;
        case 0xCE04:
            func_CE04(); break;
        case 0xCE05:
            func_CE05(); break;
        case 0xCE20:
            func_CE20(); break;
        case 0xCE21:
            func_CE21(); break;
        case 0xD5AD:
            func_D5AD(); break;
        case 0xD5AE:
            func_D5AE(); break;
        case 0xD4AF:
            func_D4AF(); break;
        case 0xD6AD:
            func_D6AD(); break;
        case 0xD79D:
            func_D79D(); break;
        case 0xD7BE:
            func_D7BE(); break;
        case 0xF6AD:
            func_F6AD(); break;
        case 0xF6AE:
            func_F6AE(); break;
        case 0xC97C:
            func_C97C(); break;
        case 0xF021:
            func_F021(); break;
        case 0xCDF1:
            func_CDF1(); break;
        case 0xC120:
            func_C120(); break;
        case 0xC121:
            func_C121(); break;
        case 0xDCC2:
            func_DCC2(); break;
        case 0xDD27:
            func_DD27(); break;
        case 0xDD93:
            func_DD93(); break;
        case 0xF920:
            func_F920(); break;
        case 0xF921:
            func_F921(); break;
        case 0xE6E8:
            func_E6E8(); break;
        case 0xC0A9:
            func_C0A9(); break;
        case 0xC0AA:
            func_C0AA(); break;
        case 0xCC20:
            func_CC20(); break;
        case 0xDECD:
            func_DECD(); break;
        case 0xDF5E:
            func_DF5E(); break;
        case 0xDE2D:
            func_DE2D(); break;
        case 0xDC4F:
            func_DC4F(); break;
        case 0xDC68:
            func_DC68(); break;
        case 0xDC5D:
            func_DC5D(); break;
        case 0xDD37:
            func_DD37(); break;
        case 0xD14D:
            func_D14D(); break;
        case 0xDCD2:
            func_DCD2(); break;
        case 0xDDA3:
            func_DDA3(); break;
        case 0xF0DE:
            func_F0DE(); break;
        case 0xF0DF:
            func_F0DF(); break;
        case 0xF07D:
            func_F07D(); break;
        case 0xEE20:
            func_EE20(); break;
        case 0xEE21:
            func_EE21(); break;
        case 0xE0EF:
            func_E0EF(); break;
        case 0xC14C:
            func_C14C(); break;
        case 0xC97E:
            func_C97E(); break;
        case 0xD520:
            func_D520(); break;
        case 0xD521:
            func_D521(); break;
        case 0xE0D6:
            func_E0D6(); break;
        case 0xCA19:
            func_CA19(); break;
        case 0xD0CA:
            func_D0CA(); break;
        case 0xD0CB:
            func_D0CB(); break;
        case 0xC97F:
            func_C97F(); break;
        case 0xC980:
            func_C980(); break;
        case 0xD07E:
            func_D07E(); break;
        case 0xD07F:
            func_D07F(); break;
        case 0xF94C:
            func_F94C(); break;
        case 0xF94D:
            func_F94D(); break;
        case 0xD080:
            func_D080(); break;
        case 0xDF8E:
            func_DF8E(); break;
        case 0xE08D:
            func_E08D(); break;
        case 0xF6AF:
            func_F6AF(); break;
        case 0xDE71:
            func_DE71(); break;
        case 0xCADE:
            func_CADE(); break;
        case 0xCADF:
            func_CADF(); break;
        case 0xDC4C:
            func_DC4C(); break;
        case 0xDEDD:
            func_DEDD(); break;
        case 0xDF6E:
            func_DF6E(); break;
        case 0xF07A:
            func_F07A(); break;
        case 0xCC4C:
            func_CC4C(); break;
        case 0xCC4D:
            func_CC4D(); break;
        case 0xD079:
            func_D079(); break;
        case 0xD07A:
            func_D07A(); break;
        case 0xF68E:
            func_F68E(); break;
        case 0xC66C:
            func_C66C(); break;
        case 0xC97A:
            func_C97A(); break;
        case 0xE656:
            func_E656(); break;
        case 0xD07B:
            func_D07B(); break;
        case 0xC64E:
            func_C64E(); break;
        case 0xE635:
            func_E635(); break;
        case 0xE095:
            func_E095(); break;
        case 0xE096:
            func_E096(); break;
        case 0xD0E0:
            func_D0E0(); break;
        case 0xE091:
            func_E091(); break;
        case 0xCDE0:
            func_CDE0(); break;
        case 0xCDE1:
            func_CDE1(); break;
        case 0xC48E:
            func_C48E(); break;
        case 0xE101:
            func_E101(); break;
        case 0xE1EF:
            func_E1EF(); break;
        case 0xE6E1:
            func_E6E1(); break;
        case 0xD0B2:
            func_D0B2(); break;
        case 0xD0B3:
            func_D0B3(); break;
        case 0xE60A:
            func_E60A(); break;
        case 0xE158:
            func_E158(); break;
        case 0xC640:
            func_C640(); break;
        case 0xC641:
            func_C641(); break;
        case 0xCF80:
            func_CF80(); break;
        case 0xF220:
            func_F220(); break;
        case 0xD0F3:
            func_D0F3(); break;
        case 0xE42F:
            func_E42F(); break;
        case 0xE430:
            func_E430(); break;
        case 0xE41C:
            func_E41C(); break;
        case 0xE41D:
            func_E41D(); break;
        case 0xF054:
            func_F054(); break;
        case 0xF055:
            func_F055(); break;
        case 0xF2F0:
            func_F2F0(); break;
        case 0xF2F1:
            func_F2F1(); break;
        case 0xE29C:
            func_E29C(); break;
        case 0xD211:
            func_D211(); break;
        case 0xD920:
            func_D920(); break;
        case 0xF321:
            func_F321(); break;
        case 0xF063:
            func_F063(); break;
        case 0xF057:
            func_F057(); break;
        case 0xCEEF:
            func_CEEF(); break;
        case 0xCEF0:
            func_CEF0(); break;
        case 0xCA05:
            func_CA05(); break;
        case 0xF1D0:
            func_F1D0(); break;
        case 0xF1D1:
            func_F1D1(); break;
        case 0xD0B1:
            func_D0B1(); break;
        case 0xC685:
            func_C685(); break;
        case 0xC686:
            func_C686(); break;
        case 0xEAC6:
            func_EAC6(); break;
        case 0xEAC7:
            func_EAC7(); break;
        case 0xD54D:
            func_D54D(); break;
        case 0xC0AD:
            func_C0AD(); break;
        case 0xC0AE:
            func_C0AE(); break;
        case 0xC1AD:
            func_C1AD(); break;
        case 0xC1AE:
            func_C1AE(); break;
        case 0xC2AD:
            func_C2AD(); break;
        case 0xC2AE:
            func_C2AE(); break;
        case 0xC3AE:
            func_C3AE(); break;
        case 0xC4AD:
            func_C4AD(); break;
        case 0xC5AE:
            func_C5AE(); break;
        case 0xC6AE:
            func_C6AE(); break;
        case 0xC7AE:
            func_C7AE(); break;
        case 0xC8AD:
            func_C8AD(); break;
        case 0xC8AE:
            func_C8AE(); break;
        case 0xCAAE:
            func_CAAE(); break;
        case 0xCBAE:
            func_CBAE(); break;
        case 0xCCAD:
            func_CCAD(); break;
        case 0xCCAE:
            func_CCAE(); break;
        case 0xCEAD:
            func_CEAD(); break;
        case 0xCFAE:
            func_CFAE(); break;
        case 0xD0AD:
            func_D0AD(); break;
        case 0xD1AD:
            func_D1AD(); break;
        case 0xD1AE:
            func_D1AE(); break;
        case 0xD2AD:
            func_D2AD(); break;
        case 0xD2AE:
            func_D2AE(); break;
        case 0xD8AE:
            func_D8AE(); break;
        case 0xD9AD:
            func_D9AD(); break;
        case 0xD9AE:
            func_D9AE(); break;
        case 0xDAAD:
            func_DAAD(); break;
        case 0xDBAD:
            func_DBAD(); break;
        case 0xDBAE:
            func_DBAE(); break;
        case 0xDCAD:
            func_DCAD(); break;
        case 0xDCAE:
            func_DCAE(); break;
        case 0xDDAD:
            func_DDAD(); break;
        case 0xDDAE:
            func_DDAE(); break;
        case 0xDEAD:
            func_DEAD(); break;
        case 0xDEAE:
            func_DEAE(); break;
        case 0xE0AD:
            func_E0AD(); break;
        case 0xE1AE:
            func_E1AE(); break;
        case 0xE2AD:
            func_E2AD(); break;
        case 0xE2AE:
            func_E2AE(); break;
        case 0xE3AD:
            func_E3AD(); break;
        case 0xE3AE:
            func_E3AE(); break;
        case 0xE4AE:
            func_E4AE(); break;
        case 0xE5AE:
            func_E5AE(); break;
        case 0xE6AE:
            func_E6AE(); break;
        case 0xE7AE:
            func_E7AE(); break;
        case 0xE8AE:
            func_E8AE(); break;
        case 0xE9AE:
            func_E9AE(); break;
        case 0xEAAE:
            func_EAAE(); break;
        case 0xEBAD:
            func_EBAD(); break;
        case 0xEBAE:
            func_EBAE(); break;
        case 0xECAE:
            func_ECAE(); break;
        case 0xEDAE:
            func_EDAE(); break;
        case 0xEEAD:
            func_EEAD(); break;
        case 0xEEAE:
            func_EEAE(); break;
        case 0xEFAD:
            func_EFAD(); break;
        case 0xF0AD:
            func_F0AD(); break;
        case 0xF1AD:
            func_F1AD(); break;
        case 0xF2AD:
            func_F2AD(); break;
        case 0xF3AD:
            func_F3AD(); break;
        case 0xF3AE:
            func_F3AE(); break;
        case 0xF4AD:
            func_F4AD(); break;
        case 0xF4AE:
            func_F4AE(); break;
        case 0xF7AE:
            func_F7AE(); break;
        case 0xF8AD:
            func_F8AD(); break;
        case 0xF8AE:
            func_F8AE(); break;
        case 0xE2A9:
            func_E2A9(); break;
        case 0xE2AA:
            func_E2AA(); break;
        case 0xEFB7:
            func_EFB7(); break;
        case 0xEFB8:
            func_EFB8(); break;
        case 0xC821:
            func_C821(); break;
        case 0xCAC8:
            func_CAC8(); break;
        case 0xCAC9:
            func_CAC9(); break;
        case 0xF6D0:
            func_F6D0(); break;
        case 0xF6D1:
            func_F6D1(); break;
        case 0xEDBE:
            func_EDBE(); break;
        case 0xCC8D:
            func_CC8D(); break;
        case 0xCC8E:
            func_CC8E(); break;
        case 0xCBEE:
            func_CBEE(); break;
        case 0xD04C:
            func_D04C(); break;
        case 0xD04D:
            func_D04D(); break;
        case 0xCDAF:
            func_CDAF(); break;
        case 0xF7D0:
            func_F7D0(); break;
        case 0xF7D1:
            func_F7D1(); break;
        case 0xCA8E:
            func_CA8E(); break;
        case 0xEE8D:
            func_EE8D(); break;
        case 0xC68D:
            func_C68D(); break;
        case 0xC98E:
            func_C98E(); break;
        case 0xE78D:
            func_E78D(); break;
        case 0xF061:
            func_F061(); break;
        case 0xCEE8:
            func_CEE8(); break;
        case 0xCEE9:
            func_CEE9(); break;
        case 0xE3D0:
            func_E3D0(); break;
        case 0xE3D1:
            func_E3D1(); break;
        case 0xF1FF:
            func_F1FF(); break;
        case 0xF200:
            func_F200(); break;
        case 0xF10D:
            func_F10D(); break;
        case 0xC908:
            func_C908(); break;
        case 0xE74C:
            func_E74C(); break;
        case 0xE74D:
            func_E74D(); break;
        case 0xF13B:
            func_F13B(); break;
        case 0xF13C:
            func_F13C(); break;
        case 0xF109:
            func_F109(); break;
        case 0xC885:
            func_C885(); break;
        case 0xCEC8:
            func_CEC8(); break;
        case 0xD3D1:
            func_D3D1(); break;
        case 0xF1C2:
            func_F1C2(); break;
        case 0xC942:
            func_C942(); break;
        case 0xC943:
            func_C943(); break;
        case 0xC946:
            func_C946(); break;
        case 0xD2C9:
            func_D2C9(); break;
        case 0xD2CA:
            func_D2CA(); break;
        case 0xC948:
            func_C948(); break;
        case 0xF1F9:
            func_F1F9(); break;
        case 0xF1FA:
            func_F1FA(); break;
        case 0xC925:
            func_C925(); break;
        case 0xC926:
            func_C926(); break;
        case 0xC927:
            func_C927(); break;
        case 0xC3C9:
            func_C3C9(); break;
        case 0xED4C:
            func_ED4C(); break;
        case 0xF1ED:
            func_F1ED(); break;
        case 0xC914:
            func_C914(); break;
        case 0xF6CA:
            func_F6CA(); break;
        case 0xF34C:
            func_F34C(); break;
        case 0xF34D:
            func_F34D(); break;
        case 0xF1F3:
            func_F1F3(); break;
        case 0xF1F4:
            func_F1F4(); break;
        case 0xF253:
            func_F253(); break;
        case 0xF254:
            func_F254(); break;
        case 0xF24C:
            func_F24C(); break;
        case 0xE806:
            func_E806(); break;
        case 0xEA5D:
            func_EA5D(); break;
        case 0xEA5E:
            func_EA5E(); break;
        case 0xF27F:
            func_F27F(); break;
        case 0xC285:
            func_C285(); break;
        case 0xC286:
            func_C286(); break;
        case 0xDEB9:
            func_DEB9(); break;
        case 0xDEBA:
            func_DEBA(); break;
        case 0xF2DF:
            func_F2DF(); break;
        case 0xC185:
            func_C185(); break;
        case 0xC186:
            func_C186(); break;
        case 0xF2A3:
            func_F2A3(); break;
        case 0xF2A4:
            func_F2A4(); break;
        case 0xF2BB:
            func_F2BB(); break;
        case 0xF2BC:
            func_F2BC(); break;
        case 0xDEAA:
            func_DEAA(); break;
        case 0xCD01:
            func_CD01(); break;
        case 0xF34F:
            func_F34F(); break;
        case 0xF554:
            func_F554(); break;
        case 0xF322:
            func_F322(); break;
        case 0xDD03:
            func_DD03(); break;
        case 0xFFDE:
            func_FFDE(); break;
        case 0xDEF5:
            func_DEF5(); break;
        case 0xE420:
            func_E420(); break;
        case 0xE421:
            func_E421(); break;
        case 0xF5E4:
            func_F5E4(); break;
        case 0xDD04:
            func_DD04(); break;
        case 0xC790:
            func_C790(); break;
        case 0xF380:
            func_F380(); break;
        case 0xF3D5:
            func_F3D5(); break;
        case 0xF3D6:
            func_F3D6(); break;
        case 0xF41B:
            func_F41B(); break;
        case 0xF3DE:
            func_F3DE(); break;
        case 0xF42A:
            func_F42A(); break;
        case 0xE720:
            func_E720(); break;
        case 0xF3E7:
            func_F3E7(); break;
        case 0xF44A:
            func_F44A(); break;
        case 0xF517:
            func_F517(); break;
        case 0xEB90:
            func_EB90(); break;
        case 0xE090:
            func_E090(); break;
        case 0xF47B:
            func_F47B(); break;
        case 0xF47C:
            func_F47C(); break;
        case 0xE9EE:
            func_E9EE(); break;
        case 0xE9EF:
            func_E9EF(); break;
        case 0xCE06:
            func_CE06(); break;
        case 0xE3F0:
            func_E3F0(); break;
        case 0xE3F1:
            func_E3F1(); break;
        case 0xE021:
            func_E021(); break;
        case 0xE9CE:
            func_E9CE(); break;
        case 0xD904:
            func_D904(); break;
        case 0xD905:
            func_D905(); break;
        case 0xDDE8:
            func_DDE8(); break;
        case 0xDDE9:
            func_DDE9(); break;
        case 0xF57D:
            func_F57D(); break;
        case 0xE1AF:
            func_E1AF(); break;
        case 0xCD05:
            func_CD05(); break;
        case 0xCD06:
            func_CD06(); break;
        case 0xCE0B:
            func_CE0B(); break;
        case 0xCE0C:
            func_CE0C(); break;
        case 0xF620:
            func_F620(); break;
        case 0xF621:
            func_F621(); break;
        case 0xD014:
            func_D014(); break;
        case 0xD015:
            func_D015(); break;
        case 0xF66C:
            func_F66C(); break;
        case 0xDE08:
            func_DE08(); break;
        case 0xE9C8:
            func_E9C8(); break;
        case 0xE9C9:
            func_E9C9(); break;
        case 0xC9A9:
            func_C9A9(); break;
        case 0xCD60:
            func_CD60(); break;
        case 0xCD61:
            func_CD61(); break;
        case 0xDB39:
            func_DB39(); break;
        case 0xDB3A:
            func_DB3A(); break;
        case 0xF749:
            func_F749(); break;
        case 0xEB20:
            func_EB20(); break;
        case 0xCDEB:
            func_CDEB(); break;
        case 0xCDEC:
            func_CDEC(); break;
        case 0xE220:
            func_E220(); break;
        case 0xF7E2:
            func_F7E2(); break;
        case 0xF7E3:
            func_F7E3(); break;
        case 0xD05D:
            func_D05D(); break;
        case 0xD05E:
            func_D05E(); break;
        case 0xEE80:
            func_EE80(); break;
        case 0xEE81:
            func_EE81(); break;
        case 0xD124:
            func_D124(); break;
        case 0xD125:
            func_D125(); break;
        case 0xC321:
            func_C321(); break;
        case 0xD0A9:
            func_D0A9(); break;
        case 0xD0AA:
            func_D0AA(); break;
        case 0xF034:
            func_F034(); break;
        case 0xC982:
            func_C982(); break;
        case 0xCE7B:
            func_CE7B(); break;
        case 0xCE7C:
            func_CE7C(); break;
        case 0xF8BA:
            func_F8BA(); break;
        case 0xEFAF:
            func_EFAF(); break;
        case 0xEFB0:
            func_EFB0(); break;
        case 0xEE78:
            func_EE78(); break;
        case 0xEE79:
            func_EE79(); break;
        case 0xDBEF:
            func_DBEF(); break;
        case 0xEA33:
            func_EA33(); break;
        case 0xEA34:
            func_EA34(); break;
        case 0xC602:
            func_C602(); break;
        case 0xE123:
            func_E123(); break;
        case 0xDAE2:
            func_DAE2(); break;
        case 0xEDFF:
            func_EDFF(); break;
        case 0xACD9:
            switch (g_current_bank) {
                case 0: func_ACD9_b0(); break;
                case 1: func_ACD9_b1(); break;
                case 2: func_ACD9_b2(); break;
                case 3: func_ACD9_b3(); break;
                case 4: func_ACD9_b4(); break;
                case 5: func_ACD9_b5(); break;
                case 6: func_ACD9_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8148:
            switch (g_current_bank) {
                case 0: func_8148_b0(); break;
                case 1: func_8148_b1(); break;
                case 2: func_8148_b2(); break;
                case 3: func_8148_b3(); break;
                case 4: func_8148_b4(); break;
                case 5: func_8148_b5(); break;
                case 6: func_8148_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x80AD:
            switch (g_current_bank) {
                case 7: func_C0AD(); break;
                case 0: func_80AD_b0(); break;
                case 1: func_80AD_b1(); break;
                case 2: func_80AD_b2(); break;
                case 3: func_80AD_b3(); break;
                case 4: func_80AD_b4(); break;
                case 5: func_80AD_b5(); break;
                case 6: func_80AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x81AD:
            switch (g_current_bank) {
                case 7: func_C1AD(); break;
                case 0: func_81AD_b0(); break;
                case 1: func_81AD_b1(); break;
                case 2: func_81AD_b2(); break;
                case 3: func_81AD_b3(); break;
                case 4: func_81AD_b4(); break;
                case 5: func_81AD_b5(); break;
                case 6: func_81AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x82AD:
            switch (g_current_bank) {
                case 7: func_C2AD(); break;
                case 0: func_82AD_b0(); break;
                case 1: func_82AD_b1(); break;
                case 2: func_82AD_b2(); break;
                case 3: func_82AD_b3(); break;
                case 4: func_82AD_b4(); break;
                case 5: func_82AD_b5(); break;
                case 6: func_82AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x83AD:
            switch (g_current_bank) {
                case 7: func_C3AD(); break;
                case 0: func_83AD_b0(); break;
                case 1: func_83AD_b1(); break;
                case 2: func_83AD_b2(); break;
                case 3: func_83AD_b3(); break;
                case 4: func_83AD_b4(); break;
                case 5: func_83AD_b5(); break;
                case 6: func_83AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x84AD:
            switch (g_current_bank) {
                case 7: func_C4AD(); break;
                case 0: func_84AD_b0(); break;
                case 1: func_84AD_b1(); break;
                case 2: func_84AD_b2(); break;
                case 3: func_84AD_b3(); break;
                case 4: func_84AD_b4(); break;
                case 5: func_84AD_b5(); break;
                case 6: func_84AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x85AD:
            switch (g_current_bank) {
                case 7: func_C5AD(); break;
                case 0: func_85AD_b0(); break;
                case 1: func_85AD_b1(); break;
                case 2: func_85AD_b2(); break;
                case 3: func_85AD_b3(); break;
                case 4: func_85AD_b4(); break;
                case 5: func_85AD_b5(); break;
                case 6: func_85AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x87AD:
            switch (g_current_bank) {
                case 0: func_87AD_b0(); break;
                case 1: func_87AD_b1(); break;
                case 2: func_87AD_b2(); break;
                case 3: func_87AD_b3(); break;
                case 4: func_87AD_b4(); break;
                case 5: func_87AD_b5(); break;
                case 6: func_87AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x88AD:
            switch (g_current_bank) {
                case 7: func_C8AD(); break;
                case 0: func_88AD_b0(); break;
                case 1: func_88AD_b1(); break;
                case 2: func_88AD_b2(); break;
                case 3: func_88AD_b3(); break;
                case 4: func_88AD_b4(); break;
                case 5: func_88AD_b5(); break;
                case 6: func_88AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x89AD:
            switch (g_current_bank) {
                case 0: func_89AD_b0(); break;
                case 1: func_89AD_b1(); break;
                case 2: func_89AD_b2(); break;
                case 3: func_89AD_b3(); break;
                case 4: func_89AD_b4(); break;
                case 5: func_89AD_b5(); break;
                case 6: func_89AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8AAD:
            switch (g_current_bank) {
                case 7: func_CAAD(); break;
                case 0: func_8AAD_b0(); break;
                case 1: func_8AAD_b1(); break;
                case 2: func_8AAD_b2(); break;
                case 3: func_8AAD_b3(); break;
                case 4: func_8AAD_b4(); break;
                case 5: func_8AAD_b5(); break;
                case 6: func_8AAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8BAD:
            switch (g_current_bank) {
                case 0: func_8BAD_b0(); break;
                case 1: func_8BAD_b1(); break;
                case 2: func_8BAD_b2(); break;
                case 3: func_8BAD_b3(); break;
                case 4: func_8BAD_b4(); break;
                case 5: func_8BAD_b5(); break;
                case 6: func_8BAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8CAD:
            switch (g_current_bank) {
                case 7: func_CCAD(); break;
                case 0: func_8CAD_b0(); break;
                case 1: func_8CAD_b1(); break;
                case 2: func_8CAD_b2(); break;
                case 3: func_8CAD_b3(); break;
                case 4: func_8CAD_b4(); break;
                case 5: func_8CAD_b5(); break;
                case 6: func_8CAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8DAD:
            switch (g_current_bank) {
                case 7: func_CDAD(); break;
                case 0: func_8DAD_b0(); break;
                case 1: func_8DAD_b1(); break;
                case 2: func_8DAD_b2(); break;
                case 3: func_8DAD_b3(); break;
                case 4: func_8DAD_b4(); break;
                case 5: func_8DAD_b5(); break;
                case 6: func_8DAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8EAD:
            switch (g_current_bank) {
                case 7: func_CEAD(); break;
                case 0: func_8EAD_b0(); break;
                case 1: func_8EAD_b1(); break;
                case 2: func_8EAD_b2(); break;
                case 3: func_8EAD_b3(); break;
                case 4: func_8EAD_b4(); break;
                case 5: func_8EAD_b5(); break;
                case 6: func_8EAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8FAD:
            switch (g_current_bank) {
                case 0: func_8FAD_b0(); break;
                case 1: func_8FAD_b1(); break;
                case 2: func_8FAD_b2(); break;
                case 3: func_8FAD_b3(); break;
                case 4: func_8FAD_b4(); break;
                case 5: func_8FAD_b5(); break;
                case 6: func_8FAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x90AD:
            switch (g_current_bank) {
                case 7: func_D0AD(); break;
                case 0: func_90AD_b0(); break;
                case 1: func_90AD_b1(); break;
                case 2: func_90AD_b2(); break;
                case 3: func_90AD_b3(); break;
                case 4: func_90AD_b4(); break;
                case 5: func_90AD_b5(); break;
                case 6: func_90AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x91AD:
            switch (g_current_bank) {
                case 7: func_D1AD(); break;
                case 0: func_91AD_b0(); break;
                case 1: func_91AD_b1(); break;
                case 2: func_91AD_b2(); break;
                case 3: func_91AD_b3(); break;
                case 4: func_91AD_b4(); break;
                case 5: func_91AD_b5(); break;
                case 6: func_91AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x92AD:
            switch (g_current_bank) {
                case 7: func_D2AD(); break;
                case 0: func_92AD_b0(); break;
                case 1: func_92AD_b1(); break;
                case 2: func_92AD_b2(); break;
                case 3: func_92AD_b3(); break;
                case 4: func_92AD_b4(); break;
                case 5: func_92AD_b5(); break;
                case 6: func_92AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x93AD:
            switch (g_current_bank) {
                case 7: func_D3AD(); break;
                case 0: func_93AD_b0(); break;
                case 1: func_93AD_b1(); break;
                case 2: func_93AD_b2(); break;
                case 3: func_93AD_b3(); break;
                case 4: func_93AD_b4(); break;
                case 5: func_93AD_b5(); break;
                case 6: func_93AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x94AD:
            switch (g_current_bank) {
                case 0: func_94AD_b0(); break;
                case 1: func_94AD_b1(); break;
                case 2: func_94AD_b2(); break;
                case 3: func_94AD_b3(); break;
                case 4: func_94AD_b4(); break;
                case 5: func_94AD_b5(); break;
                case 6: func_94AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x95AD:
            switch (g_current_bank) {
                case 7: func_D5AD(); break;
                case 0: func_95AD_b0(); break;
                case 1: func_95AD_b1(); break;
                case 2: func_95AD_b2(); break;
                case 3: func_95AD_b3(); break;
                case 4: func_95AD_b4(); break;
                case 5: func_95AD_b5(); break;
                case 6: func_95AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x96AD:
            switch (g_current_bank) {
                case 7: func_D6AD(); break;
                case 0: func_96AD_b0(); break;
                case 1: func_96AD_b1(); break;
                case 2: func_96AD_b2(); break;
                case 3: func_96AD_b3(); break;
                case 4: func_96AD_b4(); break;
                case 5: func_96AD_b5(); break;
                case 6: func_96AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x97AD:
            switch (g_current_bank) {
                case 0: func_97AD_b0(); break;
                case 1: func_97AD_b1(); break;
                case 2: func_97AD_b2(); break;
                case 3: func_97AD_b3(); break;
                case 4: func_97AD_b4(); break;
                case 5: func_97AD_b5(); break;
                case 6: func_97AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x98AD:
            switch (g_current_bank) {
                case 0: func_98AD_b0(); break;
                case 1: func_98AD_b1(); break;
                case 2: func_98AD_b2(); break;
                case 3: func_98AD_b3(); break;
                case 4: func_98AD_b4(); break;
                case 5: func_98AD_b5(); break;
                case 6: func_98AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x99AD:
            switch (g_current_bank) {
                case 7: func_D9AD(); break;
                case 0: func_99AD_b0(); break;
                case 1: func_99AD_b1(); break;
                case 2: func_99AD_b2(); break;
                case 3: func_99AD_b3(); break;
                case 4: func_99AD_b4(); break;
                case 5: func_99AD_b5(); break;
                case 6: func_99AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9AAD:
            switch (g_current_bank) {
                case 7: func_DAAD(); break;
                case 0: func_9AAD_b0(); break;
                case 1: func_9AAD_b1(); break;
                case 2: func_9AAD_b2(); break;
                case 3: func_9AAD_b3(); break;
                case 4: func_9AAD_b4(); break;
                case 5: func_9AAD_b5(); break;
                case 6: func_9AAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9BAD:
            switch (g_current_bank) {
                case 7: func_DBAD(); break;
                case 0: func_9BAD_b0(); break;
                case 1: func_9BAD_b1(); break;
                case 2: func_9BAD_b2(); break;
                case 3: func_9BAD_b3(); break;
                case 4: func_9BAD_b4(); break;
                case 5: func_9BAD_b5(); break;
                case 6: func_9BAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9CAD:
            switch (g_current_bank) {
                case 7: func_DCAD(); break;
                case 0: func_9CAD_b0(); break;
                case 1: func_9CAD_b1(); break;
                case 2: func_9CAD_b2(); break;
                case 3: func_9CAD_b3(); break;
                case 4: func_9CAD_b4(); break;
                case 5: func_9CAD_b5(); break;
                case 6: func_9CAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9DAD:
            switch (g_current_bank) {
                case 7: func_DDAD(); break;
                case 0: func_9DAD_b0(); break;
                case 1: func_9DAD_b1(); break;
                case 2: func_9DAD_b2(); break;
                case 3: func_9DAD_b3(); break;
                case 4: func_9DAD_b4(); break;
                case 5: func_9DAD_b5(); break;
                case 6: func_9DAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9EAD:
            switch (g_current_bank) {
                case 7: func_DEAD(); break;
                case 0: func_9EAD_b0(); break;
                case 1: func_9EAD_b1(); break;
                case 2: func_9EAD_b2(); break;
                case 3: func_9EAD_b3(); break;
                case 4: func_9EAD_b4(); break;
                case 5: func_9EAD_b5(); break;
                case 6: func_9EAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9FAD:
            switch (g_current_bank) {
                case 0: func_9FAD_b0(); break;
                case 1: func_9FAD_b1(); break;
                case 2: func_9FAD_b2(); break;
                case 3: func_9FAD_b3(); break;
                case 4: func_9FAD_b4(); break;
                case 5: func_9FAD_b5(); break;
                case 6: func_9FAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA0AD:
            switch (g_current_bank) {
                case 7: func_E0AD(); break;
                case 0: func_A0AD_b0(); break;
                case 1: func_A0AD_b1(); break;
                case 2: func_A0AD_b2(); break;
                case 3: func_A0AD_b3(); break;
                case 4: func_A0AD_b4(); break;
                case 5: func_A0AD_b5(); break;
                case 6: func_A0AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA1AD:
            switch (g_current_bank) {
                case 0: func_A1AD_b0(); break;
                case 1: func_A1AD_b1(); break;
                case 2: func_A1AD_b2(); break;
                case 3: func_A1AD_b3(); break;
                case 4: func_A1AD_b4(); break;
                case 5: func_A1AD_b5(); break;
                case 6: func_A1AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA2AD:
            switch (g_current_bank) {
                case 7: func_E2AD(); break;
                case 0: func_A2AD_b0(); break;
                case 1: func_A2AD_b1(); break;
                case 2: func_A2AD_b2(); break;
                case 3: func_A2AD_b3(); break;
                case 4: func_A2AD_b4(); break;
                case 5: func_A2AD_b5(); break;
                case 6: func_A2AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA3AD:
            switch (g_current_bank) {
                case 7: func_E3AD(); break;
                case 0: func_A3AD_b0(); break;
                case 1: func_A3AD_b1(); break;
                case 2: func_A3AD_b2(); break;
                case 3: func_A3AD_b3(); break;
                case 4: func_A3AD_b4(); break;
                case 5: func_A3AD_b5(); break;
                case 6: func_A3AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA4AD:
            switch (g_current_bank) {
                case 0: func_A4AD_b0(); break;
                case 1: func_A4AD_b1(); break;
                case 2: func_A4AD_b2(); break;
                case 3: func_A4AD_b3(); break;
                case 4: func_A4AD_b4(); break;
                case 5: func_A4AD_b5(); break;
                case 6: func_A4AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA5AD:
            switch (g_current_bank) {
                case 7: func_E5AD(); break;
                case 0: func_A5AD_b0(); break;
                case 1: func_A5AD_b1(); break;
                case 2: func_A5AD_b2(); break;
                case 3: func_A5AD_b3(); break;
                case 4: func_A5AD_b4(); break;
                case 5: func_A5AD_b5(); break;
                case 6: func_A5AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA6AD:
            switch (g_current_bank) {
                case 0: func_A6AD_b0(); break;
                case 1: func_A6AD_b1(); break;
                case 2: func_A6AD_b2(); break;
                case 3: func_A6AD_b3(); break;
                case 4: func_A6AD_b4(); break;
                case 5: func_A6AD_b5(); break;
                case 6: func_A6AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA7AD:
            switch (g_current_bank) {
                case 0: func_A7AD_b0(); break;
                case 1: func_A7AD_b1(); break;
                case 2: func_A7AD_b2(); break;
                case 3: func_A7AD_b3(); break;
                case 4: func_A7AD_b4(); break;
                case 5: func_A7AD_b5(); break;
                case 6: func_A7AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA9AD:
            switch (g_current_bank) {
                case 0: func_A9AD_b0(); break;
                case 1: func_A9AD_b1(); break;
                case 2: func_A9AD_b2(); break;
                case 3: func_A9AD_b3(); break;
                case 4: func_A9AD_b4(); break;
                case 5: func_A9AD_b5(); break;
                case 6: func_A9AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAB09:
            switch (g_current_bank) {
                case 0: func_AB09_b0(); break;
                case 1: func_AB09_b1(); break;
                case 2: func_AB09_b2(); break;
                case 3: func_AB09_b3(); break;
                case 4: func_AB09_b4(); break;
                case 5: func_AB09_b5(); break;
                case 6: func_AB09_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xC184:
            func_C184(); break;
        case 0xAFAD:
            switch (g_current_bank) {
                case 7: func_EFAD(); break;
                case 0: func_AFAD_b0(); break;
                case 1: func_AFAD_b1(); break;
                case 2: func_AFAD_b2(); break;
                case 3: func_AFAD_b3(); break;
                case 4: func_AFAD_b4(); break;
                case 5: func_AFAD_b5(); break;
                case 6: func_AFAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD92D:
            func_D92D(); break;
        case 0xF4DC:
            func_F4DC(); break;
        case 0xABE0:
            switch (g_current_bank) {
                case 0: func_ABE0_b0(); break;
                case 1: func_ABE0_b1(); break;
                case 2: func_ABE0_b2(); break;
                case 3: func_ABE0_b3(); break;
                case 4: func_ABE0_b4(); break;
                case 5: func_ABE0_b5(); break;
                case 6: func_ABE0_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xF070:
            func_F070(); break;
        case 0xA3FB:
            switch (g_current_bank) {
                case 0: func_A3FB_b0(); break;
                case 1: func_A3FB_b1(); break;
                case 2: func_A3FB_b2(); break;
                case 3: func_A3FB_b3(); break;
                case 4: func_A3FB_b4(); break;
                case 5: func_A3FB_b5(); break;
                case 6: func_A3FB_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8128:
            switch (g_current_bank) {
                case 0: func_8128_b0(); break;
                case 1: func_8128_b1(); break;
                case 2: func_8128_b2(); break;
                case 3: func_8128_b3(); break;
                case 4: func_8128_b4(); break;
                case 5: func_8128_b5(); break;
                case 6: func_8128_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD96A:
            func_D96A(); break;
        case 0xF893:
            func_F893(); break;
        case 0xD87F:
            func_D87F(); break;
        case 0x8EE8:
            switch (g_current_bank) {
                case 7: func_CEE8(); break;
                case 0: func_8EE8_b0(); break;
                case 1: func_8EE8_b1(); break;
                case 2: func_8EE8_b2(); break;
                case 3: func_8EE8_b3(); break;
                case 4: func_8EE8_b4(); break;
                case 5: func_8EE8_b5(); break;
                case 6: func_8EE8_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xD8E2:
            func_D8E2(); break;
        case 0xFFFF:
            func_FFFF(); break;
        case 0xE32E:
            func_E32E(); break;
        case 0x854C:
            switch (g_current_bank) {
                case 0: func_854C_b0(); break;
                case 1: func_854C_b1(); break;
                case 2: func_854C_b2(); break;
                case 3: func_854C_b3(); break;
                case 4: func_854C_b4(); break;
                case 5: func_854C_b5(); break;
                case 6: func_854C_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x89A5:
            switch (g_current_bank) {
                case 0: func_89A5_b0(); break;
                case 1: func_89A5_b1(); break;
                case 2: func_89A5_b2(); break;
                case 3: func_89A5_b3(); break;
                case 4: func_89A5_b4(); break;
                case 5: func_89A5_b5(); break;
                case 6: func_89A5_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9910:
            switch (g_current_bank) {
                case 0: func_9910_b0(); break;
                case 1: func_9910_b1(); break;
                case 2: func_9910_b2(); break;
                case 3: func_9910_b3(); break;
                case 4: func_9910_b4(); break;
                case 5: func_9910_b5(); break;
                case 6: func_9910_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xADD3:
            switch (g_current_bank) {
                case 0: func_ADD3_b0(); break;
                case 1: func_ADD3_b1(); break;
                case 2: func_ADD3_b2(); break;
                case 3: func_ADD3_b3(); break;
                case 4: func_ADD3_b4(); break;
                case 5: func_ADD3_b5(); break;
                case 6: func_ADD3_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xE2DD:
            func_E2DD(); break;
        case 0xADE5:
            switch (g_current_bank) {
                case 0: func_ADE5_b0(); break;
                case 1: func_ADE5_b1(); break;
                case 2: func_ADE5_b2(); break;
                case 3: func_ADE5_b3(); break;
                case 4: func_ADE5_b4(); break;
                case 5: func_ADE5_b5(); break;
                case 6: func_ADE5_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8086:
            switch (g_current_bank) {
                case 0: func_8086_b0(); break;
                case 1: func_8086_b1(); break;
                case 2: func_8086_b2(); break;
                case 3: func_8086_b3(); break;
                case 4: func_8086_b4(); break;
                case 5: func_8086_b5(); break;
                case 6: func_8086_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9881:
            switch (g_current_bank) {
                case 0: func_9881_b0(); break;
                case 1: func_9881_b1(); break;
                case 2: func_9881_b2(); break;
                case 3: func_9881_b3(); break;
                case 4: func_9881_b4(); break;
                case 5: func_9881_b5(); break;
                case 6: func_9881_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8061:
            switch (g_current_bank) {
                case 0: func_8061_b0(); break;
                case 1: func_8061_b1(); break;
                case 2: func_8061_b2(); break;
                case 3: func_8061_b3(); break;
                case 4: func_8061_b4(); break;
                case 5: func_8061_b5(); break;
                case 6: func_8061_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xADC3:
            switch (g_current_bank) {
                case 0: func_ADC3_b0(); break;
                case 1: func_ADC3_b1(); break;
                case 2: func_ADC3_b2(); break;
                case 3: func_ADC3_b3(); break;
                case 4: func_ADC3_b4(); break;
                case 5: func_ADC3_b5(); break;
                case 6: func_ADC3_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xCA89:
            func_CA89(); break;
        case 0xCA8B:
            func_CA8B(); break;
        case 0xCAAF:
            func_CAAF(); break;
        case 0xCABD:
            func_CABD(); break;
        case 0xCAC4:
            func_CAC4(); break;
        case 0xD1B8:
            func_D1B8(); break;
        case 0xCE7F:
            func_CE7F(); break;
        case 0xFEAD:
            func_FEAD(); break;
        case 0xC6ED:
            func_C6ED(); break;
        case 0xC72C:
            func_C72C(); break;
        case 0xC72F:
            func_C72F(); break;
        case 0xC2CC:
            func_C2CC(); break;
        case 0xCA6A:
            func_CA6A(); break;
        case 0xCFEA:
            func_CFEA(); break;
        case 0xF3EF:
            func_F3EF(); break;
        case 0xC5AD:
            func_C5AD(); break;
        case 0xC1CD:
            func_C1CD(); break;
        case 0xC1DD:
            func_C1DD(); break;
        case 0xC1FB:
            func_C1FB(); break;
        case 0xC1FA:
            func_C1FA(); break;
        case 0xE666:
            func_E666(); break;
        case 0xCB91:
            func_CB91(); break;
        case 0xE5AD:
            func_E5AD(); break;
        case 0xF156:
            func_F156(); break;
        case 0xCA28:
            func_CA28(); break;
        case 0xCA57:
            func_CA57(); break;
        case 0xCA3F:
            func_CA3F(); break;
        case 0xCA9A:
            func_CA9A(); break;
        case 0xCA2B:
            func_CA2B(); break;
        case 0xCA58:
            func_CA58(); break;
        case 0xCAA1:
            func_CAA1(); break;
        case 0xCA9F:
            func_CA9F(); break;
        case 0xCA99:
            func_CA99(); break;
        case 0xCACA:
            func_CACA(); break;
        case 0xCAD9:
            func_CAD9(); break;
        case 0xCBB2:
            func_CBB2(); break;
        case 0xF002:
            func_F002(); break;
        case 0xCB1D:
            func_CB1D(); break;
        case 0xCF03:
            func_CF03(); break;
        case 0xCB9A:
            func_CB9A(); break;
        case 0xCB72:
            func_CB72(); break;
        case 0xCB94:
            func_CB94(); break;
        case 0xCBBC:
            func_CBBC(); break;
        case 0xCB2F:
            func_CB2F(); break;
        case 0xCB3D:
            func_CB3D(); break;
        case 0xCB74:
            func_CB74(); break;
        case 0xCB5F:
            func_CB5F(); break;
        case 0xCB3F:
            func_CB3F(); break;
        case 0xCDB7:
            func_CDB7(); break;
        case 0xCCF2:
            func_CCF2(); break;
        case 0xA605:
            switch (g_current_bank) {
                case 0: func_A605_b0(); break;
                case 1: func_A605_b1(); break;
                case 2: func_A605_b2(); break;
                case 3: func_A605_b3(); break;
                case 4: func_A605_b4(); break;
                case 5: func_A605_b5(); break;
                case 6: func_A605_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xF244:
            func_F244(); break;
        case 0xD077:
            func_D077(); break;
        case 0xB6AD:
            switch (g_current_bank) {
                case 7: func_F6AD(); break;
                case 0: func_B6AD_b0(); break;
                case 1: func_B6AD_b1(); break;
                case 2: func_B6AD_b2(); break;
                case 3: func_B6AD_b3(); break;
                case 4: func_B6AD_b4(); break;
                case 5: func_B6AD_b5(); break;
                case 6: func_B6AD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xBFAD:
            switch (g_current_bank) {
                case 7: func_FFAD(); break;
                case 0: func_BFAD_b0(); break;
                case 1: func_BFAD_b1(); break;
                case 2: func_BFAD_b2(); break;
                case 3: func_BFAD_b3(); break;
                case 4: func_BFAD_b4(); break;
                case 5: func_BFAD_b5(); break;
                case 6: func_BFAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xE27C:
            func_E27C(); break;
        case 0x89B4:
            switch (g_current_bank) {
                case 0: func_89B4_b0(); break;
                case 1: func_89B4_b1(); break;
                case 2: func_89B4_b2(); break;
                case 3: func_89B4_b3(); break;
                case 4: func_89B4_b4(); break;
                case 5: func_89B4_b5(); break;
                case 6: func_89B4_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9358:
            switch (g_current_bank) {
                case 0: func_9358_b0(); break;
                case 1: func_9358_b1(); break;
                case 2: func_9358_b2(); break;
                case 3: func_9358_b3(); break;
                case 4: func_9358_b4(); break;
                case 5: func_9358_b5(); break;
                case 6: func_9358_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAAAD:
            switch (g_current_bank) {
                case 7: func_EAAD(); break;
                case 0: func_AAAD_b0(); break;
                case 1: func_AAAD_b1(); break;
                case 2: func_AAAD_b2(); break;
                case 3: func_AAAD_b3(); break;
                case 4: func_AAAD_b4(); break;
                case 5: func_AAAD_b5(); break;
                case 6: func_AAAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xFDAD:
            func_FDAD(); break;
        case 0xE35A:
            func_E35A(); break;
        case 0x853E:
            switch (g_current_bank) {
                case 0: func_853E_b0(); break;
                case 1: func_853E_b1(); break;
                case 2: func_853E_b2(); break;
                case 3: func_853E_b3(); break;
                case 4: func_853E_b4(); break;
                case 5: func_853E_b5(); break;
                case 6: func_853E_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xC8C4:
            func_C8C4(); break;
        case 0xBEAD:
            switch (g_current_bank) {
                case 7: func_FEAD(); break;
                case 0: func_BEAD_b0(); break;
                case 1: func_BEAD_b1(); break;
                case 2: func_BEAD_b2(); break;
                case 3: func_BEAD_b3(); break;
                case 4: func_BEAD_b4(); break;
                case 5: func_BEAD_b5(); break;
                case 6: func_BEAD_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xEAAD:
            func_EAAD(); break;
        case 0xD0B8:
            func_D0B8(); break;
        case 0xC3AD:
            func_C3AD(); break;
        case 0xD3AD:
            func_D3AD(); break;
        case 0xD02B:
            func_D02B(); break;
        case 0xC871:
            func_C871(); break;
        case 0xB4A5:
            switch (g_current_bank) {
                case 0: func_B4A5_b0(); break;
                case 1: func_B4A5_b1(); break;
                case 2: func_B4A5_b2(); break;
                case 3: func_B4A5_b3(); break;
                case 4: func_B4A5_b4(); break;
                case 5: func_B4A5_b5(); break;
                case 6: func_B4A5_b6(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xFFAD:
            func_FFAD(); break;
        case 0xD095:
            func_D095(); break;
        case 0xD4BF:
            func_D4BF(); break;
        case 0xDD54:
            func_DD54(); break;
        case 0xCC56:
            func_CC56(); break;
        case 0xF005:
            func_F005(); break;
        case 0xC282:
            func_C282(); break;
        case 0xD8EE:
            func_D8EE(); break;
        case 0xCD9B:
            func_CD9B(); break;
        case 0xF66B:
            func_F66B(); break;
        case 0xACB9:
            func_ACB9_b0(); break;
        case 0xAD1E:
            func_AD1E_b0(); break;
        case 0x8586:
            func_8586_b0(); break;
        case 0x81FD:
            func_81FD_b0(); break;
        case 0x80A8:
            func_80A8_b0(); break;
        case 0xB0E5:
            func_B0E5_b1(); break;
        case 0xB0E6:
            func_B0E6_b1(); break;
        case 0x8596:
            func_8596_b1(); break;
        case 0xA771:
            func_A771_b0(); break;
        case 0x8926:
            func_8926_b0(); break;
        case 0x8918:
            func_8918_b0(); break;
        case 0x8970:
            func_8970_b1(); break;
        case 0x8ACE:
            func_8ACE_b0(); break;
        case 0x8BFE:
            func_8BFE_b0(); break;
        case 0x8A8A:
            switch (g_current_bank) {
                case 0: func_8A8A_b0(); break;
                case 1: func_8A8A_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8C6D:
            func_8C6D_b0(); break;
        case 0x8C39:
            func_8C39_b0(); break;
        case 0x8DA8:
            func_8DA8_b0(); break;
        case 0x8883:
            func_8883_b0(); break;
        case 0x8D49:
            func_8D49_b1(); break;
        case 0x8D52:
            func_8D52_b1(); break;
        case 0x919B:
            func_919B_b1(); break;
        case 0x927B:
            func_927B_b1(); break;
        case 0xA3B0:
            func_A3B0_b0(); break;
        case 0x940D:
            func_940D_b0(); break;
        case 0x9487:
            switch (g_current_bank) {
                case 0: func_9487_b0(); break;
                case 1: func_9487_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x97E7:
            func_97E7_b0(); break;
        case 0x94C9:
            func_94C9_b0(); break;
        case 0x955A:
            func_955A_b0(); break;
        case 0x97D8:
            func_97D8_b0(); break;
        case 0x9548:
            func_9548_b0(); break;
        case 0x97CB:
            func_97CB_b0(); break;
        case 0x97DB:
            func_97DB_b0(); break;
        case 0x97A5:
            func_97A5_b0(); break;
        case 0x9616:
            func_9616_b0(); break;
        case 0x9652:
            func_9652_b0(); break;
        case 0x962D:
            func_962D_b0(); break;
        case 0x9491:
            func_9491_b0(); break;
        case 0xF71D:
            func_F71D(); break;
        case 0xA37A:
            func_A37A_b1(); break;
        case 0x97BE:
            func_97BE_b0(); break;
        case 0x9766:
            func_9766_b1(); break;
        case 0x9BCC:
            func_9BCC_b0(); break;
        case 0x9A0E:
            func_9A0E_b0(); break;
        case 0x9BDE:
            func_9BDE_b0(); break;
        case 0x9A79:
            func_9A79_b0(); break;
        case 0x9E44:
            func_9E44_b0(); break;
        case 0x9BF0:
            func_9BF0_b0(); break;
        case 0x9BAB:
            func_9BAB_b0(); break;
        case 0xE3A9:
            func_E3A9(); break;
        case 0x9F9F:
            func_9F9F_b0(); break;
        case 0x9F9B:
            func_9F9B_b0(); break;
        case 0xA029:
            func_A029_b0(); break;
        case 0xA206:
            func_A206_b0(); break;
        case 0x9FBD:
            func_9FBD_b0(); break;
        case 0xA0AE:
            func_A0AE_b0(); break;
        case 0xA049:
            switch (g_current_bank) {
                case 0: func_A049_b0(); break;
                case 1: func_A049_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xDB56:
            func_DB56(); break;
        case 0xA3DA:
            func_A3DA_b0(); break;
        case 0x8D4D:
            func_8D4D_b0(); break;
        case 0xC5AF:
            func_C5AF(); break;
        case 0x9E7B:
            func_9E7B_b1(); break;
        case 0xA261:
            func_A261_b0(); break;
        case 0xAC14:
            func_AC14_b0(); break;
        case 0xAD62:
            func_AD62_b0(); break;
        case 0x84BB:
            func_84BB_b0(); break;
        case 0xAFB0:
            func_AFB0_b0(); break;
        case 0xB04F:
            func_B04F_b0(); break;
        case 0xAEE1:
            func_AEE1_b0(); break;
        case 0xAF7A:
            switch (g_current_bank) {
                case 0: func_AF7A_b0(); break;
                case 1: func_AF7A_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAF93:
            switch (g_current_bank) {
                case 0: func_AF93_b0(); break;
                case 1: func_AF93_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x8FD4:
            func_8FD4_b0(); break;
        case 0x9000:
            func_9000_b0(); break;
        case 0xD849:
            func_D849(); break;
        case 0xAF34:
            func_AF34_b0(); break;
        case 0xAED2:
            func_AED2_b0(); break;
        case 0xB20C:
            func_B20C_b0(); break;
        case 0xA42E:
            func_A42E_b0(); break;
        case 0xD543:
            func_D543(); break;
        case 0xD582:
            func_D582(); break;
        case 0xA87D:
            func_A87D_b0(); break;
        case 0xD4E5:
            func_D4E5(); break;
        case 0xD517:
            func_D517(); break;
        case 0xB058:
            func_B058_b0(); break;
        case 0xB197:
            func_B197_b0(); break;
        case 0xB1DA:
            func_B1DA_b0(); break;
        case 0xB070:
            func_B070_b0(); break;
        case 0xB4D0:
            func_B4D0_b0(); break;
        case 0xB048:
            func_B048_b0(); break;
        case 0xB064:
            func_B064_b0(); break;
        case 0xB1AE:
            func_B1AE_b0(); break;
        case 0xB0FD:
            func_B0FD_b0(); break;
        case 0xB52B:
            func_B52B_b0(); break;
        case 0xB099:
            func_B099_b0(); break;
        case 0xB0C2:
            func_B0C2_b0(); break;
        case 0xB13C:
            func_B13C_b0(); break;
        case 0xB15A:
            func_B15A_b0(); break;
        case 0xD065:
            func_D065(); break;
        case 0xFD1A:
            func_FD1A(); break;
        case 0xA3A0:
            func_A3A0_b1(); break;
        case 0xA95B:
            func_A95B_b1(); break;
        case 0xA977:
            switch (g_current_bank) {
                case 1: func_A977_b1(); break;
                case 0: func_A977_b0(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA989:
            func_A989_b1(); break;
        case 0xBA06:
            func_BA06_b1(); break;
        case 0x8417:
            func_8417_b1(); break;
        case 0x8E8C:
            func_8E8C_b1(); break;
        case 0x8E99:
            func_8E99_b1(); break;
        case 0x84E5:
            func_84E5_b1(); break;
        case 0x84E7:
            func_84E7_b1(); break;
        case 0x84E9:
            func_84E9_b1(); break;
        case 0x84EB:
            func_84EB_b1(); break;
        case 0x852A:
            func_852A_b1(); break;
        case 0x852C:
            func_852C_b1(); break;
        case 0x8545:
            func_8545_b1(); break;
        case 0x9DAE:
            func_9DAE_b0(); break;
        case 0x9D03:
            func_9D03_b0(); break;
        case 0xCB1E:
            func_CB1E(); break;
        case 0xCB7E:
            func_CB7E(); break;
        case 0xCB50:
            func_CB50(); break;
        case 0x8A40:
            func_8A40_b0(); break;
        case 0x8A73:
            func_8A73_b0(); break;
        case 0x8C4C:
            func_8C4C_b0(); break;
        case 0x8C7F:
            func_8C7F_b0(); break;
        case 0x8CB0:
            func_8CB0_b0(); break;
        case 0x8CDA:
            func_8CDA_b0(); break;
        case 0x8D33:
            func_8D33_b0(); break;
        case 0x8D8C:
            func_8D8C_b0(); break;
        case 0x937A:
            func_937A_b0(); break;
        case 0xB4DC:
            func_B4DC_b0(); break;
        case 0x8953:
            func_8953_b1(); break;
        case 0x8882:
            func_8882_b0(); break;
        case 0x8CF1:
            func_8CF1_b1(); break;
        case 0x99D7:
            func_99D7_b0(); break;
        case 0x9A42:
            func_9A42_b0(); break;
        case 0xA221:
            func_A221_b0(); break;
        case 0x84FA:
            func_84FA_b0(); break;
        case 0x8FFF:
            func_8FFF_b0(); break;
        case 0x8E4F:
            func_8E4F_b1(); break;
        case 0x8E5B:
            func_8E5B_b1(); break;
        case 0x8E77:
            func_8E77_b1(); break;
        case 0x8E94:
            func_8E94_b1(); break;
        case 0x88FE:
            func_88FE_b1(); break;
        case 0x8CD3:
            func_8CD3_b1(); break;
        case 0x8521:
            func_8521_b0(); break;
        case 0x88FC:
            func_88FC_b1(); break;
        case 0x88D3:
            func_88D3_b1(); break;
        case 0x852D:
            func_852D_b0(); break;
        case 0x88FB:
            func_88FB_b0(); break;
        case 0x9D10:
            func_9D10_b0(); break;
        case 0x8502:
            func_8502_b0(); break;
        case 0xAFA6:
            func_AFA6_b0(); break;
        case 0xB1A6:
            func_B1A6_b0(); break;
        case 0xA905:
            func_A905_b0(); break;
        case 0x802A:
            func_802A_b0(); break;
        case 0xA50A:
            func_A50A_b0(); break;
        case 0xA5B0:
            func_A5B0_b0(); break;
        case 0xA941:
            func_A941_b0(); break;
        case 0x8E21:
            func_8E21_b0(); break;
        case 0xA961:
            func_A961_b0(); break;
        case 0xB003:
            func_B003_b0(); break;
        case 0xAD3F:
            func_AD3F_b0(); break;
        case 0x8121:
            func_8121_b0(); break;
        case 0x8577:
            func_8577_b0(); break;
        case 0xAD78:
            func_AD78_b0(); break;
        case 0x948E:
            func_948E_b0(); break;
        case 0x8594:
            func_8594_b0(); break;
        case 0xADD2:
            func_ADD2_b0(); break;
        case 0x9191:
            func_9191_b0(); break;
        case 0x9292:
            func_9292_b0(); break;
        case 0xA3A3:
            func_A3A3_b0(); break;
        case 0xB001:
            func_B001_b0(); break;
        case 0xB5B5:
            func_B5B5_b0(); break;
        case 0x8541:
            func_8541_b0(); break;
        case 0x8505:
            switch (g_current_bank) {
                case 0: func_8505_b0(); break;
                case 1: func_8505_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA585:
            func_A585_b0(); break;
        case 0x8DA4:
            func_8DA4_b0(); break;
        case 0xA061:
            func_A061_b0(); break;
        case 0xA9ED:
            func_A9ED_b0(); break;
        case 0x854B:
            func_854B_b0(); break;
        case 0x85A5:
            func_85A5_b0(); break;
        case 0x8D09:
            func_8D09_b0(); break;
        case 0x8D06:
            func_8D06_b0(); break;
        case 0xB38E:
            func_B38E_b0(); break;
        case 0x853D:
            func_853D_b0(); break;
        case 0x9A9A:
            func_9A9A_b0(); break;
        case 0xA701:
            func_A701_b0(); break;
        case 0xA9A9:
            func_A9A9_b0(); break;
        case 0xAAAA:
            func_AAAA_b0(); break;
        case 0xBBBB:
            func_BBBB_b0(); break;
        case 0xBCBC:
            func_BCBC_b0(); break;
        case 0xA918:
            func_A918_b0(); break;
        case 0xA987:
            func_A987_b0(); break;
        case 0xA5F3:
            func_A5F3_b0(); break;
        case 0x8D28:
            func_8D28_b0(); break;
        case 0xA907:
            func_A907_b0(); break;
        case 0x9D07:
            func_9D07_b0(); break;
        case 0xA9F6:
            func_A9F6_b0(); break;
        case 0x850B:
            switch (g_current_bank) {
                case 0: func_850B_b0(); break;
                case 1: func_850B_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xA202:
            func_A202_b0(); break;
        case 0x9005:
            func_9005_b0(); break;
        case 0x8D13:
            func_8D13_b0(); break;
        case 0xA98D:
            func_A98D_b0(); break;
        case 0xAD8D:
            func_AD8D_b0(); break;
        case 0xAD06:
            switch (g_current_bank) {
                case 0: func_AD06_b0(); break;
                case 1: func_AD06_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x808E:
            func_808E_b0(); break;
        case 0xA8AA:
            func_A8AA_b0(); break;
        case 0xA92A:
            func_A92A_b0(); break;
        case 0x8FB2:
            func_8FB2_b0(); break;
        case 0xA914:
            func_A914_b0(); break;
        case 0x949E:
            func_949E_b0(); break;
        case 0x9C63:
            func_9C63_b0(); break;
        case 0xAEA0:
            func_AEA0_b0(); break;
        case 0x89B0:
            func_89B0_b0(); break;
        case 0x928D:
            func_928D_b0(); break;
        case 0xBBEA:
            func_BBEA_b0(); break;
        case 0x94FA:
            func_94FA_b0(); break;
        case 0x98C6:
            func_98C6_b0(); break;
        case 0x8D3D:
            func_8D3D_b0(); break;
        case 0xADDA:
            func_ADDA_b0(); break;
        case 0xAA15:
            func_AA15_b0(); break;
        case 0xA9AB:
            func_A9AB_b0(); break;
        case 0xA90D:
            func_A90D_b0(); break;
        case 0xAEA9:
            func_AEA9_b0(); break;
        case 0xAC4D:
            func_AC4D_b0(); break;
        case 0x9A00:
            func_9A00_b0(); break;
        case 0xAA0D:
            func_AA0D_b0(); break;
        case 0xB9C9:
            func_B9C9_b0(); break;
        case 0xA993:
            func_A993_b0(); break;
        case 0xA526:
            func_A526_b0(); break;
        case 0x85D0:
            func_85D0_b0(); break;
        case 0xAACC:
            func_AACC_b0(); break;
        case 0xA603:
            func_A603_b0(); break;
        case 0x8599:
            func_8599_b0(); break;
        case 0x8508:
            func_8508_b0(); break;
        case 0x97AA:
            func_97AA_b0(); break;
        case 0x8D3A:
            func_8D3A_b0(); break;
        case 0x9014:
            func_9014_b0(); break;
        case 0xA93A:
            func_A93A_b0(); break;
        case 0xA998:
            func_A998_b0(); break;
        case 0xA996:
            func_A996_b0(); break;
        case 0x8529:
            func_8529_b0(); break;
        case 0x80AA:
            func_80AA_b0(); break;
        case 0x8D81:
            func_8D81_b0(); break;
        case 0xA9F4:
            func_A9F4_b0(); break;
        case 0xA798:
            func_A798_b0(); break;
        case 0xA403:
            func_A403_b0(); break;
        case 0xA823:
            func_A823_b0(); break;
        case 0xA805:
            func_A805_b0(); break;
        case 0xA215:
            func_A215_b0(); break;
        case 0xAA61:
            func_AA61_b0(); break;
        case 0xAA67:
            func_AA67_b0(); break;
        case 0xAABC:
            func_AABC_b0(); break;
        case 0x9977:
            func_9977_b0(); break;
        case 0xAA9A:
            func_AA9A_b0(); break;
        case 0xA5A7:
            func_A5A7_b0(); break;
        case 0xA7AF:
            func_A7AF_b0(); break;
        case 0x9A6B:
            func_9A6B_b0(); break;
        case 0xAD56:
            func_AD56_b0(); break;
        case 0xAE9E:
            func_AE9E_b0(); break;
        case 0xAE21:
            func_AE21_b0(); break;
        case 0x901D:
            func_901D_b0(); break;
        case 0x8D9D:
            func_8D9D_b0(); break;
        case 0x8D59:
            func_8D59_b0(); break;
        case 0xADF7:
            func_ADF7_b0(); break;
        case 0x8518:
            func_8518_b0(); break;
        case 0x859D:
            func_859D_b0(); break;
        case 0xB9AA:
            func_B9AA_b0(); break;
        case 0x85BA:
            func_85BA_b0(); break;
        case 0x94CF:
            func_94CF_b0(); break;
        case 0xA9F2:
            func_A9F2_b0(); break;
        case 0xB0D1:
            func_B0D1_b0(); break;
        case 0xAEAE:
            func_AEAE_b0(); break;
        case 0x96B0:
            func_96B0_b0(); break;
        case 0xA6EB:
            func_A6EB_b0(); break;
        case 0xA9D2:
            func_A9D2_b0(); break;
        case 0x9AAA:
            func_9AAA_b0(); break;
        case 0xAD9D:
            func_AD9D_b0(); break;
        case 0x8DF7:
            func_8DF7_b0(); break;
        case 0xA211:
            func_A211_b0(); break;
        case 0x8DEB:
            func_8DEB_b0(); break;
        case 0x9B4D:
            func_9B4D_b0(); break;
        case 0xA1AA:
            func_A1AA_b0(); break;
        case 0x85DF:
            func_85DF_b0(); break;
        case 0xAEC0:
            func_AEC0_b0(); break;
        case 0xAF1F:
            func_AF1F_b0(); break;
        case 0xA721:
            func_A721_b0(); break;
        case 0x9090:
            func_9090_b0(); break;
        case 0xB0A2:
            func_B0A2_b0(); break;
        case 0xAD86:
            func_AD86_b0(); break;
        case 0xAFB6:
            func_AFB6_b0(); break;
        case 0xA0B9:
            func_A0B9_b0(); break;
        case 0xB101:
            switch (g_current_bank) {
                case 0: func_B101_b0(); break;
                case 1: func_B101_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x9486:
            func_9486_b0(); break;
        case 0x9586:
            func_9586_b0(); break;
        case 0xAA69:
            switch (g_current_bank) {
                case 0: func_AA69_b0(); break;
                case 1: func_AA69_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xAD2F:
            func_AD2F_b0(); break;
        case 0x851C:
            func_851C_b0(); break;
        case 0xA62E:
            func_A62E_b0(); break;
        case 0xA649:
            func_A649_b0(); break;
        case 0xA664:
            func_A664_b0(); break;
        case 0xA4EA:
            func_A4EA_b0(); break;
        case 0xA69A:
            func_A69A_b0(); break;
        case 0xA6B5:
            func_A6B5_b0(); break;
        case 0xA6D0:
            func_A6D0_b0(); break;
        case 0xA571:
            func_A571_b0(); break;
        case 0xA706:
            func_A706_b0(); break;
        case 0xA73C:
            func_A73C_b0(); break;
        case 0xA5F8:
            func_A5F8_b0(); break;
        case 0xA757:
            func_A757_b0(); break;
        case 0x98A8:
            func_98A8_b0(); break;
        case 0xA499:
            func_A499_b0(); break;
        case 0xA4B4:
            func_A4B4_b0(); break;
        case 0xA4CF:
            func_A4CF_b0(); break;
        case 0xA520:
            func_A520_b0(); break;
        case 0xA53B:
            func_A53B_b0(); break;
        case 0xA556:
            func_A556_b0(); break;
        case 0xA58C:
            func_A58C_b0(); break;
        case 0xA5C2:
            func_A5C2_b0(); break;
        case 0xA5DD:
            func_A5DD_b0(); break;
        case 0xA613:
            func_A613_b0(); break;
        case 0x8D2C:
            func_8D2C_b0(); break;
        case 0x8AA6:
            func_8AA6_b0(); break;
        case 0x8D92:
            func_8D92_b0(); break;
        case 0x918A:
            func_918A_b0(); break;
        case 0xA83A:
            func_A83A_b0(); break;
        case 0x8966:
            func_8966_b0(); break;
        case 0xB00B:
            func_B00B_b0(); break;
        case 0xB068:
            func_B068_b0(); break;
        case 0xAD8F:
            func_AD8F_b0(); break;
        case 0x8D66:
            func_8D66_b0(); break;
        case 0x908E:
            switch (g_current_bank) {
                case 0: func_908E_b0(); break;
                case 1: func_908E_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0x90C8:
            func_90C8_b0(); break;
        case 0x9221:
            func_9221_b0(); break;
        case 0xB006:
            func_B006_b0(); break;
        case 0xAE05:
            func_AE05_b0(); break;
        case 0x8D85:
            func_8D85_b0(); break;
        case 0x8D87:
            func_8D87_b0(); break;
        case 0x8ACB:
            func_8ACB_b0(); break;
        case 0xAC03:
            func_AC03_b0(); break;
        case 0xB921:
            func_B921_b0(); break;
        case 0x8961:
            func_8961_b0(); break;
        case 0xAD64:
            func_AD64_b0(); break;
        case 0x9905:
            func_9905_b0(); break;
        case 0xA506:
            func_A506_b0(); break;
        case 0xA9AF:
            func_A9AF_b0(); break;
        case 0xADF0:
            func_ADF0_b0(); break;
        case 0xA2A5:
            func_A2A5_b0(); break;
        case 0x8221:
            func_8221_b0(); break;
        case 0xADA9:
            func_ADA9_b0(); break;
        case 0xBA21:
            func_BA21_b0(); break;
        case 0x8DFF:
            func_8DFF_b0(); break;
        case 0x9D8C:
            func_9D8C_b0(); break;
        case 0x857C:
            func_857C_b0(); break;
        case 0x85B3:
            func_85B3_b0(); break;
        case 0x9D0D:
            func_9D0D_b0(); break;
        case 0x85C2:
            func_85C2_b0(); break;
        case 0x8546:
            func_8546_b0(); break;
        case 0xBA23:
            func_BA23_b0(); break;
        case 0xAD27:
            func_AD27_b0(); break;
        case 0xA9DB:
            func_A9DB_b0(); break;
        case 0xADB8:
            func_ADB8_b0(); break;
        case 0x9DD1:
            func_9DD1_b0(); break;
        case 0x8DB5:
            func_8DB5_b0(); break;
        case 0xAEB8:
            func_AEB8_b0(); break;
        case 0xAEF7:
            func_AEF7_b0(); break;
        case 0xA21C:
            func_A21C_b0(); break;
        case 0xAA02:
            switch (g_current_bank) {
                case 0: func_AA02_b0(); break;
                case 1: func_AA02_b1(); break;
                default: nes_log_dispatch_miss(addr); break;
            }
            break;
        case 0xB92F:
            func_B92F_b0(); break;
        case 0xB905:
            func_B905_b0(); break;
        case 0xA3C6:
            func_A3C6_b0(); break;
        case 0x9901:
            func_9901_b0(); break;
        case 0x8E01:
            func_8E01_b0(); break;
        case 0xA801:
            func_A801_b0(); break;
        case 0x851A:
            func_851A_b0(); break;
        case 0x85BC:
            func_85BC_b0(); break;
        case 0x9106:
            func_9106_b0(); break;
        case 0xA9D4:
            func_A9D4_b0(); break;
        case 0xACAE:
            func_ACAE_b0(); break;
        case 0xB3CF:
            func_B3CF_b0(); break;
        case 0x8DBD:
            func_8DBD_b0(); break;
        case 0xBC5A:
            func_BC5A_b0(); break;
        case 0xA9F8:
            func_A9F8_b0(); break;
        case 0x9154:
            func_9154_b1(); break;
        case 0x93E6:
            func_93E6_b1(); break;
        case 0xA094:
            func_A094_b1(); break;
        case 0x90A1:
            func_90A1_b1(); break;
        case 0xA132:
            func_A132_b1(); break;
        case 0x9172:
            func_9172_b1(); break;
        case 0xA324:
            func_A324_b1(); break;
        case 0xA1A6:
            func_A1A6_b1(); break;
        case 0xA3A4:
            func_A3A4_b1(); break;
        case 0xB013:
            func_B013_b1(); break;
        case 0xB091:
            func_B091_b1(); break;
        case 0x9042:
            func_9042_b1(); break;
        case 0xB0E7:
            func_B0E7_b1(); break;
        case 0x91CF:
            func_91CF_b1(); break;
        case 0x8544:
            func_8544_b1(); break;
        case 0xB0A1:
            func_B0A1_b1(); break;
        case 0x8186:
            func_8186_b1(); break;
        case 0x8382:
            func_8382_b1(); break;
        case 0x8192:
            func_8192_b1(); break;
        case 0xB182:
            func_B182_b1(); break;
        case 0x8001:
            func_8001_b1(); break;
        case 0x90B3:
            func_90B3_b1(); break;
        case 0x8264:
            func_8264_b1(); break;
        case 0xB083:
            func_B083_b1(); break;
        case 0x95B1:
            func_95B1_b1(); break;
        case 0x83B8:
            func_83B8_b1(); break;
        case 0xA0B3:
            func_A0B3_b1(); break;
        case 0xB1A1:
            func_B1A1_b1(); break;
        case 0x8522:
            func_8522_b1(); break;
        case 0x9382:
            func_9382_b1(); break;
        case 0x9344:
            func_9344_b1(); break;
        case 0x8F62:
            func_8F62_b1(); break;
        case 0x95E6:
            func_95E6_b1(); break;
        case 0x85B4:
            func_85B4_b1(); break;
        case 0x83B6:
            func_83B6_b1(); break;
        case 0xB172:
            func_B172_b1(); break;
        case 0x8D29:
            func_8D29_b1(); break;
        case 0x84DD:
            func_84DD_b1(); break;
        case 0x8F34:
            func_8F34_b1(); break;
        case 0xB194:
            func_B194_b1(); break;
        case 0x9169:
            func_9169_b1(); break;
        case 0x916E:
            func_916E_b1(); break;
        case 0x917F:
            func_917F_b1(); break;
        case 0x9B7C:
            func_9B7C_b1(); break;
        case 0xB1C4:
            func_B1C4_b1(); break;
        case 0x91A1:
            func_91A1_b1(); break;
        case 0x91B5:
            func_91B5_b1(); break;
        case 0xB1E8:
            func_B1E8_b1(); break;
        case 0x9174:
            func_9174_b1(); break;
        case 0x9195:
            func_9195_b1(); break;
        case 0x9326:
            func_9326_b1(); break;
        case 0x9546:
            func_9546_b1(); break;
        case 0x9458:
            func_9458_b1(); break;
        case 0x9608:
            func_9608_b1(); break;
        case 0x9612:
            func_9612_b1(); break;
        case 0x9FE6:
            func_9FE6_b1(); break;
        case 0x961A:
            func_961A_b1(); break;
        case 0xB276:
            func_B276_b1(); break;
        case 0x9746:
            func_9746_b1(); break;
        case 0x9242:
            func_9242_b1(); break;
        case 0x9093:
            func_9093_b1(); break;
        case 0xB0D7:
            func_B0D7_b1(); break;
        case 0x970E:
            func_970E_b1(); break;
        case 0x9855:
            func_9855_b1(); break;
        case 0xB103:
            func_B103_b1(); break;
        case 0x9F01:
            func_9F01_b1(); break;
        case 0xB199:
            func_B199_b1(); break;
        case 0xB007:
            func_B007_b1(); break;
        case 0x9772:
            func_9772_b1(); break;
        case 0x9BB8:
            func_9BB8_b1(); break;
        case 0x90C2:
            func_90C2_b1(); break;
        case 0x9BFE:
            func_9BFE_b1(); break;
        case 0x9C5E:
            func_9C5E_b1(); break;
        case 0x9EDF:
            func_9EDF_b1(); break;
        case 0xAD08:
            func_AD08_b1(); break;
        case 0x81DF:
            func_81DF_b1(); break;
        case 0x9D82:
            func_9D82_b1(); break;
        case 0x81BE:
            func_81BE_b1(); break;
        case 0xA84D:
            func_A84D_b1(); break;
        case 0x9007:
            func_9007_b1(); break;
        case 0xA909:
            func_A909_b1(); break;
        case 0x90FF:
            func_90FF_b1(); break;
        case 0x9DD9:
            func_9DD9_b1(); break;
        case 0x9D4B:
            func_9D4B_b1(); break;
        case 0x919E:
            func_919E_b1(); break;
        case 0x8507:
            func_8507_b1(); break;
        case 0x899E:
            func_899E_b1(); break;
        case 0xA90C:
            func_A90C_b1(); break;
        case 0xAD0E:
            func_AD0E_b1(); break;
        case 0x8AAE:
            func_8AAE_b1(); break;
        case 0x84A3:
            func_84A3_b1(); break;
        case 0xAD1C:
            func_AD1C_b1(); break;
        case 0xA33D:
            func_A33D_b1(); break;
        case 0x8501:
            func_8501_b1(); break;
        case 0x85E7:
            func_85E7_b1(); break;
        case 0xA921:
            func_A921_b1(); break;
        case 0x8509:
            func_8509_b1(); break;
        case 0x9E06:
            func_9E06_b1(); break;
        case 0x9F06:
            func_9F06_b1(); break;
        case 0xAA10:
            func_AA10_b1(); break;
        case 0x8FAE:
            func_8FAE_b1(); break;
        case 0x9980:
            func_9980_b1(); break;
        case 0x8561:
            func_8561_b1(); break;
        case 0x8F8E:
            func_8F8E_b1(); break;
        case 0x8D31:
            func_8D31_b1(); break;
        case 0xA249:
            func_A249_b1(); break;
        case 0xA504:
            func_A504_b1(); break;
        case 0xA5DF:
            func_A5DF_b1(); break;
        case 0xB106:
            func_B106_b1(); break;
        case 0xA9F5:
            func_A9F5_b1(); break;
        case 0xA4A8:
            func_A4A8_b1(); break;
        case 0xAAE6:
            func_AAE6_b1(); break;
        case 0xA9DC:
            func_A9DC_b1(); break;
        case 0xA541:
            func_A541_b1(); break;
        case 0xA40B:
            func_A40B_b1(); break;
        case 0x84C9:
            func_84C9_b1(); break;
        case 0x9D41:
            func_9D41_b1(); break;
        case 0x800A:
            func_800A_b1(); break;
        case 0xAA3D:
            func_AA3D_b1(); break;
        case 0xAA99:
            func_AA99_b1(); break;
        case 0x92AC:
            func_92AC_b1(); break;
        case 0xAB93:
            func_AB93_b1(); break;
        case 0xAB67:
            func_AB67_b1(); break;
        case 0xACAC:
            func_ACAC_b1(); break;
        case 0xABDA:
            func_ABDA_b1(); break;
        case 0xABF1:
            func_ABF1_b1(); break;
        case 0xAC4A:
            func_AC4A_b1(); break;
        case 0xAC80:
            func_AC80_b1(); break;
        case 0xAC9B:
            func_AC9B_b1(); break;
        case 0xAFE8:
            func_AFE8_b1(); break;
        case 0xABF6:
            func_ABF6_b1(); break;
        case 0xAC57:
            func_AC57_b1(); break;
        case 0xACED:
            func_ACED_b1(); break;
        case 0xAD00:
            func_AD00_b1(); break;
        case 0x87AE:
            func_87AE_b1(); break;
        case 0xADBA:
            func_ADBA_b1(); break;
        case 0xAD77:
            func_AD77_b1(); break;
        case 0xAE07:
            func_AE07_b1(); break;
        case 0xAD5A:
            func_AD5A_b1(); break;
        case 0xAE4A:
            func_AE4A_b1(); break;
        case 0xAE4F:
            func_AE4F_b1(); break;
        case 0xAE71:
            func_AE71_b1(); break;
        case 0xAE7A:
            func_AE7A_b1(); break;
        case 0xAE24:
            func_AE24_b1(); break;
        case 0xAE59:
            func_AE59_b1(); break;
        case 0xAE63:
            func_AE63_b1(); break;
        case 0xA8AF:
            func_A8AF_b1(); break;
        case 0xAF08:
            func_AF08_b1(); break;
        case 0xAF39:
            func_AF39_b1(); break;
        case 0xAFC6:
            func_AFC6_b1(); break;
        case 0xAF3E:
            func_AF3E_b1(); break;
        case 0xAF43:
            func_AF43_b1(); break;
        case 0xAF48:
            func_AF48_b1(); break;
        case 0xAF52:
            func_AF52_b1(); break;
        case 0xAF57:
            func_AF57_b1(); break;
        case 0xAF5C:
            func_AF5C_b1(); break;
        case 0xAF66:
            func_AF66_b1(); break;
        case 0xAF6B:
            func_AF6B_b1(); break;
        case 0xAF70:
            func_AF70_b1(); break;
        case 0x83B0:
            func_83B0_b1(); break;
        case 0xAF84:
            func_AF84_b1(); break;
        case 0xAF87:
            func_AF87_b1(); break;
        case 0x8DB0:
            func_8DB0_b1(); break;
        case 0xAF96:
            func_AF96_b1(); break;
        case 0x98B0:
            func_98B0_b1(); break;
        case 0xAF99:
            func_AF99_b1(); break;
        case 0x9BB0:
            func_9BB0_b1(); break;
        case 0xAF9C:
            func_AF9C_b1(); break;
        case 0xA1B0:
            func_A1B0_b1(); break;
        case 0xAFA5:
            func_AFA5_b1(); break;
        case 0xAFA8:
            func_AFA8_b1(); break;
        case 0xAFAB:
            func_AFAB_b1(); break;
        case 0xAFB1:
            func_AFB1_b1(); break;
        case 0xAFB4:
            func_AFB4_b1(); break;
        case 0xAFB7:
            func_AFB7_b1(); break;
        case 0xAFBD:
            func_AFBD_b1(); break;
        case 0xAFC0:
            func_AFC0_b1(); break;
        case 0x9E0F:
            func_9E0F_b1(); break;
        case 0x8989:
            func_8989_b1(); break;
        case 0x8D80:
            func_8D80_b1(); break;
        case 0x8F80:
            func_8F80_b1(); break;
        case 0x8418:
            func_8418_b1(); break;
        case 0x8787:
            func_8787_b1(); break;
        case 0xAD98:
            func_AD98_b1(); break;
        case 0xAFAF:
            func_AFAF_b1(); break;
        case 0x9B72:
            func_9B72_b1(); break;
        case 0x8475:
            func_8475_b1(); break;
        case 0xB2B2:
            func_B2B2_b1(); break;
        case 0x8C8C:
            func_8C8C_b1(); break;
        case 0x9E9E:
            func_9E9E_b1(); break;
        case 0x9004:
            func_9004_b1(); break;
        case 0x9D09:
            func_9D09_b0(); break;
        case 0xB5D2:
            func_B5D2_b0(); break;
        case 0xB346:
            func_B346_b0(); break;
        case 0xB366:
            func_B366_b0(); break;
        case 0x98A6:
            func_98A6_b0(); break;
        case 0xAE28:
            func_AE28_b0(); break;
        case 0xB6B0:
            func_B6B0_b0(); break;
        case 0xB69E:
            func_B69E_b0(); break;
        case 0xB68C:
            func_B68C_b0(); break;
        case 0xF65A:
            func_F65A(); break;
        case 0xB6DE:
            func_B6DE_b0(); break;
        case 0xB5EF:
            func_B5EF_b0(); break;
        case 0xB64E:
            func_B64E_b0(); break;
        case 0xB60A:
            func_B60A_b0(); break;
        case 0xBCB3:
            func_BCB3_b0(); break;
        case 0xB6C7:
            func_B6C7_b0(); break;
        case 0xB6A7:
            func_B6A7_b0(); break;
        case 0xB695:
            func_B695_b0(); break;
        case 0xF663:
            func_F663(); break;
        case 0xB6FA:
            func_B6FA_b0(); break;
        case 0xB5F8:
            func_B5F8_b0(); break;
        case 0xB657:
            func_B657_b0(); break;
        case 0xB613:
            func_B613_b0(); break;
        case 0xDB21:
            func_DB21(); break;
        case 0xD9F6:
            func_D9F6(); break;
        case 0xB61C:
            func_B61C_b0(); break;
        case 0x8415:
            func_8415_b0(); break;
        case 0xB660:
            func_B660_b0(); break;
        case 0xF2E0:
            func_F2E0(); break;
        case 0xF272:
            func_F272(); break;
        case 0xBA5D:
            func_BA5D_b0(); break;
        case 0xB72C:
            func_B72C_b0(); break;
        case 0xB800:
            func_B800_b0(); break;
        case 0xB78F:
            func_B78F_b0(); break;
        case 0xB7A3:
            func_B7A3_b0(); break;
        case 0xF647:
            func_F647(); break;
        case 0xB8CC:
            func_B8CC_b0(); break;
        case 0xB835:
            func_B835_b0(); break;
        case 0xB898:
            func_B898_b0(); break;
        case 0xB874:
            func_B874_b0(); break;
        case 0xE32F:
            func_E32F(); break;
        case 0xB902:
            func_B902_b0(); break;
        case 0xB930:
            func_B930_b0(); break;
        case 0xBA12:
            func_BA12_b0(); break;
        case 0xB9F4:
            func_B9F4_b0(); break;
        case 0xD94C:
            func_D94C(); break;
        case 0xDAF2:
            func_DAF2(); break;
        case 0xBA1B:
            func_BA1B_b0(); break;
        case 0xBAAA:
            func_BAAA_b0(); break;
        case 0xE25D:
            func_E25D(); break;
        case 0xB9D4:
            func_B9D4_b0(); break;
        case 0xB9FB:
            func_B9FB_b0(); break;
        case 0xA885:
            func_A885_b0(); break;
        case 0xB09B:
            func_B09B_b0(); break;
        case 0x8DB9:
            func_8DB9_b0(); break;
        case 0x88E8:
            func_88E8_b0(); break;
        case 0x9DCC:
            func_9DCC_b0(); break;
        case 0xAEF5:
            func_AEF5_b0(); break;
        case 0x8D23:
            func_8D23_b1(); break;
        case 0xB187:
            func_B187_b1(); break;
        case 0x9B76:
            func_9B76_b1(); break;
        case 0x9B68:
            func_9B68_b1(); break;
        case 0x96F4:
            func_96F4_b1(); break;
        case 0x9BC4:
            func_9BC4_b1(); break;
        case 0x9C0D:
            func_9C0D_b1(); break;
        case 0x85C9:
            func_85C9_b1(); break;
        case 0x85B8:
            func_85B8_b1(); break;
        case 0xAE4C:
            func_AE4C_b1(); break;
        case 0xB5D1:
            func_B5D1_b0(); break;
        case 0xAE27:
            func_AE27_b0(); break;
        case 0xB6AF:
            func_B6AF_b0(); break;
        case 0xB9FA:
            func_B9FA_b0(); break;
        case 0xB765:
            func_B765_b0(); break;
        case 0xB834:
            func_B834_b0(); break;
        case 0x9B2C:
            func_9B2C_b1(); break;
        case 0x9ADC:
            func_9ADC_b1(); break;
        case 0x9AB7:
            func_9AB7_b1(); break;
        case 0x9A49:
            func_9A49_b1(); break;
        case 0x9A7B:
            func_9A7B_b1(); break;
        case 0x9A35:
            func_9A35_b1(); break;
        case 0x99BC:
            func_99BC_b1(); break;
        case 0x99EF:
            func_99EF_b1(); break;
        case 0x99B5:
            func_99B5_b1(); break;
        default:
            nes_log_dispatch_miss(addr);
            break;
    }
}
