/*
	Name: makefile_helper.h
	Description: helper for makefiles.

	Copyright: Copyright (c) João Martins
	Author: João Martins
	Date: 20-02-2025

	µCNC is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version. Please see <http://www.gnu.org/licenses/>

	µCNC is distributed WITHOUT ANY WARRANTY;
	Also without the implied warranty of	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
	See the	GNU General Public License for more details.
*/

#ifndef MAKEFILE_HELPER_H
#define MAKEFILE_HELPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#define BOARD_UNO 1
#define BOARD_RAMBO14 2
#define BOARD_RAMPS14 3
#define BOARD_MKS_DLC 4
#define BOARD_X_CONTROLLER 5
#define BOARD_MKS_GEN_L_V1 6
#define BOARD_UNO_SHIELD_V3 7
#define BOARD_MELZI_V1_1_4 8
#define BOARD_BLUEPILL 10
#define BOARD_BLACKPILL 11
#define BOARD_MKS_ROBIN_NANO_V1_2 12
#define BOARD_SKR_PRO_V1_2 13
#define BOARD_NUCLEO_F411RE_SHIELD_V3 14
#define BOARD_BLUEPILL_F0 15
#define BOARD_MKS_ROBIN_NANO_V3_1 16
#define BOARD_MZERO 20
#define BOARD_ZERO 21
#define BOARD_RE_ARM 30
#define BOARD_MKS_BASE13 31
#define BOARD_SKR_V14_TURBO 32
#define BOARD_WEMOS_D1 40
#define BOARD_WEMOS_D1_R32 50
#define BOARD_MKS_TINYBEE 51
#define BOARD_MKS_DLC32 52
#define BOARD_ESP32_SHIELD_V3 53
#define BOARD_RPI_PICO 60
#define BOARD_RPI_PICO_W 61
#define BOARD_RPI_PICO2 62
#define BOARD_VIRTUAL 99

// special purpose board
#define BOARD_RAMPS14_MIRROR 200
#define BOARD_CUSTOM -1

#ifdef BOARD
// AVR boards
#if (BOARD == BOARD_UNO)
#define BOARDMAP "src/hal/boards/avr/boardmap_uno.h"
#elif (BOARD == BOARD_RAMBO14)
#define BOARDMAP "src/hal/boards/avr/boardmap_rambo14.h"
#elif (BOARD == BOARD_RAMPS14)
#define BOARDMAP "src/hal/boards/avr/boardmap_ramps14.h"
#elif (BOARD == BOARD_MKS_DLC)
#define BOARDMAP "src/hal/boards/avr/boardmap_mks_dlc.h"
#elif (BOARD == BOARD_X_CONTROLLER)
#define BOARDMAP "src/hal/boards/avr/boardmap_x_controller.h"
#elif (BOARD == BOARD_MKS_GEN_L_V1)
#define BOARDMAP "src/hal/boards/avr/boardmap_mks_gen_l_v1.h"
#elif (BOARD == BOARD_UNO_SHIELD_V3)
#define BOARDMAP "src/hal/boards/avr/boardmap_uno_shield_v3.h"
#elif (BOARD == BOARD_MELZI_V1_1_4)
#define BOARDMAP "src/hal/boards/avr/boardmap_melzi_v114.h"
// STM32F1 boards
#elif (BOARD == BOARD_BLUEPILL)
#define BOARDMAP "src/hal/boards/stm32/boardmap_bluepill.h"
#elif (BOARD == BOARD_MKS_ROBIN_NANO_V1_2)
#define BOARDMAP "src/hal/boards/stm32/boardmap_mks_robin_nano_v1_2.h"
// STM32F4 boards
#elif (BOARD == BOARD_BLACKPILL)
#define BOARDMAP "src/hal/boards/stm32/boardmap_blackpill.h"
#elif (BOARD == BOARD_MKS_ROBIN_NANO_V3_1)
#define BOARDMAP "src/hal/boards/stm32/boardmap_mks_robin_nano_v3_1.h"
#elif (BOARD == BOARD_SKR_PRO_V1_2)
#define BOARDMAP "src/hal/boards/stm32/boardmap_srk_pro_v1_2.h"
#elif (BOARD == BOARD_NUCLEO_F411RE_SHIELD_V3)
#define BOARDMAP "src/hal/boards/stm32/boardmap_nucleo_f411re_shield_v3.h"
// STM32F0 boards
#elif (BOARD == BOARD_BLUEPILL_F0)
#define BOARDMAP "src/hal/boards/stm32/boardmap_bluepill_f0.h"
// SAMD21 boards
#elif (BOARD == BOARD_MZERO)
#define BOARDMAP "src/hal/boards/samd21/boardmap_mzero.h"
#elif (BOARD == BOARD_ZERO)
#define BOARDMAP "src/hal/boards/samd21/boardmap_zero.h"
// LPC176x boards
#elif (BOARD == BOARD_RE_ARM)
#define BOARDMAP "src/hal/boards/lpc176x/boardmap_re_arm.h"
#elif (BOARD == BOARD_MKS_BASE13)
#define BOARDMAP "src/hal/boards/lpc176x/boardmap_mks_base13.h"
#elif (BOARD == BOARD_SKR_V14_TURBO)
#define BOARDMAP "src/hal/boards/lpc176x/boardmap_skr_v14_turbo.h"
// ESP8266 boards
#elif (BOARD == BOARD_WEMOS_D1)
#define BOARDMAP "src/hal/boards/esp8266/boardmap_wemos_d1.h"
// ESP32 boards
#elif (BOARD == BOARD_WEMOS_D1_R32)
#define BOARDMAP "src/hal/boards/esp32/boardmap_wemos_d1_r32.h"
#elif (BOARD == BOARD_MKS_TINYBEE)
#define BOARDMAP "src/hal/boards/esp32/boardmap_mks_tinybee.h"
#elif (BOARD == BOARD_MKS_DLC32)
#define BOARDMAP "src/hal/boards/esp32/boardmap_mks_dlc32.h"
#elif (BOARD == BOARD_ESP32_SHIELD_V3)
#define BOARDMAP "src/hal/boards/esp32/boardmap_esp32_shield_v3.h"
// RPI boards
#elif (BOARD == BOARD_RPI_PICO)
#define BOARDMAP "src/hal/boards/rp2040/boardmap_rpi_pico.h"
#elif (BOARD == BOARD_RPI_PICO_W)
#define BOARDMAP "src/hal/boards/rp2040/boardmap_rpi_pico_w.h"
#elif (BOARD == BOARD_RPI_PICO2)
#define BOARDMAP "src/hal/boards/rp2350/boardmap_rpi_pico2.h"
#endif
#endif

#ifdef __cplusplus
}
#endif

#endif
