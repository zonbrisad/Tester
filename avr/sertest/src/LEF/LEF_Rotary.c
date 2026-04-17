/**
 *---------------------------------------------------------------------------
 * @brief    Rotary encoder (experimental)
 *
 * @file     LEF_Rotary.c
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


void LEF_Rotary_init(LEF_Rotary *rotary, LEF_EventId id) {
	rotary->id = id;
	rotary->clk = 0xff;
}

void LEF_Rotary_update(LEF_Rotary *rotary, uint8_t clk, uint8_t data) {

	// sample clock pin
	if (clk)
		rotary->clk = (rotary->clk << 1) | 1;
	else
		rotary->clk = (rotary->clk << 1);

	if ((rotary->clk & 0b111) == 0b100) {
		LEF_Send_msg(rotary->id, (data) ? 0 : 1);
	}

}
