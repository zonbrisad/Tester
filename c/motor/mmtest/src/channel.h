/**
 *
 * @file   channel.h
 *
 * @brief   Library describing channel.
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @licence Proprietary
 *
 ********************************************************************
 *
 */

#ifndef CHANNEL_H
#define CHANNEL_H

#include <stdlib.h>
#include <stdint.h>

#include "mmmotor_settings.h"
#include "filter.h"

typedef enum
{
  CHANNEL_MODE_NONE = 0,
  CHANNEL_MODE_NORMAL,
  CHANNEL_MODE_INTEGRATE,
  CHANNEL_MODE_COUNT,
  CHANNEL_MODE_MAX,
  CHANNEL_MODE_MIN,
  CHANNEL_MODE_AVERAGE,
  CHANNEL_MODE_VARIANCE,
  CHANNEL_MODE_TIMER,
  CHANNEL_MODE_LIMIT,
  CHANNEL_MODE_RATE_LIMIT,
  CHANNEL_MODE_DELAY, /* Binary delay */
  CHANNEL_MODE_FIR,
  CHANNEL_MODE_PWM,
  CHANNEL_MODE_HYSTERESIS,
	CHANNEL_MODE_FILTER,

	CHANNEL_MODE_DIVIDE,
	CHANNEL_MODE_MULTIPLY,

  CHANNEL_MODE_SINUS,
  CHANNEL_MODE_RAMP,
  CHANNEL_MODE_LAST
} CHANNEL_MODE;

typedef enum
{
  CHANNEL_FLAG_OVERRIDE = 0,
  CHANNEL_FLAG_CLEARONLOG,
  CHANNEL_FLAG_OUTOFBOUND,
  CHANNEL_FLAG_VALUE_NA
} CHANNEL_FLAGS;


#define CHANNEL_INIT(cname, cid, cmode, ctmp1, ctmp2) { .value=0, .tmp1=ctmp1, .tmp2=ctmp2, .name=cname, .id=cid, .mode=cmode, .src=NULL, .flags=0 }

#define CHANNEL_NORMAL(cname, cid, cmode)   CHANNEL_INIT(cname, cid, cmode, 0, 0)

#define CHANNEL_LIMIT(cname, cid, cmin, cmax ) CHANNEL_INIT(cname, cid, CHANNEL_MODE_LIMIT, cmax, cmin)
#define CHANNEL_COUNT(cname, cid, thres) CHANNEL_INIT(cname, cid, CHANNEL_MODE_COUNT, 0, 0)
//#define CHANNEL_FILTER(cname, cid, filter) CHANNEL_INIT(cname, cid, cmode, 0, 0)                              
#define CHANNEL_LAST()  CHANNEL_INIT("", "", CHANNEL_MODE_LAST, 0, 0)

#define CHANNEL_DIVIDE(cname, cid, cdiv) CHANNEL_INIT(cname, cid, CHANNEL_MODE_DIVIDE, cdiv, 0)


#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct channel
  {
    CHANNEL_VAL value;
    CHANNEL_VAL tmp1;
    CHANNEL_VAL tmp2;
    char id[16];
    char name[NAMESIZE];
    uint8_t flags;
    CHANNEL_MODE mode;
    struct channel *src; // external source channel channel
		FILTER *filter;
  } CHANNEL;

  /**
   * Initiate channel.
   * @param ch channel to be initiated
   */
  void CHANNEL_Init(CHANNEL *chn);

  void CHANNEL_SetName(CHANNEL *chn);

  /**
   * Get curent value from channel.
   * @param ch  channel
   * @return value of channel
   */
  float CHANNEL_GetValue(CHANNEL *chn);

  void CHANNEL_SetValue(CHANNEL *chn, CHANNEL_VAL value);

  void CHANNEL_SetConnection(CHANNEL *chn, CHANNEL *connection);

  void CHANNEL_Update(CHANNEL *chn, CHANNEL_VAL newValue, uint8_t divider);

  void CHANNEL_SetMode(CHANNEL *chn, CHANNEL_MODE mode);

//  void CHANNEL_SetParam(CHANNEL *chn, uint8_t param, CHANNEL_VAL value);

  void CHANNEL_SetFlag(CHANNEL *chn, uint16_t flags);

	char *CHANNEL_modeToString(CHANNEL_MODE mode);
  char *CHANNEL_toString(CHANNEL *chn);

	char *CHANNEL_get_id(CHANNEL *chn);

#ifdef __cplusplus
}
#endif

#endif /* CHANNEL_H */
