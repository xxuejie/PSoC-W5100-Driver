.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* SPI0_miso_m */
.set SPI0_miso_m__0__DM__MASK, 0x38
.set SPI0_miso_m__0__DM__SHIFT, 3
.set SPI0_miso_m__0__DR, CYREG_PRT3_DR
.set SPI0_miso_m__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set SPI0_miso_m__0__HSIOM_MASK, 0x000000F0
.set SPI0_miso_m__0__HSIOM_SHIFT, 4
.set SPI0_miso_m__0__INTCFG, CYREG_PRT3_INTCFG
.set SPI0_miso_m__0__INTSTAT, CYREG_PRT3_INTSTAT
.set SPI0_miso_m__0__MASK, 0x02
.set SPI0_miso_m__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set SPI0_miso_m__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set SPI0_miso_m__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set SPI0_miso_m__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set SPI0_miso_m__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set SPI0_miso_m__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set SPI0_miso_m__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set SPI0_miso_m__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set SPI0_miso_m__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set SPI0_miso_m__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set SPI0_miso_m__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set SPI0_miso_m__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set SPI0_miso_m__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set SPI0_miso_m__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set SPI0_miso_m__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set SPI0_miso_m__0__PC, CYREG_PRT3_PC
.set SPI0_miso_m__0__PC2, CYREG_PRT3_PC2
.set SPI0_miso_m__0__PORT, 3
.set SPI0_miso_m__0__PS, CYREG_PRT3_PS
.set SPI0_miso_m__0__SHIFT, 1
.set SPI0_miso_m__DR, CYREG_PRT3_DR
.set SPI0_miso_m__INTCFG, CYREG_PRT3_INTCFG
.set SPI0_miso_m__INTSTAT, CYREG_PRT3_INTSTAT
.set SPI0_miso_m__MASK, 0x02
.set SPI0_miso_m__PA__CFG0, CYREG_UDB_PA3_CFG0
.set SPI0_miso_m__PA__CFG1, CYREG_UDB_PA3_CFG1
.set SPI0_miso_m__PA__CFG10, CYREG_UDB_PA3_CFG10
.set SPI0_miso_m__PA__CFG11, CYREG_UDB_PA3_CFG11
.set SPI0_miso_m__PA__CFG12, CYREG_UDB_PA3_CFG12
.set SPI0_miso_m__PA__CFG13, CYREG_UDB_PA3_CFG13
.set SPI0_miso_m__PA__CFG14, CYREG_UDB_PA3_CFG14
.set SPI0_miso_m__PA__CFG2, CYREG_UDB_PA3_CFG2
.set SPI0_miso_m__PA__CFG3, CYREG_UDB_PA3_CFG3
.set SPI0_miso_m__PA__CFG4, CYREG_UDB_PA3_CFG4
.set SPI0_miso_m__PA__CFG5, CYREG_UDB_PA3_CFG5
.set SPI0_miso_m__PA__CFG6, CYREG_UDB_PA3_CFG6
.set SPI0_miso_m__PA__CFG7, CYREG_UDB_PA3_CFG7
.set SPI0_miso_m__PA__CFG8, CYREG_UDB_PA3_CFG8
.set SPI0_miso_m__PA__CFG9, CYREG_UDB_PA3_CFG9
.set SPI0_miso_m__PC, CYREG_PRT3_PC
.set SPI0_miso_m__PC2, CYREG_PRT3_PC2
.set SPI0_miso_m__PORT, 3
.set SPI0_miso_m__PS, CYREG_PRT3_PS
.set SPI0_miso_m__SHIFT, 1

/* SPI0_mosi_m */
.set SPI0_mosi_m__0__DM__MASK, 0x07
.set SPI0_mosi_m__0__DM__SHIFT, 0
.set SPI0_mosi_m__0__DR, CYREG_PRT3_DR
.set SPI0_mosi_m__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set SPI0_mosi_m__0__HSIOM_MASK, 0x0000000F
.set SPI0_mosi_m__0__HSIOM_SHIFT, 0
.set SPI0_mosi_m__0__INTCFG, CYREG_PRT3_INTCFG
.set SPI0_mosi_m__0__INTSTAT, CYREG_PRT3_INTSTAT
.set SPI0_mosi_m__0__MASK, 0x01
.set SPI0_mosi_m__0__OUT_SEL, CYREG_UDB_PA3_CFG10
.set SPI0_mosi_m__0__OUT_SEL_SHIFT, 0
.set SPI0_mosi_m__0__OUT_SEL_VAL, -1
.set SPI0_mosi_m__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set SPI0_mosi_m__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set SPI0_mosi_m__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set SPI0_mosi_m__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set SPI0_mosi_m__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set SPI0_mosi_m__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set SPI0_mosi_m__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set SPI0_mosi_m__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set SPI0_mosi_m__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set SPI0_mosi_m__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set SPI0_mosi_m__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set SPI0_mosi_m__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set SPI0_mosi_m__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set SPI0_mosi_m__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set SPI0_mosi_m__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set SPI0_mosi_m__0__PC, CYREG_PRT3_PC
.set SPI0_mosi_m__0__PC2, CYREG_PRT3_PC2
.set SPI0_mosi_m__0__PORT, 3
.set SPI0_mosi_m__0__PS, CYREG_PRT3_PS
.set SPI0_mosi_m__0__SHIFT, 0
.set SPI0_mosi_m__DR, CYREG_PRT3_DR
.set SPI0_mosi_m__INTCFG, CYREG_PRT3_INTCFG
.set SPI0_mosi_m__INTSTAT, CYREG_PRT3_INTSTAT
.set SPI0_mosi_m__MASK, 0x01
.set SPI0_mosi_m__PA__CFG0, CYREG_UDB_PA3_CFG0
.set SPI0_mosi_m__PA__CFG1, CYREG_UDB_PA3_CFG1
.set SPI0_mosi_m__PA__CFG10, CYREG_UDB_PA3_CFG10
.set SPI0_mosi_m__PA__CFG11, CYREG_UDB_PA3_CFG11
.set SPI0_mosi_m__PA__CFG12, CYREG_UDB_PA3_CFG12
.set SPI0_mosi_m__PA__CFG13, CYREG_UDB_PA3_CFG13
.set SPI0_mosi_m__PA__CFG14, CYREG_UDB_PA3_CFG14
.set SPI0_mosi_m__PA__CFG2, CYREG_UDB_PA3_CFG2
.set SPI0_mosi_m__PA__CFG3, CYREG_UDB_PA3_CFG3
.set SPI0_mosi_m__PA__CFG4, CYREG_UDB_PA3_CFG4
.set SPI0_mosi_m__PA__CFG5, CYREG_UDB_PA3_CFG5
.set SPI0_mosi_m__PA__CFG6, CYREG_UDB_PA3_CFG6
.set SPI0_mosi_m__PA__CFG7, CYREG_UDB_PA3_CFG7
.set SPI0_mosi_m__PA__CFG8, CYREG_UDB_PA3_CFG8
.set SPI0_mosi_m__PA__CFG9, CYREG_UDB_PA3_CFG9
.set SPI0_mosi_m__PC, CYREG_PRT3_PC
.set SPI0_mosi_m__PC2, CYREG_PRT3_PC2
.set SPI0_mosi_m__PORT, 3
.set SPI0_mosi_m__PS, CYREG_PRT3_PS
.set SPI0_mosi_m__SHIFT, 0

/* SPI0_SCBCLK */
.set SPI0_SCBCLK__DIVIDER_MASK, 0x0000FFFF
.set SPI0_SCBCLK__ENABLE, CYREG_CLK_DIVIDER_A00
.set SPI0_SCBCLK__ENABLE_MASK, 0x80000000
.set SPI0_SCBCLK__MASK, 0x80000000
.set SPI0_SCBCLK__REGISTER, CYREG_CLK_DIVIDER_A00

/* SPI0_sclk_m */
.set SPI0_sclk_m__0__DM__MASK, 0x1C0000
.set SPI0_sclk_m__0__DM__SHIFT, 18
.set SPI0_sclk_m__0__DR, CYREG_PRT0_DR
.set SPI0_sclk_m__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set SPI0_sclk_m__0__HSIOM_MASK, 0x0F000000
.set SPI0_sclk_m__0__HSIOM_SHIFT, 24
.set SPI0_sclk_m__0__INTCFG, CYREG_PRT0_INTCFG
.set SPI0_sclk_m__0__INTSTAT, CYREG_PRT0_INTSTAT
.set SPI0_sclk_m__0__MASK, 0x40
.set SPI0_sclk_m__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set SPI0_sclk_m__0__OUT_SEL_SHIFT, 12
.set SPI0_sclk_m__0__OUT_SEL_VAL, -1
.set SPI0_sclk_m__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set SPI0_sclk_m__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set SPI0_sclk_m__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set SPI0_sclk_m__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set SPI0_sclk_m__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set SPI0_sclk_m__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set SPI0_sclk_m__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set SPI0_sclk_m__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set SPI0_sclk_m__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set SPI0_sclk_m__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set SPI0_sclk_m__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set SPI0_sclk_m__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set SPI0_sclk_m__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set SPI0_sclk_m__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set SPI0_sclk_m__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set SPI0_sclk_m__0__PC, CYREG_PRT0_PC
.set SPI0_sclk_m__0__PC2, CYREG_PRT0_PC2
.set SPI0_sclk_m__0__PORT, 0
.set SPI0_sclk_m__0__PS, CYREG_PRT0_PS
.set SPI0_sclk_m__0__SHIFT, 6
.set SPI0_sclk_m__DR, CYREG_PRT0_DR
.set SPI0_sclk_m__INTCFG, CYREG_PRT0_INTCFG
.set SPI0_sclk_m__INTSTAT, CYREG_PRT0_INTSTAT
.set SPI0_sclk_m__MASK, 0x40
.set SPI0_sclk_m__PA__CFG0, CYREG_UDB_PA0_CFG0
.set SPI0_sclk_m__PA__CFG1, CYREG_UDB_PA0_CFG1
.set SPI0_sclk_m__PA__CFG10, CYREG_UDB_PA0_CFG10
.set SPI0_sclk_m__PA__CFG11, CYREG_UDB_PA0_CFG11
.set SPI0_sclk_m__PA__CFG12, CYREG_UDB_PA0_CFG12
.set SPI0_sclk_m__PA__CFG13, CYREG_UDB_PA0_CFG13
.set SPI0_sclk_m__PA__CFG14, CYREG_UDB_PA0_CFG14
.set SPI0_sclk_m__PA__CFG2, CYREG_UDB_PA0_CFG2
.set SPI0_sclk_m__PA__CFG3, CYREG_UDB_PA0_CFG3
.set SPI0_sclk_m__PA__CFG4, CYREG_UDB_PA0_CFG4
.set SPI0_sclk_m__PA__CFG5, CYREG_UDB_PA0_CFG5
.set SPI0_sclk_m__PA__CFG6, CYREG_UDB_PA0_CFG6
.set SPI0_sclk_m__PA__CFG7, CYREG_UDB_PA0_CFG7
.set SPI0_sclk_m__PA__CFG8, CYREG_UDB_PA0_CFG8
.set SPI0_sclk_m__PA__CFG9, CYREG_UDB_PA0_CFG9
.set SPI0_sclk_m__PC, CYREG_PRT0_PC
.set SPI0_sclk_m__PC2, CYREG_PRT0_PC2
.set SPI0_sclk_m__PORT, 0
.set SPI0_sclk_m__PS, CYREG_PRT0_PS
.set SPI0_sclk_m__SHIFT, 6

/* SPI0_ss0_m */
.set SPI0_ss0_m__0__DM__MASK, 0xE00000
.set SPI0_ss0_m__0__DM__SHIFT, 21
.set SPI0_ss0_m__0__DR, CYREG_PRT0_DR
.set SPI0_ss0_m__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set SPI0_ss0_m__0__HSIOM_MASK, 0xF0000000
.set SPI0_ss0_m__0__HSIOM_SHIFT, 28
.set SPI0_ss0_m__0__INTCFG, CYREG_PRT0_INTCFG
.set SPI0_ss0_m__0__INTSTAT, CYREG_PRT0_INTSTAT
.set SPI0_ss0_m__0__MASK, 0x80
.set SPI0_ss0_m__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set SPI0_ss0_m__0__OUT_SEL_SHIFT, 14
.set SPI0_ss0_m__0__OUT_SEL_VAL, -1
.set SPI0_ss0_m__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set SPI0_ss0_m__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set SPI0_ss0_m__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set SPI0_ss0_m__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set SPI0_ss0_m__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set SPI0_ss0_m__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set SPI0_ss0_m__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set SPI0_ss0_m__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set SPI0_ss0_m__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set SPI0_ss0_m__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set SPI0_ss0_m__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set SPI0_ss0_m__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set SPI0_ss0_m__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set SPI0_ss0_m__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set SPI0_ss0_m__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set SPI0_ss0_m__0__PC, CYREG_PRT0_PC
.set SPI0_ss0_m__0__PC2, CYREG_PRT0_PC2
.set SPI0_ss0_m__0__PORT, 0
.set SPI0_ss0_m__0__PS, CYREG_PRT0_PS
.set SPI0_ss0_m__0__SHIFT, 7
.set SPI0_ss0_m__DR, CYREG_PRT0_DR
.set SPI0_ss0_m__INTCFG, CYREG_PRT0_INTCFG
.set SPI0_ss0_m__INTSTAT, CYREG_PRT0_INTSTAT
.set SPI0_ss0_m__MASK, 0x80
.set SPI0_ss0_m__PA__CFG0, CYREG_UDB_PA0_CFG0
.set SPI0_ss0_m__PA__CFG1, CYREG_UDB_PA0_CFG1
.set SPI0_ss0_m__PA__CFG10, CYREG_UDB_PA0_CFG10
.set SPI0_ss0_m__PA__CFG11, CYREG_UDB_PA0_CFG11
.set SPI0_ss0_m__PA__CFG12, CYREG_UDB_PA0_CFG12
.set SPI0_ss0_m__PA__CFG13, CYREG_UDB_PA0_CFG13
.set SPI0_ss0_m__PA__CFG14, CYREG_UDB_PA0_CFG14
.set SPI0_ss0_m__PA__CFG2, CYREG_UDB_PA0_CFG2
.set SPI0_ss0_m__PA__CFG3, CYREG_UDB_PA0_CFG3
.set SPI0_ss0_m__PA__CFG4, CYREG_UDB_PA0_CFG4
.set SPI0_ss0_m__PA__CFG5, CYREG_UDB_PA0_CFG5
.set SPI0_ss0_m__PA__CFG6, CYREG_UDB_PA0_CFG6
.set SPI0_ss0_m__PA__CFG7, CYREG_UDB_PA0_CFG7
.set SPI0_ss0_m__PA__CFG8, CYREG_UDB_PA0_CFG8
.set SPI0_ss0_m__PA__CFG9, CYREG_UDB_PA0_CFG9
.set SPI0_ss0_m__PC, CYREG_PRT0_PC
.set SPI0_ss0_m__PC2, CYREG_PRT0_PC2
.set SPI0_ss0_m__PORT, 0
.set SPI0_ss0_m__PS, CYREG_PRT0_PS
.set SPI0_ss0_m__SHIFT, 7

/* SPI0_ss1_m */
.set SPI0_ss1_m__0__DM__MASK, 0x7000
.set SPI0_ss1_m__0__DM__SHIFT, 12
.set SPI0_ss1_m__0__DR, CYREG_PRT3_DR
.set SPI0_ss1_m__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set SPI0_ss1_m__0__HSIOM_MASK, 0x000F0000
.set SPI0_ss1_m__0__HSIOM_SHIFT, 16
.set SPI0_ss1_m__0__INTCFG, CYREG_PRT3_INTCFG
.set SPI0_ss1_m__0__INTSTAT, CYREG_PRT3_INTSTAT
.set SPI0_ss1_m__0__MASK, 0x10
.set SPI0_ss1_m__0__OUT_SEL, CYREG_UDB_PA3_CFG10
.set SPI0_ss1_m__0__OUT_SEL_SHIFT, 8
.set SPI0_ss1_m__0__OUT_SEL_VAL, -1
.set SPI0_ss1_m__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set SPI0_ss1_m__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set SPI0_ss1_m__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set SPI0_ss1_m__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set SPI0_ss1_m__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set SPI0_ss1_m__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set SPI0_ss1_m__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set SPI0_ss1_m__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set SPI0_ss1_m__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set SPI0_ss1_m__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set SPI0_ss1_m__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set SPI0_ss1_m__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set SPI0_ss1_m__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set SPI0_ss1_m__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set SPI0_ss1_m__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set SPI0_ss1_m__0__PC, CYREG_PRT3_PC
.set SPI0_ss1_m__0__PC2, CYREG_PRT3_PC2
.set SPI0_ss1_m__0__PORT, 3
.set SPI0_ss1_m__0__PS, CYREG_PRT3_PS
.set SPI0_ss1_m__0__SHIFT, 4
.set SPI0_ss1_m__DR, CYREG_PRT3_DR
.set SPI0_ss1_m__INTCFG, CYREG_PRT3_INTCFG
.set SPI0_ss1_m__INTSTAT, CYREG_PRT3_INTSTAT
.set SPI0_ss1_m__MASK, 0x10
.set SPI0_ss1_m__PA__CFG0, CYREG_UDB_PA3_CFG0
.set SPI0_ss1_m__PA__CFG1, CYREG_UDB_PA3_CFG1
.set SPI0_ss1_m__PA__CFG10, CYREG_UDB_PA3_CFG10
.set SPI0_ss1_m__PA__CFG11, CYREG_UDB_PA3_CFG11
.set SPI0_ss1_m__PA__CFG12, CYREG_UDB_PA3_CFG12
.set SPI0_ss1_m__PA__CFG13, CYREG_UDB_PA3_CFG13
.set SPI0_ss1_m__PA__CFG14, CYREG_UDB_PA3_CFG14
.set SPI0_ss1_m__PA__CFG2, CYREG_UDB_PA3_CFG2
.set SPI0_ss1_m__PA__CFG3, CYREG_UDB_PA3_CFG3
.set SPI0_ss1_m__PA__CFG4, CYREG_UDB_PA3_CFG4
.set SPI0_ss1_m__PA__CFG5, CYREG_UDB_PA3_CFG5
.set SPI0_ss1_m__PA__CFG6, CYREG_UDB_PA3_CFG6
.set SPI0_ss1_m__PA__CFG7, CYREG_UDB_PA3_CFG7
.set SPI0_ss1_m__PA__CFG8, CYREG_UDB_PA3_CFG8
.set SPI0_ss1_m__PA__CFG9, CYREG_UDB_PA3_CFG9
.set SPI0_ss1_m__PC, CYREG_PRT3_PC
.set SPI0_ss1_m__PC2, CYREG_PRT3_PC2
.set SPI0_ss1_m__PORT, 3
.set SPI0_ss1_m__PS, CYREG_PRT3_PS
.set SPI0_ss1_m__SHIFT, 4

/* SPI0_SCB */
.set SPI0_SCB__BIST_CONTROL, CYREG_SCB1_BIST_CONTROL
.set SPI0_SCB__BIST_DATA, CYREG_SCB1_BIST_DATA
.set SPI0_SCB__CTRL, CYREG_SCB1_CTRL
.set SPI0_SCB__EZ_DATA00, CYREG_SCB1_EZ_DATA00
.set SPI0_SCB__EZ_DATA01, CYREG_SCB1_EZ_DATA01
.set SPI0_SCB__EZ_DATA02, CYREG_SCB1_EZ_DATA02
.set SPI0_SCB__EZ_DATA03, CYREG_SCB1_EZ_DATA03
.set SPI0_SCB__EZ_DATA04, CYREG_SCB1_EZ_DATA04
.set SPI0_SCB__EZ_DATA05, CYREG_SCB1_EZ_DATA05
.set SPI0_SCB__EZ_DATA06, CYREG_SCB1_EZ_DATA06
.set SPI0_SCB__EZ_DATA07, CYREG_SCB1_EZ_DATA07
.set SPI0_SCB__EZ_DATA08, CYREG_SCB1_EZ_DATA08
.set SPI0_SCB__EZ_DATA09, CYREG_SCB1_EZ_DATA09
.set SPI0_SCB__EZ_DATA10, CYREG_SCB1_EZ_DATA10
.set SPI0_SCB__EZ_DATA11, CYREG_SCB1_EZ_DATA11
.set SPI0_SCB__EZ_DATA12, CYREG_SCB1_EZ_DATA12
.set SPI0_SCB__EZ_DATA13, CYREG_SCB1_EZ_DATA13
.set SPI0_SCB__EZ_DATA14, CYREG_SCB1_EZ_DATA14
.set SPI0_SCB__EZ_DATA15, CYREG_SCB1_EZ_DATA15
.set SPI0_SCB__EZ_DATA16, CYREG_SCB1_EZ_DATA16
.set SPI0_SCB__EZ_DATA17, CYREG_SCB1_EZ_DATA17
.set SPI0_SCB__EZ_DATA18, CYREG_SCB1_EZ_DATA18
.set SPI0_SCB__EZ_DATA19, CYREG_SCB1_EZ_DATA19
.set SPI0_SCB__EZ_DATA20, CYREG_SCB1_EZ_DATA20
.set SPI0_SCB__EZ_DATA21, CYREG_SCB1_EZ_DATA21
.set SPI0_SCB__EZ_DATA22, CYREG_SCB1_EZ_DATA22
.set SPI0_SCB__EZ_DATA23, CYREG_SCB1_EZ_DATA23
.set SPI0_SCB__EZ_DATA24, CYREG_SCB1_EZ_DATA24
.set SPI0_SCB__EZ_DATA25, CYREG_SCB1_EZ_DATA25
.set SPI0_SCB__EZ_DATA26, CYREG_SCB1_EZ_DATA26
.set SPI0_SCB__EZ_DATA27, CYREG_SCB1_EZ_DATA27
.set SPI0_SCB__EZ_DATA28, CYREG_SCB1_EZ_DATA28
.set SPI0_SCB__EZ_DATA29, CYREG_SCB1_EZ_DATA29
.set SPI0_SCB__EZ_DATA30, CYREG_SCB1_EZ_DATA30
.set SPI0_SCB__EZ_DATA31, CYREG_SCB1_EZ_DATA31
.set SPI0_SCB__I2C_CFG, CYREG_SCB1_I2C_CFG
.set SPI0_SCB__I2C_CTRL, CYREG_SCB1_I2C_CTRL
.set SPI0_SCB__I2C_M_CMD, CYREG_SCB1_I2C_M_CMD
.set SPI0_SCB__I2C_STATUS, CYREG_SCB1_I2C_STATUS
.set SPI0_SCB__I2C_S_CMD, CYREG_SCB1_I2C_S_CMD
.set SPI0_SCB__INTR_CAUSE, CYREG_SCB1_INTR_CAUSE
.set SPI0_SCB__INTR_I2C_EC, CYREG_SCB1_INTR_I2C_EC
.set SPI0_SCB__INTR_I2C_EC_MASK, CYREG_SCB1_INTR_I2C_EC_MASK
.set SPI0_SCB__INTR_I2C_EC_MASKED, CYREG_SCB1_INTR_I2C_EC_MASKED
.set SPI0_SCB__INTR_M, CYREG_SCB1_INTR_M
.set SPI0_SCB__INTR_M_MASK, CYREG_SCB1_INTR_M_MASK
.set SPI0_SCB__INTR_M_MASKED, CYREG_SCB1_INTR_M_MASKED
.set SPI0_SCB__INTR_M_SET, CYREG_SCB1_INTR_M_SET
.set SPI0_SCB__INTR_RX, CYREG_SCB1_INTR_RX
.set SPI0_SCB__INTR_RX_MASK, CYREG_SCB1_INTR_RX_MASK
.set SPI0_SCB__INTR_RX_MASKED, CYREG_SCB1_INTR_RX_MASKED
.set SPI0_SCB__INTR_RX_SET, CYREG_SCB1_INTR_RX_SET
.set SPI0_SCB__INTR_S, CYREG_SCB1_INTR_S
.set SPI0_SCB__INTR_SPI_EC, CYREG_SCB1_INTR_SPI_EC
.set SPI0_SCB__INTR_SPI_EC_MASK, CYREG_SCB1_INTR_SPI_EC_MASK
.set SPI0_SCB__INTR_SPI_EC_MASKED, CYREG_SCB1_INTR_SPI_EC_MASKED
.set SPI0_SCB__INTR_S_MASK, CYREG_SCB1_INTR_S_MASK
.set SPI0_SCB__INTR_S_MASKED, CYREG_SCB1_INTR_S_MASKED
.set SPI0_SCB__INTR_S_SET, CYREG_SCB1_INTR_S_SET
.set SPI0_SCB__INTR_TX, CYREG_SCB1_INTR_TX
.set SPI0_SCB__INTR_TX_MASK, CYREG_SCB1_INTR_TX_MASK
.set SPI0_SCB__INTR_TX_MASKED, CYREG_SCB1_INTR_TX_MASKED
.set SPI0_SCB__INTR_TX_SET, CYREG_SCB1_INTR_TX_SET
.set SPI0_SCB__RX_CTRL, CYREG_SCB1_RX_CTRL
.set SPI0_SCB__RX_FIFO_CTRL, CYREG_SCB1_RX_FIFO_CTRL
.set SPI0_SCB__RX_FIFO_RD, CYREG_SCB1_RX_FIFO_RD
.set SPI0_SCB__RX_FIFO_RD_SILENT, CYREG_SCB1_RX_FIFO_RD_SILENT
.set SPI0_SCB__RX_FIFO_STATUS, CYREG_SCB1_RX_FIFO_STATUS
.set SPI0_SCB__RX_MATCH, CYREG_SCB1_RX_MATCH
.set SPI0_SCB__SPI_CTRL, CYREG_SCB1_SPI_CTRL
.set SPI0_SCB__SPI_STATUS, CYREG_SCB1_SPI_STATUS
.set SPI0_SCB__STATUS, CYREG_SCB1_STATUS
.set SPI0_SCB__TX_CTRL, CYREG_SCB1_TX_CTRL
.set SPI0_SCB__TX_FIFO_CTRL, CYREG_SCB1_TX_FIFO_CTRL
.set SPI0_SCB__TX_FIFO_STATUS, CYREG_SCB1_TX_FIFO_STATUS
.set SPI0_SCB__TX_FIFO_WR, CYREG_SCB1_TX_FIFO_WR
.set SPI0_SCB__UART_CTRL, CYREG_SCB1_UART_CTRL
.set SPI0_SCB__UART_RX_CTRL, CYREG_SCB1_UART_RX_CTRL
.set SPI0_SCB__UART_RX_STATUS, CYREG_SCB1_UART_RX_STATUS
.set SPI0_SCB__UART_TX_CTRL, CYREG_SCB1_UART_TX_CTRL

/* GREEN */
.set GREEN__0__DM__MASK, 0x1C0
.set GREEN__0__DM__SHIFT, 6
.set GREEN__0__DR, CYREG_PRT0_DR
.set GREEN__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set GREEN__0__HSIOM_MASK, 0x00000F00
.set GREEN__0__HSIOM_SHIFT, 8
.set GREEN__0__INTCFG, CYREG_PRT0_INTCFG
.set GREEN__0__INTSTAT, CYREG_PRT0_INTSTAT
.set GREEN__0__MASK, 0x04
.set GREEN__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set GREEN__0__OUT_SEL_SHIFT, 4
.set GREEN__0__OUT_SEL_VAL, 3
.set GREEN__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set GREEN__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set GREEN__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set GREEN__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set GREEN__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set GREEN__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set GREEN__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set GREEN__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set GREEN__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set GREEN__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set GREEN__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set GREEN__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set GREEN__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set GREEN__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set GREEN__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set GREEN__0__PC, CYREG_PRT0_PC
.set GREEN__0__PC2, CYREG_PRT0_PC2
.set GREEN__0__PORT, 0
.set GREEN__0__PS, CYREG_PRT0_PS
.set GREEN__0__SHIFT, 2
.set GREEN__DR, CYREG_PRT0_DR
.set GREEN__INTCFG, CYREG_PRT0_INTCFG
.set GREEN__INTSTAT, CYREG_PRT0_INTSTAT
.set GREEN__MASK, 0x04
.set GREEN__PA__CFG0, CYREG_UDB_PA0_CFG0
.set GREEN__PA__CFG1, CYREG_UDB_PA0_CFG1
.set GREEN__PA__CFG10, CYREG_UDB_PA0_CFG10
.set GREEN__PA__CFG11, CYREG_UDB_PA0_CFG11
.set GREEN__PA__CFG12, CYREG_UDB_PA0_CFG12
.set GREEN__PA__CFG13, CYREG_UDB_PA0_CFG13
.set GREEN__PA__CFG14, CYREG_UDB_PA0_CFG14
.set GREEN__PA__CFG2, CYREG_UDB_PA0_CFG2
.set GREEN__PA__CFG3, CYREG_UDB_PA0_CFG3
.set GREEN__PA__CFG4, CYREG_UDB_PA0_CFG4
.set GREEN__PA__CFG5, CYREG_UDB_PA0_CFG5
.set GREEN__PA__CFG6, CYREG_UDB_PA0_CFG6
.set GREEN__PA__CFG7, CYREG_UDB_PA0_CFG7
.set GREEN__PA__CFG8, CYREG_UDB_PA0_CFG8
.set GREEN__PA__CFG9, CYREG_UDB_PA0_CFG9
.set GREEN__PC, CYREG_PRT0_PC
.set GREEN__PC2, CYREG_PRT0_PC2
.set GREEN__PORT, 0
.set GREEN__PS, CYREG_PRT0_PS
.set GREEN__SHIFT, 2

/* BLUE */
.set BLUE__0__DM__MASK, 0xE00
.set BLUE__0__DM__SHIFT, 9
.set BLUE__0__DR, CYREG_PRT0_DR
.set BLUE__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set BLUE__0__HSIOM_MASK, 0x0000F000
.set BLUE__0__HSIOM_SHIFT, 12
.set BLUE__0__INTCFG, CYREG_PRT0_INTCFG
.set BLUE__0__INTSTAT, CYREG_PRT0_INTSTAT
.set BLUE__0__MASK, 0x08
.set BLUE__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set BLUE__0__OUT_SEL_SHIFT, 6
.set BLUE__0__OUT_SEL_VAL, 2
.set BLUE__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set BLUE__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set BLUE__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set BLUE__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set BLUE__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set BLUE__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set BLUE__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set BLUE__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set BLUE__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set BLUE__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set BLUE__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set BLUE__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set BLUE__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set BLUE__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set BLUE__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set BLUE__0__PC, CYREG_PRT0_PC
.set BLUE__0__PC2, CYREG_PRT0_PC2
.set BLUE__0__PORT, 0
.set BLUE__0__PS, CYREG_PRT0_PS
.set BLUE__0__SHIFT, 3
.set BLUE__DR, CYREG_PRT0_DR
.set BLUE__INTCFG, CYREG_PRT0_INTCFG
.set BLUE__INTSTAT, CYREG_PRT0_INTSTAT
.set BLUE__MASK, 0x08
.set BLUE__PA__CFG0, CYREG_UDB_PA0_CFG0
.set BLUE__PA__CFG1, CYREG_UDB_PA0_CFG1
.set BLUE__PA__CFG10, CYREG_UDB_PA0_CFG10
.set BLUE__PA__CFG11, CYREG_UDB_PA0_CFG11
.set BLUE__PA__CFG12, CYREG_UDB_PA0_CFG12
.set BLUE__PA__CFG13, CYREG_UDB_PA0_CFG13
.set BLUE__PA__CFG14, CYREG_UDB_PA0_CFG14
.set BLUE__PA__CFG2, CYREG_UDB_PA0_CFG2
.set BLUE__PA__CFG3, CYREG_UDB_PA0_CFG3
.set BLUE__PA__CFG4, CYREG_UDB_PA0_CFG4
.set BLUE__PA__CFG5, CYREG_UDB_PA0_CFG5
.set BLUE__PA__CFG6, CYREG_UDB_PA0_CFG6
.set BLUE__PA__CFG7, CYREG_UDB_PA0_CFG7
.set BLUE__PA__CFG8, CYREG_UDB_PA0_CFG8
.set BLUE__PA__CFG9, CYREG_UDB_PA0_CFG9
.set BLUE__PC, CYREG_PRT0_PC
.set BLUE__PC2, CYREG_PRT0_PC2
.set BLUE__PORT, 0
.set BLUE__PS, CYREG_PRT0_PS
.set BLUE__SHIFT, 3

/* LED0 */
.set LED0_SyncCtl_ControlReg__0__MASK, 0x01
.set LED0_SyncCtl_ControlReg__0__POS, 0
.set LED0_SyncCtl_ControlReg__1__MASK, 0x02
.set LED0_SyncCtl_ControlReg__1__POS, 1
.set LED0_SyncCtl_ControlReg__2__MASK, 0x04
.set LED0_SyncCtl_ControlReg__2__POS, 2
.set LED0_SyncCtl_ControlReg__CONTROL_AUX_CTL_REG, CYREG_UDB_W8_ACTL_03
.set LED0_SyncCtl_ControlReg__CONTROL_REG, CYREG_UDB_W8_CTL_03
.set LED0_SyncCtl_ControlReg__CONTROL_ST_REG, CYREG_UDB_CAT16_CTL_ST_03
.set LED0_SyncCtl_ControlReg__COUNT_REG, CYREG_UDB_W8_CTL_03
.set LED0_SyncCtl_ControlReg__COUNT_ST_REG, CYREG_UDB_CAT16_CTL_ST_03
.set LED0_SyncCtl_ControlReg__MASK, 0x07
.set LED0_SyncCtl_ControlReg__MASK_CTL_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_03
.set LED0_SyncCtl_ControlReg__PERIOD_REG, CYREG_UDB_W8_MSK_03
.set LED0_SyncCtl_ControlReg__PER_CTL_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_03
.set LED0_sC8_PrISMdp_u0__A0_A1_REG, CYREG_UDB_CAT16_A_03
.set LED0_sC8_PrISMdp_u0__A0_REG, CYREG_UDB_W8_A0_03
.set LED0_sC8_PrISMdp_u0__A1_REG, CYREG_UDB_W8_A1_03
.set LED0_sC8_PrISMdp_u0__D0_D1_REG, CYREG_UDB_CAT16_D_03
.set LED0_sC8_PrISMdp_u0__D0_REG, CYREG_UDB_W8_D0_03
.set LED0_sC8_PrISMdp_u0__D1_REG, CYREG_UDB_W8_D1_03
.set LED0_sC8_PrISMdp_u0__DP_AUX_CTL_REG, CYREG_UDB_W8_ACTL_03
.set LED0_sC8_PrISMdp_u0__F0_F1_REG, CYREG_UDB_CAT16_F_03
.set LED0_sC8_PrISMdp_u0__F0_REG, CYREG_UDB_W8_F0_03
.set LED0_sC8_PrISMdp_u0__F1_REG, CYREG_UDB_W8_F1_03
.set LED0_sC8_PrISMdp_u0__MSK_DP_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_03
.set LED0_sC8_PrISMdp_u0__PER_DP_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_03

/* LED1 */
.set LED1_SyncCtl_ControlReg__0__MASK, 0x01
.set LED1_SyncCtl_ControlReg__0__POS, 0
.set LED1_SyncCtl_ControlReg__16BIT_CONTROL_AUX_CTL_REG, CYREG_UDB_W16_ACTL_02
.set LED1_SyncCtl_ControlReg__16BIT_CONTROL_CONTROL_REG, CYREG_UDB_W16_CTL_02
.set LED1_SyncCtl_ControlReg__16BIT_CONTROL_COUNT_REG, CYREG_UDB_W16_CTL_02
.set LED1_SyncCtl_ControlReg__16BIT_COUNT_CONTROL_REG, CYREG_UDB_W16_CTL_02
.set LED1_SyncCtl_ControlReg__16BIT_COUNT_COUNT_REG, CYREG_UDB_W16_CTL_02
.set LED1_SyncCtl_ControlReg__16BIT_MASK_MASK_REG, CYREG_UDB_W16_MSK_02
.set LED1_SyncCtl_ControlReg__16BIT_MASK_PERIOD_REG, CYREG_UDB_W16_MSK_02
.set LED1_SyncCtl_ControlReg__16BIT_PERIOD_MASK_REG, CYREG_UDB_W16_MSK_02
.set LED1_SyncCtl_ControlReg__16BIT_PERIOD_PERIOD_REG, CYREG_UDB_W16_MSK_02
.set LED1_SyncCtl_ControlReg__1__MASK, 0x02
.set LED1_SyncCtl_ControlReg__1__POS, 1
.set LED1_SyncCtl_ControlReg__CONTROL_AUX_CTL_REG, CYREG_UDB_W8_ACTL_02
.set LED1_SyncCtl_ControlReg__CONTROL_REG, CYREG_UDB_W8_CTL_02
.set LED1_SyncCtl_ControlReg__CONTROL_ST_REG, CYREG_UDB_CAT16_CTL_ST_02
.set LED1_SyncCtl_ControlReg__COUNT_REG, CYREG_UDB_W8_CTL_02
.set LED1_SyncCtl_ControlReg__COUNT_ST_REG, CYREG_UDB_CAT16_CTL_ST_02
.set LED1_SyncCtl_ControlReg__MASK, 0x03
.set LED1_SyncCtl_ControlReg__MASK_CTL_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_02
.set LED1_SyncCtl_ControlReg__PERIOD_REG, CYREG_UDB_W8_MSK_02
.set LED1_SyncCtl_ControlReg__PER_CTL_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_02
.set LED1_sC8_PrISMdp_u0__16BIT_A0_REG, CYREG_UDB_W16_A0_02
.set LED1_sC8_PrISMdp_u0__16BIT_A1_REG, CYREG_UDB_W16_A1_02
.set LED1_sC8_PrISMdp_u0__16BIT_D0_REG, CYREG_UDB_W16_D0_02
.set LED1_sC8_PrISMdp_u0__16BIT_D1_REG, CYREG_UDB_W16_D1_02
.set LED1_sC8_PrISMdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_UDB_W16_ACTL_02
.set LED1_sC8_PrISMdp_u0__16BIT_F0_REG, CYREG_UDB_W16_F0_02
.set LED1_sC8_PrISMdp_u0__16BIT_F1_REG, CYREG_UDB_W16_F1_02
.set LED1_sC8_PrISMdp_u0__A0_A1_REG, CYREG_UDB_CAT16_A_02
.set LED1_sC8_PrISMdp_u0__A0_REG, CYREG_UDB_W8_A0_02
.set LED1_sC8_PrISMdp_u0__A1_REG, CYREG_UDB_W8_A1_02
.set LED1_sC8_PrISMdp_u0__D0_D1_REG, CYREG_UDB_CAT16_D_02
.set LED1_sC8_PrISMdp_u0__D0_REG, CYREG_UDB_W8_D0_02
.set LED1_sC8_PrISMdp_u0__D1_REG, CYREG_UDB_W8_D1_02
.set LED1_sC8_PrISMdp_u0__DP_AUX_CTL_REG, CYREG_UDB_W8_ACTL_02
.set LED1_sC8_PrISMdp_u0__F0_F1_REG, CYREG_UDB_CAT16_F_02
.set LED1_sC8_PrISMdp_u0__F0_REG, CYREG_UDB_W8_F0_02
.set LED1_sC8_PrISMdp_u0__F1_REG, CYREG_UDB_W8_F1_02
.set LED1_sC8_PrISMdp_u0__MSK_DP_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_02
.set LED1_sC8_PrISMdp_u0__PER_DP_AUX_CTL_REG, CYREG_UDB_CAT16_ACTL_MSK_02

/* SDCS */
.set SDCS__0__DM__MASK, 0x07
.set SDCS__0__DM__SHIFT, 0
.set SDCS__0__DR, CYREG_PRT0_DR
.set SDCS__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set SDCS__0__HSIOM_MASK, 0x0000000F
.set SDCS__0__HSIOM_SHIFT, 0
.set SDCS__0__INTCFG, CYREG_PRT0_INTCFG
.set SDCS__0__INTSTAT, CYREG_PRT0_INTSTAT
.set SDCS__0__MASK, 0x01
.set SDCS__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set SDCS__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set SDCS__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set SDCS__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set SDCS__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set SDCS__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set SDCS__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set SDCS__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set SDCS__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set SDCS__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set SDCS__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set SDCS__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set SDCS__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set SDCS__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set SDCS__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set SDCS__0__PC, CYREG_PRT0_PC
.set SDCS__0__PC2, CYREG_PRT0_PC2
.set SDCS__0__PORT, 0
.set SDCS__0__PS, CYREG_PRT0_PS
.set SDCS__0__SHIFT, 0
.set SDCS__DR, CYREG_PRT0_DR
.set SDCS__INTCFG, CYREG_PRT0_INTCFG
.set SDCS__INTSTAT, CYREG_PRT0_INTSTAT
.set SDCS__MASK, 0x01
.set SDCS__PA__CFG0, CYREG_UDB_PA0_CFG0
.set SDCS__PA__CFG1, CYREG_UDB_PA0_CFG1
.set SDCS__PA__CFG10, CYREG_UDB_PA0_CFG10
.set SDCS__PA__CFG11, CYREG_UDB_PA0_CFG11
.set SDCS__PA__CFG12, CYREG_UDB_PA0_CFG12
.set SDCS__PA__CFG13, CYREG_UDB_PA0_CFG13
.set SDCS__PA__CFG14, CYREG_UDB_PA0_CFG14
.set SDCS__PA__CFG2, CYREG_UDB_PA0_CFG2
.set SDCS__PA__CFG3, CYREG_UDB_PA0_CFG3
.set SDCS__PA__CFG4, CYREG_UDB_PA0_CFG4
.set SDCS__PA__CFG5, CYREG_UDB_PA0_CFG5
.set SDCS__PA__CFG6, CYREG_UDB_PA0_CFG6
.set SDCS__PA__CFG7, CYREG_UDB_PA0_CFG7
.set SDCS__PA__CFG8, CYREG_UDB_PA0_CFG8
.set SDCS__PA__CFG9, CYREG_UDB_PA0_CFG9
.set SDCS__PC, CYREG_PRT0_PC
.set SDCS__PC2, CYREG_PRT0_PC2
.set SDCS__PORT, 0
.set SDCS__PS, CYREG_PRT0_PS
.set SDCS__SHIFT, 0

/* RED */
.set RED__0__DM__MASK, 0x1C0000
.set RED__0__DM__SHIFT, 18
.set RED__0__DR, CYREG_PRT1_DR
.set RED__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set RED__0__HSIOM_MASK, 0x0F000000
.set RED__0__HSIOM_SHIFT, 24
.set RED__0__INTCFG, CYREG_PRT1_INTCFG
.set RED__0__INTSTAT, CYREG_PRT1_INTSTAT
.set RED__0__MASK, 0x40
.set RED__0__OUT_SEL, CYREG_UDB_PA1_CFG10
.set RED__0__OUT_SEL_SHIFT, 12
.set RED__0__OUT_SEL_VAL, 2
.set RED__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set RED__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set RED__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set RED__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set RED__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set RED__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set RED__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set RED__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set RED__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set RED__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set RED__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set RED__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set RED__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set RED__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set RED__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set RED__0__PC, CYREG_PRT1_PC
.set RED__0__PC2, CYREG_PRT1_PC2
.set RED__0__PORT, 1
.set RED__0__PS, CYREG_PRT1_PS
.set RED__0__SHIFT, 6
.set RED__DR, CYREG_PRT1_DR
.set RED__INTCFG, CYREG_PRT1_INTCFG
.set RED__INTSTAT, CYREG_PRT1_INTSTAT
.set RED__MASK, 0x40
.set RED__PA__CFG0, CYREG_UDB_PA1_CFG0
.set RED__PA__CFG1, CYREG_UDB_PA1_CFG1
.set RED__PA__CFG10, CYREG_UDB_PA1_CFG10
.set RED__PA__CFG11, CYREG_UDB_PA1_CFG11
.set RED__PA__CFG12, CYREG_UDB_PA1_CFG12
.set RED__PA__CFG13, CYREG_UDB_PA1_CFG13
.set RED__PA__CFG14, CYREG_UDB_PA1_CFG14
.set RED__PA__CFG2, CYREG_UDB_PA1_CFG2
.set RED__PA__CFG3, CYREG_UDB_PA1_CFG3
.set RED__PA__CFG4, CYREG_UDB_PA1_CFG4
.set RED__PA__CFG5, CYREG_UDB_PA1_CFG5
.set RED__PA__CFG6, CYREG_UDB_PA1_CFG6
.set RED__PA__CFG7, CYREG_UDB_PA1_CFG7
.set RED__PA__CFG8, CYREG_UDB_PA1_CFG8
.set RED__PA__CFG9, CYREG_UDB_PA1_CFG9
.set RED__PC, CYREG_PRT1_PC
.set RED__PC2, CYREG_PRT1_PC2
.set RED__PORT, 1
.set RED__PS, CYREG_PRT1_PS
.set RED__SHIFT, 6

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_MEMBER_4A, 2
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_DIE_PSOC4A, 2
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_DIE_PSOC4A
.set CYDEV_BCLK__HFCLK__HZ, 48000000
.set CYDEV_BCLK__HFCLK__KHZ, 48000
.set CYDEV_BCLK__HFCLK__MHZ, 48
.set CYDEV_BCLK__SYSCLK__HZ, 48000000
.set CYDEV_BCLK__SYSCLK__KHZ, 48000
.set CYDEV_BCLK__SYSCLK__MHZ, 48
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 3
.set CYDEV_CHIP_DIE_PSOC5LP, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x04C81193
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 4
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4A
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4A_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REV_PSOC4A_PRODUCTION
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_HEAP_SIZE, 0x0100
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0400
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif