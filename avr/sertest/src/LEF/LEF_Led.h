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
 * 1 tab = 2 spaces
 */

#ifndef LEF_LED_H
#define LEF_LED_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------
#include <stdint.h>
// Macros -----------------------------------------------------------------

// Typedefs ---------------------------------------------------------------

typedef enum {
	LED_OFF = 0, 
	LED_ON,
	LED_BLINK,
	LED_FAST_BLINK,

	LED_SINGLE_BLINK,
	LED_DOUBLE_BLINK,
	LED_TRIPPLE_BLINK,

	LED_LAST               // This state must always be the last in the enum
} LED_STATES;

typedef struct {
	uint8_t mode;
	int8_t cnt;
} LEF_Led;

// Variables --------------------------------------------------------------

// Functions --------------------------------------------------------------

void LEF_LedInit(LEF_Led *led, LED_STATES mode);
//void LEF_LedInit(LEF_Led *led);

uint8_t LEF_LedUpdate(LEF_Led *led);

void LEF_LedSetState(LEF_Led *led, LED_STATES state);



#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

