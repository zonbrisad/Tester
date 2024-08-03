/**
 *---------------------------------------------------------------------------
 * @brief    A button class
 *
 * @file     LEF_Button.h
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-04-14
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

        
#ifndef _LEF_ROTARY_H_
#define _LEF_ROTARY_H_

#include "LEF.h"

#ifdef __cplusplus
extern "C"
#endif


typedef struct {
	LEF_EventId id;
	uint8_t state;
	uint8_t cnt;
	uint8_t clk;
	uint8_t dt;
} LEF_Rotary;


//LEF_RotaryE *LEF_RotaryE_new(void);

void LEF_Rotary_init(LEF_Rotary *rotary, LEF_EventId id);

void LEF_Rotary_update(LEF_Rotary *rotary, uint8_t clk, uint8_t dt);

void LEF_Rotary_free(LEF_Rotary *rotary);

#endif // _LEF_ROTARY_H_ 
        
#ifdef __cplusplus
} //end brace for extern "C"
#endif
