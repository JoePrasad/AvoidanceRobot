#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* PWM_1_PWMUDB */
#define PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB05_06_ACTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB05_06_CTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB05_06_CTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB05_06_CTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_B1_UDB05_06_CTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG CYREG_B1_UDB05_06_MSK
#define PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_B1_UDB05_06_MSK
#define PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_B1_UDB05_06_MSK
#define PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB05_06_MSK
#define PWM_1_PWMUDB_genblk1_ctrlreg__7__MASK 0x80u
#define PWM_1_PWMUDB_genblk1_ctrlreg__7__POS 7
#define PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG CYREG_B1_UDB05_ACTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_REG CYREG_B1_UDB05_CTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG CYREG_B1_UDB05_ST_CTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_REG CYREG_B1_UDB05_CTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG CYREG_B1_UDB05_ST_CTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__MASK 0x80u
#define PWM_1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB05_MSK_ACTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_B1_UDB05_MSK_ACTL
#define PWM_1_PWMUDB_genblk1_ctrlreg__PERIOD_REG CYREG_B1_UDB05_MSK
#define PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG CYREG_B1_UDB05_06_A0
#define PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG CYREG_B1_UDB05_06_A1
#define PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG CYREG_B1_UDB05_06_D0
#define PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG CYREG_B1_UDB05_06_D1
#define PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB05_06_ACTL
#define PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG CYREG_B1_UDB05_06_F0
#define PWM_1_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG CYREG_B1_UDB05_06_F1
#define PWM_1_PWMUDB_sP8_pwmdp_u0__A0_A1_REG CYREG_B1_UDB05_A0_A1
#define PWM_1_PWMUDB_sP8_pwmdp_u0__A0_REG CYREG_B1_UDB05_A0
#define PWM_1_PWMUDB_sP8_pwmdp_u0__A1_REG CYREG_B1_UDB05_A1
#define PWM_1_PWMUDB_sP8_pwmdp_u0__D0_D1_REG CYREG_B1_UDB05_D0_D1
#define PWM_1_PWMUDB_sP8_pwmdp_u0__D0_REG CYREG_B1_UDB05_D0
#define PWM_1_PWMUDB_sP8_pwmdp_u0__D1_REG CYREG_B1_UDB05_D1
#define PWM_1_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG CYREG_B1_UDB05_ACTL
#define PWM_1_PWMUDB_sP8_pwmdp_u0__F0_F1_REG CYREG_B1_UDB05_F0_F1
#define PWM_1_PWMUDB_sP8_pwmdp_u0__F0_REG CYREG_B1_UDB05_F0
#define PWM_1_PWMUDB_sP8_pwmdp_u0__F1_REG CYREG_B1_UDB05_F1
#define PWM_1_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_B1_UDB05_MSK_ACTL
#define PWM_1_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_B1_UDB05_MSK_ACTL

/* PWM_2_PWMUDB */
#define PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB04_05_CTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB04_05_CTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB04_05_CTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_B1_UDB04_05_CTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG CYREG_B1_UDB04_05_MSK
#define PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_B1_UDB04_05_MSK
#define PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_B1_UDB04_05_MSK
#define PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB04_05_MSK
#define PWM_2_PWMUDB_genblk1_ctrlreg__7__MASK 0x80u
#define PWM_2_PWMUDB_genblk1_ctrlreg__7__POS 7
#define PWM_2_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__CONTROL_REG CYREG_B1_UDB04_CTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG CYREG_B1_UDB04_ST_CTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__COUNT_REG CYREG_B1_UDB04_CTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG CYREG_B1_UDB04_ST_CTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__MASK 0x80u
#define PWM_2_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define PWM_2_PWMUDB_genblk1_ctrlreg__PERIOD_REG CYREG_B1_UDB04_MSK
#define PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG CYREG_B1_UDB04_05_A0
#define PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG CYREG_B1_UDB04_05_A1
#define PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG CYREG_B1_UDB04_05_D0
#define PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG CYREG_B1_UDB04_05_D1
#define PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG CYREG_B1_UDB04_05_F0
#define PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG CYREG_B1_UDB04_05_F1
#define PWM_2_PWMUDB_sP8_pwmdp_u0__A0_A1_REG CYREG_B1_UDB04_A0_A1
#define PWM_2_PWMUDB_sP8_pwmdp_u0__A0_REG CYREG_B1_UDB04_A0
#define PWM_2_PWMUDB_sP8_pwmdp_u0__A1_REG CYREG_B1_UDB04_A1
#define PWM_2_PWMUDB_sP8_pwmdp_u0__D0_D1_REG CYREG_B1_UDB04_D0_D1
#define PWM_2_PWMUDB_sP8_pwmdp_u0__D0_REG CYREG_B1_UDB04_D0
#define PWM_2_PWMUDB_sP8_pwmdp_u0__D1_REG CYREG_B1_UDB04_D1
#define PWM_2_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define PWM_2_PWMUDB_sP8_pwmdp_u0__F0_F1_REG CYREG_B1_UDB04_F0_F1
#define PWM_2_PWMUDB_sP8_pwmdp_u0__F0_REG CYREG_B1_UDB04_F0
#define PWM_2_PWMUDB_sP8_pwmdp_u0__F1_REG CYREG_B1_UDB04_F1
#define PWM_2_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define PWM_2_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL

/* Pin_1 */
#define Pin_1__0__INTTYPE CYREG_PICU3_INTTYPE3
#define Pin_1__0__MASK 0x08u
#define Pin_1__0__PC CYREG_PRT3_PC3
#define Pin_1__0__PORT 3u
#define Pin_1__0__SHIFT 3u
#define Pin_1__AG CYREG_PRT3_AG
#define Pin_1__AMUX CYREG_PRT3_AMUX
#define Pin_1__BIE CYREG_PRT3_BIE
#define Pin_1__BIT_MASK CYREG_PRT3_BIT_MASK
#define Pin_1__BYP CYREG_PRT3_BYP
#define Pin_1__CTL CYREG_PRT3_CTL
#define Pin_1__DM0 CYREG_PRT3_DM0
#define Pin_1__DM1 CYREG_PRT3_DM1
#define Pin_1__DM2 CYREG_PRT3_DM2
#define Pin_1__DR CYREG_PRT3_DR
#define Pin_1__INP_DIS CYREG_PRT3_INP_DIS
#define Pin_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Pin_1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Pin_1__LCD_EN CYREG_PRT3_LCD_EN
#define Pin_1__MASK 0x08u
#define Pin_1__PORT 3u
#define Pin_1__PRT CYREG_PRT3_PRT
#define Pin_1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Pin_1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Pin_1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Pin_1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Pin_1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Pin_1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Pin_1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Pin_1__PS CYREG_PRT3_PS
#define Pin_1__SHIFT 3u
#define Pin_1__SLW CYREG_PRT3_SLW

/* Pin_2 */
#define Pin_2__0__INTTYPE CYREG_PICU3_INTTYPE4
#define Pin_2__0__MASK 0x10u
#define Pin_2__0__PC CYREG_PRT3_PC4
#define Pin_2__0__PORT 3u
#define Pin_2__0__SHIFT 4u
#define Pin_2__AG CYREG_PRT3_AG
#define Pin_2__AMUX CYREG_PRT3_AMUX
#define Pin_2__BIE CYREG_PRT3_BIE
#define Pin_2__BIT_MASK CYREG_PRT3_BIT_MASK
#define Pin_2__BYP CYREG_PRT3_BYP
#define Pin_2__CTL CYREG_PRT3_CTL
#define Pin_2__DM0 CYREG_PRT3_DM0
#define Pin_2__DM1 CYREG_PRT3_DM1
#define Pin_2__DM2 CYREG_PRT3_DM2
#define Pin_2__DR CYREG_PRT3_DR
#define Pin_2__INP_DIS CYREG_PRT3_INP_DIS
#define Pin_2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Pin_2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Pin_2__LCD_EN CYREG_PRT3_LCD_EN
#define Pin_2__MASK 0x10u
#define Pin_2__PORT 3u
#define Pin_2__PRT CYREG_PRT3_PRT
#define Pin_2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Pin_2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Pin_2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Pin_2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Pin_2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Pin_2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Pin_2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Pin_2__PS CYREG_PRT3_PS
#define Pin_2__SHIFT 4u
#define Pin_2__SLW CYREG_PRT3_SLW

/* Pin_3 */
#define Pin_3__0__INTTYPE CYREG_PICU3_INTTYPE5
#define Pin_3__0__MASK 0x20u
#define Pin_3__0__PC CYREG_PRT3_PC5
#define Pin_3__0__PORT 3u
#define Pin_3__0__SHIFT 5u
#define Pin_3__AG CYREG_PRT3_AG
#define Pin_3__AMUX CYREG_PRT3_AMUX
#define Pin_3__BIE CYREG_PRT3_BIE
#define Pin_3__BIT_MASK CYREG_PRT3_BIT_MASK
#define Pin_3__BYP CYREG_PRT3_BYP
#define Pin_3__CTL CYREG_PRT3_CTL
#define Pin_3__DM0 CYREG_PRT3_DM0
#define Pin_3__DM1 CYREG_PRT3_DM1
#define Pin_3__DM2 CYREG_PRT3_DM2
#define Pin_3__DR CYREG_PRT3_DR
#define Pin_3__INP_DIS CYREG_PRT3_INP_DIS
#define Pin_3__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Pin_3__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Pin_3__LCD_EN CYREG_PRT3_LCD_EN
#define Pin_3__MASK 0x20u
#define Pin_3__PORT 3u
#define Pin_3__PRT CYREG_PRT3_PRT
#define Pin_3__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Pin_3__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Pin_3__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Pin_3__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Pin_3__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Pin_3__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Pin_3__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Pin_3__PS CYREG_PRT3_PS
#define Pin_3__SHIFT 5u
#define Pin_3__SLW CYREG_PRT3_SLW

/* Pin_4 */
#define Pin_4__0__INTTYPE CYREG_PICU3_INTTYPE6
#define Pin_4__0__MASK 0x40u
#define Pin_4__0__PC CYREG_PRT3_PC6
#define Pin_4__0__PORT 3u
#define Pin_4__0__SHIFT 6u
#define Pin_4__AG CYREG_PRT3_AG
#define Pin_4__AMUX CYREG_PRT3_AMUX
#define Pin_4__BIE CYREG_PRT3_BIE
#define Pin_4__BIT_MASK CYREG_PRT3_BIT_MASK
#define Pin_4__BYP CYREG_PRT3_BYP
#define Pin_4__CTL CYREG_PRT3_CTL
#define Pin_4__DM0 CYREG_PRT3_DM0
#define Pin_4__DM1 CYREG_PRT3_DM1
#define Pin_4__DM2 CYREG_PRT3_DM2
#define Pin_4__DR CYREG_PRT3_DR
#define Pin_4__INP_DIS CYREG_PRT3_INP_DIS
#define Pin_4__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Pin_4__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Pin_4__LCD_EN CYREG_PRT3_LCD_EN
#define Pin_4__MASK 0x40u
#define Pin_4__PORT 3u
#define Pin_4__PRT CYREG_PRT3_PRT
#define Pin_4__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Pin_4__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Pin_4__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Pin_4__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Pin_4__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Pin_4__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Pin_4__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Pin_4__PS CYREG_PRT3_PS
#define Pin_4__SHIFT 6u
#define Pin_4__SLW CYREG_PRT3_SLW

/* Pin_5 */
#define Pin_5__0__INTTYPE CYREG_PICU3_INTTYPE7
#define Pin_5__0__MASK 0x80u
#define Pin_5__0__PC CYREG_PRT3_PC7
#define Pin_5__0__PORT 3u
#define Pin_5__0__SHIFT 7u
#define Pin_5__AG CYREG_PRT3_AG
#define Pin_5__AMUX CYREG_PRT3_AMUX
#define Pin_5__BIE CYREG_PRT3_BIE
#define Pin_5__BIT_MASK CYREG_PRT3_BIT_MASK
#define Pin_5__BYP CYREG_PRT3_BYP
#define Pin_5__CTL CYREG_PRT3_CTL
#define Pin_5__DM0 CYREG_PRT3_DM0
#define Pin_5__DM1 CYREG_PRT3_DM1
#define Pin_5__DM2 CYREG_PRT3_DM2
#define Pin_5__DR CYREG_PRT3_DR
#define Pin_5__INP_DIS CYREG_PRT3_INP_DIS
#define Pin_5__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Pin_5__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Pin_5__LCD_EN CYREG_PRT3_LCD_EN
#define Pin_5__MASK 0x80u
#define Pin_5__PORT 3u
#define Pin_5__PRT CYREG_PRT3_PRT
#define Pin_5__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Pin_5__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Pin_5__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Pin_5__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Pin_5__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Pin_5__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Pin_5__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Pin_5__PS CYREG_PRT3_PS
#define Pin_5__SHIFT 7u
#define Pin_5__SLW CYREG_PRT3_SLW

/* Pin_6 */
#define Pin_6__0__INTTYPE CYREG_PICU15_INTTYPE0
#define Pin_6__0__MASK 0x01u
#define Pin_6__0__PC CYREG_IO_PC_PRT15_PC0
#define Pin_6__0__PORT 15u
#define Pin_6__0__SHIFT 0u
#define Pin_6__AG CYREG_PRT15_AG
#define Pin_6__AMUX CYREG_PRT15_AMUX
#define Pin_6__BIE CYREG_PRT15_BIE
#define Pin_6__BIT_MASK CYREG_PRT15_BIT_MASK
#define Pin_6__BYP CYREG_PRT15_BYP
#define Pin_6__CTL CYREG_PRT15_CTL
#define Pin_6__DM0 CYREG_PRT15_DM0
#define Pin_6__DM1 CYREG_PRT15_DM1
#define Pin_6__DM2 CYREG_PRT15_DM2
#define Pin_6__DR CYREG_PRT15_DR
#define Pin_6__INP_DIS CYREG_PRT15_INP_DIS
#define Pin_6__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define Pin_6__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define Pin_6__LCD_EN CYREG_PRT15_LCD_EN
#define Pin_6__MASK 0x01u
#define Pin_6__PORT 15u
#define Pin_6__PRT CYREG_PRT15_PRT
#define Pin_6__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define Pin_6__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define Pin_6__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define Pin_6__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define Pin_6__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define Pin_6__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define Pin_6__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define Pin_6__PS CYREG_PRT15_PS
#define Pin_6__SHIFT 0u
#define Pin_6__SLW CYREG_PRT15_SLW

/* isr_1 */
#define isr_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_1__INTC_MASK 0x10u
#define isr_1__INTC_NUMBER 4u
#define isr_1__INTC_PRIOR_NUM 7u
#define isr_1__INTC_PRIOR_REG CYREG_NVIC_PRI_4
#define isr_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__INDEX 0x01u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_1__PM_ACT_MSK 0x02u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_1__PM_STBY_MSK 0x02u

/* Clock_2 */
#define Clock_2__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define Clock_2__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define Clock_2__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define Clock_2__CFG2_SRC_SEL_MASK 0x07u
#define Clock_2__INDEX 0x00u
#define Clock_2__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_2__PM_ACT_MSK 0x01u
#define Clock_2__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_2__PM_STBY_MSK 0x01u

/* LED_pin */
#define LED_pin__0__INTTYPE CYREG_PICU2_INTTYPE1
#define LED_pin__0__MASK 0x02u
#define LED_pin__0__PC CYREG_PRT2_PC1
#define LED_pin__0__PORT 2u
#define LED_pin__0__SHIFT 1u
#define LED_pin__AG CYREG_PRT2_AG
#define LED_pin__AMUX CYREG_PRT2_AMUX
#define LED_pin__BIE CYREG_PRT2_BIE
#define LED_pin__BIT_MASK CYREG_PRT2_BIT_MASK
#define LED_pin__BYP CYREG_PRT2_BYP
#define LED_pin__CTL CYREG_PRT2_CTL
#define LED_pin__DM0 CYREG_PRT2_DM0
#define LED_pin__DM1 CYREG_PRT2_DM1
#define LED_pin__DM2 CYREG_PRT2_DM2
#define LED_pin__DR CYREG_PRT2_DR
#define LED_pin__INP_DIS CYREG_PRT2_INP_DIS
#define LED_pin__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define LED_pin__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LED_pin__LCD_EN CYREG_PRT2_LCD_EN
#define LED_pin__MASK 0x02u
#define LED_pin__PORT 2u
#define LED_pin__PRT CYREG_PRT2_PRT
#define LED_pin__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LED_pin__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LED_pin__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LED_pin__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LED_pin__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LED_pin__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LED_pin__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LED_pin__PS CYREG_PRT2_PS
#define LED_pin__SHIFT 1u
#define LED_pin__SLW CYREG_PRT2_SLW

/* GPIO_PSOC1_In */
#define GPIO_PSOC1_In__0__INTTYPE CYREG_PICU0_INTTYPE5
#define GPIO_PSOC1_In__0__MASK 0x20u
#define GPIO_PSOC1_In__0__PC CYREG_PRT0_PC5
#define GPIO_PSOC1_In__0__PORT 0u
#define GPIO_PSOC1_In__0__SHIFT 5u
#define GPIO_PSOC1_In__AG CYREG_PRT0_AG
#define GPIO_PSOC1_In__AMUX CYREG_PRT0_AMUX
#define GPIO_PSOC1_In__BIE CYREG_PRT0_BIE
#define GPIO_PSOC1_In__BIT_MASK CYREG_PRT0_BIT_MASK
#define GPIO_PSOC1_In__BYP CYREG_PRT0_BYP
#define GPIO_PSOC1_In__CTL CYREG_PRT0_CTL
#define GPIO_PSOC1_In__DM0 CYREG_PRT0_DM0
#define GPIO_PSOC1_In__DM1 CYREG_PRT0_DM1
#define GPIO_PSOC1_In__DM2 CYREG_PRT0_DM2
#define GPIO_PSOC1_In__DR CYREG_PRT0_DR
#define GPIO_PSOC1_In__INP_DIS CYREG_PRT0_INP_DIS
#define GPIO_PSOC1_In__INTSTAT CYREG_PICU0_INTSTAT
#define GPIO_PSOC1_In__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define GPIO_PSOC1_In__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define GPIO_PSOC1_In__LCD_EN CYREG_PRT0_LCD_EN
#define GPIO_PSOC1_In__MASK 0x20u
#define GPIO_PSOC1_In__PORT 0u
#define GPIO_PSOC1_In__PRT CYREG_PRT0_PRT
#define GPIO_PSOC1_In__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define GPIO_PSOC1_In__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define GPIO_PSOC1_In__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define GPIO_PSOC1_In__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define GPIO_PSOC1_In__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define GPIO_PSOC1_In__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define GPIO_PSOC1_In__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define GPIO_PSOC1_In__PS CYREG_PRT0_PS
#define GPIO_PSOC1_In__SHIFT 5u
#define GPIO_PSOC1_In__SLW CYREG_PRT0_SLW
#define GPIO_PSOC1_In__SNAP CYREG_PICU0_SNAP

/* GPIO_PSOC1_Out */
#define GPIO_PSOC1_Out__0__INTTYPE CYREG_PICU0_INTTYPE1
#define GPIO_PSOC1_Out__0__MASK 0x02u
#define GPIO_PSOC1_Out__0__PC CYREG_PRT0_PC1
#define GPIO_PSOC1_Out__0__PORT 0u
#define GPIO_PSOC1_Out__0__SHIFT 1u
#define GPIO_PSOC1_Out__AG CYREG_PRT0_AG
#define GPIO_PSOC1_Out__AMUX CYREG_PRT0_AMUX
#define GPIO_PSOC1_Out__BIE CYREG_PRT0_BIE
#define GPIO_PSOC1_Out__BIT_MASK CYREG_PRT0_BIT_MASK
#define GPIO_PSOC1_Out__BYP CYREG_PRT0_BYP
#define GPIO_PSOC1_Out__CTL CYREG_PRT0_CTL
#define GPIO_PSOC1_Out__DM0 CYREG_PRT0_DM0
#define GPIO_PSOC1_Out__DM1 CYREG_PRT0_DM1
#define GPIO_PSOC1_Out__DM2 CYREG_PRT0_DM2
#define GPIO_PSOC1_Out__DR CYREG_PRT0_DR
#define GPIO_PSOC1_Out__INP_DIS CYREG_PRT0_INP_DIS
#define GPIO_PSOC1_Out__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define GPIO_PSOC1_Out__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define GPIO_PSOC1_Out__LCD_EN CYREG_PRT0_LCD_EN
#define GPIO_PSOC1_Out__MASK 0x02u
#define GPIO_PSOC1_Out__PORT 0u
#define GPIO_PSOC1_Out__PRT CYREG_PRT0_PRT
#define GPIO_PSOC1_Out__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define GPIO_PSOC1_Out__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define GPIO_PSOC1_Out__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define GPIO_PSOC1_Out__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define GPIO_PSOC1_Out__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define GPIO_PSOC1_Out__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define GPIO_PSOC1_Out__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define GPIO_PSOC1_Out__PS CYREG_PRT0_PS
#define GPIO_PSOC1_Out__SHIFT 1u
#define GPIO_PSOC1_Out__SLW CYREG_PRT0_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "Final project"
#define CY_VERSION "PSoC Creator  4.0"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 12u
#define CYDEV_CHIP_DIE_PSOC5LP 19u
#define CYDEV_CHIP_DIE_PSOC5TM 20u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 4u
#define CYDEV_CHIP_FAMILY_FM3 5u
#define CYDEV_CHIP_FAMILY_FM4 6u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 12u
#define CYDEV_CHIP_MEMBER_4C 18u
#define CYDEV_CHIP_MEMBER_4D 8u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 13u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 11u
#define CYDEV_CHIP_MEMBER_4I 17u
#define CYDEV_CHIP_MEMBER_4J 9u
#define CYDEV_CHIP_MEMBER_4K 10u
#define CYDEV_CHIP_MEMBER_4L 16u
#define CYDEV_CHIP_MEMBER_4M 15u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4P 14u
#define CYDEV_CHIP_MEMBER_4Q 7u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 20u
#define CYDEV_CHIP_MEMBER_5B 19u
#define CYDEV_CHIP_MEMBER_FM3 24u
#define CYDEV_CHIP_MEMBER_FM4 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 21u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 22u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 23u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
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
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
