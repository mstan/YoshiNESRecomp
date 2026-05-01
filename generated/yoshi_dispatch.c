/* AUTO-GENERATED dispatch table. DO NOT EDIT. */
#include "nes_runtime.h"
extern int g_current_bank;

int call_by_address(uint16_t addr) {
    if (addr < 0x8000) { nes_log_dispatch_miss(addr); return 0; }
_dispatch_retry:
    switch (addr) {
        case 0xFFDA:
            func_FFDA(); break;
        case 0xFFDE:
            func_FFDE(); break;
        case 0xFFDB:
            func_FFDB(); break;
        case 0xE122:
            func_E122(); break;
        case 0xE123:
            func_E123(); break;
        case 0xE129:
            func_E129(); break;
        case 0xE1ED:
            func_E1ED(); break;
        case 0xCE02:
            func_CE02(); break;
        case 0xCE2D:
            func_CE2D(); break;
        case 0xCE03:
            func_CE03(); break;
        case 0xCE61:
            func_CE61(); break;
        case 0xCE04:
            func_CE04(); break;
        case 0xCE21:
            func_CE21(); break;
        case 0xCEAD:
            func_CEAD(); break;
        case 0xCEC8:
            func_CEC8(); break;
        case 0xCE06:
            func_CE06(); break;
        case 0xCE0B:
            func_CE0B(); break;
        case 0xCE4C:
            func_CE4C(); break;
        case 0xCE29:
            func_CE29(); break;
        case 0xCEA4:
            func_CEA4(); break;
        case 0xCE09:
            func_CE09(); break;
        case 0xCEBB:
            func_CEBB(); break;
        case 0xCE12:
            func_CE12(); break;
        case 0xE185:
            func_E185(); break;
        case 0xCF4F:
            func_CF4F(); break;
        case 0xCF39:
            func_CF39(); break;
        case 0xE1EE:
            func_E1EE(); break;
        case 0xE220:
            func_E220(); break;
        case 0xE157:
            func_E157(); break;
        case 0xE18C:
            func_E18C(); break;
        case 0xE1C7:
            func_E1C7(); break;
        case 0xE18E:
            func_E18E(); break;
        case 0xE1CF:
            func_E1CF(); break;
        case 0xE1AE:
            func_E1AE(); break;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
        case 0xCEF0:
            func_CEF0(); break;
        case 0xCEE8:
            func_CEE8(); break;
        case 0xCF0F:
            func_CF0F(); break;
        case 0x809B:
            switch (g_current_bank) {
                case 0: func_809B_b0(); break;
                case 1: func_809B_b1(); break;
                case 2: func_809B_b2(); break;
                case 3: func_809B_b3(); break;
                case 4: func_809B_b4(); break;
                case 5: func_809B_b5(); break;
                case 6: func_809B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEE2C:
            func_EE2C(); break;
        case 0xEEED:
            func_EEED(); break;
        case 0xEED5:
            func_EED5(); break;
        case 0xEEAE:
            func_EEAE(); break;
        case 0xEFAD:
            func_EFAD(); break;
        case 0xEE8D:
            func_EE8D(); break;
        case 0xEE81:
            func_EE81(); break;
        case 0xEE78:
            func_EE78(); break;
        case 0xEF65:
            func_EF65(); break;
        case 0xEEA8:
            func_EEA8(); break;
        case 0xEF20:
            func_EF20(); break;
        case 0xEF29:
            func_EF29(); break;
        case 0xD0BF:
            func_D0BF(); break;
        case 0xCF7F:
            func_CF7F(); break;
        case 0xCF85:
            func_CF85(); break;
        case 0xCCA8:
            func_CCA8(); break;
        case 0xCD03:
            func_CD03(); break;
        case 0xCCAD:
            func_CCAD(); break;
        case 0xCCAE:
            func_CCAE(); break;
        case 0xCD01:
            func_CD01(); break;
        case 0xCD05:
            func_CD05(); break;
        case 0xCCF2:
            func_CCF2(); break;
        case 0xCCCB:
            func_CCCB(); break;
        case 0xCD09:
            func_CD09(); break;
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
        case 0xCF29:
            func_CF29(); break;
        case 0x8006:
            switch (g_current_bank) {
                case 0: func_8006_b0(); break;
                case 1: func_8006_b1(); break;
                case 2: func_8006_b2(); break;
                case 3: func_8006_b3(); break;
                case 4: func_8006_b4(); break;
                case 5: func_8006_b5(); break;
                case 6: func_8006_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x800D:
            func_800D_b0(); break;
        case 0x80BA:
            switch (g_current_bank) {
                case 0: func_80BA_b0(); break;
                case 1: func_80BA_b1(); break;
                case 2: func_80BA_b2(); break;
                case 3: func_80BA_b3(); break;
                case 4: func_80BA_b4(); break;
                case 5: func_80BA_b5(); break;
                case 6: func_80BA_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF6B3:
            func_F6B3(); break;
        case 0xF6D1:
            func_F6D1(); break;
        case 0xF6CA:
            func_F6CA(); break;
        case 0xF6F0:
            func_F6F0(); break;
        case 0xE600:
            func_E600(); break;
        case 0xE500:
            func_E500(); break;
        case 0xB1E5:
            func_B1E5_b1(); break;
        case 0xB0E5:
            func_B0E5_b1(); break;
        case 0xDC21:
            func_DC21(); break;
        case 0xB0E6:
            func_B0E6_b1(); break;
        case 0xD16E:
            func_D16E(); break;
        case 0x8000:
            func_8000_b0(); break;
        case 0xA381:
            func_A381_b0(); break;
        case 0xA5D6:
            func_A5D6_b1(); break;
        case 0xD02A:
            func_D02A(); break;
        case 0xCD1F:
            func_CD1F(); break;
        case 0xCD38:
            func_CD38(); break;
        case 0xCDA6:
            func_CDA6(); break;
        case 0xCDA8:
            func_CDA8(); break;
        case 0xCDAF:
            func_CDAF(); break;
        case 0xCD61:
            func_CD61(); break;
        case 0xCD85:
            func_CD85(); break;
        case 0xCD4C:
            func_CD4C(); break;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE449:
            func_E449(); break;
        case 0xE5C0:
            func_E5C0(); break;
        case 0xE610:
            func_E610(); break;
        case 0xE601:
            func_E601(); break;
        case 0xE501:
            func_E501(); break;
        case 0xE650:
            func_E650(); break;
        case 0xEDBD:
            func_EDBD(); break;
        case 0xEDD0:
            func_EDD0(); break;
        case 0xE5D5:
            func_E5D5(); break;
        case 0xE51F:
            func_E51F(); break;
        case 0xE804:
            func_E804(); break;
        case 0xE485:
            func_E485(); break;
        case 0xE7D1:
            func_E7D1(); break;
        case 0xE8CD:
            func_E8CD(); break;
        case 0xE686:
            func_E686(); break;
        case 0xE6B2:
            func_E6B2(); break;
        case 0xE886:
            func_E886(); break;
        case 0xE9A5:
            func_E9A5(); break;
        case 0xE6E7:
            func_E6E7(); break;
        case 0xE9E6:
            func_E9E6(); break;
        case 0xE6DE:
            func_E6DE(); break;
        case 0xE8E7:
            func_E8E7(); break;
        case 0xE5A5:
            func_E5A5(); break;
        case 0xE801:
            func_E801(); break;
        case 0xE8D0:
            func_E8D0(); break;
        case 0xE621:
            func_E621(); break;
        case 0xE821:
            func_E821(); break;
        case 0xE883:
            func_E883(); break;
        case 0xEE02:
            func_EE02(); break;
        case 0xE8D6:
            func_E8D6(); break;
        case 0xE98D:
            func_E98D(); break;
        case 0xE6A9:
            func_E6A9(); break;
        case 0xE4D1:
            func_E4D1(); break;
        case 0xE538:
            func_E538(); break;
        case 0xE48E:
            func_E48E(); break;
        case 0xE58D:
            func_E58D(); break;
        case 0xEE05:
            func_EE05(); break;
        case 0xEE21:
            func_EE21(); break;
        case 0xE656:
            func_E656(); break;
        case 0xE6E1:
            func_E6E1(); break;
        case 0xE60A:
            func_E60A(); break;
        case 0xE6D0:
            func_E6D0(); break;
        case 0xEAC7:
            func_EAC7(); break;
        case 0xEAEA:
            func_EAEA(); break;
        case 0xE5AE:
            func_E5AE(); break;
        case 0xE7AE:
            func_E7AE(); break;
        case 0xE9AE:
            func_E9AE(); break;
        case 0xEBAE:
            func_EBAE(); break;
        case 0xECAE:
            func_ECAE(); break;
        case 0xEDAE:
            func_EDAE(); break;
        case 0xE78D:
            func_E78D(); break;
        case 0xE74C:
            func_E74C(); break;
        case 0xEBC9:
            func_EBC9(); break;
        case 0xED4C:
            func_ED4C(); break;
        case 0xE806:
            func_E806(); break;
        case 0xE720:
            func_E720(); break;
        case 0xEB90:
            func_EB90(); break;
        case 0xE9EF:
            func_E9EF(); break;
        case 0xE9CE:
            func_E9CE(); break;
        case 0xE9C8:
            func_E9C8(); break;
        case 0xEA33:
            func_EA33(); break;
        case 0xEDFF:
            func_EDFF(); break;
        case 0xE4E3:
            func_E4E3(); break;
        case 0xE7E6:
            func_E7E6(); break;
        case 0xEDEC:
            func_EDEC(); break;
        case 0xED7D:
            func_ED7D(); break;
        case 0xE8D9:
            func_E8D9(); break;
        case 0xEDA9:
            func_EDA9(); break;
        case 0xE692:
            func_E692(); break;
        case 0xE8A9:
            func_E8A9(); break;
        case 0xE535:
            func_E535(); break;
        case 0xECEB:
            func_ECEB(); break;
        case 0xE5EC:
            func_E5EC(); break;
        case 0xED02:
            func_ED02(); break;
        case 0xE5FE:
            func_E5FE(); break;
        case 0xECDE:
            func_ECDE(); break;
        case 0xEBEB:
            func_EBEB(); break;
        case 0xEA95:
            func_EA95(); break;
        case 0xEA9B:
            func_EA9B(); break;
        case 0xEAAF:
            func_EAAF(); break;
        case 0xEBF4:
            func_EBF4(); break;
        case 0xEAA9:
            func_EAA9(); break;
        case 0xE92C:
            func_E92C(); break;
        case 0xE96D:
            func_E96D(); break;
        case 0xE7A5:
            func_E7A5(); break;
        case 0xE665:
            func_E665(); break;
        case 0xE726:
            func_E726(); break;
        case 0xED8C:
            func_ED8C(); break;
        case 0xEFD1:
            func_EFD1(); break;
        case 0xF003:
            func_F003(); break;
        case 0xF000:
            func_F000(); break;
        case 0xF018:
            func_F018(); break;
        case 0xF02A:
            func_F02A(); break;
        case 0xF006:
            func_F006(); break;
        case 0xF009:
            func_F009(); break;
        case 0xF021:
            func_F021(); break;
        case 0xF054:
            func_F054(); break;
        case 0xF01E:
            func_F01E(); break;
        case 0xEFEE:
            func_EFEE(); break;
        case 0xEFDF:
            func_EFDF(); break;
        case 0xF00F:
            func_F00F(); break;
        case 0xF012:
            func_F012(); break;
        case 0x920F:
            switch (g_current_bank) {
                case 0: func_920F_b0(); break;
                case 1: func_920F_b1(); break;
                case 2: func_920F_b2(); break;
                case 3: func_920F_b3(); break;
                case 4: func_920F_b4(); break;
                case 5: func_920F_b5(); break;
                case 6: func_920F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84AF:
            func_84AF_b0(); break;
        case 0xA66C:
            func_A66C_b1(); break;
        case 0xA56C:
            func_A56C_b1(); break;
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
        case 0x80A4:
            func_80A4_b0(); break;
        case 0x80B3:
            func_80B3_b1(); break;
        case 0x859E:
            switch (g_current_bank) {
                case 0: func_859E_b0(); break;
                case 1: func_859E_b1(); break;
                case 2: func_859E_b2(); break;
                case 3: func_859E_b3(); break;
                case 4: func_859E_b4(); break;
                case 5: func_859E_b5(); break;
                case 6: func_859E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0DF:
            func_B0DF_b1(); break;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCF8A:
            func_CF8A(); break;
        case 0xD202:
            func_D202(); break;
        case 0xD04F:
            func_D04F(); break;
        case 0xDC20:
            func_DC20(); break;
        case 0xD9D2:
            func_D9D2(); break;
        case 0xD0E9:
            func_D0E9(); break;
        case 0xD00B:
            func_D00B(); break;
        case 0xD00D:
            func_D00D(); break;
        case 0xD003:
            func_D003(); break;
        case 0xDA87:
            func_DA87(); break;
        case 0xDC86:
            func_DC86(); break;
        case 0xDD86:
            func_DD86(); break;
        case 0xDCB2:
            func_DCB2(); break;
        case 0xDE85:
            func_DE85(); break;
        case 0xDF86:
            func_DF86(); break;
        case 0xDEB1:
            func_DEB1(); break;
        case 0xDAA6:
            func_DAA6(); break;
        case 0xDBA4:
            func_DBA4(); break;
        case 0xD0E1:
            func_D0E1(); break;
        case 0xD0E2:
            func_D0E2(); break;
        case 0xD0D1:
            func_D0D1(); break;
        case 0xD878:
            func_D878(); break;
        case 0xD012:
            func_D012(); break;
        case 0xD048:
            func_D048(); break;
        case 0xD000:
            func_D000(); break;
        case 0xD001:
            func_D001(); break;
        case 0xD051:
            func_D051(); break;
        case 0xCFE1:
            func_CFE1(); break;
        case 0xD0BC:
            func_D0BC(); break;
        case 0xD020:
            func_D020(); break;
        case 0xD031:
            func_D031(); break;
        case 0xD010:
            func_D010(); break;
        case 0xD005:
            func_D005(); break;
        case 0xD006:
            func_D006(); break;
        case 0xD084:
            func_D084(); break;
        case 0xD009:
            func_D009(); break;
        case 0xD086:
            func_D086(); break;
        case 0xD088:
            func_D088(); break;
        case 0xDFAE:
            func_DFAE(); break;
        case 0xDE05:
            func_DE05(); break;
        case 0xDE03:
            func_DE03(); break;
        case 0xD8BE:
            func_D8BE(); break;
        case 0xD585:
            func_D585(); break;
        case 0xD5B1:
            func_D5B1(); break;
        case 0xD8A9:
            func_D8A9(); break;
        case 0xD5A6:
            func_D5A6(); break;
        case 0xDE20:
            func_DE20(); break;
        case 0xD0A6:
            func_D0A6(); break;
        case 0xD120:
            func_D120(); break;
        case 0xD0A5:
            func_D0A5(); break;
        case 0xD0A8:
            func_D0A8(); break;
        case 0xD0A3:
            func_D0A3(); break;
        case 0xD107:
            func_D107(); break;
        case 0xD0C7:
            func_D0C7(); break;
        case 0xD007:
            func_D007(); break;
        case 0xD081:
            func_D081(); break;
        case 0xCFF1:
            func_CFF1(); break;
        case 0xDE61:
            func_DE61(); break;
        case 0xDD02:
            func_DD02(); break;
        case 0xD5AE:
            func_D5AE(); break;
        case 0xD14D:
            func_D14D(); break;
        case 0xD521:
            func_D521(); break;
        case 0xD07E:
            func_D07E(); break;
        case 0xD080:
            func_D080(); break;
        case 0xDF8E:
            func_DF8E(); break;
        case 0xD07A:
            func_D07A(); break;
        case 0xD0E0:
            func_D0E0(); break;
        case 0xD0B3:
            func_D0B3(); break;
        case 0xD211:
            func_D211(); break;
        case 0xD920:
            func_D920(); break;
        case 0xD0B1:
            func_D0B1(); break;
        case 0xCFAE:
            func_CFAE(); break;
        case 0xD0AD:
            func_D0AD(); break;
        case 0xD1AD:
            func_D1AD(); break;
        case 0xD8AE:
            func_D8AE(); break;
        case 0xD9AD:
            func_D9AD(); break;
        case 0xDBAD:
            func_DBAD(); break;
        case 0xDCAE:
            func_DCAE(); break;
        case 0xDDAE:
            func_DDAE(); break;
        case 0xDEAD:
            func_DEAD(); break;
        case 0xD04C:
            func_D04C(); break;
        case 0xD2CA:
            func_D2CA(); break;
        case 0xDEB9:
            func_DEB9(); break;
        case 0xDEAA:
            func_DEAA(); break;
        case 0xDEF5:
            func_DEF5(); break;
        case 0xDD04:
            func_DD04(); break;
        case 0xD904:
            func_D904(); break;
        case 0xDDE8:
            func_DDE8(); break;
        case 0xD014:
            func_D014(); break;
        case 0xD015:
            func_D015(); break;
        case 0xDE08:
            func_DE08(); break;
        case 0xDB39:
            func_DB39(); break;
        case 0xD05D:
            func_D05D(); break;
        case 0xD125:
            func_D125(); break;
        case 0xD0A9:
            func_D0A9(); break;
        case 0xDBEF:
            func_DBEF(); break;
        case 0xDAE2:
            func_DAE2(); break;
        case 0xD077:
            func_D077(); break;
        case 0xD0DA:
            func_D0DA(); break;
        case 0xD0B8:
            func_D0B8(); break;
        case 0xD3AD:
            func_D3AD(); break;
        case 0xD1B8:
            func_D1B8(); break;
        case 0xD87F:
            func_D87F(); break;
        case 0xDD54:
            func_DD54(); break;
        case 0xD8EE:
            func_D8EE(); break;
        case 0xD8E2:
            func_D8E2(); break;
        case 0xDC00:
            func_DC00(); break;
        case 0xDDDC:
            func_DDDC(); break;
        case 0xCF8D:
            func_CF8D(); break;
        case 0xD08D:
            func_D08D(); break;
        case 0xCFCE:
            func_CFCE(); break;
        case 0xDA20:
            func_DA20(); break;
        case 0xD9D8:
            func_D9D8(); break;
        case 0xDEBD:
            func_DEBD(); break;
        case 0xD0C9:
            func_D0C9(); break;
        case 0xCFA5:
            func_CFA5(); break;
        case 0xD186:
            func_D186(); break;
        case 0xD03E:
            func_D03E(); break;
        case 0xDB20:
            func_DB20(); break;
        case 0xDBDA:
            func_DBDA(); break;
        case 0xDCDB:
            func_DCDB(); break;
        case 0xD1D0:
            func_D1D0(); break;
        case 0xCFAB:
            func_CFAB(); break;
        case 0xDF55:
            func_DF55(); break;
        case 0xDC10:
            func_DC10(); break;
        case 0xD926:
            func_D926(); break;
        case 0xDC31:
            func_DC31(); break;
        case 0xD84C:
            func_D84C(); break;
        case 0xCFBD:
            func_CFBD(); break;
        case 0xD024:
            func_D024(); break;
        case 0xD5A9:
            func_D5A9(); break;
        case 0xD065:
            func_D065(); break;
        case 0xDF00:
            func_DF00(); break;
        case 0xDF5F:
            func_DF5F(); break;
        case 0xDEF3:
            func_DEF3(); break;
        case 0xD026:
            func_D026(); break;
        case 0xDEA5:
            func_DEA5(); break;
        case 0xDE59:
            func_DE59(); break;
        case 0xD8B1:
            func_D8B1(); break;
        case 0xD0A1:
            func_D0A1(); break;
        case 0xDA85:
            func_DA85(); break;
        case 0xD8E6:
            func_D8E6(); break;
        case 0xD0D8:
            func_D0D8(); break;
        case 0xD9E6:
            func_D9E6(); break;
        case 0xD946:
            func_D946(); break;
        case 0xD866:
            func_D866(); break;
        case 0xD966:
            func_D966(); break;
        case 0xD00E:
            func_D00E(); break;
        case 0xDFE6:
            func_DFE6(); break;
        case 0xD944:
            func_D944(); break;
        case 0xCDB4:
            func_CDB4(); break;
        case 0xCDCD:
            func_CDCD(); break;
        case 0xCDD0:
            func_CDD0(); break;
        case 0xCDE0:
            func_CDE0(); break;
        case 0xCDE1:
            func_CDE1(); break;
        case 0xCDB7:
            func_CDB7(); break;
        case 0xA7B9:
            func_A7B9_b1(); break;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x86E0:
            func_86E0_b1(); break;
        case 0xDE09:
            func_DE09(); break;
        case 0xE0EE:
            func_E0EE(); break;
        case 0xDCC1:
            func_DCC1(); break;
        case 0xE0D5:
            func_E0D5(); break;
        case 0xE0EA:
            func_E0EA(); break;
        case 0xE0E0:
            func_E0E0(); break;
        case 0xE0D8:
            func_E0D8(); break;
        case 0xDD92:
            func_DD92(); break;
        case 0xDD26:
            func_DD26(); break;
        case 0xDDF9:
            func_DDF9(); break;
        case 0xD050:
            func_D050(); break;
        case 0xCFE0:
            func_CFE0(); break;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8882:
            func_8882_b0(); break;
        case 0x8840:
            switch (g_current_bank) {
                case 0: func_8840_b0(); break;
                case 1: func_8840_b1(); break;
                case 2: func_8840_b2(); break;
                case 3: func_8840_b3(); break;
                case 4: func_8840_b4(); break;
                case 5: func_8840_b5(); break;
                case 6: func_8840_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
        case 0xF70A:
            func_F70A(); break;
        case 0xF707:
            func_F707(); break;
        case 0xA8AD:
            switch (g_current_bank) {
                case 0: func_A8AD_b0(); break;
                case 1: func_A8AD_b1(); break;
                case 2: func_A8AD_b2(); break;
                case 3: func_A8AD_b3(); break;
                case 4: func_A8AD_b4(); break;
                case 5: func_A8AD_b5(); break;
                case 6: func_A8AD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8D8:
            switch (g_current_bank) {
                case 0: func_A8D8_b0(); break;
                case 1: func_A8D8_b1(); break;
                case 2: func_A8D8_b2(); break;
                case 3: func_A8D8_b3(); break;
                case 4: func_A8D8_b4(); break;
                case 5: func_A8D8_b5(); break;
                case 6: func_A8D8_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8F7:
            func_A8F7_b0(); break;
        case 0xA902:
            func_A902_b0(); break;
        case 0xB601:
            switch (g_current_bank) {
                case 0: func_B601_b0(); break;
                case 1: func_B601_b1(); break;
                case 2: func_B601_b2(); break;
                case 3: func_B601_b3(); break;
                case 4: func_B601_b4(); break;
                case 5: func_B601_b5(); break;
                case 6: func_B601_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80EE:
            func_80EE_b0(); break;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC39:
            switch (g_current_bank) {
                case 0: func_AC39_b0(); break;
                case 1: func_AC39_b1(); break;
                case 2: func_AC39_b2(); break;
                case 3: func_AC39_b3(); break;
                case 4: func_AC39_b4(); break;
                case 5: func_AC39_b5(); break;
                case 6: func_AC39_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
        case 0xDE70:
            func_DE70(); break;
        case 0xDEDC:
            func_DEDC(); break;
        case 0xDF6D:
            func_DF6D(); break;
        case 0xE000:
            func_E000(); break;
        case 0xE04D:
            func_E04D(); break;
        case 0xE022:
            func_E022(); break;
        case 0xE008:
            func_E008(); break;
        case 0xE02F:
            func_E02F(); break;
        case 0xE01F:
            func_E01F(); break;
        case 0xE060:
            func_E060(); break;
        case 0xE01A:
            func_E01A(); break;
        case 0xE048:
            func_E048(); break;
        case 0xE0AE:
            func_E0AE(); break;
        case 0xE0D1:
            func_E0D1(); break;
        case 0xE0D4:
            func_E0D4(); break;
        case 0xE0C9:
            func_E0C9(); break;
        case 0xE112:
            func_E112(); break;
        case 0x92CC:
            func_92CC_b0(); break;
        case 0xA1D3:
            func_A1D3_b1(); break;
        case 0xA046:
            func_A046_b1(); break;
        case 0xA047:
            func_A047_b1(); break;
        case 0xA5B1:
            func_A5B1_b1(); break;
        case 0xA1BF:
            func_A1BF_b1(); break;
        case 0xA579:
            func_A579_b1(); break;
        case 0xA5BA:
            func_A5BA_b1(); break;
        case 0xA5C3:
            func_A5C3_b1(); break;
        case 0xBBCB:
            switch (g_current_bank) {
                case 0: func_BBCB_b0(); break;
                case 1: func_BBCB_b1(); break;
                case 2: func_BBCB_b2(); break;
                case 3: func_BBCB_b3(); break;
                case 4: func_BBCB_b4(); break;
                case 5: func_BBCB_b5(); break;
                case 6: func_BBCB_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x866C:
            func_866C_b1(); break;
        case 0xE100:
            func_E100(); break;
        case 0xCFDE:
            func_CFDE(); break;
        case 0x87F5:
            func_87F5_b1(); break;
        case 0x8825:
            func_8825_b1(); break;
        case 0x8817:
            func_8817_b1(); break;
        case 0xFF25:
            func_FF25(); break;
        case 0xFFE0:
            func_FFE0(); break;
        case 0xE598:
            func_E598(); break;
        case 0xBC1D:
            func_BC1D_b0(); break;
        case 0xA7F5:
            func_A7F5_b0(); break;
        case 0xAA92:
            func_AA92_b0(); break;
        case 0xA915:
            func_A915_b0(); break;
        case 0xAAE7:
            func_AAE7_b0(); break;
        case 0xAA9F:
            func_AA9F_b0(); break;
        case 0x80BB:
            func_80BB_b1(); break;
        case 0x9117:
            func_9117_b0(); break;
        case 0x91C9:
            func_91C9_b0(); break;
        case 0x8939:
            func_8939_b0(); break;
        case 0x8978:
            func_8978_b0(); break;
        case 0x8980:
            func_8980_b0(); break;
        case 0x899E:
            func_899E_b0(); break;
        case 0x91AC:
            func_91AC_b0(); break;
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
        case 0xAC58:
            func_AC58_b0(); break;
        case 0xE083:
            func_E083(); break;
        case 0xE099:
            func_E099(); break;
        case 0xE0AD:
            func_E0AD(); break;
        case 0xE0A5:
            func_E0A5(); break;
        case 0xE0A8:
            func_E0A8(); break;
        case 0xE0A3:
            func_E0A3(); break;
        case 0xA241:
            func_A241_b1(); break;
        case 0xA7C2:
            func_A7C2_b1(); break;
        case 0xBBC1:
            func_BBC1_b0(); break;
        case 0xBBDC:
            func_BBDC_b0(); break;
        case 0xBBCA:
            func_BBCA_b0(); break;
        case 0xBC1C:
            func_BC1C_b0(); break;
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
        case 0xA7CA:
            func_A7CA_b0(); break;
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
        case 0xBBAA:
            func_BBAA_b0(); break;
        case 0xBBBD:
            func_BBBD_b0(); break;
        case 0xBB57:
            func_BB57_b0(); break;
        case 0xE805:
            func_E805(); break;
        case 0xD0E8:
            func_D0E8(); break;
        case 0xCD20:
            func_CD20(); break;
        case 0xCF66:
            func_CF66(); break;
        case 0xE0CA:
            func_E0CA(); break;
        case 0xE0CB:
            func_E0CB(); break;
        case 0xD00C:
            func_D00C(); break;
        case 0xFFE1:
            func_FFE1(); break;
        case 0xD0FF:
            func_D0FF(); break;
        case 0xE7D0:
            func_E7D0(); break;
        case 0xE0E8:
            func_E0E8(); break;
        case 0xE0E9:
            func_E0E9(); break;
        case 0xEDD1:
            func_EDD1(); break;
        case 0xF0ED:
            func_F0ED(); break;
        case 0xF0EE:
            func_F0EE(); break;
        case 0xD004:
            func_D004(); break;
        case 0xCF6A:
            func_CF6A(); break;
        case 0xF8A9:
            func_F8A9(); break;
        case 0xE807:
            func_E807(); break;
        case 0xE808:
            func_E808(); break;
        case 0xF5D1:
            func_F5D1(); break;
        case 0xDA86:
            func_DA86(); break;
        case 0xDB84:
            func_DB84(); break;
        case 0xDD85:
            func_DD85(); break;
        case 0xE285:
            func_E285(); break;
        case 0xD002:
            func_D002(); break;
        case 0xE385:
            func_E385(); break;
        case 0xDCB1:
            func_DCB1(); break;
        case 0xDE86:
            func_DE86(); break;
        case 0xE786:
            func_E786(); break;
        case 0xDEB2:
            func_DEB2(); break;
        case 0xE585:
            func_E585(); break;
        case 0xE586:
            func_E586(); break;
        case 0xE986:
            func_E986(); break;
        case 0xCDB5:
            func_CDB5(); break;
        case 0xDAA7:
            func_DAA7(); break;
        case 0xDBA5:
            func_DBA5(); break;
        case 0xE9A4:
            func_E9A4(); break;
        case 0xE6E6:
            func_E6E6(); break;
        case 0xE9E7:
            func_E9E7(); break;
        case 0xE8A4:
            func_E8A4(); break;
        case 0xE6DF:
            func_E6DF(); break;
        case 0xE8E6:
            func_E8E6(); break;
        case 0xE5A6:
            func_E5A6(); break;
        case 0xD0D0:
            func_D0D0(); break;
        case 0xE802:
            func_E802(); break;
        case 0xD018:
            func_D018(); break;
        case 0xD019:
            func_D019(); break;
        case 0xF8D1:
            func_F8D1(); break;
        case 0xD879:
            func_D879(); break;
        case 0xF811:
            func_F811(); break;
        case 0xD013:
            func_D013(); break;
        case 0xD049:
            func_D049(); break;
        case 0xF09F:
            func_F09F(); break;
        case 0xE800:
            func_E800(); break;
        case 0xCF20:
            func_CF20(); break;
        case 0xCED0:
            func_CED0(); break;
        case 0xF6B4:
            func_F6B4(); break;
        case 0xEE01:
            func_EE01(); break;
        case 0xCF24:
            func_CF24(); break;
        case 0xCF50:
            func_CF50(); break;
        case 0xF0BE:
            func_F0BE(); break;
        case 0xE620:
            func_E620(); break;
        case 0xE0D0:
            func_E0D0(); break;
        case 0xF0BC:
            func_F0BC(); break;
        case 0xF0C8:
            func_F0C8(); break;
        case 0xF0DE:
            func_F0DE(); break;
        case 0xF0E0:
            func_F0E0(); break;
        case 0xF0C2:
            func_F0C2(); break;
        case 0xF0CA:
            func_F0CA(); break;
        case 0xF0D8:
            func_F0D8(); break;
        case 0xF0DC:
            func_F0DC(); break;
        case 0xF0E3:
            func_F0E3(); break;
        case 0xF0FF:
            func_F0FF(); break;
        case 0xF100:
            func_F100(); break;
        case 0xE603:
            func_E603(); break;
        case 0xD098:
            func_D098(); break;
        case 0xE820:
            func_E820(); break;
        case 0xF610:
            func_F610(); break;
        case 0xF611:
            func_F611(); break;
        case 0xCE2C:
            func_CE2C(); break;
        case 0xE938:
            func_E938(); break;
        case 0xED39:
            func_ED39(); break;
        case 0xEEEC:
            func_EEEC(); break;
        case 0xD021:
            func_D021(); break;
        case 0xF4D0:
            func_F4D0(); break;
        case 0xD2D9:
            func_D2D9(); break;
        case 0xD204:
            func_D204(); break;
        case 0xD0C0:
            func_D0C0(); break;
        case 0xD030:
            func_D030(); break;
        case 0xD00F:
            func_D00F(); break;
        case 0xE882:
            func_E882(); break;
        case 0xD1C8:
            func_D1C8(); break;
        case 0xD083:
            func_D083(); break;
        case 0xD008:
            func_D008(); break;
        case 0xD085:
            func_D085(); break;
        case 0xD102:
            func_D102(); break;
        case 0xF310:
            func_F310(); break;
        case 0xF311:
            func_F311(); break;
        case 0xD089:
            func_D089(); break;
        case 0xEED1:
            func_EED1(); break;
        case 0xDFAF:
            func_DFAF(); break;
        case 0xDE04:
            func_DE04(); break;
        case 0xE28E:
            func_E28E(); break;
        case 0xE38E:
            func_E38E(); break;
        case 0xD8BD:
            func_D8BD(); break;
        case 0xD586:
            func_D586(); break;
        case 0xD5B2:
            func_D5B2(); break;
        case 0xE18D:
            func_E18D(); break;
        case 0xD56F:
            func_D56F(); break;
        case 0xE1CE:
            func_E1CE(); break;
        case 0xCCA9:
            func_CCA9(); break;
        case 0xE3CE:
            func_E3CE(); break;
        case 0xD8AA:
            func_D8AA(); break;
        case 0xD5C7:
            func_D5C7(); break;
        case 0xEE03:
            func_EE03(); break;
        case 0xE2EF:
            func_E2EF(); break;
        case 0xE2CD:
            func_E2CD(); break;
        case 0xE2CE:
            func_E2CE(); break;
        case 0xD5A5:
            func_D5A5(); break;
        case 0xDE21:
            func_DE21(); break;
        case 0xF700:
            func_F700(); break;
        case 0xEA8E:
            func_EA8E(); break;
        case 0xE98E:
            func_E98E(); break;
        case 0xE6A8:
            func_E6A8(); break;
        case 0xD0A7:
            func_D0A7(); break;
        case 0xE5D0:
            func_E5D0(); break;
        case 0xD121:
            func_D121(); break;
        case 0xEFD2:
            func_EFD2(); break;
        case 0xCDA5:
            func_CDA5(); break;
        case 0xCDA7:
            func_CDA7(); break;
        case 0xF1F0:
            func_F1F0(); break;
        case 0xE4D0:
            func_E4D0(); break;
        case 0xCDD1:
            func_CDD1(); break;
        case 0xD0A4:
            func_D0A4(); break;
        case 0xD00A:
            func_D00A(); break;
        case 0xECD1:
            func_ECD1(); break;
        case 0xD106:
            func_D106(); break;
        case 0xD92A:
            func_D92A(); break;
        case 0xF3D1:
            func_F3D1(); break;
        case 0xF0C7:
            func_F0C7(); break;
        case 0xE606:
            func_E606(); break;
        case 0xE6A4:
            func_E6A4(); break;
        case 0xE58E:
            func_E58E(); break;
        case 0xE68E:
            func_E68E(); break;
        case 0xCFF0:
            func_CFF0(); break;
        case 0xD9D4:
            func_D9D4(); break;
        case 0xDE60:
            func_DE60(); break;
        case 0xDD01:
            func_DD01(); break;
        case 0xCEA8:
            func_CEA8(); break;
        case 0xCEA9:
            func_CEA9(); break;
        case 0xCE05:
            func_CE05(); break;
        case 0xCE20:
            func_CE20(); break;
        case 0xD5AD:
            func_D5AD(); break;
        case 0xF6AD:
            func_F6AD(); break;
        case 0xF6AE:
            func_F6AE(); break;
        case 0xF004:
            func_F004(); break;
        case 0xCDF1:
            func_CDF1(); break;
        case 0xDCC2:
            func_DCC2(); break;
        case 0xDD27:
            func_DD27(); break;
        case 0xDD93:
            func_DD93(); break;
        case 0xE6E8:
            func_E6E8(); break;
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
        case 0xDCD2:
            func_DCD2(); break;
        case 0xDDA3:
            func_DDA3(); break;
        case 0xF0DF:
            func_F0DF(); break;
        case 0xEE20:
            func_EE20(); break;
        case 0xE0EF:
            func_E0EF(); break;
        case 0xE62F:
            func_E62F(); break;
        case 0xD520:
            func_D520(); break;
        case 0xE0D6:
            func_E0D6(); break;
        case 0xD0CA:
            func_D0CA(); break;
        case 0xD0CB:
            func_D0CB(); break;
        case 0xD07F:
            func_D07F(); break;
        case 0xF6AF:
            func_F6AF(); break;
        case 0xDE71:
            func_DE71(); break;
        case 0xDC4C:
            func_DC4C(); break;
        case 0xDEDD:
            func_DEDD(); break;
        case 0xDF6E:
            func_DF6E(); break;
        case 0xF0E1:
            func_F0E1(); break;
        case 0xD079:
            func_D079(); break;
        case 0xF68E:
            func_F68E(); break;
        case 0xD07B:
            func_D07B(); break;
        case 0xE635:
            func_E635(); break;
        case 0xE095:
            func_E095(); break;
        case 0xE096:
            func_E096(); break;
        case 0xE091:
            func_E091(); break;
        case 0xE101:
            func_E101(); break;
        case 0xE1EF:
            func_E1EF(); break;
        case 0xD0B2:
            func_D0B2(); break;
        case 0xE158:
            func_E158(); break;
        case 0xF041:
            func_F041(); break;
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
        case 0xF055:
            func_F055(); break;
        case 0xF2F0:
            func_F2F0(); break;
        case 0xF06D:
            func_F06D(); break;
        case 0xF057:
            func_F057(); break;
        case 0xCEEF:
            func_CEEF(); break;
        case 0xF1D0:
            func_F1D0(); break;
        case 0xF1D1:
            func_F1D1(); break;
        case 0xEAC6:
            func_EAC6(); break;
        case 0xEAEB:
            func_EAEB(); break;
        case 0xD54D:
            func_D54D(); break;
        case 0xCDAD:
            func_CDAD(); break;
        case 0xCDAE:
            func_CDAE(); break;
        case 0xD1AE:
            func_D1AE(); break;
        case 0xD2AD:
            func_D2AD(); break;
        case 0xD2AE:
            func_D2AE(); break;
        case 0xD9AE:
            func_D9AE(); break;
        case 0xDAAD:
            func_DAAD(); break;
        case 0xDBAE:
            func_DBAE(); break;
        case 0xDCAD:
            func_DCAD(); break;
        case 0xDDAD:
            func_DDAD(); break;
        case 0xDEAE:
            func_DEAE(); break;
        case 0xE2AE:
            func_E2AE(); break;
        case 0xE3AD:
            func_E3AD(); break;
        case 0xE4AE:
            func_E4AE(); break;
        case 0xE6AE:
            func_E6AE(); break;
        case 0xE8AE:
            func_E8AE(); break;
        case 0xEAAE:
            func_EAAE(); break;
        case 0xEBAD:
            func_EBAD(); break;
        case 0xEEAD:
            func_EEAD(); break;
        case 0xF1AD:
            func_F1AD(); break;
        case 0xF3AD:
            func_F3AD(); break;
        case 0xF3AE:
            func_F3AE(); break;
        case 0xF4AD:
            func_F4AD(); break;
        case 0xF4AE:
            func_F4AE(); break;
        case 0xF8AE:
            func_F8AE(); break;
        case 0xE2A9:
            func_E2A9(); break;
        case 0xF6D0:
            func_F6D0(); break;
        case 0xEDBE:
            func_EDBE(); break;
        case 0xD04D:
            func_D04D(); break;
        case 0xF7D1:
            func_F7D1(); break;
        case 0xE78E:
            func_E78E(); break;
        case 0xF061:
            func_F061(); break;
        case 0xF080:
            func_F080(); break;
        case 0xF0B5:
            func_F0B5(); break;
        case 0xF0B6:
            func_F0B6(); break;
        case 0xF09E:
            func_F09E(); break;
        case 0xF0A8:
            func_F0A8(); break;
        case 0xF07D:
            func_F07D(); break;
        case 0xF07A:
            func_F07A(); break;
        case 0xF06C:
            func_F06C(); break;
        case 0xF063:
            func_F063(); break;
        case 0xF0AD:
            func_F0AD(); break;
        case 0xF0A6:
            func_F0A6(); break;
        case 0xF0A3:
            func_F0A3(); break;
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
        case 0xE74D:
            func_E74D(); break;
        case 0xF0E7:
            func_F0E7(); break;
        case 0xF13B:
            func_F13B(); break;
        case 0xF13C:
            func_F13C(); break;
        case 0xF109:
            func_F109(); break;
        case 0xF184:
            func_F184(); break;
        case 0xF1C2:
            func_F1C2(); break;
        case 0xD2C9:
            func_D2C9(); break;
        case 0xEBCA:
            func_EBCA(); break;
        case 0xF1F9:
            func_F1F9(); break;
        case 0xF1FA:
            func_F1FA(); break;
        case 0xF1ED:
            func_F1ED(); break;
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
        case 0xEA5D:
            func_EA5D(); break;
        case 0xEA5E:
            func_EA5E(); break;
        case 0xDEBA:
            func_DEBA(); break;
        case 0xF2DF:
            func_F2DF(); break;
        case 0xF2A4:
            func_F2A4(); break;
        case 0xF2BC:
            func_F2BC(); break;
        case 0xF34F:
            func_F34F(); break;
        case 0xF554:
            func_F554(); break;
        case 0xDD03:
            func_DD03(); break;
        case 0xE420:
            func_E420(); break;
        case 0xE421:
            func_E421(); break;
        case 0xF5E4:
            func_F5E4(); break;
        case 0xDD05:
            func_DD05(); break;
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
        case 0xF3E7:
            func_F3E7(); break;
        case 0xF44A:
            func_F44A(); break;
        case 0xF517:
            func_F517(); break;
        case 0xF3F0:
            func_F3F0(); break;
        case 0xF47B:
            func_F47B(); break;
        case 0xF47C:
            func_F47C(); break;
        case 0xE9EE:
            func_E9EE(); break;
        case 0xE3F0:
            func_E3F0(); break;
        case 0xE021:
            func_E021(); break;
        case 0xD905:
            func_D905(); break;
        case 0xDDE9:
            func_DDE9(); break;
        case 0xF57D:
            func_F57D(); break;
        case 0xE1AF:
            func_E1AF(); break;
        case 0xCD06:
            func_CD06(); break;
        case 0xCE0C:
            func_CE0C(); break;
        case 0xF621:
            func_F621(); break;
        case 0xF66C:
            func_F66C(); break;
        case 0xE9C9:
            func_E9C9(); break;
        case 0xCD60:
            func_CD60(); break;
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
        case 0xF7E2:
            func_F7E2(); break;
        case 0xF7E3:
            func_F7E3(); break;
        case 0xD05E:
            func_D05E(); break;
        case 0xEE80:
            func_EE80(); break;
        case 0xD124:
            func_D124(); break;
        case 0xD0AA:
            func_D0AA(); break;
        case 0xF034:
            func_F034(); break;
        case 0xCE7B:
            func_CE7B(); break;
        case 0xCE7C:
            func_CE7C(); break;
        case 0xF010:
            func_F010(); break;
        case 0xEE79:
            func_EE79(); break;
        case 0xEA34:
            func_EA34(); break;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBFAD:
            switch (g_current_bank) {
                case 0: func_BFAD_b0(); break;
                case 1: func_BFAD_b1(); break;
                case 2: func_BFAD_b2(); break;
                case 3: func_BFAD_b3(); break;
                case 4: func_BFAD_b4(); break;
                case 5: func_BFAD_b5(); break;
                case 6: func_BFAD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x89B4:
            switch (g_current_bank) {
                case 0: func_89B4_b0(); break;
                case 1: func_89B4_b1(); break;
                case 2: func_89B4_b2(); break;
                case 3: func_89B4_b3(); break;
                case 4: func_89B4_b4(); break;
                case 5: func_89B4_b5(); break;
                case 6: func_89B4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xACD9:
            switch (g_current_bank) {
                case 0: func_ACD9_b0(); break;
                case 1: func_ACD9_b1(); break;
                case 2: func_ACD9_b2(); break;
                case 3: func_ACD9_b3(); break;
                case 4: func_ACD9_b4(); break;
                case 5: func_ACD9_b5(); break;
                case 6: func_ACD9_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFDAD:
            func_FDAD(); break;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x853E:
            switch (g_current_bank) {
                case 0: func_853E_b0(); break;
                case 1: func_853E_b1(); break;
                case 2: func_853E_b2(); break;
                case 3: func_853E_b3(); break;
                case 4: func_853E_b4(); break;
                case 5: func_853E_b5(); break;
                case 6: func_853E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCFEA:
            func_CFEA(); break;
        case 0xBEAD:
            switch (g_current_bank) {
                case 0: func_BEAD_b0(); break;
                case 1: func_BEAD_b1(); break;
                case 2: func_BEAD_b2(); break;
                case 3: func_BEAD_b3(); break;
                case 4: func_BEAD_b4(); break;
                case 5: func_BEAD_b5(); break;
                case 6: func_BEAD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEAAD:
            func_EAAD(); break;
        case 0xC3AD:
            func_C3AD(); break;
        case 0xAC6C:
            switch (g_current_bank) {
                case 0: func_AC6C_b0(); break;
                case 1: func_AC6C_b1(); break;
                case 2: func_AC6C_b2(); break;
                case 3: func_AC6C_b3(); break;
                case 4: func_AC6C_b4(); break;
                case 5: func_AC6C_b5(); break;
                case 6: func_AC6C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD02B:
            func_D02B(); break;
        case 0x84AD:
            switch (g_current_bank) {
                case 0: func_84AD_b0(); break;
                case 1: func_84AD_b1(); break;
                case 2: func_84AD_b2(); break;
                case 3: func_84AD_b3(); break;
                case 4: func_84AD_b4(); break;
                case 5: func_84AD_b5(); break;
                case 6: func_84AD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB4A5:
            switch (g_current_bank) {
                case 0: func_B4A5_b0(); break;
                case 1: func_B4A5_b1(); break;
                case 2: func_B4A5_b2(); break;
                case 3: func_B4A5_b3(); break;
                case 4: func_B4A5_b4(); break;
                case 5: func_B4A5_b5(); break;
                case 6: func_B4A5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFFFF:
            func_FFFF(); break;
        case 0xD095:
            func_D095(); break;
        case 0x82AD:
            switch (g_current_bank) {
                case 0: func_82AD_b0(); break;
                case 1: func_82AD_b1(); break;
                case 2: func_82AD_b2(); break;
                case 3: func_82AD_b3(); break;
                case 4: func_82AD_b4(); break;
                case 5: func_82AD_b5(); break;
                case 6: func_82AD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD4BF:
            func_D4BF(); break;
        case 0xA3FB:
            switch (g_current_bank) {
                case 0: func_A3FB_b0(); break;
                case 1: func_A3FB_b1(); break;
                case 2: func_A3FB_b2(); break;
                case 3: func_A3FB_b3(); break;
                case 4: func_A3FB_b4(); break;
                case 5: func_A3FB_b5(); break;
                case 6: func_A3FB_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA42E:
            func_A42E_b0(); break;
        case 0xADE5:
            switch (g_current_bank) {
                case 0: func_ADE5_b0(); break;
                case 1: func_ADE5_b1(); break;
                case 2: func_ADE5_b2(); break;
                case 3: func_ADE5_b3(); break;
                case 4: func_ADE5_b4(); break;
                case 5: func_ADE5_b5(); break;
                case 6: func_ADE5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC385:
            func_C385(); break;
        case 0xF005:
            func_F005(); break;
        case 0xF002:
            func_F002(); break;
        case 0xAB09:
            switch (g_current_bank) {
                case 0: func_AB09_b0(); break;
                case 1: func_AB09_b1(); break;
                case 2: func_AB09_b2(); break;
                case 3: func_AB09_b3(); break;
                case 4: func_AB09_b4(); break;
                case 5: func_AB09_b5(); break;
                case 6: func_AB09_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF3EF:
            func_F3EF(); break;
        case 0xCD9B:
            func_CD9B(); break;
        case 0xADC3:
            switch (g_current_bank) {
                case 0: func_ADC3_b0(); break;
                case 1: func_ADC3_b1(); break;
                case 2: func_ADC3_b2(); break;
                case 3: func_ADC3_b3(); break;
                case 4: func_ADC3_b4(); break;
                case 5: func_ADC3_b5(); break;
                case 6: func_ADC3_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A40:
            func_8A40_b0(); break;
        case 0x8A73:
            func_8A73_b0(); break;
        case 0x8C6D:
            func_8C6D_b0(); break;
        case 0x8C4C:
            func_8C4C_b0(); break;
        case 0x8C7F:
            func_8C7F_b0(); break;
        case 0x8ACE:
            func_8ACE_b0(); break;
        case 0x8C39:
            func_8C39_b0(); break;
        case 0x8CB0:
            func_8CB0_b0(); break;
        case 0x8CDA:
            func_8CDA_b0(); break;
        case 0x8D33:
            func_8D33_b0(); break;
        case 0x8D8C:
            func_8D8C_b0(); break;
        case 0x8BFE:
            func_8BFE_b0(); break;
        case 0x8A8A:
            func_8A8A_b0(); break;
        case 0x8970:
            func_8970_b1(); break;
        case 0x8086:
            switch (g_current_bank) {
                case 0: func_8086_b0(); break;
                case 1: func_8086_b1(); break;
                case 2: func_8086_b2(); break;
                case 3: func_8086_b3(); break;
                case 4: func_8086_b4(); break;
                case 5: func_8086_b5(); break;
                case 6: func_8086_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x937A:
            func_937A_b0(); break;
        case 0xA3B0:
            func_A3B0_b0(); break;
        case 0xA3DA:
            func_A3DA_b0(); break;
        case 0x940D:
            func_940D_b0(); break;
        case 0xA771:
            func_A771_b0(); break;
        case 0x9487:
            func_9487_b0(); break;
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
        case 0xACB9:
            func_ACB9_b0(); break;
        case 0xAD1E:
            func_AD1E_b0(); break;
        case 0x8586:
            func_8586_b0(); break;
        case 0x81FD:
            func_81FD_b0(); break;
        case 0xC5AF:
            func_C5AF(); break;
        case 0x9DAE:
            func_9DAE_b0(); break;
        case 0x9D03:
            func_9D03_b0(); break;
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
        case 0xDC12:
            func_DC12(); break;
        case 0xF71D:
            func_F71D(); break;
        case 0xC810:
            func_C810(); break;
        case 0x89A5:
            switch (g_current_bank) {
                case 0: func_89A5_b0(); break;
                case 1: func_89A5_b1(); break;
                case 2: func_89A5_b2(); break;
                case 3: func_89A5_b3(); break;
                case 4: func_89A5_b4(); break;
                case 5: func_89A5_b5(); break;
                case 6: func_89A5_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8504:
            func_8504_b1(); break;
        case 0x8506:
            func_8506_b1(); break;
        case 0x8508:
            switch (g_current_bank) {
                case 1: func_8508_b1(); break;
                case 0: func_8508_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x850A:
            func_850A_b1(); break;
        case 0x851C:
            func_851C_b1(); break;
        case 0xACA9:
            func_ACA9_b0(); break;
        case 0x84BB:
            func_84BB_b0(); break;
        case 0xAB72:
            func_AB72_b0(); break;
        case 0xAB97:
            func_AB97_b0(); break;
        case 0x8883:
            func_8883_b0(); break;
        case 0x8918:
            func_8918_b0(); break;
        case 0x8906:
            func_8906_b0(); break;
        case 0x88FB:
            func_88FB_b0(); break;
        case 0x8953:
            func_8953_b1(); break;
        case 0x9491:
            func_9491_b0(); break;
        case 0x97BE:
            func_97BE_b0(); break;
        case 0xAD62:
            func_AD62_b0(); break;
        case 0x99D7:
            func_99D7_b0(); break;
        case 0x9A42:
            func_9A42_b0(); break;
        case 0x84FA:
            func_84FA_b0(); break;
        case 0x8926:
            func_8926_b0(); break;
        case 0x893C:
            func_893C_b1(); break;
        case 0x8521:
            func_8521_b0(); break;
        case 0x88FC:
            func_88FC_b1(); break;
        case 0x88D3:
            func_88D3_b1(); break;
        case 0x852D:
            func_852D_b0(); break;
        case 0xF86C:
            func_F86C(); break;
        case 0xD2D1:
            func_D2D1(); break;
        case 0xE1E0:
            func_E1E0(); break;
        case 0xE5E4:
            func_E5E4(); break;
        case 0xE0B2:
            func_E0B2(); break;
        case 0xCDC9:
            func_CDC9(); break;
        case 0xF4A9:
            func_F4A9(); break;
        case 0xED9D:
            func_ED9D(); break;
        case 0xD1B7:
            func_D1B7(); break;
        case 0xDDBD:
            func_DDBD(); break;
        case 0xDDEE:
            func_DDEE(); break;
        case 0xED8D:
            func_ED8D(); break;
        case 0xEF8D:
            func_EF8D(); break;
        case 0xEB8D:
            func_EB8D(); break;
        case 0xF18D:
            func_F18D(); break;
        case 0xF1CE:
            func_F1CE(); break;
        case 0xEBD0:
            func_EBD0(); break;
        case 0xF48D:
            func_F48D(); break;
        case 0xF5F0:
            func_F5F0(); break;
        case 0xD8B9:
            func_D8B9(); break;
        case 0xF101:
            func_F101(); break;
        case 0xE6E5:
            func_E6E5(); break;
        case 0xDFDE:
            func_DFDE(); break;
        case 0xF05A:
            func_F05A(); break;
        case 0xD0B0:
            func_D0B0(); break;
        case 0xDCCE:
            func_DCCE(); break;
        case 0xDFB5:
            func_DFB5(); break;
        case 0xDFBB:
            func_DFBB(); break;
        case 0xCF45:
            func_CF45(); break;
        case 0xEB60:
            func_EB60(); break;
        case 0xEA7E:
            func_EA7E(); break;
        case 0xE3A9:
            func_E3A9(); break;
        case 0xF669:
            func_F669(); break;
        case 0xF5A9:
            func_F5A9(); break;
        case 0xDB56:
            func_DB56(); break;
        case 0xF781:
            func_F781(); break;
        case 0xF7AE:
            func_F7AE(); break;
        case 0xF7D0:
            func_F7D0(); break;
        case 0xF7BD:
            func_F7BD(); break;
        case 0xF79D:
            func_F79D(); break;
        case 0xF831:
            func_F831(); break;
        case 0xF8AA:
            func_F8AA(); break;
        case 0xF8D0:
            func_F8D0(); break;
        case 0xF8AD:
            func_F8AD(); break;
        case 0xF8BA:
            func_F8BA(); break;
        case 0xF8C6:
            func_F8C6(); break;
        case 0xF8FC:
            func_F8FC(); break;
        case 0xF8C9:
            func_F8C9(); break;
        case 0xF88D:
            func_F88D(); break;
        case 0xF7A7:
            func_F7A7(); break;
        case 0xDCA5:
            func_DCA5(); break;
        case 0xF7A5:
            func_F7A5(); break;
        case 0xD087:
            func_D087(); break;
        case 0xF520:
            func_F520(); break;
        case 0xCE0A:
            func_CE0A(); break;
        case 0xE120:
            func_E120(); break;
        case 0xE076:
            func_E076(); break;
        case 0xE08D:
            func_E08D(); break;
        case 0xE090:
            func_E090(); break;
        case 0xE085:
            func_E085(); break;
        case 0xD849:
            func_D849(); break;
        case 0xD543:
            func_D543(); break;
        case 0xD582:
            func_D582(); break;
        case 0xD4E5:
            func_D4E5(); break;
        case 0xD517:
            func_D517(); break;
        case 0xF6B6:
            func_F6B6(); break;
        case 0xF542:
            func_F542(); break;
        case 0xF541:
            func_F541(); break;
        case 0xF547:
            func_F547(); break;
        case 0xF546:
            func_F546(); break;
        case 0xF600:
            func_F600(); break;
        case 0xF620:
            func_F620(); break;
        case 0xF642:
            func_F642(); break;
        case 0xF800:
            func_F800(); break;
        case 0xF0F3:
            func_F0F3(); break;
        case 0xF0F0:
            func_F0F0(); break;
        case 0xCFFF:
            func_CFFF(); break;
        case 0xF3CC:
            func_F3CC(); break;
        case 0xF65A:
            func_F65A(); break;
        case 0xF663:
            func_F663(); break;
        case 0xF66B:
            func_F66B(); break;
        case 0xF820:
            func_F820(); break;
        case 0xDB21:
            func_DB21(); break;
        case 0xCEFA:
            func_CEFA(); break;
        case 0xD9F6:
            func_D9F6(); break;
        case 0xF2E0:
            func_F2E0(); break;
        case 0xF2F1:
            func_F2F1(); break;
        case 0xF321:
            func_F321(); break;
        case 0xF322:
            func_F322(); break;
        case 0xF2E3:
            func_F2E3(); break;
        case 0xF272:
            func_F272(); break;
        case 0xF2AD:
            func_F2AD(); break;
        case 0xF27F:
            func_F27F(); break;
        case 0xF2A3:
            func_F2A3(); break;
        case 0xF2BB:
            func_F2BB(); break;
        case 0xF2D0:
            func_F2D0(); break;
        case 0xF647:
            func_F647(); break;
        case 0xE32F:
            func_E32F(); break;
        case 0xE400:
            func_E400(); break;
        case 0xE386:
            func_E386(); break;
        case 0xE366:
            func_E366(); break;
        case 0xE3EF:
            func_E3EF(); break;
        case 0xE3AE:
            func_E3AE(); break;
        case 0xE3F1:
            func_E3F1(); break;
        case 0xE35A:
            func_E35A(); break;
        case 0xE381:
            func_E381(); break;
        case 0xE3E2:
            func_E3E2(); break;
        case 0xE3D2:
            func_E3D2(); break;
        case 0xE37D:
            func_E37D(); break;
        case 0xE3A5:
            func_E3A5(); break;
        case 0xD94C:
            func_D94C(); break;
        case 0xD58D:
            func_D58D(); break;
        case 0xDAF2:
            func_DAF2(); break;
        case 0xE25D:
            func_E25D(); break;
        case 0xE286:
            func_E286(); break;
        case 0xE265:
            func_E265(); break;
        case 0xE28D:
            func_E28D(); break;
        case 0xE2EE:
            func_E2EE(); break;
        case 0xE29C:
            func_E29C(); break;
        case 0xE2AD:
            func_E2AD(); break;
        case 0xE2AA:
            func_E2AA(); break;
        case 0xE27C:
            func_E27C(); break;
        case 0xE2E1:
            func_E2E1(); break;
        case 0xE2E7:
            func_E2E7(); break;
        case 0xE2D3:
            func_E2D3(); break;
        case 0xE309:
            func_E309(); break;
        case 0xE2A4:
            func_E2A4(); break;
        case 0xE2DD:
            func_E2DD(); break;
        case 0xD0F0:
            func_D0F0(); break;
        case 0xDEF0:
            func_DEF0(); break;
        case 0xE0DE:
            func_E0DE(); break;
        case 0xDAF0:
            func_DAF0(); break;
        case 0xEBBD:
            func_EBBD(); break;
        case 0xF4DD:
            func_F4DD(); break;
        case 0xF4FE:
            func_F4FE(); break;
        case 0xF1BD:
            func_F1BD(); break;
        case 0xE006:
            func_E006(); break;
        case 0xE007:
            func_E007(); break;
        case 0xF7FE:
            func_F7FE(); break;
        case 0xF0FE:
            func_F0FE(); break;
        case 0xDC65:
            func_DC65(); break;
        case 0xDD65:
            func_DD65(); break;
        case 0xE0A6:
            func_E0A6(); break;
        case 0xD0F8:
            func_D0F8(); break;
        case 0xEB9D:
            func_EB9D(); break;
        case 0xDB9D:
            func_DB9D(); break;
        case 0xE706:
            func_E706(); break;
        case 0xE646:
            func_E646(); break;
        case 0xD8C6:
            func_D8C6(); break;
        case 0xDD22:
            func_DD22(); break;
        case 0xF506:
            func_F506(); break;
        case 0xE014:
            func_E014(); break;
        case 0xE009:
            func_E009(); break;
        case 0xF78D:
            func_F78D(); break;
        case 0xF410:
            func_F410(); break;
        case 0xDD0C:
            func_DD0C(); break;
        case 0xE4C6:
            func_E4C6(); break;
        case 0x9881:
            switch (g_current_bank) {
                case 0: func_9881_b0(); break;
                case 1: func_9881_b1(); break;
                case 2: func_9881_b2(); break;
                case 3: func_9881_b3(); break;
                case 4: func_9881_b4(); break;
                case 5: func_9881_b5(); break;
                case 6: func_9881_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD60:
            switch (g_current_bank) {
                case 0: func_AD60_b0(); break;
                case 1: func_AD60_b1(); break;
                case 2: func_AD60_b2(); break;
                case 3: func_AD60_b3(); break;
                case 4: func_AD60_b4(); break;
                case 5: func_AD60_b5(); break;
                case 6: func_AD60_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xABE0:
            switch (g_current_bank) {
                case 0: func_ABE0_b0(); break;
                case 1: func_ABE0_b1(); break;
                case 2: func_ABE0_b2(); break;
                case 3: func_ABE0_b3(); break;
                case 4: func_ABE0_b4(); break;
                case 5: func_ABE0_b5(); break;
                case 6: func_ABE0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xDB75:
            func_DB75(); break;
        case 0xAC14:
            func_AC14_b0(); break;
        case 0xDB07:
            func_DB07(); break;
        case 0x88A9:
            func_88A9_b0(); break;
        case 0xAC8D:
            func_AC8D_b0(); break;
        case 0x8D28:
            func_8D28_b0(); break;
        case 0x8560:
            func_8560_b0(); break;
        case 0x850E:
            func_850E_b0(); break;
        case 0x988D:
            func_988D_b0(); break;
        case 0x8510:
            func_8510_b0(); break;
        case 0xA9A3:
            func_A9A3_b0(); break;
        case 0x8485:
            func_8485_b0(); break;
        case 0xB020:
            func_B020_b0(); break;
        case 0x8577:
            func_8577_b0(); break;
        case 0x858B:
            func_858B_b0(); break;
        case 0x8590:
            func_8590_b0(); break;
        case 0x8595:
            func_8595_b0(); break;
        case 0xA9B7:
            func_A9B7_b0(); break;
        case 0x8596:
            func_8596_b0(); break;
        case 0xA910:
            func_A910_b0(); break;
        case 0x850D:
            func_850D_b0(); break;
        case 0x8597:
            func_8597_b0(); break;
        case 0xA9B8:
            func_A9B8_b0(); break;
        case 0x8D00:
            func_8D00_b0(); break;
        case 0x8561:
            func_8561_b0(); break;
        case 0xAAAA:
            func_AAAA_b0(); break;
        case 0x859D:
            func_859D_b0(); break;
        case 0x8598:
            func_8598_b0(); break;
        case 0x8500:
            func_8500_b0(); break;
        case 0xA9B4:
            func_A9B4_b0(); break;
        case 0x8592:
            func_8592_b0(); break;
        case 0xA9AF:
            func_A9AF_b0(); break;
        case 0xA9B5:
            func_A9B5_b0(); break;
        case 0x8563:
            func_8563_b0(); break;
        case 0x8568:
            func_8568_b0(); break;
        case 0x856D:
            func_856D_b0(); break;
        case 0x8985:
            func_8985_b0(); break;
        case 0x8A26:
            func_8A26_b0(); break;
        case 0xA97F:
            func_A97F_b0(); break;
        case 0x8536:
            func_8536_b0(); break;
        case 0xA98D:
            func_A98D_b0(); break;
        case 0x8503:
            func_8503_b0(); break;
        case 0x898A:
            func_898A_b0(); break;
        case 0x8B8A:
            func_8B8A_b0(); break;
        case 0x8B8C:
            func_8B8C_b0(); break;
        case 0x9E8C:
            func_9E8C_b0(); break;
        case 0x899F:
            func_899F_b0(); break;
        case 0x8BAF:
            func_8BAF_b0(); break;
        case 0x9E9F:
            func_9E9F_b0(); break;
        case 0xAFAE:
            func_AFAE_b0(); break;
        case 0x8C8B:
            func_8C8B_b0(); break;
        case 0xA938:
            func_A938_b0(); break;
        case 0x85C8:
            func_85C8_b0(); break;
        case 0xA9B0:
            func_A9B0_b0(); break;
        case 0x85B5:
            func_85B5_b0(); break;
        case 0x8D92:
            func_8D92_b0(); break;
        case 0x994C:
            func_994C_b0(); break;
        case 0x85AA:
            func_85AA_b0(); break;
        case 0xA9CF:
            func_A9CF_b0(); break;
        case 0x85D7:
            func_85D7_b0(); break;
        case 0x85B0:
            func_85B0_b0(); break;
        case 0x85CE:
            func_85CE_b0(); break;
        case 0x85E0:
            func_85E0_b0(); break;
        case 0x852C:
            func_852C_b0(); break;
        case 0x8527:
            func_8527_b0(); break;
        case 0x8531:
            func_8531_b0(); break;
        case 0xB613:
            func_B613_b0(); break;
        case 0xA9CE:
            func_A9CE_b0(); break;
        case 0x8502:
            func_8502_b0(); break;
        case 0x8520:
            func_8520_b0(); break;
        case 0x8D75:
            func_8D75_b0(); break;
        case 0x9000:
            func_9000_b0(); break;
        case 0x8D4A:
            func_8D4A_b0(); break;
        case 0x8DC0:
            func_8DC0_b0(); break;
        case 0xA284:
            func_A284_b1(); break;
        case 0xA28E:
            func_A28E_b1(); break;
        case 0xA299:
            func_A299_b1(); break;
        case 0xA2A5:
            func_A2A5_b1(); break;
        case 0xA340:
            func_A340_b1(); break;
        case 0xA4D9:
            func_A4D9_b1(); break;
        case 0xA516:
            func_A516_b1(); break;
        case 0xA357:
            func_A357_b1(); break;
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
        case 0xA37A:
            func_A37A_b1(); break;
        case 0xA2D3:
            func_A2D3_b1(); break;
        case 0xA2D6:
            func_A2D6_b1(); break;
        case 0xA310:
            func_A310_b1(); break;
        case 0xA316:
            func_A316_b1(); break;
        case 0x8472:
            func_8472_b0(); break;
        case 0xB01B:
            func_B01B_b0(); break;
        case 0xB4D0:
            func_B4D0_b0(); break;
        case 0xB4DC:
            func_B4DC_b0(); break;
        case 0xB048:
            func_B048_b0(); break;
        case 0xAEE1:
            func_AEE1_b0(); break;
        case 0xAF34:
            func_AF34_b0(); break;
        case 0xAED2:
            func_AED2_b0(); break;
        case 0xAF93:
            func_AF93_b0(); break;
        case 0xB20C:
            func_B20C_b0(); break;
        case 0xBA5D:
            func_BA5D_b0(); break;
        case 0xB61C:
            func_B61C_b0(); break;
        case 0xAFC6:
            func_AFC6_b0(); break;
        case 0xA87D:
            func_A87D_b0(); break;
        case 0x8FD4:
            func_8FD4_b0(); break;
        case 0x8FFF:
            func_8FFF_b0(); break;
        case 0x8415:
            func_8415_b0(); break;
        case 0xB058:
            func_B058_b0(); break;
        case 0xB197:
            func_B197_b0(); break;
        case 0xB1DA:
            func_B1DA_b0(); break;
        case 0xB070:
            func_B070_b0(); break;
        case 0xB099:
            func_B099_b0(); break;
        case 0xB0C2:
            func_B0C2_b0(); break;
        case 0xB064:
            func_B064_b0(); break;
        case 0xB1AE:
            func_B1AE_b0(); break;
        case 0xB0FD:
            func_B0FD_b0(); break;
        case 0xB13C:
            func_B13C_b0(); break;
        case 0xB15A:
            func_B15A_b0(); break;
        case 0xB52B:
            func_B52B_b0(); break;
        case 0xCFB1:
            func_CFB1(); break;
        case 0x9F8E:
            func_9F8E_b0(); break;
        case 0xAE16:
            func_AE16_b0(); break;
        case 0xAE27:
            func_AE27_b0(); break;
        case 0xB57C:
            func_B57C_b0(); break;
        case 0xB5D1:
            func_B5D1_b0(); break;
        case 0xA3AF:
            func_A3AF_b0(); break;
        case 0xA2E2:
            func_A2E2_b1(); break;
        case 0x9F9F:
            func_9F9F_b0(); break;
        case 0x9F9B:
            func_9F9B_b0(); break;
        case 0x9F9E:
            func_9F9E_b0(); break;
        case 0xA029:
            func_A029_b0(); break;
        case 0xAFB0:
            func_AFB0_b0(); break;
        case 0xB04F:
            func_B04F_b0(); break;
        case 0x98A6:
            func_98A6_b0(); break;
        case 0x98A9:
            func_98A9_b0(); break;
        case 0xAE28:
            func_AE28_b0(); break;
        case 0xAE8A:
            func_AE8A_b0(); break;
        case 0xAE8D:
            func_AE8D_b0(); break;
        case 0xB6B0:
            func_B6B0_b0(); break;
        case 0xB6B6:
            func_B6B6_b0(); break;
        case 0xB69E:
            func_B69E_b0(); break;
        case 0xB68C:
            func_B68C_b0(); break;
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
        case 0xBCCE:
            func_BCCE_b0(); break;
        case 0xB6C7:
            func_B6C7_b0(); break;
        case 0xB6D0:
            func_B6D0_b0(); break;
        case 0xB6A7:
            func_B6A7_b0(); break;
        case 0xB6AF:
            func_B6AF_b0(); break;
        case 0xB695:
            func_B695_b0(); break;
        case 0xB6FA:
            func_B6FA_b0(); break;
        case 0xB5F8:
            func_B5F8_b0(); break;
        case 0xB657:
            func_B657_b0(); break;
        case 0xB5D2:
            func_B5D2_b0(); break;
        case 0xA206:
            func_A206_b0(); break;
        case 0x9FBD:
            func_9FBD_b0(); break;
        case 0xA0AE:
            func_A0AE_b0(); break;
        case 0xA049:
            func_A049_b0(); break;
        case 0xAF7A:
            func_AF7A_b0(); break;
        case 0xB72C:
            func_B72C_b0(); break;
        case 0xB765:
            func_B765_b0(); break;
        case 0xB800:
            func_B800_b0(); break;
        case 0xB834:
            func_B834_b0(); break;
        case 0xB660:
            func_B660_b0(); break;
        case 0xB78F:
            func_B78F_b0(); break;
        case 0xB7A3:
            func_B7A3_b0(); break;
        case 0xB8CC:
            func_B8CC_b0(); break;
        case 0xB835:
            func_B835_b0(); break;
        case 0xB902:
            func_B902_b0(); break;
        case 0xB930:
            func_B930_b0(); break;
        case 0xB898:
            func_B898_b0(); break;
        case 0xB874:
            func_B874_b0(); break;
        case 0xBA12:
            func_BA12_b0(); break;
        case 0xB9F4:
            func_B9F4_b0(); break;
        case 0xB9FA:
            func_B9FA_b0(); break;
        case 0xBA1B:
            func_BA1B_b0(); break;
        case 0xBAAA:
            func_BAAA_b0(); break;
        case 0xB9D4:
            func_B9D4_b0(); break;
        case 0xB9FB:
            func_B9FB_b0(); break;
        default:
            nes_log_dispatch_miss(addr);
            return 0;
    }
    return 1;
}
