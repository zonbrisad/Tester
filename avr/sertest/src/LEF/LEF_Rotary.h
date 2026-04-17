/**
 *---------------------------------------------------------------------------
 * @brief    A rotary encoder driver
 *
 * @file     LEF_Button.h
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.2
 * @date     2023-04-14
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

 /* 
  * To function well, update function need to be called with 1ms intervall 
  */

#pragma once

#include "LEF.h"

#ifdef __cplusplus
extern "C"
#endif


typedef struct {
	LEF_EventId id;
	uint8_t clk;
} LEF_Rotary;

void LEF_Rotary_init(LEF_Rotary *rotary, LEF_EventId id);

void LEF_Rotary_update(LEF_Rotary *rotary, uint8_t clk, uint8_t data);

#ifdef __cplusplus
} //end brace for extern "C"
#endif
