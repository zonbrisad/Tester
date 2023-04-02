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

#define CH_PARAM1 0
#define CH_PARAM2 1
#define CH_PARAM3 2

typedef float CHANNEL_VAL;

#define CHANNEL_NORMAL(name, id, mode)             \
  {                                            \
    0, 0, {0, 0, 0}, id, name, 0, mode, 0, 0, NULL \
  }

#define CHANNEL_LIMIT(name, id, min, max)                            \
  {                                                              \
    0, 0, {max, min, 0}, id, name, 0, CHANNEL_MODE_LIMIT, 0, 0, NULL \
  }
#define CHANNEL_COUNT(name, id, thres)                               \
  {                                                              \
    0, 0, {thres, 0, 0}, id, name, 0, CHANNEL_MODE_COUNT, 0, 0, NULL \
  }

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct channel_struct
  {
    CHANNEL_VAL value;
    CHANNEL_VAL tmp1;
    CHANNEL_VAL param[3]; // general purpose parameters
    char id[16];
    char name[NAMESIZE];
    uint8_t flags;
    CHANNEL_MODE mode;
    uint32_t timeStamp;
    uint16_t gpCnt;            // general purpose counter
    struct channel_struct *src; // external source channel channel
  } CHANNEL;

  /**
   * Initiate channel.
   * @param ch channel to be initiated
   */
  void channelInit(CHANNEL *chn);

  void channelSetName(CHANNEL *chn);

  /**
   * Get curent value from channel.
   * @param ch  channel
   * @return value of channel
   */
  float channelGetValue(CHANNEL *chn);

  void channelSetValue(CHANNEL *chn, CHANNEL_VAL value);

  void channelSetConnection(CHANNEL *chn, CHANNEL *connection);

  void channelUpdate(CHANNEL *chn, CHANNEL_VAL newValue, uint8_t divider);

  void channelSetMode(CHANNEL *chn, CHANNEL_MODE mode);

  void channelSetParam(CHANNEL *chn, uint8_t param, CHANNEL_VAL value);

  void channelSetFlag(CHANNEL *chn, uint16_t flags);

	char *channel_modeToString(CHANNEL_MODE mode);
  char *channel_toString(CHANNEL *chn);

	char *channel_get_id(CHANNEL *chn);

#ifdef __cplusplus
}
#endif

#endif /* CHANNEL_H */
