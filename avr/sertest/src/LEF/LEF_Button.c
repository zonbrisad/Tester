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

#include "LEF_Button.h"
#include "LEF_Core.h"

LEF_Button* LEF_Button_new(void) { return malloc(sizeof(LEF_Button)); }

void LEF_Button_init(LEF_Button* button, LEF_EventId id) {
    button->id = id;
    button->state = 0;
    button->cnt = 0;
}

void LEF_Button_update(LEF_Button* button, bool state) {

    // store button state
    button->state = (button->state << 1);
    button->state |= (state) ? 1 : 0;

    // detect button press event
    if ((button->state & 0b111) == 0b011) {
        LEF_Send_msg(button->id, 1);
    }
    
    // detect button release event
    if ((button->state & 0b111) == 0b100) {
        LEF_Send_msg(button->id, 2);
    }
    
    // detect long press event
    if ((button->state & 0b111) == 0b111) {
        if (button->cnt < 252) button->cnt++;
        
        if (button->cnt == 250) {
            LEF_Send_msg(button->id, 3);
        }
    } else {
        button->cnt = 0;
    }
}

void LEF_Button_free(LEF_Button* button) { 
    free(button); 
}
