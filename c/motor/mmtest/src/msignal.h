/**
 *---------------------------------------------------------------------------
 * @brief    Signal library for mmotor
 *
 * @file     signal.h
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-04-04
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */
        
#ifndef _SIGNAL_H_
#define _SIGNAL_H_
        
#ifdef __cplusplus
extern "C"
#endif

#include "channel.h"

typedef enum {
	SIGNAL_MODE_SINUS = 0,
	SIGNAL_MODE_RAMP,
	SIGNAL_MODE_SAWTOOTH,
	SIGNAL_MODE_SQUARE,
	SIGNAL_MODE_RANDOM,
} SIGNAL_MODE;


typedef struct {
	SIGNAL_MODE mode;
  float param1;
  float param2;
  float param3;
  CHANNEL *channel;
} SIGNAL;

SIGNAL *SIGNAL_new();

void SIGNAL_init(SIGNAL *signal, SIGNAL_MODE mode);

void SIGNAL_setChannel(SIGNAL *signal, CHANNEL *channel);

void SIGNAL_update(SIGNAL *signal);

void SIGNAL_free(SIGNAL *sgn);

#endif // _SIGNAL_H_ 
        
#ifdef __cplusplus
} //end brace for extern "C"
#endif
