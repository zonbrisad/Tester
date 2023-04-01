/**
 * 
 * @file   alarm.h
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

#define ALARM_FLAG_ENABLED    1

typedef enum {
  
} ALARM_FLAGS;

#ifdef	__cplusplus
extern "C" {
#endif

  
  
  typedef struct alarm_struct {
    float     value;
    uint8_t   flags;
    uint8_t   mode;
    uint32_t  timeStamp;
    struct channel_struct *ch;
  } alarm;
  
  
  void alarm_init(alarm *al);
  void alarm_update(alarm *al, uint8_t divider);
  void alarm_enable(alarm *al, uint8_t en);
  
  uint8_t alarm_is_active(alarm *al);
  
  
  uint8_t alarm_is_enabled(alarm *al);
  
  
  

  
 

#ifdef	__cplusplus
}
#endif

#endif	/* ALARM_H */

