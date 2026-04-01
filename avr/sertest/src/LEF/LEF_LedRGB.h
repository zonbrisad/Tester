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
#include <stdint.h>
// Macros -----------------------------------------------------------------

// Typedefs ---------------------------------------------------------------

typedef enum {
	LEDRGB_OFF = 0,
	LEDRGB_RED_ON,
	LEDRGB_GREEN_ON,
	LEDRGB_BLUE_ON,
	
	LEDRGB_REDGREEN_ON,
	LEDRGB_RED_BLINK,
	LEDRGB_GREEN_BLINK,
	LEDRGB_REDGREEN_BLINK,
	LEDRGB_ALTERNATE_BLINK,

	LEDRGB_RED_SINGLE_BLINK,
	LEDRGB_RED_DOUBLE_BLINK,
	LEDRGB_RED_TRIPPLE_BLINK,

	LEDRGB_GREEN_SINGLE_BLINK,
	LEDRGB_GREEN_DOUBLE_BLINK,
	LEDRGB_GREEN_TRIPPLE_BLINK,
	LEDRGB_LAST,           // This state must always be the last in the enum
 
} LEDRGB_STATES;

typedef struct {
	uint8_t mode;
	int8_t cnt;
	uint8_t rep;
	uint8_t period;
} LEF_LedRGB;


// Variables --------------------------------------------------------------

// Functions --------------------------------------------------------------

void LEF_LedRGB_init(LEF_LedRGB *led, LEDRGB_STATES state);

uint8_t LEF_LedRGB_update(LEF_LedRGB *led);

void LEF_LedRGB_set(LEF_LedRGB *led, LEDRGB_STATES state);

#ifdef __cplusplus
} //end brace for extern "C"
#endif

