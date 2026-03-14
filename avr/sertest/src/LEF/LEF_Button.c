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

LEF_Button* LEF_Button_new(void) { return malloc(sizeof(LEF_Button)); }

void LEF_Button_init(LEF_Button* button, LEF_EventId id) {
    button->id = id;
    button->state = 0;
    button->cnt = 0;
}

void LEF_Button_update(LEF_Button* button, uint8_t state) {
    LEF_Event qe;
    qe.id = button->id;

    // store button state
    button->state = (button->state << 1);
    if (state)
        button->state |= 1;
    else
        button->state &= ~1;

    // detect button press event
    if ((button->state & 0b111) == 0b011) {
        qe.func = 1;
        LEF_QueueStdSend(&qe);
    }

    // detect button release event
    if ((button->state & 0b111) == 0b100) {
        qe.func = 2;
        LEF_QueueStdSend(&qe);
    }

    // detect long press event
    if ((button->state & 0b111) == 0b111) {
        if (button->cnt < 252) button->cnt++;

        if (button->cnt == 250) {
            qe.func = 3;
            LEF_QueueStdSend(&qe);
        }
    } else {
        button->cnt = 0;
    }
}

void LEF_Button_free(LEF_Button* button) { free(button); }
