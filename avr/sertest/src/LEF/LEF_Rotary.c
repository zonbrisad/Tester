/**
 *---------------------------------------------------------------------------
 * @brief    A button class
 *
 * @file     LEF_Button.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-04-14
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

#include <stdlib.h>

#include "LEF_Rotary.h"


//LEF_Button *LEF_Button_new(void) {
//  return malloc(sizeof(LEF_Button));
//}

void LEF_Rotary_init(LEF_Rotary *rotary, LEF_EventId id) {
	rotary->id = id;
	rotary->state = 0;
	rotary->cnt = 0;
	rotary->clk = 0xff;
	rotary->dt = 0xff;
}

void LEF_Rotary_update(LEF_Rotary *rotary, uint8_t clk, uint8_t dt) {
	LEF_Event event;
	event.id = rotary->id;

	// store rotary state
	rotary->clk = (rotary->clk << 1);
	if (clk)
		rotary->clk |= 1;
	else
		rotary->clk &= ~1;

	event.func = rotary->clk;
	if ((rotary->clk & 0x3) == 2) {
		if (dt) 
			event.func = 0;
		else
			event.func = 1;		
			LEF_Send(&event);
	}

}

void LEF_Rotary_update_alt(LEF_Rotary *rotary, uint8_t clk , uint8_t dt) {
	LEF_Event event;
	event.id = rotary->id;

	// store rotary state
	rotary->clk = (rotary->clk << 1);
	if (clk)
		rotary->clk |= 1;
	else
		rotary->clk &= ~1;

	event.func = rotary->clk;
	if ((rotary->clk & 0x3) == 2) {
	if (dt) 
		event.func = 0;
	else
		event.func = 1;		

	LEF_Send(&event);
}


}
/* 
void LEF_Button_free(LEF_Button *button) {  
  free(button);
}
*/
