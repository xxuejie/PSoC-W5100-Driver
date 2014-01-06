#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice.h>
#include <cydevice_trm.h>

/* SPI0_IntClock */
#define SPI0_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define SPI0_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define SPI0_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define SPI0_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define SPI0_IntClock__INDEX 0x00u
#define SPI0_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define SPI0_IntClock__PM_ACT_MSK 0x01u
#define SPI0_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define SPI0_IntClock__PM_STBY_MSK 0x01u

/* ETH_MISO_1 */
#define ETH_MISO_1__0__MASK 0x02u
#define ETH_MISO_1__0__PC CYREG_PRT3_PC1
#define ETH_MISO_1__0__PORT 3u
#define ETH_MISO_1__0__SHIFT 1
#define ETH_MISO_1__AG CYREG_PRT3_AG
#define ETH_MISO_1__AMUX CYREG_PRT3_AMUX
#define ETH_MISO_1__BIE CYREG_PRT3_BIE
#define ETH_MISO_1__BIT_MASK CYREG_PRT3_BIT_MASK
#define ETH_MISO_1__BYP CYREG_PRT3_BYP
#define ETH_MISO_1__CTL CYREG_PRT3_CTL
#define ETH_MISO_1__DM0 CYREG_PRT3_DM0
#define ETH_MISO_1__DM1 CYREG_PRT3_DM1
#define ETH_MISO_1__DM2 CYREG_PRT3_DM2
#define ETH_MISO_1__DR CYREG_PRT3_DR
#define ETH_MISO_1__INP_DIS CYREG_PRT3_INP_DIS
#define ETH_MISO_1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define ETH_MISO_1__LCD_EN CYREG_PRT3_LCD_EN
#define ETH_MISO_1__MASK 0x02u
#define ETH_MISO_1__PORT 3u
#define ETH_MISO_1__PRT CYREG_PRT3_PRT
#define ETH_MISO_1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define ETH_MISO_1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define ETH_MISO_1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define ETH_MISO_1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define ETH_MISO_1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define ETH_MISO_1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define ETH_MISO_1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define ETH_MISO_1__PS CYREG_PRT3_PS
#define ETH_MISO_1__SHIFT 1
#define ETH_MISO_1__SLW CYREG_PRT3_SLW

/* ETH_MOSI_1 */
#define ETH_MOSI_1__0__MASK 0x01u
#define ETH_MOSI_1__0__PC CYREG_PRT3_PC0
#define ETH_MOSI_1__0__PORT 3u
#define ETH_MOSI_1__0__SHIFT 0
#define ETH_MOSI_1__AG CYREG_PRT3_AG
#define ETH_MOSI_1__AMUX CYREG_PRT3_AMUX
#define ETH_MOSI_1__BIE CYREG_PRT3_BIE
#define ETH_MOSI_1__BIT_MASK CYREG_PRT3_BIT_MASK
#define ETH_MOSI_1__BYP CYREG_PRT3_BYP
#define ETH_MOSI_1__CTL CYREG_PRT3_CTL
#define ETH_MOSI_1__DM0 CYREG_PRT3_DM0
#define ETH_MOSI_1__DM1 CYREG_PRT3_DM1
#define ETH_MOSI_1__DM2 CYREG_PRT3_DM2
#define ETH_MOSI_1__DR CYREG_PRT3_DR
#define ETH_MOSI_1__INP_DIS CYREG_PRT3_INP_DIS
#define ETH_MOSI_1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define ETH_MOSI_1__LCD_EN CYREG_PRT3_LCD_EN
#define ETH_MOSI_1__MASK 0x01u
#define ETH_MOSI_1__PORT 3u
#define ETH_MOSI_1__PRT CYREG_PRT3_PRT
#define ETH_MOSI_1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define ETH_MOSI_1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define ETH_MOSI_1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define ETH_MOSI_1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define ETH_MOSI_1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define ETH_MOSI_1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define ETH_MOSI_1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define ETH_MOSI_1__PS CYREG_PRT3_PS
#define ETH_MOSI_1__SHIFT 0
#define ETH_MOSI_1__SLW CYREG_PRT3_SLW

/* ETH_SCLK_1 */
#define ETH_SCLK_1__0__MASK 0x40u
#define ETH_SCLK_1__0__PC CYREG_PRT0_PC6
#define ETH_SCLK_1__0__PORT 0u
#define ETH_SCLK_1__0__SHIFT 6
#define ETH_SCLK_1__AG CYREG_PRT0_AG
#define ETH_SCLK_1__AMUX CYREG_PRT0_AMUX
#define ETH_SCLK_1__BIE CYREG_PRT0_BIE
#define ETH_SCLK_1__BIT_MASK CYREG_PRT0_BIT_MASK
#define ETH_SCLK_1__BYP CYREG_PRT0_BYP
#define ETH_SCLK_1__CTL CYREG_PRT0_CTL
#define ETH_SCLK_1__DM0 CYREG_PRT0_DM0
#define ETH_SCLK_1__DM1 CYREG_PRT0_DM1
#define ETH_SCLK_1__DM2 CYREG_PRT0_DM2
#define ETH_SCLK_1__DR CYREG_PRT0_DR
#define ETH_SCLK_1__INP_DIS CYREG_PRT0_INP_DIS
#define ETH_SCLK_1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define ETH_SCLK_1__LCD_EN CYREG_PRT0_LCD_EN
#define ETH_SCLK_1__MASK 0x40u
#define ETH_SCLK_1__PORT 0u
#define ETH_SCLK_1__PRT CYREG_PRT0_PRT
#define ETH_SCLK_1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define ETH_SCLK_1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define ETH_SCLK_1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define ETH_SCLK_1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define ETH_SCLK_1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define ETH_SCLK_1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define ETH_SCLK_1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define ETH_SCLK_1__PS CYREG_PRT0_PS
#define ETH_SCLK_1__SHIFT 6
#define ETH_SCLK_1__SLW CYREG_PRT0_SLW

/* SPI0_BSPIM */
#define SPI0_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define SPI0_BSPIM_BitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB06_07_ST
#define SPI0_BSPIM_BitCounter_ST__MASK_REG CYREG_B0_UDB06_MSK
#define SPI0_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define SPI0_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define SPI0_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define SPI0_BSPIM_BitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB06_ST_CTL
#define SPI0_BSPIM_BitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB06_ST_CTL
#define SPI0_BSPIM_BitCounter_ST__STATUS_REG CYREG_B0_UDB06_ST
#define SPI0_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define SPI0_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB06_07_CTL
#define SPI0_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB06_07_CTL
#define SPI0_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB06_07_CTL
#define SPI0_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB06_07_CTL
#define SPI0_BSPIM_BitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB06_07_MSK
#define SPI0_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB06_07_MSK
#define SPI0_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB06_07_MSK
#define SPI0_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB06_07_MSK
#define SPI0_BSPIM_BitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define SPI0_BSPIM_BitCounter__CONTROL_REG CYREG_B0_UDB06_CTL
#define SPI0_BSPIM_BitCounter__CONTROL_ST_REG CYREG_B0_UDB06_ST_CTL
#define SPI0_BSPIM_BitCounter__COUNT_REG CYREG_B0_UDB06_CTL
#define SPI0_BSPIM_BitCounter__COUNT_ST_REG CYREG_B0_UDB06_ST_CTL
#define SPI0_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define SPI0_BSPIM_BitCounter__PERIOD_REG CYREG_B0_UDB06_MSK
#define SPI0_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define SPI0_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB06_07_ACTL
#define SPI0_BSPIM_RxStsReg__16BIT_STATUS_REG CYREG_B1_UDB06_07_ST
#define SPI0_BSPIM_RxStsReg__4__MASK 0x10u
#define SPI0_BSPIM_RxStsReg__4__POS 4
#define SPI0_BSPIM_RxStsReg__5__MASK 0x20u
#define SPI0_BSPIM_RxStsReg__5__POS 5
#define SPI0_BSPIM_RxStsReg__6__MASK 0x40u
#define SPI0_BSPIM_RxStsReg__6__POS 6
#define SPI0_BSPIM_RxStsReg__MASK 0x70u
#define SPI0_BSPIM_RxStsReg__MASK_REG CYREG_B1_UDB06_MSK
#define SPI0_BSPIM_RxStsReg__STATUS_AUX_CTL_REG CYREG_B1_UDB06_ACTL
#define SPI0_BSPIM_RxStsReg__STATUS_REG CYREG_B1_UDB06_ST
#define SPI0_BSPIM_TxStsReg__0__MASK 0x01u
#define SPI0_BSPIM_TxStsReg__0__POS 0
#define SPI0_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB05_06_ACTL
#define SPI0_BSPIM_TxStsReg__16BIT_STATUS_REG CYREG_B1_UDB05_06_ST
#define SPI0_BSPIM_TxStsReg__1__MASK 0x02u
#define SPI0_BSPIM_TxStsReg__1__POS 1
#define SPI0_BSPIM_TxStsReg__2__MASK 0x04u
#define SPI0_BSPIM_TxStsReg__2__POS 2
#define SPI0_BSPIM_TxStsReg__3__MASK 0x08u
#define SPI0_BSPIM_TxStsReg__3__POS 3
#define SPI0_BSPIM_TxStsReg__4__MASK 0x10u
#define SPI0_BSPIM_TxStsReg__4__POS 4
#define SPI0_BSPIM_TxStsReg__MASK 0x1Fu
#define SPI0_BSPIM_TxStsReg__MASK_REG CYREG_B1_UDB05_MSK
#define SPI0_BSPIM_TxStsReg__STATUS_AUX_CTL_REG CYREG_B1_UDB05_ACTL
#define SPI0_BSPIM_TxStsReg__STATUS_REG CYREG_B1_UDB05_ST
#define SPI0_BSPIM_sR8_Dp_u0__16BIT_A0_REG CYREG_B1_UDB06_07_A0
#define SPI0_BSPIM_sR8_Dp_u0__16BIT_A1_REG CYREG_B1_UDB06_07_A1
#define SPI0_BSPIM_sR8_Dp_u0__16BIT_D0_REG CYREG_B1_UDB06_07_D0
#define SPI0_BSPIM_sR8_Dp_u0__16BIT_D1_REG CYREG_B1_UDB06_07_D1
#define SPI0_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB06_07_ACTL
#define SPI0_BSPIM_sR8_Dp_u0__16BIT_F0_REG CYREG_B1_UDB06_07_F0
#define SPI0_BSPIM_sR8_Dp_u0__16BIT_F1_REG CYREG_B1_UDB06_07_F1
#define SPI0_BSPIM_sR8_Dp_u0__A0_A1_REG CYREG_B1_UDB06_A0_A1
#define SPI0_BSPIM_sR8_Dp_u0__A0_REG CYREG_B1_UDB06_A0
#define SPI0_BSPIM_sR8_Dp_u0__A1_REG CYREG_B1_UDB06_A1
#define SPI0_BSPIM_sR8_Dp_u0__D0_D1_REG CYREG_B1_UDB06_D0_D1
#define SPI0_BSPIM_sR8_Dp_u0__D0_REG CYREG_B1_UDB06_D0
#define SPI0_BSPIM_sR8_Dp_u0__D1_REG CYREG_B1_UDB06_D1
#define SPI0_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG CYREG_B1_UDB06_ACTL
#define SPI0_BSPIM_sR8_Dp_u0__F0_F1_REG CYREG_B1_UDB06_F0_F1
#define SPI0_BSPIM_sR8_Dp_u0__F0_REG CYREG_B1_UDB06_F0
#define SPI0_BSPIM_sR8_Dp_u0__F1_REG CYREG_B1_UDB06_F1

/* ETH_CSN_1 */
#define ETH_CSN_1__0__MASK 0x04u
#define ETH_CSN_1__0__PC CYREG_PRT5_PC2
#define ETH_CSN_1__0__PORT 5u
#define ETH_CSN_1__0__SHIFT 2
#define ETH_CSN_1__AG CYREG_PRT5_AG
#define ETH_CSN_1__AMUX CYREG_PRT5_AMUX
#define ETH_CSN_1__BIE CYREG_PRT5_BIE
#define ETH_CSN_1__BIT_MASK CYREG_PRT5_BIT_MASK
#define ETH_CSN_1__BYP CYREG_PRT5_BYP
#define ETH_CSN_1__CTL CYREG_PRT5_CTL
#define ETH_CSN_1__DM0 CYREG_PRT5_DM0
#define ETH_CSN_1__DM1 CYREG_PRT5_DM1
#define ETH_CSN_1__DM2 CYREG_PRT5_DM2
#define ETH_CSN_1__DR CYREG_PRT5_DR
#define ETH_CSN_1__INP_DIS CYREG_PRT5_INP_DIS
#define ETH_CSN_1__LCD_COM_SEG CYREG_PRT5_LCD_COM_SEG
#define ETH_CSN_1__LCD_EN CYREG_PRT5_LCD_EN
#define ETH_CSN_1__MASK 0x04u
#define ETH_CSN_1__PORT 5u
#define ETH_CSN_1__PRT CYREG_PRT5_PRT
#define ETH_CSN_1__PRTDSI__CAPS_SEL CYREG_PRT5_CAPS_SEL
#define ETH_CSN_1__PRTDSI__DBL_SYNC_IN CYREG_PRT5_DBL_SYNC_IN
#define ETH_CSN_1__PRTDSI__OE_SEL0 CYREG_PRT5_OE_SEL0
#define ETH_CSN_1__PRTDSI__OE_SEL1 CYREG_PRT5_OE_SEL1
#define ETH_CSN_1__PRTDSI__OUT_SEL0 CYREG_PRT5_OUT_SEL0
#define ETH_CSN_1__PRTDSI__OUT_SEL1 CYREG_PRT5_OUT_SEL1
#define ETH_CSN_1__PRTDSI__SYNC_OUT CYREG_PRT5_SYNC_OUT
#define ETH_CSN_1__PS CYREG_PRT5_PS
#define ETH_CSN_1__SHIFT 2
#define ETH_CSN_1__SLW CYREG_PRT5_SLW

/* SDCS */
#define SDCS__0__MASK 0x10u
#define SDCS__0__PC CYREG_PRT12_PC4
#define SDCS__0__PORT 12u
#define SDCS__0__SHIFT 4
#define SDCS__AG CYREG_PRT12_AG
#define SDCS__BIE CYREG_PRT12_BIE
#define SDCS__BIT_MASK CYREG_PRT12_BIT_MASK
#define SDCS__BYP CYREG_PRT12_BYP
#define SDCS__DM0 CYREG_PRT12_DM0
#define SDCS__DM1 CYREG_PRT12_DM1
#define SDCS__DM2 CYREG_PRT12_DM2
#define SDCS__DR CYREG_PRT12_DR
#define SDCS__INP_DIS CYREG_PRT12_INP_DIS
#define SDCS__MASK 0x10u
#define SDCS__PORT 12u
#define SDCS__PRT CYREG_PRT12_PRT
#define SDCS__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define SDCS__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define SDCS__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define SDCS__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define SDCS__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define SDCS__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define SDCS__PS CYREG_PRT12_PS
#define SDCS__SHIFT 4
#define SDCS__SIO_CFG CYREG_PRT12_SIO_CFG
#define SDCS__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define SDCS__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define SDCS__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define SDCS__SLW CYREG_PRT12_SLW

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_MEMBER_5B 4u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_DIE_PSOC5LP 4u
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_DIE_PSOC5LP
#define BCLK__BUS_CLK__HZ 64000000U
#define BCLK__BUS_CLK__KHZ 64000U
#define BCLK__BUS_CLK__MHZ 64U
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 3u
#define CYDEV_CHIP_DIE_PSOC4A 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 2u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REV_PSOC5LP_PRODUCTION
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x1000
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x4000
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5
#define CYDEV_VIO3_MV 5000
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
