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

 /* Function codes:
  * 
  * 1 = button pressed 
  * 2 = button released
  * 3 = button long press  
  */
        
#pragma once

#include "LEF_Types.h"

#ifdef __cplusplus
extern "C"
#endif


typedef struct {
	LEF_EventId id;
	uint8_t state;
	uint8_t cnt;
} LEF_Button;


LEF_Button *LEF_Button_new(void);

void LEF_Button_init(LEF_Button *button, LEF_EventId id);

void LEF_Button_update(LEF_Button *button, bool state);

void LEF_Button_free(LEF_Button *button);
        
#ifdef __cplusplus
} //end brace for extern "C"
#endif
