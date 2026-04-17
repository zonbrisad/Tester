/**
 *---------------------------------------------------------------------------
 * @brief    A potentiometer class
 *
 * @file     LEF_Pot.h
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-04-14
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

        
#pragma once

#include "LEF.h"

#ifdef __cplusplus
extern "C"
#endif


typedef struct {
	LEF_EventId id;
	uint16_t value;
	bool enabled;
	uint16_t threshold;
} LEF_Pot;


LEF_Pot *LEF_Pot_new(void);

void LEF_Pot_init(LEF_Pot *pot, LEF_EventId id);

void LEF_Pot_update(LEF_Pot *pot, uint16_t new_value);

uint16_t LEF_Pot_state(LEF_Pot *pot);

void LEF_Pot_enable(LEF_Pot* pot, bool en);

bool LEF_Pot_is_enabled(LEF_Pot* pot);

void LEF_Pot_free(LEF_Pot* pot);

#ifdef __cplusplus
} //end brace for extern "C"
#endif
