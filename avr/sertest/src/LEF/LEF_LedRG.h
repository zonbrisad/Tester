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

#ifndef LEF_LEDRG_H
#define LEF_LEDRG_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------
#include <stdint.h>
// Macros -----------------------------------------------------------------

// Typedefs ---------------------------------------------------------------

typedef enum {
	LEDRG_OFF = 0,
	LEDRG_RED_ON,
	LEDRG_GREEN_ON,
	LEDRG_REDGREEN_ON,
	LEDRG_RED_BLINK,
	LEDRG_GREEN_BLINK,
	LEDRG_REDGREEN_BLINK,
	LEDRG_ALTERNATE_BLINK,

	LEDRG_RED_SINGLE_BLINK,
	LEDRG_RED_DOUBLE_BLINK,
	LEDRG_RED_TRIPPLE_BLINK,

	LEDRG_GREEN_SINGLE_BLINK,
	LEDRG_GREEN_DOUBLE_BLINK,
	LEDRG_GREEN_TRIPPLE_BLINK,
	LEDRG_LAST,           // This state must always be the last in the enum
 
} LEDRG_STATES;

typedef struct {
	uint8_t mode;
	int8_t cnt;
	uint8_t rep;
	uint8_t period;
} LEF_LedRG;


// Variables --------------------------------------------------------------

// Functions --------------------------------------------------------------

void LEF_LedRGInit(LEF_LedRG *led, LEDRG_STATES state);

uint8_t LEF_LedRGUpdate(LEF_LedRG *led);

void LEF_LedRGSetState(LEF_LedRG *led, LEDRG_STATES state);



#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

