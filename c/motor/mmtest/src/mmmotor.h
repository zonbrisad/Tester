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

#ifdef	__cplusplus
extern "C" {
#endif

  typedef struct mmmotor_s {
    CHANNEL   channels[CHANNELS];
    CHANNEL   alarms[ALARMS];
  } mmmotor;
  
  void mmmInit(mmmotor *mmm);
  
  void mmmUpdate(mmmotor *mmm);
  
  
  



#ifdef	__cplusplus
}
#endif

#endif	/* ALARM_H */

