/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   Analog LED control library.
 *
 * @file    LEF_LedA.h
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2023-05-08
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

#ifndef LEF_LEDA_H
#define LEF_LEDA_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------
#include <stdint.h>
// Macros -----------------------------------------------------------------

// Typedefs ---------------------------------------------------------------

typedef enum {
	LEDA_OFF = 0, 
	LEDA_ON,
	LEDA_BLINK,
	LEDA_FAST_BLINK,
	
	LEDA_SINGLE_BLINK,
	LEDA_DOUBLE_BLINK,
	LEDA_TRIPPLE_BLINK,
	LEDA_SOFT,

	LEDA_ON_SOFT,
	LEDA_OFF_SOFT,
	
	LEDA_LAST               // This state must always be the last in the enum
} LEDA_STATES;

typedef struct {
	uint8_t mode;
	int16_t cnt;
} LEF_LedA;

// Variables --------------------------------------------------------------

// Functions --------------------------------------------------------------

void LEF_LedA_init(LEF_LedA *led, LEDA_STATES mode);

/**
 * Update the LED state. This function should be called periodically, e.g. in a timer interrupt or main loop.
 * @param led Pointer to the LED structure.
 * @return The current brightness level of the LED (0-255).
 */
uint8_t LEF_LedA_update(LEF_LedA *led);

void LEF_LedA_set(LEF_LedA *led, LEDA_STATES state);


#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

