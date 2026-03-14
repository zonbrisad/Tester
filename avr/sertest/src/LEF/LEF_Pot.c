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

#include "LEF_Pot.h"

const uint16_t POT_THRESHOLD = 3;  // Minimum change in potentiometer value to trigger an event

LEF_Pot *LEF_Pot_new(void) {
  return malloc(sizeof(LEF_Pot));
}

void LEF_Pot_init(LEF_Pot *pot, LEF_EventId id) {
	pot->id = id;
	pot->state = 0;
	pot->enabled = true;
}

void LEF_Pot_update(LEF_Pot *pot, uint16_t newState) {
	int diff;
	LEF_Event qe;

	if (!pot->enabled) return;

	qe.id = pot->id;

	diff = pot->state - newState;

	if ((((diff) < 0) ? -(diff) : (diff)) > POT_THRESHOLD) {
		qe.func=1;
		LEF_QueueStdSend(&qe);
		pot->state = newState;
	}
}

uint16_t LEF_Pot_state(LEF_Pot *pot) {
  return pot->state;
}

void LEF_Pot_enable(LEF_Pot *pot, bool en) {
	pot->enabled = en;
}

bool LEF_Pot_is_enabled(LEF_Pot *pot) {
	return pot->enabled;
}

void LEF_Pot_free(LEF_Pot *pot) {  
  free(pot);
}

