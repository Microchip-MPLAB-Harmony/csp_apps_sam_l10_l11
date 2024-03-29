/*
 * Component description for FUSES
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2023-04-12T14:18:55Z */
#ifndef _SAML11_FUSES_COMPONENT_H_
#define _SAML11_FUSES_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FUSES                                        */
/* ************************************************************************** */

/* -------- FUSES_SW_CALIB_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) SW_CALIB Page Word 0 -------- */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF_Pos _UINT32_(0)                                          /* (FUSES_SW_CALIB_WORD_0) ADC Bias Reference Buffer Scaling Position */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF_Msk (_UINT32_(0x7) << FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF_Pos) /* (FUSES_SW_CALIB_WORD_0) ADC Bias Reference Buffer Scaling Mask */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF(value) (FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_ADC_BIASREFBUF_Pos)) /* Assigment of value for ADC_BIASREFBUF in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP_Pos _UINT32_(3)                                          /* (FUSES_SW_CALIB_WORD_0) ADC Comparator Scaling Position */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP_Msk (_UINT32_(0x7) << FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP_Pos) /* (FUSES_SW_CALIB_WORD_0) ADC Comparator Scaling Mask */
#define FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP(value) (FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_ADC_BIASCOMP_Pos)) /* Assigment of value for ADC_BIASCOMP in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0_Pos _UINT32_(6)                                          /* (FUSES_SW_CALIB_WORD_0) DFLLULP DIV at PL0 Position */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0_Msk (_UINT32_(0x7) << FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0_Pos) /* (FUSES_SW_CALIB_WORD_0) DFLLULP DIV at PL0 Mask */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0(value) (FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL0_Pos)) /* Assigment of value for DFLLULP_DIV_PL0 in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2_Pos _UINT32_(9)                                          /* (FUSES_SW_CALIB_WORD_0) DFLLULP DIV at PL2 Position */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2_Msk (_UINT32_(0x7) << FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2_Pos) /* (FUSES_SW_CALIB_WORD_0) DFLLULP DIV at PL2 Mask */
#define FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2(value) (FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2_Msk & (_UINT32_(value) << FUSES_SW_CALIB_WORD_0_DFLLULP_DIV_PL2_Pos)) /* Assigment of value for DFLLULP_DIV_PL2 in the FUSES_SW_CALIB_WORD_0 register */
#define FUSES_SW_CALIB_WORD_0_Msk             _UINT32_(0x00000FFF)                                 /* (FUSES_SW_CALIB_WORD_0) Register Mask  */


/* -------- FUSES_TEMP_LOG_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) TEMP_LOG Page Word 0 -------- */
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT_Pos _UINT32_(0)                                          /* (FUSES_TEMP_LOG_WORD_0) Integer part of room temperature in oC Position */
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT_Msk (_UINT32_(0xFF) << FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT_Pos) /* (FUSES_TEMP_LOG_WORD_0) Integer part of room temperature in oC Mask */
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT(value) (FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT_Msk & (_UINT32_(value) << FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_INT_Pos)) /* Assigment of value for ROOM_TEMP_VAL_INT in the FUSES_TEMP_LOG_WORD_0 register */
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC_Pos _UINT32_(8)                                          /* (FUSES_TEMP_LOG_WORD_0) Decimal part of room temperature Position */
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC_Msk (_UINT32_(0xF) << FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC_Pos) /* (FUSES_TEMP_LOG_WORD_0) Decimal part of room temperature Mask */
#define FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC(value) (FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC_Msk & (_UINT32_(value) << FUSES_TEMP_LOG_WORD_0_ROOM_TEMP_VAL_DEC_Pos)) /* Assigment of value for ROOM_TEMP_VAL_DEC in the FUSES_TEMP_LOG_WORD_0 register */
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT_Pos _UINT32_(12)                                         /* (FUSES_TEMP_LOG_WORD_0) Integer part of hot temperature in oC Position */
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT_Msk (_UINT32_(0xFF) << FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT_Pos) /* (FUSES_TEMP_LOG_WORD_0) Integer part of hot temperature in oC Mask */
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT(value) (FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT_Msk & (_UINT32_(value) << FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_INT_Pos)) /* Assigment of value for HOT_TEMP_VAL_INT in the FUSES_TEMP_LOG_WORD_0 register */
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC_Pos _UINT32_(20)                                         /* (FUSES_TEMP_LOG_WORD_0) Decimal part of hot temperature Position */
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC_Msk (_UINT32_(0xF) << FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC_Pos) /* (FUSES_TEMP_LOG_WORD_0) Decimal part of hot temperature Mask */
#define FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC(value) (FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC_Msk & (_UINT32_(value) << FUSES_TEMP_LOG_WORD_0_HOT_TEMP_VAL_DEC_Pos)) /* Assigment of value for HOT_TEMP_VAL_DEC in the FUSES_TEMP_LOG_WORD_0 register */
#define FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL_Pos _UINT32_(24)                                         /* (FUSES_TEMP_LOG_WORD_0) 2's complement of the internal 1V reference drift at room temperature (versus a 1.0 centered value) Position */
#define FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL_Msk (_UINT32_(0xFF) << FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL_Pos) /* (FUSES_TEMP_LOG_WORD_0) 2's complement of the internal 1V reference drift at room temperature (versus a 1.0 centered value) Mask */
#define FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL(value) (FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL_Msk & (_UINT32_(value) << FUSES_TEMP_LOG_WORD_0_ROOM_INT1V_VAL_Pos)) /* Assigment of value for ROOM_INT1V_VAL in the FUSES_TEMP_LOG_WORD_0 register */
#define FUSES_TEMP_LOG_WORD_0_Msk             _UINT32_(0xFFFFFFFF)                                 /* (FUSES_TEMP_LOG_WORD_0) Register Mask  */


/* -------- FUSES_TEMP_LOG_WORD_1 : (FUSES Offset: 0x04) ( R/ 32) TEMP_LOG Page Word 1 -------- */
#define FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL_Pos _UINT32_(0)                                          /* (FUSES_TEMP_LOG_WORD_1) 2's complement of the internal 1V reference drift at hot temperature (versus a 1.0 centered value) Position */
#define FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL_Msk (_UINT32_(0xFF) << FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL_Pos) /* (FUSES_TEMP_LOG_WORD_1) 2's complement of the internal 1V reference drift at hot temperature (versus a 1.0 centered value) Mask */
#define FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL(value) (FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL_Msk & (_UINT32_(value) << FUSES_TEMP_LOG_WORD_1_HOT_INT1V_VAL_Pos)) /* Assigment of value for HOT_INT1V_VAL in the FUSES_TEMP_LOG_WORD_1 register */
#define FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL_PTAT_Pos _UINT32_(8)                                          /* (FUSES_TEMP_LOG_WORD_1) 12-bit ADC conversion at room temperature PTAT Position */
#define FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL_PTAT_Msk (_UINT32_(0xFFF) << FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL_PTAT_Pos) /* (FUSES_TEMP_LOG_WORD_1) 12-bit ADC conversion at room temperature PTAT Mask */
#define FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL_PTAT(value) (FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL_PTAT_Msk & (_UINT32_(value) << FUSES_TEMP_LOG_WORD_1_ROOM_ADC_VAL_PTAT_Pos)) /* Assigment of value for ROOM_ADC_VAL_PTAT in the FUSES_TEMP_LOG_WORD_1 register */
#define FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL_PTAT_Pos _UINT32_(20)                                         /* (FUSES_TEMP_LOG_WORD_1) 12-bit ADC conversion at hot temperature PTAT Position */
#define FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL_PTAT_Msk (_UINT32_(0xFFF) << FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL_PTAT_Pos) /* (FUSES_TEMP_LOG_WORD_1) 12-bit ADC conversion at hot temperature PTAT Mask */
#define FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL_PTAT(value) (FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL_PTAT_Msk & (_UINT32_(value) << FUSES_TEMP_LOG_WORD_1_HOT_ADC_VAL_PTAT_Pos)) /* Assigment of value for HOT_ADC_VAL_PTAT in the FUSES_TEMP_LOG_WORD_1 register */
#define FUSES_TEMP_LOG_WORD_1_Msk             _UINT32_(0xFFFFFFFF)                                 /* (FUSES_TEMP_LOG_WORD_1) Register Mask  */


/* -------- FUSES_BOCOR_WORD_0 : (FUSES Offset: 0x00) (R/W 32) BOCOR Page Word 0 -------- */
#define FUSES_BOCOR_WORD_0_RESETVALUE         _UINT32_(0xA0C000FF)                                 /*  (FUSES_BOCOR_WORD_0) BOCOR Page Word 0  Reset Value */

#define FUSES_BOCOR_WORD_0_IDAU_BS_Pos        _UINT32_(8)                                          /* (FUSES_BOCOR_WORD_0) Boot Secure Position */
#define FUSES_BOCOR_WORD_0_IDAU_BS_Msk        (_UINT32_(0xFF) << FUSES_BOCOR_WORD_0_IDAU_BS_Pos)   /* (FUSES_BOCOR_WORD_0) Boot Secure Mask */
#define FUSES_BOCOR_WORD_0_IDAU_BS(value)     (FUSES_BOCOR_WORD_0_IDAU_BS_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_0_IDAU_BS_Pos)) /* Assigment of value for IDAU_BS in the FUSES_BOCOR_WORD_0 register */
#define FUSES_BOCOR_WORD_0_IDAU_BNSC_Pos      _UINT32_(16)                                         /* (FUSES_BOCOR_WORD_0) Boot Non-Secure Callable Position */
#define FUSES_BOCOR_WORD_0_IDAU_BNSC_Msk      (_UINT32_(0x3F) << FUSES_BOCOR_WORD_0_IDAU_BNSC_Pos) /* (FUSES_BOCOR_WORD_0) Boot Non-Secure Callable Mask */
#define FUSES_BOCOR_WORD_0_IDAU_BNSC(value)   (FUSES_BOCOR_WORD_0_IDAU_BNSC_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_0_IDAU_BNSC_Pos)) /* Assigment of value for IDAU_BNSC in the FUSES_BOCOR_WORD_0 register */
#define FUSES_BOCOR_WORD_0_BOOTROM_BOOTOPT_Pos _UINT32_(24)                                         /* (FUSES_BOCOR_WORD_0) Boot Option Position */
#define FUSES_BOCOR_WORD_0_BOOTROM_BOOTOPT_Msk (_UINT32_(0xFF) << FUSES_BOCOR_WORD_0_BOOTROM_BOOTOPT_Pos) /* (FUSES_BOCOR_WORD_0) Boot Option Mask */
#define FUSES_BOCOR_WORD_0_BOOTROM_BOOTOPT(value) (FUSES_BOCOR_WORD_0_BOOTROM_BOOTOPT_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_0_BOOTROM_BOOTOPT_Pos)) /* Assigment of value for BOOTROM_BOOTOPT in the FUSES_BOCOR_WORD_0 register */
#define FUSES_BOCOR_WORD_0_Msk                _UINT32_(0xFF3FFF00)                                 /* (FUSES_BOCOR_WORD_0) Register Mask  */


/* -------- FUSES_BOCOR_WORD_1 : (FUSES Offset: 0x04) (R/W 32) BOCOR Page Word 1 -------- */
#define FUSES_BOCOR_WORD_1_RESETVALUE         _UINT32_(0xFFFFFF00)                                 /*  (FUSES_BOCOR_WORD_1) BOCOR Page Word 1  Reset Value */

#define FUSES_BOCOR_WORD_1_IDAU_BOOTPROT_Pos  _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_1) Boot Protection Position */
#define FUSES_BOCOR_WORD_1_IDAU_BOOTPROT_Msk  (_UINT32_(0xFF) << FUSES_BOCOR_WORD_1_IDAU_BOOTPROT_Pos) /* (FUSES_BOCOR_WORD_1) Boot Protection Mask */
#define FUSES_BOCOR_WORD_1_IDAU_BOOTPROT(value) (FUSES_BOCOR_WORD_1_IDAU_BOOTPROT_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_1_IDAU_BOOTPROT_Pos)) /* Assigment of value for IDAU_BOOTPROT in the FUSES_BOCOR_WORD_1 register */
#define FUSES_BOCOR_WORD_1_NVMCTRL_BCWEN_Pos  _UINT32_(16)                                         /* (FUSES_BOCOR_WORD_1) Boot Configuration Write Enable Position */
#define FUSES_BOCOR_WORD_1_NVMCTRL_BCWEN_Msk  (_UINT32_(0x1) << FUSES_BOCOR_WORD_1_NVMCTRL_BCWEN_Pos) /* (FUSES_BOCOR_WORD_1) Boot Configuration Write Enable Mask */
#define FUSES_BOCOR_WORD_1_NVMCTRL_BCWEN(value) (FUSES_BOCOR_WORD_1_NVMCTRL_BCWEN_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_1_NVMCTRL_BCWEN_Pos)) /* Assigment of value for NVMCTRL_BCWEN in the FUSES_BOCOR_WORD_1 register */
#define FUSES_BOCOR_WORD_1_NVMCTRL_BCREN_Pos  _UINT32_(17)                                         /* (FUSES_BOCOR_WORD_1) Boot Configuration Read Enable Position */
#define FUSES_BOCOR_WORD_1_NVMCTRL_BCREN_Msk  (_UINT32_(0x1) << FUSES_BOCOR_WORD_1_NVMCTRL_BCREN_Pos) /* (FUSES_BOCOR_WORD_1) Boot Configuration Read Enable Mask */
#define FUSES_BOCOR_WORD_1_NVMCTRL_BCREN(value) (FUSES_BOCOR_WORD_1_NVMCTRL_BCREN_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_1_NVMCTRL_BCREN_Pos)) /* Assigment of value for NVMCTRL_BCREN in the FUSES_BOCOR_WORD_1 register */
#define FUSES_BOCOR_WORD_1_Msk                _UINT32_(0x000300FF)                                 /* (FUSES_BOCOR_WORD_1) Register Mask  */


/* -------- FUSES_BOCOR_WORD_2 : (FUSES Offset: 0x08) (R/W 32) BOCOR Page Word 2 -------- */
#define FUSES_BOCOR_WORD_2_RESETVALUE         _UINT32_(0xDDE78140)                                 /*  (FUSES_BOCOR_WORD_2) BOCOR Page Word 2  Reset Value */

#define FUSES_BOCOR_WORD_2_BOOTROM_BOCORCRC_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_2) CRC for BOCOR DWORD0 Position */
#define FUSES_BOCOR_WORD_2_BOOTROM_BOCORCRC_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_2_BOOTROM_BOCORCRC_Pos) /* (FUSES_BOCOR_WORD_2) CRC for BOCOR DWORD0 Mask */
#define FUSES_BOCOR_WORD_2_BOOTROM_BOCORCRC(value) (FUSES_BOCOR_WORD_2_BOOTROM_BOCORCRC_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_2_BOOTROM_BOCORCRC_Pos)) /* Assigment of value for BOOTROM_BOCORCRC in the FUSES_BOCOR_WORD_2 register */
#define FUSES_BOCOR_WORD_2_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_2) Register Mask  */


/* -------- FUSES_BOCOR_WORD_4 : (FUSES Offset: 0x10) (R/W 32) BOCOR Page Word 4 -------- */
#define FUSES_BOCOR_WORD_4_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_4) BOCOR Page Word 4  Reset Value */

#define FUSES_BOCOR_WORD_4_BOOTROM_CEKEY0_0_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_4) Chip Erase Key 0 bits 31:0 Position */
#define FUSES_BOCOR_WORD_4_BOOTROM_CEKEY0_0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_4_BOOTROM_CEKEY0_0_Pos) /* (FUSES_BOCOR_WORD_4) Chip Erase Key 0 bits 31:0 Mask */
#define FUSES_BOCOR_WORD_4_BOOTROM_CEKEY0_0(value) (FUSES_BOCOR_WORD_4_BOOTROM_CEKEY0_0_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_4_BOOTROM_CEKEY0_0_Pos)) /* Assigment of value for BOOTROM_CEKEY0_0 in the FUSES_BOCOR_WORD_4 register */
#define FUSES_BOCOR_WORD_4_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_4) Register Mask  */


/* -------- FUSES_BOCOR_WORD_5 : (FUSES Offset: 0x14) (R/W 32) BOCOR Page Word 5 -------- */
#define FUSES_BOCOR_WORD_5_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_5) BOCOR Page Word 5  Reset Value */

#define FUSES_BOCOR_WORD_5_BOOTROM_CEKEY0_1_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_5) Chip Erase Key 0 bits 63:32 Position */
#define FUSES_BOCOR_WORD_5_BOOTROM_CEKEY0_1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_5_BOOTROM_CEKEY0_1_Pos) /* (FUSES_BOCOR_WORD_5) Chip Erase Key 0 bits 63:32 Mask */
#define FUSES_BOCOR_WORD_5_BOOTROM_CEKEY0_1(value) (FUSES_BOCOR_WORD_5_BOOTROM_CEKEY0_1_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_5_BOOTROM_CEKEY0_1_Pos)) /* Assigment of value for BOOTROM_CEKEY0_1 in the FUSES_BOCOR_WORD_5 register */
#define FUSES_BOCOR_WORD_5_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_5) Register Mask  */


/* -------- FUSES_BOCOR_WORD_6 : (FUSES Offset: 0x18) (R/W 32) BOCOR Page Word 6 -------- */
#define FUSES_BOCOR_WORD_6_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_6) BOCOR Page Word 6  Reset Value */

#define FUSES_BOCOR_WORD_6_BOOTROM_CEKEY0_2_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_6) Chip Erase Key 0 bits 95:64 Position */
#define FUSES_BOCOR_WORD_6_BOOTROM_CEKEY0_2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_6_BOOTROM_CEKEY0_2_Pos) /* (FUSES_BOCOR_WORD_6) Chip Erase Key 0 bits 95:64 Mask */
#define FUSES_BOCOR_WORD_6_BOOTROM_CEKEY0_2(value) (FUSES_BOCOR_WORD_6_BOOTROM_CEKEY0_2_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_6_BOOTROM_CEKEY0_2_Pos)) /* Assigment of value for BOOTROM_CEKEY0_2 in the FUSES_BOCOR_WORD_6 register */
#define FUSES_BOCOR_WORD_6_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_6) Register Mask  */


/* -------- FUSES_BOCOR_WORD_7 : (FUSES Offset: 0x1C) (R/W 32) BOCOR Page Word 7 -------- */
#define FUSES_BOCOR_WORD_7_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_7) BOCOR Page Word 7  Reset Value */

#define FUSES_BOCOR_WORD_7_BOOTROM_CEKEY0_3_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_7) Chip Erase Key 0 bits 127:96 Position */
#define FUSES_BOCOR_WORD_7_BOOTROM_CEKEY0_3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_7_BOOTROM_CEKEY0_3_Pos) /* (FUSES_BOCOR_WORD_7) Chip Erase Key 0 bits 127:96 Mask */
#define FUSES_BOCOR_WORD_7_BOOTROM_CEKEY0_3(value) (FUSES_BOCOR_WORD_7_BOOTROM_CEKEY0_3_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_7_BOOTROM_CEKEY0_3_Pos)) /* Assigment of value for BOOTROM_CEKEY0_3 in the FUSES_BOCOR_WORD_7 register */
#define FUSES_BOCOR_WORD_7_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_7) Register Mask  */


/* -------- FUSES_BOCOR_WORD_8 : (FUSES Offset: 0x20) (R/W 32) BOCOR Page Word 8 -------- */
#define FUSES_BOCOR_WORD_8_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_8) BOCOR Page Word 8  Reset Value */

#define FUSES_BOCOR_WORD_8_BOOTROM_CEKEY1_0_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_8) Chip Erase Key 1 bits 31:0 Position */
#define FUSES_BOCOR_WORD_8_BOOTROM_CEKEY1_0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_8_BOOTROM_CEKEY1_0_Pos) /* (FUSES_BOCOR_WORD_8) Chip Erase Key 1 bits 31:0 Mask */
#define FUSES_BOCOR_WORD_8_BOOTROM_CEKEY1_0(value) (FUSES_BOCOR_WORD_8_BOOTROM_CEKEY1_0_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_8_BOOTROM_CEKEY1_0_Pos)) /* Assigment of value for BOOTROM_CEKEY1_0 in the FUSES_BOCOR_WORD_8 register */
#define FUSES_BOCOR_WORD_8_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_8) Register Mask  */


/* -------- FUSES_BOCOR_WORD_9 : (FUSES Offset: 0x24) (R/W 32) BOCOR Page Word 9 -------- */
#define FUSES_BOCOR_WORD_9_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_9) BOCOR Page Word 9  Reset Value */

#define FUSES_BOCOR_WORD_9_BOOTROM_CEKEY1_1_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_9) Chip Erase Key 1 bits 63:32 Position */
#define FUSES_BOCOR_WORD_9_BOOTROM_CEKEY1_1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_9_BOOTROM_CEKEY1_1_Pos) /* (FUSES_BOCOR_WORD_9) Chip Erase Key 1 bits 63:32 Mask */
#define FUSES_BOCOR_WORD_9_BOOTROM_CEKEY1_1(value) (FUSES_BOCOR_WORD_9_BOOTROM_CEKEY1_1_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_9_BOOTROM_CEKEY1_1_Pos)) /* Assigment of value for BOOTROM_CEKEY1_1 in the FUSES_BOCOR_WORD_9 register */
#define FUSES_BOCOR_WORD_9_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_9) Register Mask  */


/* -------- FUSES_BOCOR_WORD_10 : (FUSES Offset: 0x28) (R/W 32) BOCOR Page Word 10 -------- */
#define FUSES_BOCOR_WORD_10_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_10) BOCOR Page Word 10  Reset Value */

#define FUSES_BOCOR_WORD_10_BOOTROM_CEKEY1_2_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_10) Chip Erase Key 1 bits 95:64 Position */
#define FUSES_BOCOR_WORD_10_BOOTROM_CEKEY1_2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_10_BOOTROM_CEKEY1_2_Pos) /* (FUSES_BOCOR_WORD_10) Chip Erase Key 1 bits 95:64 Mask */
#define FUSES_BOCOR_WORD_10_BOOTROM_CEKEY1_2(value) (FUSES_BOCOR_WORD_10_BOOTROM_CEKEY1_2_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_10_BOOTROM_CEKEY1_2_Pos)) /* Assigment of value for BOOTROM_CEKEY1_2 in the FUSES_BOCOR_WORD_10 register */
#define FUSES_BOCOR_WORD_10_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_10) Register Mask  */


/* -------- FUSES_BOCOR_WORD_11 : (FUSES Offset: 0x2C) (R/W 32) BOCOR Page Word 11 -------- */
#define FUSES_BOCOR_WORD_11_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_11) BOCOR Page Word 11  Reset Value */

#define FUSES_BOCOR_WORD_11_BOOTROM_CEKEY1_3_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_11) Chip Erase Key 1 bits 127:96 Position */
#define FUSES_BOCOR_WORD_11_BOOTROM_CEKEY1_3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_11_BOOTROM_CEKEY1_3_Pos) /* (FUSES_BOCOR_WORD_11) Chip Erase Key 1 bits 127:96 Mask */
#define FUSES_BOCOR_WORD_11_BOOTROM_CEKEY1_3(value) (FUSES_BOCOR_WORD_11_BOOTROM_CEKEY1_3_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_11_BOOTROM_CEKEY1_3_Pos)) /* Assigment of value for BOOTROM_CEKEY1_3 in the FUSES_BOCOR_WORD_11 register */
#define FUSES_BOCOR_WORD_11_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_11) Register Mask  */


/* -------- FUSES_BOCOR_WORD_12 : (FUSES Offset: 0x30) (R/W 32) BOCOR Page Word 12 -------- */
#define FUSES_BOCOR_WORD_12_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_12) BOCOR Page Word 12  Reset Value */

#define FUSES_BOCOR_WORD_12_BOOTROM_CEKEY2_0_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_12) Chip Erase Key 2 bits 31:0 Position */
#define FUSES_BOCOR_WORD_12_BOOTROM_CEKEY2_0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_12_BOOTROM_CEKEY2_0_Pos) /* (FUSES_BOCOR_WORD_12) Chip Erase Key 2 bits 31:0 Mask */
#define FUSES_BOCOR_WORD_12_BOOTROM_CEKEY2_0(value) (FUSES_BOCOR_WORD_12_BOOTROM_CEKEY2_0_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_12_BOOTROM_CEKEY2_0_Pos)) /* Assigment of value for BOOTROM_CEKEY2_0 in the FUSES_BOCOR_WORD_12 register */
#define FUSES_BOCOR_WORD_12_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_12) Register Mask  */


/* -------- FUSES_BOCOR_WORD_13 : (FUSES Offset: 0x34) (R/W 32) BOCOR Page Word 13 -------- */
#define FUSES_BOCOR_WORD_13_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_13) BOCOR Page Word 13  Reset Value */

#define FUSES_BOCOR_WORD_13_BOOTROM_CEKEY2_1_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_13) Chip Erase Key 2 bits 63:32 Position */
#define FUSES_BOCOR_WORD_13_BOOTROM_CEKEY2_1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_13_BOOTROM_CEKEY2_1_Pos) /* (FUSES_BOCOR_WORD_13) Chip Erase Key 2 bits 63:32 Mask */
#define FUSES_BOCOR_WORD_13_BOOTROM_CEKEY2_1(value) (FUSES_BOCOR_WORD_13_BOOTROM_CEKEY2_1_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_13_BOOTROM_CEKEY2_1_Pos)) /* Assigment of value for BOOTROM_CEKEY2_1 in the FUSES_BOCOR_WORD_13 register */
#define FUSES_BOCOR_WORD_13_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_13) Register Mask  */


/* -------- FUSES_BOCOR_WORD_14 : (FUSES Offset: 0x38) (R/W 32) BOCOR Page Word 14 -------- */
#define FUSES_BOCOR_WORD_14_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_14) BOCOR Page Word 14  Reset Value */

#define FUSES_BOCOR_WORD_14_BOOTROM_CEKEY2_2_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_14) Chip Erase Key 2 bits 95:64 Position */
#define FUSES_BOCOR_WORD_14_BOOTROM_CEKEY2_2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_14_BOOTROM_CEKEY2_2_Pos) /* (FUSES_BOCOR_WORD_14) Chip Erase Key 2 bits 95:64 Mask */
#define FUSES_BOCOR_WORD_14_BOOTROM_CEKEY2_2(value) (FUSES_BOCOR_WORD_14_BOOTROM_CEKEY2_2_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_14_BOOTROM_CEKEY2_2_Pos)) /* Assigment of value for BOOTROM_CEKEY2_2 in the FUSES_BOCOR_WORD_14 register */
#define FUSES_BOCOR_WORD_14_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_14) Register Mask  */


/* -------- FUSES_BOCOR_WORD_15 : (FUSES Offset: 0x3C) (R/W 32) BOCOR Page Word 15 -------- */
#define FUSES_BOCOR_WORD_15_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_15) BOCOR Page Word 15  Reset Value */

#define FUSES_BOCOR_WORD_15_BOOTROM_CEKEY2_3_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_15) Chip Erase Key 2 bits 127:96 Position */
#define FUSES_BOCOR_WORD_15_BOOTROM_CEKEY2_3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_15_BOOTROM_CEKEY2_3_Pos) /* (FUSES_BOCOR_WORD_15) Chip Erase Key 2 bits 127:96 Mask */
#define FUSES_BOCOR_WORD_15_BOOTROM_CEKEY2_3(value) (FUSES_BOCOR_WORD_15_BOOTROM_CEKEY2_3_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_15_BOOTROM_CEKEY2_3_Pos)) /* Assigment of value for BOOTROM_CEKEY2_3 in the FUSES_BOCOR_WORD_15 register */
#define FUSES_BOCOR_WORD_15_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_15) Register Mask  */


/* -------- FUSES_BOCOR_WORD_16 : (FUSES Offset: 0x40) (R/W 32) BOCOR Page Word 16 -------- */
#define FUSES_BOCOR_WORD_16_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_16) BOCOR Page Word 16  Reset Value */

#define FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_16) CRC Key bits 31:0 Position */
#define FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0_Pos) /* (FUSES_BOCOR_WORD_16) CRC Key bits 31:0 Mask */
#define FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0(value) (FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_16_BOOTROM_CRCKEY_0_Pos)) /* Assigment of value for BOOTROM_CRCKEY_0 in the FUSES_BOCOR_WORD_16 register */
#define FUSES_BOCOR_WORD_16_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_16) Register Mask  */


/* -------- FUSES_BOCOR_WORD_17 : (FUSES Offset: 0x44) (R/W 32) BOCOR Page Word 17 -------- */
#define FUSES_BOCOR_WORD_17_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_17) BOCOR Page Word 17  Reset Value */

#define FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_17) CRC Key bits 63:32 Position */
#define FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1_Pos) /* (FUSES_BOCOR_WORD_17) CRC Key bits 63:32 Mask */
#define FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1(value) (FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_17_BOOTROM_CRCKEY_1_Pos)) /* Assigment of value for BOOTROM_CRCKEY_1 in the FUSES_BOCOR_WORD_17 register */
#define FUSES_BOCOR_WORD_17_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_17) Register Mask  */


/* -------- FUSES_BOCOR_WORD_18 : (FUSES Offset: 0x48) (R/W 32) BOCOR Page Word 18 -------- */
#define FUSES_BOCOR_WORD_18_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_18) BOCOR Page Word 18  Reset Value */

#define FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_18) CRC Key bits 95:64 Position */
#define FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2_Pos) /* (FUSES_BOCOR_WORD_18) CRC Key bits 95:64 Mask */
#define FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2(value) (FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_18_BOOTROM_CRCKEY_2_Pos)) /* Assigment of value for BOOTROM_CRCKEY_2 in the FUSES_BOCOR_WORD_18 register */
#define FUSES_BOCOR_WORD_18_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_18) Register Mask  */


/* -------- FUSES_BOCOR_WORD_19 : (FUSES Offset: 0x4C) (R/W 32) BOCOR Page Word 19 -------- */
#define FUSES_BOCOR_WORD_19_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_19) BOCOR Page Word 19  Reset Value */

#define FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_19) CRC Key bits 127:96 Position */
#define FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3_Pos) /* (FUSES_BOCOR_WORD_19) CRC Key bits 127:96 Mask */
#define FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3(value) (FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_19_BOOTROM_CRCKEY_3_Pos)) /* Assigment of value for BOOTROM_CRCKEY_3 in the FUSES_BOCOR_WORD_19 register */
#define FUSES_BOCOR_WORD_19_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_19) Register Mask  */


/* -------- FUSES_BOCOR_WORD_20 : (FUSES Offset: 0x50) (R/W 32) BOCOR Page Word 20 -------- */
#define FUSES_BOCOR_WORD_20_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_20) BOCOR Page Word 20  Reset Value */

#define FUSES_BOCOR_WORD_20_BOOTROM_BOOTKEY_0_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_20) Secure Boot Key bits 31:0 Position */
#define FUSES_BOCOR_WORD_20_BOOTROM_BOOTKEY_0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_20_BOOTROM_BOOTKEY_0_Pos) /* (FUSES_BOCOR_WORD_20) Secure Boot Key bits 31:0 Mask */
#define FUSES_BOCOR_WORD_20_BOOTROM_BOOTKEY_0(value) (FUSES_BOCOR_WORD_20_BOOTROM_BOOTKEY_0_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_20_BOOTROM_BOOTKEY_0_Pos)) /* Assigment of value for BOOTROM_BOOTKEY_0 in the FUSES_BOCOR_WORD_20 register */
#define FUSES_BOCOR_WORD_20_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_20) Register Mask  */


/* -------- FUSES_BOCOR_WORD_21 : (FUSES Offset: 0x54) (R/W 32) BOCOR Page Word 21 -------- */
#define FUSES_BOCOR_WORD_21_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_21) BOCOR Page Word 21  Reset Value */

#define FUSES_BOCOR_WORD_21_BOOTROM_BOOTKEY_1_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_21) Secure Boot Key bits 63:32 Position */
#define FUSES_BOCOR_WORD_21_BOOTROM_BOOTKEY_1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_21_BOOTROM_BOOTKEY_1_Pos) /* (FUSES_BOCOR_WORD_21) Secure Boot Key bits 63:32 Mask */
#define FUSES_BOCOR_WORD_21_BOOTROM_BOOTKEY_1(value) (FUSES_BOCOR_WORD_21_BOOTROM_BOOTKEY_1_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_21_BOOTROM_BOOTKEY_1_Pos)) /* Assigment of value for BOOTROM_BOOTKEY_1 in the FUSES_BOCOR_WORD_21 register */
#define FUSES_BOCOR_WORD_21_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_21) Register Mask  */


/* -------- FUSES_BOCOR_WORD_22 : (FUSES Offset: 0x58) (R/W 32) BOCOR Page Word 22 -------- */
#define FUSES_BOCOR_WORD_22_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_22) BOCOR Page Word 22  Reset Value */

#define FUSES_BOCOR_WORD_22_BOOTROM_BOOTKEY_2_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_22) Secure Boot Key bits 95:64 Position */
#define FUSES_BOCOR_WORD_22_BOOTROM_BOOTKEY_2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_22_BOOTROM_BOOTKEY_2_Pos) /* (FUSES_BOCOR_WORD_22) Secure Boot Key bits 95:64 Mask */
#define FUSES_BOCOR_WORD_22_BOOTROM_BOOTKEY_2(value) (FUSES_BOCOR_WORD_22_BOOTROM_BOOTKEY_2_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_22_BOOTROM_BOOTKEY_2_Pos)) /* Assigment of value for BOOTROM_BOOTKEY_2 in the FUSES_BOCOR_WORD_22 register */
#define FUSES_BOCOR_WORD_22_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_22) Register Mask  */


/* -------- FUSES_BOCOR_WORD_23 : (FUSES Offset: 0x5C) (R/W 32) BOCOR Page Word 23 -------- */
#define FUSES_BOCOR_WORD_23_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_23) BOCOR Page Word 23  Reset Value */

#define FUSES_BOCOR_WORD_23_BOOTROM_BOOTKEY_3_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_23) Secure Boot Key bits 127:96 Position */
#define FUSES_BOCOR_WORD_23_BOOTROM_BOOTKEY_3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_23_BOOTROM_BOOTKEY_3_Pos) /* (FUSES_BOCOR_WORD_23) Secure Boot Key bits 127:96 Mask */
#define FUSES_BOCOR_WORD_23_BOOTROM_BOOTKEY_3(value) (FUSES_BOCOR_WORD_23_BOOTROM_BOOTKEY_3_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_23_BOOTROM_BOOTKEY_3_Pos)) /* Assigment of value for BOOTROM_BOOTKEY_3 in the FUSES_BOCOR_WORD_23 register */
#define FUSES_BOCOR_WORD_23_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_23) Register Mask  */


/* -------- FUSES_BOCOR_WORD_24 : (FUSES Offset: 0x60) (R/W 32) BOCOR Page Word 24 -------- */
#define FUSES_BOCOR_WORD_24_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_24) BOCOR Page Word 24  Reset Value */

#define FUSES_BOCOR_WORD_24_BOOTROM_BOOTKEY_4_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_24) Secure Boot Key bits 159:128 Position */
#define FUSES_BOCOR_WORD_24_BOOTROM_BOOTKEY_4_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_24_BOOTROM_BOOTKEY_4_Pos) /* (FUSES_BOCOR_WORD_24) Secure Boot Key bits 159:128 Mask */
#define FUSES_BOCOR_WORD_24_BOOTROM_BOOTKEY_4(value) (FUSES_BOCOR_WORD_24_BOOTROM_BOOTKEY_4_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_24_BOOTROM_BOOTKEY_4_Pos)) /* Assigment of value for BOOTROM_BOOTKEY_4 in the FUSES_BOCOR_WORD_24 register */
#define FUSES_BOCOR_WORD_24_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_24) Register Mask  */


/* -------- FUSES_BOCOR_WORD_25 : (FUSES Offset: 0x64) (R/W 32) BOCOR Page Word 25 -------- */
#define FUSES_BOCOR_WORD_25_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_25) BOCOR Page Word 25  Reset Value */

#define FUSES_BOCOR_WORD_25_BOOTROM_BOOTKEY_5_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_25) Secure Boot Key bits 191:160 Position */
#define FUSES_BOCOR_WORD_25_BOOTROM_BOOTKEY_5_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_25_BOOTROM_BOOTKEY_5_Pos) /* (FUSES_BOCOR_WORD_25) Secure Boot Key bits 191:160 Mask */
#define FUSES_BOCOR_WORD_25_BOOTROM_BOOTKEY_5(value) (FUSES_BOCOR_WORD_25_BOOTROM_BOOTKEY_5_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_25_BOOTROM_BOOTKEY_5_Pos)) /* Assigment of value for BOOTROM_BOOTKEY_5 in the FUSES_BOCOR_WORD_25 register */
#define FUSES_BOCOR_WORD_25_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_25) Register Mask  */


/* -------- FUSES_BOCOR_WORD_26 : (FUSES Offset: 0x68) (R/W 32) BOCOR Page Word 26 -------- */
#define FUSES_BOCOR_WORD_26_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_26) BOCOR Page Word 26  Reset Value */

#define FUSES_BOCOR_WORD_26_BOOTROM_BOOTKEY_6_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_26) Secure Boot Key bits 223:192 Position */
#define FUSES_BOCOR_WORD_26_BOOTROM_BOOTKEY_6_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_26_BOOTROM_BOOTKEY_6_Pos) /* (FUSES_BOCOR_WORD_26) Secure Boot Key bits 223:192 Mask */
#define FUSES_BOCOR_WORD_26_BOOTROM_BOOTKEY_6(value) (FUSES_BOCOR_WORD_26_BOOTROM_BOOTKEY_6_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_26_BOOTROM_BOOTKEY_6_Pos)) /* Assigment of value for BOOTROM_BOOTKEY_6 in the FUSES_BOCOR_WORD_26 register */
#define FUSES_BOCOR_WORD_26_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_26) Register Mask  */


/* -------- FUSES_BOCOR_WORD_27 : (FUSES Offset: 0x6C) (R/W 32) BOCOR Page Word 27 -------- */
#define FUSES_BOCOR_WORD_27_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_27) BOCOR Page Word 27  Reset Value */

#define FUSES_BOCOR_WORD_27_BOOTROM_BOOTKEY_7_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_27) Secure Boot Key bits 255:224 Position */
#define FUSES_BOCOR_WORD_27_BOOTROM_BOOTKEY_7_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_27_BOOTROM_BOOTKEY_7_Pos) /* (FUSES_BOCOR_WORD_27) Secure Boot Key bits 255:224 Mask */
#define FUSES_BOCOR_WORD_27_BOOTROM_BOOTKEY_7(value) (FUSES_BOCOR_WORD_27_BOOTROM_BOOTKEY_7_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_27_BOOTROM_BOOTKEY_7_Pos)) /* Assigment of value for BOOTROM_BOOTKEY_7 in the FUSES_BOCOR_WORD_27 register */
#define FUSES_BOCOR_WORD_27_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_27) Register Mask  */


/* -------- FUSES_BOCOR_WORD_56 : (FUSES Offset: 0xE0) (R/W 32) BOCOR Page Word 56 -------- */
#define FUSES_BOCOR_WORD_56_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_56) BOCOR Page Word 56  Reset Value */

#define FUSES_BOCOR_WORD_56_BOOTROM_BOCORHASH_0_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_56) Boot Configuration Row Hash bits 31:0 Position */
#define FUSES_BOCOR_WORD_56_BOOTROM_BOCORHASH_0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_56_BOOTROM_BOCORHASH_0_Pos) /* (FUSES_BOCOR_WORD_56) Boot Configuration Row Hash bits 31:0 Mask */
#define FUSES_BOCOR_WORD_56_BOOTROM_BOCORHASH_0(value) (FUSES_BOCOR_WORD_56_BOOTROM_BOCORHASH_0_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_56_BOOTROM_BOCORHASH_0_Pos)) /* Assigment of value for BOOTROM_BOCORHASH_0 in the FUSES_BOCOR_WORD_56 register */
#define FUSES_BOCOR_WORD_56_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_56) Register Mask  */


/* -------- FUSES_BOCOR_WORD_57 : (FUSES Offset: 0xE4) (R/W 32) BOCOR Page Word 57 -------- */
#define FUSES_BOCOR_WORD_57_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_57) BOCOR Page Word 57  Reset Value */

#define FUSES_BOCOR_WORD_57_BOOTROM_BOCORHASH_1_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_57) Boot Configuration Row Hash bits 63:32 Position */
#define FUSES_BOCOR_WORD_57_BOOTROM_BOCORHASH_1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_57_BOOTROM_BOCORHASH_1_Pos) /* (FUSES_BOCOR_WORD_57) Boot Configuration Row Hash bits 63:32 Mask */
#define FUSES_BOCOR_WORD_57_BOOTROM_BOCORHASH_1(value) (FUSES_BOCOR_WORD_57_BOOTROM_BOCORHASH_1_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_57_BOOTROM_BOCORHASH_1_Pos)) /* Assigment of value for BOOTROM_BOCORHASH_1 in the FUSES_BOCOR_WORD_57 register */
#define FUSES_BOCOR_WORD_57_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_57) Register Mask  */


/* -------- FUSES_BOCOR_WORD_58 : (FUSES Offset: 0xE8) (R/W 32) BOCOR Page Word 58 -------- */
#define FUSES_BOCOR_WORD_58_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_58) BOCOR Page Word 58  Reset Value */

#define FUSES_BOCOR_WORD_58_BOOTROM_BOCORHASH_2_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_58) Boot Configuration Row Hash bits 95:64 Position */
#define FUSES_BOCOR_WORD_58_BOOTROM_BOCORHASH_2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_58_BOOTROM_BOCORHASH_2_Pos) /* (FUSES_BOCOR_WORD_58) Boot Configuration Row Hash bits 95:64 Mask */
#define FUSES_BOCOR_WORD_58_BOOTROM_BOCORHASH_2(value) (FUSES_BOCOR_WORD_58_BOOTROM_BOCORHASH_2_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_58_BOOTROM_BOCORHASH_2_Pos)) /* Assigment of value for BOOTROM_BOCORHASH_2 in the FUSES_BOCOR_WORD_58 register */
#define FUSES_BOCOR_WORD_58_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_58) Register Mask  */


/* -------- FUSES_BOCOR_WORD_59 : (FUSES Offset: 0xEC) (R/W 32) BOCOR Page Word 59 -------- */
#define FUSES_BOCOR_WORD_59_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_59) BOCOR Page Word 59  Reset Value */

#define FUSES_BOCOR_WORD_59_BOOTROM_BOCORHASH_3_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_59) Boot Configuration Row Hash bits 127:96 Position */
#define FUSES_BOCOR_WORD_59_BOOTROM_BOCORHASH_3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_59_BOOTROM_BOCORHASH_3_Pos) /* (FUSES_BOCOR_WORD_59) Boot Configuration Row Hash bits 127:96 Mask */
#define FUSES_BOCOR_WORD_59_BOOTROM_BOCORHASH_3(value) (FUSES_BOCOR_WORD_59_BOOTROM_BOCORHASH_3_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_59_BOOTROM_BOCORHASH_3_Pos)) /* Assigment of value for BOOTROM_BOCORHASH_3 in the FUSES_BOCOR_WORD_59 register */
#define FUSES_BOCOR_WORD_59_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_59) Register Mask  */


/* -------- FUSES_BOCOR_WORD_60 : (FUSES Offset: 0xF0) (R/W 32) BOCOR Page Word 60 -------- */
#define FUSES_BOCOR_WORD_60_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_60) BOCOR Page Word 60  Reset Value */

#define FUSES_BOCOR_WORD_60_BOOTROM_BOCORHASH_4_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_60) Boot Configuration Row Hash bits 159:128 Position */
#define FUSES_BOCOR_WORD_60_BOOTROM_BOCORHASH_4_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_60_BOOTROM_BOCORHASH_4_Pos) /* (FUSES_BOCOR_WORD_60) Boot Configuration Row Hash bits 159:128 Mask */
#define FUSES_BOCOR_WORD_60_BOOTROM_BOCORHASH_4(value) (FUSES_BOCOR_WORD_60_BOOTROM_BOCORHASH_4_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_60_BOOTROM_BOCORHASH_4_Pos)) /* Assigment of value for BOOTROM_BOCORHASH_4 in the FUSES_BOCOR_WORD_60 register */
#define FUSES_BOCOR_WORD_60_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_60) Register Mask  */


/* -------- FUSES_BOCOR_WORD_61 : (FUSES Offset: 0xF4) (R/W 32) BOCOR Page Word 61 -------- */
#define FUSES_BOCOR_WORD_61_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_61) BOCOR Page Word 61  Reset Value */

#define FUSES_BOCOR_WORD_61_BOOTROM_BOCORHASH_5_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_61) Boot Configuration Row Hash bits 191:160 Position */
#define FUSES_BOCOR_WORD_61_BOOTROM_BOCORHASH_5_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_61_BOOTROM_BOCORHASH_5_Pos) /* (FUSES_BOCOR_WORD_61) Boot Configuration Row Hash bits 191:160 Mask */
#define FUSES_BOCOR_WORD_61_BOOTROM_BOCORHASH_5(value) (FUSES_BOCOR_WORD_61_BOOTROM_BOCORHASH_5_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_61_BOOTROM_BOCORHASH_5_Pos)) /* Assigment of value for BOOTROM_BOCORHASH_5 in the FUSES_BOCOR_WORD_61 register */
#define FUSES_BOCOR_WORD_61_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_61) Register Mask  */


/* -------- FUSES_BOCOR_WORD_62 : (FUSES Offset: 0xF8) (R/W 32) BOCOR Page Word 62 -------- */
#define FUSES_BOCOR_WORD_62_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_62) BOCOR Page Word 62  Reset Value */

#define FUSES_BOCOR_WORD_62_BOOTROM_BOCORHASH_6_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_62) Boot Configuration Row Hash bits 223:192 Position */
#define FUSES_BOCOR_WORD_62_BOOTROM_BOCORHASH_6_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_62_BOOTROM_BOCORHASH_6_Pos) /* (FUSES_BOCOR_WORD_62) Boot Configuration Row Hash bits 223:192 Mask */
#define FUSES_BOCOR_WORD_62_BOOTROM_BOCORHASH_6(value) (FUSES_BOCOR_WORD_62_BOOTROM_BOCORHASH_6_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_62_BOOTROM_BOCORHASH_6_Pos)) /* Assigment of value for BOOTROM_BOCORHASH_6 in the FUSES_BOCOR_WORD_62 register */
#define FUSES_BOCOR_WORD_62_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_62) Register Mask  */


/* -------- FUSES_BOCOR_WORD_63 : (FUSES Offset: 0xFC) (R/W 32) BOCOR Page Word 63 -------- */
#define FUSES_BOCOR_WORD_63_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOCOR_WORD_63) BOCOR Page Word 63  Reset Value */

#define FUSES_BOCOR_WORD_63_BOOTROM_BOCORHASH_7_Pos _UINT32_(0)                                          /* (FUSES_BOCOR_WORD_63) Boot Configuration Row Hash bits 255:224 Position */
#define FUSES_BOCOR_WORD_63_BOOTROM_BOCORHASH_7_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOCOR_WORD_63_BOOTROM_BOCORHASH_7_Pos) /* (FUSES_BOCOR_WORD_63) Boot Configuration Row Hash bits 255:224 Mask */
#define FUSES_BOCOR_WORD_63_BOOTROM_BOCORHASH_7(value) (FUSES_BOCOR_WORD_63_BOOTROM_BOCORHASH_7_Msk & (_UINT32_(value) << FUSES_BOCOR_WORD_63_BOOTROM_BOCORHASH_7_Pos)) /* Assigment of value for BOOTROM_BOCORHASH_7 in the FUSES_BOCOR_WORD_63 register */
#define FUSES_BOCOR_WORD_63_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOCOR_WORD_63) Register Mask  */


/* -------- FUSES_USER_WORD_0 : (FUSES Offset: 0x00) (R/W 32) USER Page Word 0 -------- */
#define FUSES_USER_WORD_0_RESETVALUE          _UINT32_(0xB08F437F)                                 /*  (FUSES_USER_WORD_0) USER Page Word 0  Reset Value */

#define FUSES_USER_WORD_0_NVMCTRL_SULCK_Pos   _UINT32_(0)                                          /* (FUSES_USER_WORD_0) NVM Secure Region Locks Position */
#define FUSES_USER_WORD_0_NVMCTRL_SULCK_Msk   (_UINT32_(0x7) << FUSES_USER_WORD_0_NVMCTRL_SULCK_Pos) /* (FUSES_USER_WORD_0) NVM Secure Region Locks Mask */
#define FUSES_USER_WORD_0_NVMCTRL_SULCK(value) (FUSES_USER_WORD_0_NVMCTRL_SULCK_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_NVMCTRL_SULCK_Pos)) /* Assigment of value for NVMCTRL_SULCK in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_NVMCTRL_NSULCK_Pos  _UINT32_(3)                                          /* (FUSES_USER_WORD_0) NVM Non-Secure Region Locks Position */
#define FUSES_USER_WORD_0_NVMCTRL_NSULCK_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_0_NVMCTRL_NSULCK_Pos) /* (FUSES_USER_WORD_0) NVM Non-Secure Region Locks Mask */
#define FUSES_USER_WORD_0_NVMCTRL_NSULCK(value) (FUSES_USER_WORD_0_NVMCTRL_NSULCK_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_NVMCTRL_NSULCK_Pos)) /* Assigment of value for NVMCTRL_NSULCK in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_BOD33_LEVEL_Pos     _UINT32_(7)                                          /* (FUSES_USER_WORD_0) BOD33 threshold Level Position */
#define FUSES_USER_WORD_0_BOD33_LEVEL_Msk     (_UINT32_(0x3F) << FUSES_USER_WORD_0_BOD33_LEVEL_Pos) /* (FUSES_USER_WORD_0) BOD33 threshold Level Mask */
#define FUSES_USER_WORD_0_BOD33_LEVEL(value)  (FUSES_USER_WORD_0_BOD33_LEVEL_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_BOD33_LEVEL_Pos)) /* Assigment of value for BOD33_LEVEL in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_BOD33_DIS_Pos       _UINT32_(13)                                         /* (FUSES_USER_WORD_0) BOD33 Disable Position */
#define FUSES_USER_WORD_0_BOD33_DIS_Msk       (_UINT32_(0x1) << FUSES_USER_WORD_0_BOD33_DIS_Pos)   /* (FUSES_USER_WORD_0) BOD33 Disable Mask */
#define FUSES_USER_WORD_0_BOD33_DIS(value)    (FUSES_USER_WORD_0_BOD33_DIS_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_BOD33_DIS_Pos)) /* Assigment of value for BOD33_DIS in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_BOD33_ACTION_Pos    _UINT32_(14)                                         /* (FUSES_USER_WORD_0) BOD33 Action Position */
#define FUSES_USER_WORD_0_BOD33_ACTION_Msk    (_UINT32_(0x3) << FUSES_USER_WORD_0_BOD33_ACTION_Pos) /* (FUSES_USER_WORD_0) BOD33 Action Mask */
#define FUSES_USER_WORD_0_BOD33_ACTION(value) (FUSES_USER_WORD_0_BOD33_ACTION_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_BOD33_ACTION_Pos)) /* Assigment of value for BOD33_ACTION in the FUSES_USER_WORD_0 register */
#define   FUSES_USER_WORD_0_BOD33_ACTION_NONE_Val _UINT32_(0x0)                                        /* (FUSES_USER_WORD_0) No action  */
#define   FUSES_USER_WORD_0_BOD33_ACTION_RESET_Val _UINT32_(0x1)                                        /* (FUSES_USER_WORD_0) The BOD33 generates a reset  */
#define   FUSES_USER_WORD_0_BOD33_ACTION_INT_Val _UINT32_(0x2)                                        /* (FUSES_USER_WORD_0) The BOD33 generates an interrupt  */
#define FUSES_USER_WORD_0_BOD33_ACTION_NONE   (FUSES_USER_WORD_0_BOD33_ACTION_NONE_Val << FUSES_USER_WORD_0_BOD33_ACTION_Pos) /* (FUSES_USER_WORD_0) No action Position  */
#define FUSES_USER_WORD_0_BOD33_ACTION_RESET  (FUSES_USER_WORD_0_BOD33_ACTION_RESET_Val << FUSES_USER_WORD_0_BOD33_ACTION_Pos) /* (FUSES_USER_WORD_0) The BOD33 generates a reset Position  */
#define FUSES_USER_WORD_0_BOD33_ACTION_INT    (FUSES_USER_WORD_0_BOD33_ACTION_INT_Val << FUSES_USER_WORD_0_BOD33_ACTION_Pos) /* (FUSES_USER_WORD_0) The BOD33 generates an interrupt Position  */
#define FUSES_USER_WORD_0_WDT_RUNSTDBY_Pos    _UINT32_(25)                                         /* (FUSES_USER_WORD_0) WDT Run During Standby Position */
#define FUSES_USER_WORD_0_WDT_RUNSTDBY_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_0_WDT_RUNSTDBY_Pos) /* (FUSES_USER_WORD_0) WDT Run During Standby Mask */
#define FUSES_USER_WORD_0_WDT_RUNSTDBY(value) (FUSES_USER_WORD_0_WDT_RUNSTDBY_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_WDT_RUNSTDBY_Pos)) /* Assigment of value for WDT_RUNSTDBY in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_WDT_ENABLE_Pos      _UINT32_(26)                                         /* (FUSES_USER_WORD_0) WDT Enable Position */
#define FUSES_USER_WORD_0_WDT_ENABLE_Msk      (_UINT32_(0x1) << FUSES_USER_WORD_0_WDT_ENABLE_Pos)  /* (FUSES_USER_WORD_0) WDT Enable Mask */
#define FUSES_USER_WORD_0_WDT_ENABLE(value)   (FUSES_USER_WORD_0_WDT_ENABLE_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_WDT_ENABLE_Pos)) /* Assigment of value for WDT_ENABLE in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_WDT_ALWAYSON_Pos    _UINT32_(27)                                         /* (FUSES_USER_WORD_0) WDT Always On Position */
#define FUSES_USER_WORD_0_WDT_ALWAYSON_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_0_WDT_ALWAYSON_Pos) /* (FUSES_USER_WORD_0) WDT Always On Mask */
#define FUSES_USER_WORD_0_WDT_ALWAYSON(value) (FUSES_USER_WORD_0_WDT_ALWAYSON_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_WDT_ALWAYSON_Pos)) /* Assigment of value for WDT_ALWAYSON in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_WDT_PER_Pos         _UINT32_(28)                                         /* (FUSES_USER_WORD_0) WDT Period Position */
#define FUSES_USER_WORD_0_WDT_PER_Msk         (_UINT32_(0xF) << FUSES_USER_WORD_0_WDT_PER_Pos)     /* (FUSES_USER_WORD_0) WDT Period Mask */
#define FUSES_USER_WORD_0_WDT_PER(value)      (FUSES_USER_WORD_0_WDT_PER_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_WDT_PER_Pos)) /* Assigment of value for WDT_PER in the FUSES_USER_WORD_0 register */
#define   FUSES_USER_WORD_0_WDT_PER_CYC8_Val  _UINT32_(0x0)                                        /* (FUSES_USER_WORD_0) 8 clock cycles  */
#define   FUSES_USER_WORD_0_WDT_PER_CYC16_Val _UINT32_(0x1)                                        /* (FUSES_USER_WORD_0) 16 clock cycles  */
#define   FUSES_USER_WORD_0_WDT_PER_CYC32_Val _UINT32_(0x2)                                        /* (FUSES_USER_WORD_0) 32 clock cycles  */
#define   FUSES_USER_WORD_0_WDT_PER_CYC64_Val _UINT32_(0x3)                                        /* (FUSES_USER_WORD_0) 64 clock cycles  */
#define   FUSES_USER_WORD_0_WDT_PER_CYC128_Val _UINT32_(0x4)                                        /* (FUSES_USER_WORD_0) 128 clock cycles  */
#define   FUSES_USER_WORD_0_WDT_PER_CYC256_Val _UINT32_(0x5)                                        /* (FUSES_USER_WORD_0) 256 clock cycles  */
#define   FUSES_USER_WORD_0_WDT_PER_CYC512_Val _UINT32_(0x6)                                        /* (FUSES_USER_WORD_0) 512 clock cycles  */
#define   FUSES_USER_WORD_0_WDT_PER_CYC1024_Val _UINT32_(0x7)                                        /* (FUSES_USER_WORD_0) 1024 clock cycles  */
#define   FUSES_USER_WORD_0_WDT_PER_CYC2048_Val _UINT32_(0x8)                                        /* (FUSES_USER_WORD_0) 2048 clock cycles  */
#define   FUSES_USER_WORD_0_WDT_PER_CYC4096_Val _UINT32_(0x9)                                        /* (FUSES_USER_WORD_0) 4096 clock cycles  */
#define   FUSES_USER_WORD_0_WDT_PER_CYC8192_Val _UINT32_(0xA)                                        /* (FUSES_USER_WORD_0) 8192 clock cycles  */
#define   FUSES_USER_WORD_0_WDT_PER_CYC16384_Val _UINT32_(0xB)                                        /* (FUSES_USER_WORD_0) 16384 clock cycles  */
#define FUSES_USER_WORD_0_WDT_PER_CYC8        (FUSES_USER_WORD_0_WDT_PER_CYC8_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 8 clock cycles Position  */
#define FUSES_USER_WORD_0_WDT_PER_CYC16       (FUSES_USER_WORD_0_WDT_PER_CYC16_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 16 clock cycles Position  */
#define FUSES_USER_WORD_0_WDT_PER_CYC32       (FUSES_USER_WORD_0_WDT_PER_CYC32_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 32 clock cycles Position  */
#define FUSES_USER_WORD_0_WDT_PER_CYC64       (FUSES_USER_WORD_0_WDT_PER_CYC64_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 64 clock cycles Position  */
#define FUSES_USER_WORD_0_WDT_PER_CYC128      (FUSES_USER_WORD_0_WDT_PER_CYC128_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 128 clock cycles Position  */
#define FUSES_USER_WORD_0_WDT_PER_CYC256      (FUSES_USER_WORD_0_WDT_PER_CYC256_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 256 clock cycles Position  */
#define FUSES_USER_WORD_0_WDT_PER_CYC512      (FUSES_USER_WORD_0_WDT_PER_CYC512_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 512 clock cycles Position  */
#define FUSES_USER_WORD_0_WDT_PER_CYC1024     (FUSES_USER_WORD_0_WDT_PER_CYC1024_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 1024 clock cycles Position  */
#define FUSES_USER_WORD_0_WDT_PER_CYC2048     (FUSES_USER_WORD_0_WDT_PER_CYC2048_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 2048 clock cycles Position  */
#define FUSES_USER_WORD_0_WDT_PER_CYC4096     (FUSES_USER_WORD_0_WDT_PER_CYC4096_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 4096 clock cycles Position  */
#define FUSES_USER_WORD_0_WDT_PER_CYC8192     (FUSES_USER_WORD_0_WDT_PER_CYC8192_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 8192 clock cycles Position  */
#define FUSES_USER_WORD_0_WDT_PER_CYC16384    (FUSES_USER_WORD_0_WDT_PER_CYC16384_Val << FUSES_USER_WORD_0_WDT_PER_Pos) /* (FUSES_USER_WORD_0) 16384 clock cycles Position  */
#define FUSES_USER_WORD_0_Msk                 _UINT32_(0xFE00FFBF)                                 /* (FUSES_USER_WORD_0) Register Mask  */


/* -------- FUSES_USER_WORD_1 : (FUSES Offset: 0x04) (R/W 32) USER Page Word 1 -------- */
#define FUSES_USER_WORD_1_RESETVALUE          _UINT32_(0xFFFFFCBB)                                 /*  (FUSES_USER_WORD_1) USER Page Word 1  Reset Value */

#define FUSES_USER_WORD_1_WDT_WINDOW_Pos      _UINT32_(0)                                          /* (FUSES_USER_WORD_1) WDT Window Position */
#define FUSES_USER_WORD_1_WDT_WINDOW_Msk      (_UINT32_(0xF) << FUSES_USER_WORD_1_WDT_WINDOW_Pos)  /* (FUSES_USER_WORD_1) WDT Window Mask */
#define FUSES_USER_WORD_1_WDT_WINDOW(value)   (FUSES_USER_WORD_1_WDT_WINDOW_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_WDT_WINDOW_Pos)) /* Assigment of value for WDT_WINDOW in the FUSES_USER_WORD_1 register */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC8_Val _UINT32_(0x0)                                        /* (FUSES_USER_WORD_1) 8 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC16_Val _UINT32_(0x1)                                        /* (FUSES_USER_WORD_1) 16 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC32_Val _UINT32_(0x2)                                        /* (FUSES_USER_WORD_1) 32 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC64_Val _UINT32_(0x3)                                        /* (FUSES_USER_WORD_1) 64 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC128_Val _UINT32_(0x4)                                        /* (FUSES_USER_WORD_1) 128 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC256_Val _UINT32_(0x5)                                        /* (FUSES_USER_WORD_1) 256 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC512_Val _UINT32_(0x6)                                        /* (FUSES_USER_WORD_1) 512 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC1024_Val _UINT32_(0x7)                                        /* (FUSES_USER_WORD_1) 1024 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC2048_Val _UINT32_(0x8)                                        /* (FUSES_USER_WORD_1) 2048 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC4096_Val _UINT32_(0x9)                                        /* (FUSES_USER_WORD_1) 4096 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC8192_Val _UINT32_(0xA)                                        /* (FUSES_USER_WORD_1) 8192 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_WINDOW_CYC16384_Val _UINT32_(0xB)                                        /* (FUSES_USER_WORD_1) 16384 clock cycles  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC8     (FUSES_USER_WORD_1_WDT_WINDOW_CYC8_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 8 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC16    (FUSES_USER_WORD_1_WDT_WINDOW_CYC16_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 16 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC32    (FUSES_USER_WORD_1_WDT_WINDOW_CYC32_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 32 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC64    (FUSES_USER_WORD_1_WDT_WINDOW_CYC64_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 64 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC128   (FUSES_USER_WORD_1_WDT_WINDOW_CYC128_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 128 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC256   (FUSES_USER_WORD_1_WDT_WINDOW_CYC256_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 256 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC512   (FUSES_USER_WORD_1_WDT_WINDOW_CYC512_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 512 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC1024  (FUSES_USER_WORD_1_WDT_WINDOW_CYC1024_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 1024 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC2048  (FUSES_USER_WORD_1_WDT_WINDOW_CYC2048_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 2048 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC4096  (FUSES_USER_WORD_1_WDT_WINDOW_CYC4096_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 4096 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC8192  (FUSES_USER_WORD_1_WDT_WINDOW_CYC8192_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 8192 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WINDOW_CYC16384 (FUSES_USER_WORD_1_WDT_WINDOW_CYC16384_Val << FUSES_USER_WORD_1_WDT_WINDOW_Pos) /* (FUSES_USER_WORD_1) 16384 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_Pos    _UINT32_(4)                                          /* (FUSES_USER_WORD_1) WDT Early Warning Offset Position */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_Msk    (_UINT32_(0xF) << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) WDT Early Warning Offset Mask */
#define FUSES_USER_WORD_1_WDT_EWOFFSET(value) (FUSES_USER_WORD_1_WDT_EWOFFSET_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos)) /* Assigment of value for WDT_EWOFFSET in the FUSES_USER_WORD_1 register */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC8_Val _UINT32_(0x0)                                        /* (FUSES_USER_WORD_1) 8 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC16_Val _UINT32_(0x1)                                        /* (FUSES_USER_WORD_1) 16 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC32_Val _UINT32_(0x2)                                        /* (FUSES_USER_WORD_1) 32 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC64_Val _UINT32_(0x3)                                        /* (FUSES_USER_WORD_1) 64 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC128_Val _UINT32_(0x4)                                        /* (FUSES_USER_WORD_1) 128 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC256_Val _UINT32_(0x5)                                        /* (FUSES_USER_WORD_1) 256 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC512_Val _UINT32_(0x6)                                        /* (FUSES_USER_WORD_1) 512 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC1024_Val _UINT32_(0x7)                                        /* (FUSES_USER_WORD_1) 1024 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC2048_Val _UINT32_(0x8)                                        /* (FUSES_USER_WORD_1) 2048 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC4096_Val _UINT32_(0x9)                                        /* (FUSES_USER_WORD_1) 4096 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC8192_Val _UINT32_(0xA)                                        /* (FUSES_USER_WORD_1) 8192 clock cycles  */
#define   FUSES_USER_WORD_1_WDT_EWOFFSET_CYC16384_Val _UINT32_(0xB)                                        /* (FUSES_USER_WORD_1) 16384 clock cycles  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC8   (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC8_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 8 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC16  (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC16_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 16 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC32  (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC32_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 32 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC64  (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC64_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 64 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC128 (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC128_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 128 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC256 (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC256_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 256 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC512 (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC512_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 512 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC1024 (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC1024_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 1024 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC2048 (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC2048_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 2048 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC4096 (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC4096_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 4096 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC8192 (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC8192_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 8192 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_EWOFFSET_CYC16384 (FUSES_USER_WORD_1_WDT_EWOFFSET_CYC16384_Val << FUSES_USER_WORD_1_WDT_EWOFFSET_Pos) /* (FUSES_USER_WORD_1) 16384 clock cycles Position  */
#define FUSES_USER_WORD_1_WDT_WEN_Pos         _UINT32_(8)                                          /* (FUSES_USER_WORD_1) WDT Window Mode Enable Position */
#define FUSES_USER_WORD_1_WDT_WEN_Msk         (_UINT32_(0x1) << FUSES_USER_WORD_1_WDT_WEN_Pos)     /* (FUSES_USER_WORD_1) WDT Window Mode Enable Mask */
#define FUSES_USER_WORD_1_WDT_WEN(value)      (FUSES_USER_WORD_1_WDT_WEN_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_WDT_WEN_Pos)) /* Assigment of value for WDT_WEN in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_BOD33_HYST_Pos      _UINT32_(9)                                          /* (FUSES_USER_WORD_1) BOD33 Hysteresis Position */
#define FUSES_USER_WORD_1_BOD33_HYST_Msk      (_UINT32_(0x1) << FUSES_USER_WORD_1_BOD33_HYST_Pos)  /* (FUSES_USER_WORD_1) BOD33 Hysteresis Mask */
#define FUSES_USER_WORD_1_BOD33_HYST(value)   (FUSES_USER_WORD_1_BOD33_HYST_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_BOD33_HYST_Pos)) /* Assigment of value for BOD33_HYST in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_IDAU_RXN_Pos        _UINT32_(11)                                         /* (FUSES_USER_WORD_1) RAM is eXecute Never Position */
#define FUSES_USER_WORD_1_IDAU_RXN_Msk        (_UINT32_(0x1) << FUSES_USER_WORD_1_IDAU_RXN_Pos)    /* (FUSES_USER_WORD_1) RAM is eXecute Never Mask */
#define FUSES_USER_WORD_1_IDAU_RXN(value)     (FUSES_USER_WORD_1_IDAU_RXN_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_IDAU_RXN_Pos)) /* Assigment of value for IDAU_RXN in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_NVMCTRL_DXN_Pos     _UINT32_(12)                                         /* (FUSES_USER_WORD_1) DATA FLASH is eXecute Never Position */
#define FUSES_USER_WORD_1_NVMCTRL_DXN_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_1_NVMCTRL_DXN_Pos) /* (FUSES_USER_WORD_1) DATA FLASH is eXecute Never Mask */
#define FUSES_USER_WORD_1_NVMCTRL_DXN(value)  (FUSES_USER_WORD_1_NVMCTRL_DXN_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_NVMCTRL_DXN_Pos)) /* Assigment of value for NVMCTRL_DXN in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_Msk                 _UINT32_(0x00001BFF)                                 /* (FUSES_USER_WORD_1) Register Mask  */


/* -------- FUSES_USER_WORD_2 : (FUSES Offset: 0x08) (R/W 32) USER Page Word 2 -------- */
#define FUSES_USER_WORD_2_RESETVALUE          _UINT32_(0xFFF8C0FF)                                 /*  (FUSES_USER_WORD_2) USER Page Word 2  Reset Value */

#define FUSES_USER_WORD_2_IDAU_AS_Pos         _UINT32_(0)                                          /* (FUSES_USER_WORD_2) Application Secure Position */
#define FUSES_USER_WORD_2_IDAU_AS_Msk         (_UINT32_(0xFF) << FUSES_USER_WORD_2_IDAU_AS_Pos)    /* (FUSES_USER_WORD_2) Application Secure Mask */
#define FUSES_USER_WORD_2_IDAU_AS(value)      (FUSES_USER_WORD_2_IDAU_AS_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_IDAU_AS_Pos)) /* Assigment of value for IDAU_AS in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_IDAU_ANSC_Pos       _UINT32_(8)                                          /* (FUSES_USER_WORD_2) Application Non-Secure Callable Position */
#define FUSES_USER_WORD_2_IDAU_ANSC_Msk       (_UINT32_(0x3F) << FUSES_USER_WORD_2_IDAU_ANSC_Pos)  /* (FUSES_USER_WORD_2) Application Non-Secure Callable Mask */
#define FUSES_USER_WORD_2_IDAU_ANSC(value)    (FUSES_USER_WORD_2_IDAU_ANSC_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_IDAU_ANSC_Pos)) /* Assigment of value for IDAU_ANSC in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_IDAU_DS_Pos         _UINT32_(16)                                         /* (FUSES_USER_WORD_2) Data Secure Position */
#define FUSES_USER_WORD_2_IDAU_DS_Msk         (_UINT32_(0xF) << FUSES_USER_WORD_2_IDAU_DS_Pos)     /* (FUSES_USER_WORD_2) Data Secure Mask */
#define FUSES_USER_WORD_2_IDAU_DS(value)      (FUSES_USER_WORD_2_IDAU_DS_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_IDAU_DS_Pos)) /* Assigment of value for IDAU_DS in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_IDAU_RS_Pos         _UINT32_(24)                                         /* (FUSES_USER_WORD_2) RAM Secure Position */
#define FUSES_USER_WORD_2_IDAU_RS_Msk         (_UINT32_(0x7F) << FUSES_USER_WORD_2_IDAU_RS_Pos)    /* (FUSES_USER_WORD_2) RAM Secure Mask */
#define FUSES_USER_WORD_2_IDAU_RS(value)      (FUSES_USER_WORD_2_IDAU_RS_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_IDAU_RS_Pos)) /* Assigment of value for IDAU_RS in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_Msk                 _UINT32_(0x7F0F3FFF)                                 /* (FUSES_USER_WORD_2) Register Mask  */


/* -------- FUSES_USER_WORD_3 : (FUSES Offset: 0x0C) (R/W 32) USER Page Word 3 -------- */
#define FUSES_USER_WORD_3_RESETVALUE          _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_USER_WORD_3) USER Page Word 3  Reset Value */

#define FUSES_USER_WORD_3_NVMCTRL_URWEN_Pos   _UINT32_(0)                                          /* (FUSES_USER_WORD_3) User Row Write Enable Position */
#define FUSES_USER_WORD_3_NVMCTRL_URWEN_Msk   (_UINT32_(0x1) << FUSES_USER_WORD_3_NVMCTRL_URWEN_Pos) /* (FUSES_USER_WORD_3) User Row Write Enable Mask */
#define FUSES_USER_WORD_3_NVMCTRL_URWEN(value) (FUSES_USER_WORD_3_NVMCTRL_URWEN_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_NVMCTRL_URWEN_Pos)) /* Assigment of value for NVMCTRL_URWEN in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_Msk                 _UINT32_(0x00000001)                                 /* (FUSES_USER_WORD_3) Register Mask  */


/* -------- FUSES_USER_WORD_4 : (FUSES Offset: 0x10) (R/W 32) USER Page Word 4 -------- */
#define FUSES_USER_WORD_4_RESETVALUE          _UINT32_(0x00)                                       /*  (FUSES_USER_WORD_4) USER Page Word 4  Reset Value */

#define FUSES_USER_WORD_4_NONSECA_PAC_Pos     _UINT32_(0)                                          /* (FUSES_USER_WORD_4) PAC Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_PAC_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_PAC_Pos) /* (FUSES_USER_WORD_4) PAC Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_PAC(value)  (FUSES_USER_WORD_4_NONSECA_PAC_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_PAC_Pos)) /* Assigment of value for NONSECA_PAC in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_PM_Pos      _UINT32_(1)                                          /* (FUSES_USER_WORD_4) PM Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_PM_Msk      (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_PM_Pos)  /* (FUSES_USER_WORD_4) PM Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_PM(value)   (FUSES_USER_WORD_4_NONSECA_PM_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_PM_Pos)) /* Assigment of value for NONSECA_PM in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_MCLK_Pos    _UINT32_(2)                                          /* (FUSES_USER_WORD_4) MCLK Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_MCLK_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_MCLK_Pos) /* (FUSES_USER_WORD_4) MCLK Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_MCLK(value) (FUSES_USER_WORD_4_NONSECA_MCLK_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_MCLK_Pos)) /* Assigment of value for NONSECA_MCLK in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_RSTC_Pos    _UINT32_(3)                                          /* (FUSES_USER_WORD_4) RSTC Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_RSTC_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_RSTC_Pos) /* (FUSES_USER_WORD_4) RSTC Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_RSTC(value) (FUSES_USER_WORD_4_NONSECA_RSTC_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_RSTC_Pos)) /* Assigment of value for NONSECA_RSTC in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_OSCCTRL_Pos _UINT32_(4)                                          /* (FUSES_USER_WORD_4) OSCCTRL Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_OSCCTRL_Msk (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_OSCCTRL_Pos) /* (FUSES_USER_WORD_4) OSCCTRL Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_OSCCTRL(value) (FUSES_USER_WORD_4_NONSECA_OSCCTRL_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_OSCCTRL_Pos)) /* Assigment of value for NONSECA_OSCCTRL in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_OSC32KCTRL_Pos _UINT32_(5)                                          /* (FUSES_USER_WORD_4) OSC32KCTRL Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_OSC32KCTRL_Msk (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_OSC32KCTRL_Pos) /* (FUSES_USER_WORD_4) OSC32KCTRL Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_OSC32KCTRL(value) (FUSES_USER_WORD_4_NONSECA_OSC32KCTRL_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_OSC32KCTRL_Pos)) /* Assigment of value for NONSECA_OSC32KCTRL in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_SUPC_Pos    _UINT32_(6)                                          /* (FUSES_USER_WORD_4) SUPC Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_SUPC_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_SUPC_Pos) /* (FUSES_USER_WORD_4) SUPC Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_SUPC(value) (FUSES_USER_WORD_4_NONSECA_SUPC_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_SUPC_Pos)) /* Assigment of value for NONSECA_SUPC in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_GCLK_Pos    _UINT32_(7)                                          /* (FUSES_USER_WORD_4) GCLK Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_GCLK_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_GCLK_Pos) /* (FUSES_USER_WORD_4) GCLK Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_GCLK(value) (FUSES_USER_WORD_4_NONSECA_GCLK_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_GCLK_Pos)) /* Assigment of value for NONSECA_GCLK in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_WDT_Pos     _UINT32_(8)                                          /* (FUSES_USER_WORD_4) WDT Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_WDT_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_WDT_Pos) /* (FUSES_USER_WORD_4) WDT Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_WDT(value)  (FUSES_USER_WORD_4_NONSECA_WDT_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_WDT_Pos)) /* Assigment of value for NONSECA_WDT in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_RTC_Pos     _UINT32_(9)                                          /* (FUSES_USER_WORD_4) RTC Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_RTC_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_RTC_Pos) /* (FUSES_USER_WORD_4) RTC Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_RTC(value)  (FUSES_USER_WORD_4_NONSECA_RTC_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_RTC_Pos)) /* Assigment of value for NONSECA_RTC in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_EIC_Pos     _UINT32_(10)                                         /* (FUSES_USER_WORD_4) EIC Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_EIC_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_EIC_Pos) /* (FUSES_USER_WORD_4) EIC Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_EIC(value)  (FUSES_USER_WORD_4_NONSECA_EIC_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_EIC_Pos)) /* Assigment of value for NONSECA_EIC in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_FREQM_Pos   _UINT32_(11)                                         /* (FUSES_USER_WORD_4) FREQM Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_FREQM_Msk   (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_FREQM_Pos) /* (FUSES_USER_WORD_4) FREQM Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_FREQM(value) (FUSES_USER_WORD_4_NONSECA_FREQM_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_FREQM_Pos)) /* Assigment of value for NONSECA_FREQM in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_PORT_Pos    _UINT32_(12)                                         /* (FUSES_USER_WORD_4) PORT Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_PORT_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_PORT_Pos) /* (FUSES_USER_WORD_4) PORT Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_PORT(value) (FUSES_USER_WORD_4_NONSECA_PORT_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_PORT_Pos)) /* Assigment of value for NONSECA_PORT in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_NONSECA_AC_Pos      _UINT32_(13)                                         /* (FUSES_USER_WORD_4) AC Non-Secure Position */
#define FUSES_USER_WORD_4_NONSECA_AC_Msk      (_UINT32_(0x1) << FUSES_USER_WORD_4_NONSECA_AC_Pos)  /* (FUSES_USER_WORD_4) AC Non-Secure Mask */
#define FUSES_USER_WORD_4_NONSECA_AC(value)   (FUSES_USER_WORD_4_NONSECA_AC_Msk & (_UINT32_(value) << FUSES_USER_WORD_4_NONSECA_AC_Pos)) /* Assigment of value for NONSECA_AC in the FUSES_USER_WORD_4 register */
#define FUSES_USER_WORD_4_Msk                 _UINT32_(0x00003FFF)                                 /* (FUSES_USER_WORD_4) Register Mask  */


/* -------- FUSES_USER_WORD_5 : (FUSES Offset: 0x14) (R/W 32) USER Page Word 5 -------- */
#define FUSES_USER_WORD_5_RESETVALUE          _UINT32_(0x00)                                       /*  (FUSES_USER_WORD_5) USER Page Word 5  Reset Value */

#define FUSES_USER_WORD_5_NONSECB_IDAU_Pos    _UINT32_(0)                                          /* (FUSES_USER_WORD_5) IDAU Non-Secure Position */
#define FUSES_USER_WORD_5_NONSECB_IDAU_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_5_NONSECB_IDAU_Pos) /* (FUSES_USER_WORD_5) IDAU Non-Secure Mask */
#define FUSES_USER_WORD_5_NONSECB_IDAU(value) (FUSES_USER_WORD_5_NONSECB_IDAU_Msk & (_UINT32_(value) << FUSES_USER_WORD_5_NONSECB_IDAU_Pos)) /* Assigment of value for NONSECB_IDAU in the FUSES_USER_WORD_5 register */
#define FUSES_USER_WORD_5_NONSECB_DSU_Pos     _UINT32_(1)                                          /* (FUSES_USER_WORD_5) DSU Non-Secure Position */
#define FUSES_USER_WORD_5_NONSECB_DSU_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_5_NONSECB_DSU_Pos) /* (FUSES_USER_WORD_5) DSU Non-Secure Mask */
#define FUSES_USER_WORD_5_NONSECB_DSU(value)  (FUSES_USER_WORD_5_NONSECB_DSU_Msk & (_UINT32_(value) << FUSES_USER_WORD_5_NONSECB_DSU_Pos)) /* Assigment of value for NONSECB_DSU in the FUSES_USER_WORD_5 register */
#define FUSES_USER_WORD_5_NONSECB_NVMCTRL_Pos _UINT32_(2)                                          /* (FUSES_USER_WORD_5) NVMCTRL Non-Secure Position */
#define FUSES_USER_WORD_5_NONSECB_NVMCTRL_Msk (_UINT32_(0x1) << FUSES_USER_WORD_5_NONSECB_NVMCTRL_Pos) /* (FUSES_USER_WORD_5) NVMCTRL Non-Secure Mask */
#define FUSES_USER_WORD_5_NONSECB_NVMCTRL(value) (FUSES_USER_WORD_5_NONSECB_NVMCTRL_Msk & (_UINT32_(value) << FUSES_USER_WORD_5_NONSECB_NVMCTRL_Pos)) /* Assigment of value for NONSECB_NVMCTRL in the FUSES_USER_WORD_5 register */
#define FUSES_USER_WORD_5_NONSECB_DMAC_Pos    _UINT32_(3)                                          /* (FUSES_USER_WORD_5) DMAC Non-Secure Position */
#define FUSES_USER_WORD_5_NONSECB_DMAC_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_5_NONSECB_DMAC_Pos) /* (FUSES_USER_WORD_5) DMAC Non-Secure Mask */
#define FUSES_USER_WORD_5_NONSECB_DMAC(value) (FUSES_USER_WORD_5_NONSECB_DMAC_Msk & (_UINT32_(value) << FUSES_USER_WORD_5_NONSECB_DMAC_Pos)) /* Assigment of value for NONSECB_DMAC in the FUSES_USER_WORD_5 register */
#define FUSES_USER_WORD_5_Msk                 _UINT32_(0x0000000F)                                 /* (FUSES_USER_WORD_5) Register Mask  */


/* -------- FUSES_USER_WORD_6 : (FUSES Offset: 0x18) (R/W 32) USER Page Word 6 -------- */
#define FUSES_USER_WORD_6_RESETVALUE          _UINT32_(0x00)                                       /*  (FUSES_USER_WORD_6) USER Page Word 6  Reset Value */

#define FUSES_USER_WORD_6_NONSECC_EVSYS_Pos   _UINT32_(0)                                          /* (FUSES_USER_WORD_6) EVSYS Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_EVSYS_Msk   (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_EVSYS_Pos) /* (FUSES_USER_WORD_6) EVSYS Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_EVSYS(value) (FUSES_USER_WORD_6_NONSECC_EVSYS_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_EVSYS_Pos)) /* Assigment of value for NONSECC_EVSYS in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_SERCOM0_Pos _UINT32_(1)                                          /* (FUSES_USER_WORD_6) SERCOM0 Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_SERCOM0_Msk (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_SERCOM0_Pos) /* (FUSES_USER_WORD_6) SERCOM0 Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_SERCOM0(value) (FUSES_USER_WORD_6_NONSECC_SERCOM0_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_SERCOM0_Pos)) /* Assigment of value for NONSECC_SERCOM0 in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_SERCOM1_Pos _UINT32_(2)                                          /* (FUSES_USER_WORD_6) SERCOM1 Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_SERCOM1_Msk (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_SERCOM1_Pos) /* (FUSES_USER_WORD_6) SERCOM1 Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_SERCOM1(value) (FUSES_USER_WORD_6_NONSECC_SERCOM1_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_SERCOM1_Pos)) /* Assigment of value for NONSECC_SERCOM1 in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_SERCOM2_Pos _UINT32_(3)                                          /* (FUSES_USER_WORD_6) SERCOM2 Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_SERCOM2_Msk (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_SERCOM2_Pos) /* (FUSES_USER_WORD_6) SERCOM2 Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_SERCOM2(value) (FUSES_USER_WORD_6_NONSECC_SERCOM2_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_SERCOM2_Pos)) /* Assigment of value for NONSECC_SERCOM2 in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_TC0_Pos     _UINT32_(4)                                          /* (FUSES_USER_WORD_6) TC0 Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_TC0_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_TC0_Pos) /* (FUSES_USER_WORD_6) TC0 Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_TC0(value)  (FUSES_USER_WORD_6_NONSECC_TC0_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_TC0_Pos)) /* Assigment of value for NONSECC_TC0 in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_TC1_Pos     _UINT32_(5)                                          /* (FUSES_USER_WORD_6) TC1 Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_TC1_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_TC1_Pos) /* (FUSES_USER_WORD_6) TC1 Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_TC1(value)  (FUSES_USER_WORD_6_NONSECC_TC1_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_TC1_Pos)) /* Assigment of value for NONSECC_TC1 in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_TC2_Pos     _UINT32_(6)                                          /* (FUSES_USER_WORD_6) TC2 Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_TC2_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_TC2_Pos) /* (FUSES_USER_WORD_6) TC2 Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_TC2(value)  (FUSES_USER_WORD_6_NONSECC_TC2_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_TC2_Pos)) /* Assigment of value for NONSECC_TC2 in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_ADC_Pos     _UINT32_(7)                                          /* (FUSES_USER_WORD_6) ADC Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_ADC_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_ADC_Pos) /* (FUSES_USER_WORD_6) ADC Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_ADC(value)  (FUSES_USER_WORD_6_NONSECC_ADC_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_ADC_Pos)) /* Assigment of value for NONSECC_ADC in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_DAC_Pos     _UINT32_(8)                                          /* (FUSES_USER_WORD_6) DAC Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_DAC_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_DAC_Pos) /* (FUSES_USER_WORD_6) DAC Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_DAC(value)  (FUSES_USER_WORD_6_NONSECC_DAC_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_DAC_Pos)) /* Assigment of value for NONSECC_DAC in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_PTC_Pos     _UINT32_(9)                                          /* (FUSES_USER_WORD_6) PTC Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_PTC_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_PTC_Pos) /* (FUSES_USER_WORD_6) PTC Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_PTC(value)  (FUSES_USER_WORD_6_NONSECC_PTC_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_PTC_Pos)) /* Assigment of value for NONSECC_PTC in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_TRNG_Pos    _UINT32_(10)                                         /* (FUSES_USER_WORD_6) TRNG Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_TRNG_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_TRNG_Pos) /* (FUSES_USER_WORD_6) TRNG Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_TRNG(value) (FUSES_USER_WORD_6_NONSECC_TRNG_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_TRNG_Pos)) /* Assigment of value for NONSECC_TRNG in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_CCL_Pos     _UINT32_(11)                                         /* (FUSES_USER_WORD_6) CCL Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_CCL_Msk     (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_CCL_Pos) /* (FUSES_USER_WORD_6) CCL Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_CCL(value)  (FUSES_USER_WORD_6_NONSECC_CCL_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_CCL_Pos)) /* Assigment of value for NONSECC_CCL in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_OPAMP_Pos   _UINT32_(12)                                         /* (FUSES_USER_WORD_6) OPAMP Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_OPAMP_Msk   (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_OPAMP_Pos) /* (FUSES_USER_WORD_6) OPAMP Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_OPAMP(value) (FUSES_USER_WORD_6_NONSECC_OPAMP_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_OPAMP_Pos)) /* Assigment of value for NONSECC_OPAMP in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_NONSECC_TRAM_Pos    _UINT32_(13)                                         /* (FUSES_USER_WORD_6) TRAM Non-Secure Position */
#define FUSES_USER_WORD_6_NONSECC_TRAM_Msk    (_UINT32_(0x1) << FUSES_USER_WORD_6_NONSECC_TRAM_Pos) /* (FUSES_USER_WORD_6) TRAM Non-Secure Mask */
#define FUSES_USER_WORD_6_NONSECC_TRAM(value) (FUSES_USER_WORD_6_NONSECC_TRAM_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_TRAM_Pos)) /* Assigment of value for NONSECC_TRAM in the FUSES_USER_WORD_6 register */
#define FUSES_USER_WORD_6_Msk                 _UINT32_(0x00003FFF)                                 /* (FUSES_USER_WORD_6) Register Mask  */

#define FUSES_USER_WORD_6_NONSECC_SERCOM_Pos  _UINT32_(1)                                          /* (FUSES_USER_WORD_6 Position) SERCOMx Non-Secure */
#define FUSES_USER_WORD_6_NONSECC_SERCOM_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_6_NONSECC_SERCOM_Pos) /* (FUSES_USER_WORD_6 Mask) NONSECC_SERCOM */
#define FUSES_USER_WORD_6_NONSECC_SERCOM(value) (FUSES_USER_WORD_6_NONSECC_SERCOM_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_SERCOM_Pos)) 
#define FUSES_USER_WORD_6_NONSECC_TC_Pos      _UINT32_(4)                                          /* (FUSES_USER_WORD_6 Position) TCx Non-Secure */
#define FUSES_USER_WORD_6_NONSECC_TC_Msk      (_UINT32_(0x7) << FUSES_USER_WORD_6_NONSECC_TC_Pos)  /* (FUSES_USER_WORD_6 Mask) NONSECC_TC */
#define FUSES_USER_WORD_6_NONSECC_TC(value)   (FUSES_USER_WORD_6_NONSECC_TC_Msk & (_UINT32_(value) << FUSES_USER_WORD_6_NONSECC_TC_Pos)) 

/* -------- FUSES_USER_WORD_7 : (FUSES Offset: 0x1C) (R/W 32) USER Page Word 7 -------- */
#define FUSES_USER_WORD_7_RESETVALUE          _UINT32_(0x8433651E)                                 /*  (FUSES_USER_WORD_7) USER Page Word 7  Reset Value */

#define FUSES_USER_WORD_7_BOOTROM_USERCRC_Pos _UINT32_(0)                                          /* (FUSES_USER_WORD_7) CRC for USER[1,2,3] DWORDS Position */
#define FUSES_USER_WORD_7_BOOTROM_USERCRC_Msk (_UINT32_(0xFFFFFFFF) << FUSES_USER_WORD_7_BOOTROM_USERCRC_Pos) /* (FUSES_USER_WORD_7) CRC for USER[1,2,3] DWORDS Mask */
#define FUSES_USER_WORD_7_BOOTROM_USERCRC(value) (FUSES_USER_WORD_7_BOOTROM_USERCRC_Msk & (_UINT32_(value) << FUSES_USER_WORD_7_BOOTROM_USERCRC_Pos)) /* Assigment of value for BOOTROM_USERCRC in the FUSES_USER_WORD_7 register */
#define FUSES_USER_WORD_7_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (FUSES_USER_WORD_7) Register Mask  */


/** \brief FUSES register offsets definitions */
#define FUSES_SW_CALIB_WORD_0_REG_OFST _UINT32_(0x00)      /* (FUSES_SW_CALIB_WORD_0) SW_CALIB Page Word 0 Offset */
#define FUSES_TEMP_LOG_WORD_0_REG_OFST _UINT32_(0x00)      /* (FUSES_TEMP_LOG_WORD_0) TEMP_LOG Page Word 0 Offset */
#define FUSES_TEMP_LOG_WORD_1_REG_OFST _UINT32_(0x04)      /* (FUSES_TEMP_LOG_WORD_1) TEMP_LOG Page Word 1 Offset */
#define FUSES_BOCOR_WORD_0_REG_OFST    _UINT32_(0x00)      /* (FUSES_BOCOR_WORD_0) BOCOR Page Word 0 Offset */
#define FUSES_BOCOR_WORD_1_REG_OFST    _UINT32_(0x04)      /* (FUSES_BOCOR_WORD_1) BOCOR Page Word 1 Offset */
#define FUSES_BOCOR_WORD_2_REG_OFST    _UINT32_(0x08)      /* (FUSES_BOCOR_WORD_2) BOCOR Page Word 2 Offset */
#define FUSES_BOCOR_WORD_4_REG_OFST    _UINT32_(0x10)      /* (FUSES_BOCOR_WORD_4) BOCOR Page Word 4 Offset */
#define FUSES_BOCOR_WORD_5_REG_OFST    _UINT32_(0x14)      /* (FUSES_BOCOR_WORD_5) BOCOR Page Word 5 Offset */
#define FUSES_BOCOR_WORD_6_REG_OFST    _UINT32_(0x18)      /* (FUSES_BOCOR_WORD_6) BOCOR Page Word 6 Offset */
#define FUSES_BOCOR_WORD_7_REG_OFST    _UINT32_(0x1C)      /* (FUSES_BOCOR_WORD_7) BOCOR Page Word 7 Offset */
#define FUSES_BOCOR_WORD_8_REG_OFST    _UINT32_(0x20)      /* (FUSES_BOCOR_WORD_8) BOCOR Page Word 8 Offset */
#define FUSES_BOCOR_WORD_9_REG_OFST    _UINT32_(0x24)      /* (FUSES_BOCOR_WORD_9) BOCOR Page Word 9 Offset */
#define FUSES_BOCOR_WORD_10_REG_OFST   _UINT32_(0x28)      /* (FUSES_BOCOR_WORD_10) BOCOR Page Word 10 Offset */
#define FUSES_BOCOR_WORD_11_REG_OFST   _UINT32_(0x2C)      /* (FUSES_BOCOR_WORD_11) BOCOR Page Word 11 Offset */
#define FUSES_BOCOR_WORD_12_REG_OFST   _UINT32_(0x30)      /* (FUSES_BOCOR_WORD_12) BOCOR Page Word 12 Offset */
#define FUSES_BOCOR_WORD_13_REG_OFST   _UINT32_(0x34)      /* (FUSES_BOCOR_WORD_13) BOCOR Page Word 13 Offset */
#define FUSES_BOCOR_WORD_14_REG_OFST   _UINT32_(0x38)      /* (FUSES_BOCOR_WORD_14) BOCOR Page Word 14 Offset */
#define FUSES_BOCOR_WORD_15_REG_OFST   _UINT32_(0x3C)      /* (FUSES_BOCOR_WORD_15) BOCOR Page Word 15 Offset */
#define FUSES_BOCOR_WORD_16_REG_OFST   _UINT32_(0x40)      /* (FUSES_BOCOR_WORD_16) BOCOR Page Word 16 Offset */
#define FUSES_BOCOR_WORD_17_REG_OFST   _UINT32_(0x44)      /* (FUSES_BOCOR_WORD_17) BOCOR Page Word 17 Offset */
#define FUSES_BOCOR_WORD_18_REG_OFST   _UINT32_(0x48)      /* (FUSES_BOCOR_WORD_18) BOCOR Page Word 18 Offset */
#define FUSES_BOCOR_WORD_19_REG_OFST   _UINT32_(0x4C)      /* (FUSES_BOCOR_WORD_19) BOCOR Page Word 19 Offset */
#define FUSES_BOCOR_WORD_20_REG_OFST   _UINT32_(0x50)      /* (FUSES_BOCOR_WORD_20) BOCOR Page Word 20 Offset */
#define FUSES_BOCOR_WORD_21_REG_OFST   _UINT32_(0x54)      /* (FUSES_BOCOR_WORD_21) BOCOR Page Word 21 Offset */
#define FUSES_BOCOR_WORD_22_REG_OFST   _UINT32_(0x58)      /* (FUSES_BOCOR_WORD_22) BOCOR Page Word 22 Offset */
#define FUSES_BOCOR_WORD_23_REG_OFST   _UINT32_(0x5C)      /* (FUSES_BOCOR_WORD_23) BOCOR Page Word 23 Offset */
#define FUSES_BOCOR_WORD_24_REG_OFST   _UINT32_(0x60)      /* (FUSES_BOCOR_WORD_24) BOCOR Page Word 24 Offset */
#define FUSES_BOCOR_WORD_25_REG_OFST   _UINT32_(0x64)      /* (FUSES_BOCOR_WORD_25) BOCOR Page Word 25 Offset */
#define FUSES_BOCOR_WORD_26_REG_OFST   _UINT32_(0x68)      /* (FUSES_BOCOR_WORD_26) BOCOR Page Word 26 Offset */
#define FUSES_BOCOR_WORD_27_REG_OFST   _UINT32_(0x6C)      /* (FUSES_BOCOR_WORD_27) BOCOR Page Word 27 Offset */
#define FUSES_BOCOR_WORD_56_REG_OFST   _UINT32_(0xE0)      /* (FUSES_BOCOR_WORD_56) BOCOR Page Word 56 Offset */
#define FUSES_BOCOR_WORD_57_REG_OFST   _UINT32_(0xE4)      /* (FUSES_BOCOR_WORD_57) BOCOR Page Word 57 Offset */
#define FUSES_BOCOR_WORD_58_REG_OFST   _UINT32_(0xE8)      /* (FUSES_BOCOR_WORD_58) BOCOR Page Word 58 Offset */
#define FUSES_BOCOR_WORD_59_REG_OFST   _UINT32_(0xEC)      /* (FUSES_BOCOR_WORD_59) BOCOR Page Word 59 Offset */
#define FUSES_BOCOR_WORD_60_REG_OFST   _UINT32_(0xF0)      /* (FUSES_BOCOR_WORD_60) BOCOR Page Word 60 Offset */
#define FUSES_BOCOR_WORD_61_REG_OFST   _UINT32_(0xF4)      /* (FUSES_BOCOR_WORD_61) BOCOR Page Word 61 Offset */
#define FUSES_BOCOR_WORD_62_REG_OFST   _UINT32_(0xF8)      /* (FUSES_BOCOR_WORD_62) BOCOR Page Word 62 Offset */
#define FUSES_BOCOR_WORD_63_REG_OFST   _UINT32_(0xFC)      /* (FUSES_BOCOR_WORD_63) BOCOR Page Word 63 Offset */
#define FUSES_USER_WORD_0_REG_OFST     _UINT32_(0x00)      /* (FUSES_USER_WORD_0) USER Page Word 0 Offset */
#define FUSES_USER_WORD_1_REG_OFST     _UINT32_(0x04)      /* (FUSES_USER_WORD_1) USER Page Word 1 Offset */
#define FUSES_USER_WORD_2_REG_OFST     _UINT32_(0x08)      /* (FUSES_USER_WORD_2) USER Page Word 2 Offset */
#define FUSES_USER_WORD_3_REG_OFST     _UINT32_(0x0C)      /* (FUSES_USER_WORD_3) USER Page Word 3 Offset */
#define FUSES_USER_WORD_4_REG_OFST     _UINT32_(0x10)      /* (FUSES_USER_WORD_4) USER Page Word 4 Offset */
#define FUSES_USER_WORD_5_REG_OFST     _UINT32_(0x14)      /* (FUSES_USER_WORD_5) USER Page Word 5 Offset */
#define FUSES_USER_WORD_6_REG_OFST     _UINT32_(0x18)      /* (FUSES_USER_WORD_6) USER Page Word 6 Offset */
#define FUSES_USER_WORD_7_REG_OFST     _UINT32_(0x1C)      /* (FUSES_USER_WORD_7) USER Page Word 7 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SW_CALIB_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_SW_CALIB_WORD_0; /**< Offset: 0x00 (R/   32) SW_CALIB Page Word 0 */
} fuses_sw_calib_fuses_registers_t;

/** \brief TEMP_LOG_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_TEMP_LOG_WORD_0; /**< Offset: 0x00 (R/   32) TEMP_LOG Page Word 0 */
  __I   uint32_t                       FUSES_TEMP_LOG_WORD_1; /**< Offset: 0x04 (R/   32) TEMP_LOG Page Word 1 */
} fuses_temp_log_fuses_registers_t;

/** \brief BOCOR_FUSES register API structure */
typedef struct
{
  __IO  uint32_t                       FUSES_BOCOR_WORD_0; /**< Offset: 0x00 (R/W  32) BOCOR Page Word 0 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_1; /**< Offset: 0x04 (R/W  32) BOCOR Page Word 1 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_2; /**< Offset: 0x08 (R/W  32) BOCOR Page Word 2 */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       FUSES_BOCOR_WORD_4; /**< Offset: 0x10 (R/W  32) BOCOR Page Word 4 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_5; /**< Offset: 0x14 (R/W  32) BOCOR Page Word 5 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_6; /**< Offset: 0x18 (R/W  32) BOCOR Page Word 6 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_7; /**< Offset: 0x1C (R/W  32) BOCOR Page Word 7 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_8; /**< Offset: 0x20 (R/W  32) BOCOR Page Word 8 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_9; /**< Offset: 0x24 (R/W  32) BOCOR Page Word 9 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_10; /**< Offset: 0x28 (R/W  32) BOCOR Page Word 10 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_11; /**< Offset: 0x2C (R/W  32) BOCOR Page Word 11 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_12; /**< Offset: 0x30 (R/W  32) BOCOR Page Word 12 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_13; /**< Offset: 0x34 (R/W  32) BOCOR Page Word 13 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_14; /**< Offset: 0x38 (R/W  32) BOCOR Page Word 14 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_15; /**< Offset: 0x3C (R/W  32) BOCOR Page Word 15 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_16; /**< Offset: 0x40 (R/W  32) BOCOR Page Word 16 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_17; /**< Offset: 0x44 (R/W  32) BOCOR Page Word 17 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_18; /**< Offset: 0x48 (R/W  32) BOCOR Page Word 18 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_19; /**< Offset: 0x4C (R/W  32) BOCOR Page Word 19 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_20; /**< Offset: 0x50 (R/W  32) BOCOR Page Word 20 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_21; /**< Offset: 0x54 (R/W  32) BOCOR Page Word 21 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_22; /**< Offset: 0x58 (R/W  32) BOCOR Page Word 22 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_23; /**< Offset: 0x5C (R/W  32) BOCOR Page Word 23 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_24; /**< Offset: 0x60 (R/W  32) BOCOR Page Word 24 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_25; /**< Offset: 0x64 (R/W  32) BOCOR Page Word 25 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_26; /**< Offset: 0x68 (R/W  32) BOCOR Page Word 26 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_27; /**< Offset: 0x6C (R/W  32) BOCOR Page Word 27 */
  __I   uint8_t                        Reserved2[0x70];
  __IO  uint32_t                       FUSES_BOCOR_WORD_56; /**< Offset: 0xE0 (R/W  32) BOCOR Page Word 56 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_57; /**< Offset: 0xE4 (R/W  32) BOCOR Page Word 57 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_58; /**< Offset: 0xE8 (R/W  32) BOCOR Page Word 58 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_59; /**< Offset: 0xEC (R/W  32) BOCOR Page Word 59 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_60; /**< Offset: 0xF0 (R/W  32) BOCOR Page Word 60 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_61; /**< Offset: 0xF4 (R/W  32) BOCOR Page Word 61 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_62; /**< Offset: 0xF8 (R/W  32) BOCOR Page Word 62 */
  __IO  uint32_t                       FUSES_BOCOR_WORD_63; /**< Offset: 0xFC (R/W  32) BOCOR Page Word 63 */
} fuses_bocor_fuses_registers_t;

/** \brief USER_FUSES register API structure */
typedef struct
{
  __IO  uint32_t                       FUSES_USER_WORD_0;  /**< Offset: 0x00 (R/W  32) USER Page Word 0 */
  __IO  uint32_t                       FUSES_USER_WORD_1;  /**< Offset: 0x04 (R/W  32) USER Page Word 1 */
  __IO  uint32_t                       FUSES_USER_WORD_2;  /**< Offset: 0x08 (R/W  32) USER Page Word 2 */
  __IO  uint32_t                       FUSES_USER_WORD_3;  /**< Offset: 0x0C (R/W  32) USER Page Word 3 */
  __IO  uint32_t                       FUSES_USER_WORD_4;  /**< Offset: 0x10 (R/W  32) USER Page Word 4 */
  __IO  uint32_t                       FUSES_USER_WORD_5;  /**< Offset: 0x14 (R/W  32) USER Page Word 5 */
  __IO  uint32_t                       FUSES_USER_WORD_6;  /**< Offset: 0x18 (R/W  32) USER Page Word 6 */
  __IO  uint32_t                       FUSES_USER_WORD_7;  /**< Offset: 0x1C (R/W  32) USER Page Word 7 */
} fuses_user_fuses_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAML11_FUSES_COMPONENT_H_ */
