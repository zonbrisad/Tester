/**
 *---------------------------------------------------------------------------
 * @brief    Signal library for mmotor
 *
 * @file     signal.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-04-04
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

#include <stdlib.h>
#include <math.h>
#include "signal.h"


SIGNAL *SIGNAL_new() {
  return malloc(sizeof(SIGNAL));
}

 
void SIGNAL_free(SIGNAL *sgn) {  
  free(sgn);
}


//  signal_init(&sig, SIGNAL_MODE_SINUS, "Sinus");
//  signal_setChannel(&sig, &channels[0]);

void SIGNAL_init(SIGNAL *signal, SIGNAL_MODE mode) {
  signal->mode = mode;
  signal->param1 = 10;
  signal->param2 = 1;
  signal->param3 = 0;
}

void SIGNAL_setChannel(SIGNAL *signal, CHANNEL *channel) {
  signal->channel = channel;
}

void SIGNAL_update(SIGNAL *signal) {
  CHANNEL_VAL value;
  switch (signal->mode){
    case SIGNAL_MODE_SINUS:
      value =100*(signal->param1 * sin(signal->param3/10));
      signal->param3 += signal->param2;
      break;
    case SIGNAL_MODE_RAMP: break;
    case SIGNAL_MODE_SAWTOOTH: break;
    case SIGNAL_MODE_SQUARE: break;
    case SIGNAL_MODE_RANDOM: break;
    default: break;
    
  }
  CHANNEL_SetValue(signal->channel, value);
//	printf("K");
}










