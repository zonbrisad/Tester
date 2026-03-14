/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   LED control library.
 *
 * @file    LEF_Led.h
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-11-30
 * @license GPLv2
 *
 *---------------------------------------------------------------------------
 *
 * LEF is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  Full license text is available on the following
 *
 * Source repository:
 * https://github.com/zonbrisad/LEF
 *
 * 
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------
#include "LEF.h"

// Macros -----------------------------------------------------------------

// Typedefs ---------------------------------------------------------------

typedef enum {
	LED_OFF = 0, 
	LED_ON,
	
	LED_SLOW_BLINK,
	LED_BLINK,
	LED_FAST_BLINK,

	LED_SINGLE_BLINK,
	LED_DOUBLE_BLINK,
	LED_TRIPPLE_BLINK,

	LED_BLIP,
	LED_SLOW_BLIP,

	LED_LAST               // This state must always be the last in the enum
} LED_STATES;

typedef struct {
	uint8_t mode;
	int16_t cnt;
} LEF_Led;

// Variables --------------------------------------------------------------

// Functions --------------------------------------------------------------

void LEF_Led_init(LEF_Led *led, LED_STATES mode);

uint8_t LEF_Led_update(LEF_Led *led);

void LEF_Led_set(LEF_Led *led, LED_STATES state);

#ifdef __cplusplus
} //end brace for extern "C"
#endif


