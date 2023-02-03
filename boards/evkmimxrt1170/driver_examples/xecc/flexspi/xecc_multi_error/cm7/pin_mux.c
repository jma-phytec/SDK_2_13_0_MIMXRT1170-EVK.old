/*
 * Copyright 2022 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v12.0
processor: MIMXRT1176xxxxx
package_id: MIMXRT1176DVMAA
mcu_data: ksdk2_0
processor_version: 12.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm7, enableClock: 'true'}
- pin_list:
  - {pin_num: M15, peripheral: LPUART1, signal: RXD, pin_signal: GPIO_AD_25, pull_up_down_config: Pull_Down, pull_keeper_select: Keeper, open_drain: Disable, drive_strength: High,
    slew_rate: Slow}
  - {pin_num: L13, peripheral: LPUART1, signal: TXD, pin_signal: GPIO_AD_24, pull_up_down_config: Pull_Down, pull_keeper_select: Keeper, open_drain: Disable, drive_strength: High,
    slew_rate: Slow}
  - {pin_num: F17, peripheral: FLEXSPI1, signal: FLEXSPI_A_SS0_B, pin_signal: GPIO_SD_B2_06, software_input_on: Enable, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver,
    open_drain: Disable}
  - {pin_num: G14, peripheral: FLEXSPI1, signal: FLEXSPI_A_SCLK, pin_signal: GPIO_SD_B2_07, software_input_on: Enable, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver,
    open_drain: Disable}
  - {pin_num: F15, peripheral: FLEXSPI1, signal: FLEXSPI_A_DATA0, pin_signal: GPIO_SD_B2_08, software_input_on: Enable, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver,
    open_drain: Disable}
  - {pin_num: H15, peripheral: FLEXSPI1, signal: FLEXSPI_A_DATA1, pin_signal: GPIO_SD_B2_09, software_input_on: Enable, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver,
    open_drain: Disable}
  - {pin_num: H14, peripheral: FLEXSPI1, signal: FLEXSPI_A_DATA2, pin_signal: GPIO_SD_B2_10, software_input_on: Enable, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver,
    open_drain: Disable}
  - {pin_num: F16, peripheral: FLEXSPI1, signal: FLEXSPI_A_DATA3, pin_signal: GPIO_SD_B2_11, software_input_on: Enable, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver,
    open_drain: Disable}
  - {pin_num: E14, peripheral: FLEXSPI1, signal: FLEXSPI_A_DQS, pin_signal: GPIO_SD_B2_05, software_input_on: Enable, pull_down_pull_up_config: Pull_Down, pdrv_config: High_Driver,
    open_drain: Disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins, assigned for the Cortex-M7F core.
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* LPCG on: LPCG is ON. */

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_24_LPUART1_TXD,          /* GPIO_AD_24 is configured as LPUART1_TXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_25_LPUART1_RXD,          /* GPIO_AD_25 is configured as LPUART1_RXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_B2_05_FLEXSPI1_A_DQS,    /* GPIO_SD_B2_05 is configured as FLEXSPI1_A_DQS */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_SD_B2_05 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_B2_06_FLEXSPI1_A_SS0_B,  /* GPIO_SD_B2_06 is configured as FLEXSPI1_A_SS0_B */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_SD_B2_06 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_B2_07_FLEXSPI1_A_SCLK,   /* GPIO_SD_B2_07 is configured as FLEXSPI1_A_SCLK */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_SD_B2_07 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_B2_08_FLEXSPI1_A_DATA00,  /* GPIO_SD_B2_08 is configured as FLEXSPI1_A_DATA00 */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_SD_B2_08 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_B2_09_FLEXSPI1_A_DATA01,  /* GPIO_SD_B2_09 is configured as FLEXSPI1_A_DATA01 */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_SD_B2_09 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_B2_10_FLEXSPI1_A_DATA02,  /* GPIO_SD_B2_10 is configured as FLEXSPI1_A_DATA02 */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_SD_B2_10 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_SD_B2_11_FLEXSPI1_A_DATA03,  /* GPIO_SD_B2_11 is configured as FLEXSPI1_A_DATA03 */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_SD_B2_11 */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_24_LPUART1_TXD,          /* GPIO_AD_24 PAD functional properties : */
      0x02U);                                 /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: high drive strength
                                                 Pull / Keep Select Field: Pull Disable, Highz
                                                 Pull Up / Down Config. Field: Weak pull down
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_25_LPUART1_RXD,          /* GPIO_AD_25 PAD functional properties : */
      0x02U);                                 /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: high drive strength
                                                 Pull / Keep Select Field: Pull Disable, Highz
                                                 Pull Up / Down Config. Field: Weak pull down
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_SD_B2_05_FLEXSPI1_A_DQS,    /* GPIO_SD_B2_05 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_SD_B2_06_FLEXSPI1_A_SS0_B,  /* GPIO_SD_B2_06 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_SD_B2_07_FLEXSPI1_A_SCLK,   /* GPIO_SD_B2_07 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_SD_B2_08_FLEXSPI1_A_DATA00,  /* GPIO_SD_B2_08 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_SD_B2_09_FLEXSPI1_A_DATA01,  /* GPIO_SD_B2_09 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_SD_B2_10_FLEXSPI1_A_DATA02,  /* GPIO_SD_B2_10 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_SD_B2_11_FLEXSPI1_A_DATA03,  /* GPIO_SD_B2_11 PAD functional properties : */
      0x08U);                                 /* PDRV Field: high drive strength
                                                 Pull Down Pull Up Field: Internal pulldown resistor enabled
                                                 Open Drain Field: Disabled
                                                 Domain write protection: Both cores are allowed
                                                 Domain write protection lock: Neither of DWP bits is locked */
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
