/**
 * 
 * @file   mmmotor.h
 * 
 * @brief 
 * @author Peter Malmberg <peter.malmberg@gmail.com>
 * @licence Proprietary
 *
 ********************************************************************
 * 
 */

#ifndef ALARM_H
#define	ALARM_H

#include <stdlib.h>
#include <stdint.h>

#include "mmmotor_settings.h"
#include "channel.h"
#include "alarm.h"


// Determine length of array
#define MARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))


#ifdef	__cplusplus
extern "C" {
#endif

  typedef struct mmmotor_s {
    CHANNEL   channels[CHANNELS];
    CHANNEL   alarms[ALARMS];
  } mmmotor;
  
  void mmmInit(mmmotor *mmm);
  
  void mmmUpdate(mmmotor *mmm);
  
  

	void mmotor_init(CHANNEL *chns, int len);


	CHANNEL *mmotor_findId(uint8_t id);

	void mmotor_update();




#ifdef	__cplusplus
}
#endif

#endif	/* ALARM_H */

