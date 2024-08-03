/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   LED controll library.
 *
 * @file    LEF_Led.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-11-30
 * @licence GPLv2
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

// Includes ---------------------------------------------------------------

#include "LEF.h"
#include "LEF_LedRG.h"

//#define DEBUGALL
#include "def.h"
// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

char LEF_LedRGBlink(LEF_LedRG *led);

// Code -------------------------------------------------------------------

void LEF_LedRGInit(LEF_LedRG *led, LEDRG_STATES state) {
	led->cnt = 0;
	led->rep = 0;
	led->period = 0;
	LEF_LedRGSetState(led, state);
}

char LEF_LedRGBlink(LEF_LedRG *led) {

	if (led->mode == LEDRG_OFF)
		return 0;
 
	led->cnt++;

	if (led->cnt >= led->period) {
		led->cnt = 0 - led->period;
		
		if (led->rep != 255) {
			led->rep--;
			if (led->rep == 0) {
				led->mode = LEDRG_OFF;
			  return 0;
			}
		}
	}
	
	if (led->cnt < 0)
		return 1;
	else
		return 0;
}

uint8_t LEF_LedRGUpdate(LEF_LedRG *led) {
	char x;
	switch (led->mode) {
		
	 case LEDRG_OFF: return 0; break;
	 case LEDRG_RED_ON: return 1; break;
	 case LEDRG_GREEN_ON: return 2; break;
	 case LEDRG_REDGREEN_ON: return 3; break;
	 case LEDRG_ALTERNATE_BLINK:
		if (LEF_LedRGBlink(led))
			return 1;
		else
			return 2;		
		break;
	 case LEDRG_RED_BLINK:
	 case LEDRG_RED_SINGLE_BLINK:
	 case LEDRG_RED_DOUBLE_BLINK:
	 case LEDRG_RED_TRIPPLE_BLINK:
		x=1;
		break;
	 case LEDRG_GREEN_BLINK:
	 case LEDRG_GREEN_SINGLE_BLINK:
	 case LEDRG_GREEN_DOUBLE_BLINK:
	 case LEDRG_GREEN_TRIPPLE_BLINK:
		x=2;
		break;
	 case LEDRG_REDGREEN_BLINK:
		x=3;
		break;
		default: return 0;
	}

	return x * LEF_LedRGBlink(led);
}

void LEF_LedRGSetState(LEF_LedRG *led, LEDRG_STATES state) {
	led->mode = state;
	led->cnt = 0 - LEDRG_BLINK_PERIOD;
	led->rep = 0;
	led->period = LEDRG_BLINK_PERIOD;

	switch (state) {
	 case LEDRG_OFF:  break;
	 case LEDRG_RED_ON:  break;
	 case LEDRG_GREEN_ON:  break;
	 case LEDRG_REDGREEN_ON:  break;
	 case LEDRG_RED_BLINK:
		led->rep = 255;
		break;
	 case LEDRG_GREEN_BLINK:
		led->rep = 255;
		break;
	 case LEDRG_REDGREEN_BLINK:
		led->rep = 255;
		break;
	 case LEDRG_ALTERNATE_BLINK:
		led->rep = 255;
		break;
	 case LEDRG_RED_SINGLE_BLINK:
		led->rep = 1;
		break;
	 case LEDRG_RED_DOUBLE_BLINK:
		led->rep = 2;
		break;
	 case LEDRG_RED_TRIPPLE_BLINK:
		led->rep = 3;
		break;
	 case LEDRG_GREEN_SINGLE_BLINK:
		led->rep = 1;
		break;
	 case LEDRG_GREEN_DOUBLE_BLINK:
		led->rep = 2;
		break;
	 case LEDRG_GREEN_TRIPPLE_BLINK:
		led->rep = 3;
		break;
			
	 default:break;
	}

	DEBUGPRINT("LedRG mode = %d   rep = %d   cnt = %d\n ", state, led->rep, led->cnt);
}
