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
  CHANNEL_MODE_COUNT,
  CHANNEL_MODE_MAX,
  CHANNEL_MODE_MIN,
  CHANNEL_MODE_LIMIT,
  CHANNEL_MODE_RATE_LIMIT,

  CHANNEL_MODE_FILTER,

  // Math
  CHANNEL_MODE_ADD,
  CHANNEL_MODE_SUBTRACT,
  CHANNEL_MODE_DIVIDE,
  CHANNEL_MODE_MULTIPLY,
  CHANNEL_MODE_INTEGRATE,
  CHANNEL_MODE_DERIVATE,
  CHANNEL_MODE_ABS,

  // Binary
  CHANNEL_MODE_INVERSE,
  CHANNEL_MODE_DELAY, /* Binary delay */

  CHANNEL_MODE_TIMER,

  // Generators
  CHANNEL_MODE_SINE,
  CHANNEL_MODE_RAMP,
  CHANNEL_MODE_SQUARE,
  CHANNEL_MODE_PWM,

  // Not implemented yet
  CHANNEL_MODE_AVERAGE,
  CHANNEL_MODE_VARIANCE,
  CHANNEL_MODE_FIR,
  CHANNEL_MODE_HYSTERESIS,
  CHANNEL_MODE_PID,
  CHANNEL_MODE_ALARM,

  CHANNEL_MODE_LESS_THAN,
  CHANNEL_MODE_LESS_THAN_OR_EQUAL,
  CHANNEL_MODE_GREATER_THAN,
  CHANNEL_MODE_GREATER_THAN_OR_EQUAL,
  CHANNEL_MODE_EQUAL,
  CHANNEL_MODE_NOT_EQUAL,

  ALARM_MODE_ABOVE,
  ALARM_MODE_BELLOW,
  ALARM_MODE_WHITHIN,
  ALARM_MODE_OUTSIDE,

  CHANNEL_MODE_LAST
} CHANNEL_MODE;

typedef enum
{
  CHANNEL_FLAG_ENABLE = 0,
  CHANNEL_FLAG_OVERRIDE,
  CHANNEL_FLAG_CLEAR_ON_LOG,
  CHANNEL_FLAG_OUT_OF_BOUND,
  CHANNEL_FLAG_VALUE_NA,
  CHANNEL_FLAG_VALUE_NOT_SET // indicates that value has never been set, used by MIN/MAX functions
} CHANNEL_FLAGS;

#define CHANNEL_INIT(id, cname, cid, cmode, ctmp1, ctmp2, rsrc) {.rid = id, .value = 0, .tmp1 = ctmp1, .tmp2 = ctmp2, .tmp3 = 0, .name = cname, .tid = cid, .mode = cmode, .src.init = rsrc, .flags = (1 << CHANNEL_FLAG_ENABLE) | (1 << CHANNEL_FLAG_VALUE_NOT_SET)}

#define CHANNEL_NORMAL(id, cname, cid, cmode, rsrc) CHANNEL_INIT(id, cname, cid, cmode, 0, 0, rsrc)

#define CHANNEL_MIN(id, cname, cid, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_MIN, 0, 0, rsrc)
#define CHANNEL_MAX(id, cname, cid, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_MAX, 0, 0, rsrc)
#define CHANNEL_LIMIT(id, cname, cid, cmin, cmax, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_LIMIT, cmax, cmin, rsrc)
#define CHANNEL_COUNT(id, cname, cid, thres, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_COUNT, 0, 0, rsrc)
#define CHANNEL_RATELIMIT(id, cname, cid, crate, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_RATE_LIMIT, crate, 0, rsrc)

#define CHANNEL_INVERSE(id, cname, cid, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_INVERSE, 0, 0, rsrc)
#define CHANNEL_DELAY(id, cname, cid, delay, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_DELAY, 0, delay, rsrc)

#define CHANNEL_ADD(id, cname, cid, cterm, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_ADD, cterm, 0, rsrc)
#define CHANNEL_SUBTRACT(id, cname, cid, cterm, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_SUBTRACT, cterm, 0, rsrc)
#define CHANNEL_MULTIPLY(id, cname, cid, cfact, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_MULTIPLY, cfact, 0, rsrc)
#define CHANNEL_DIVIDE(id, cname, cid, cdiv, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_DIVIDE, cdiv, 0, rsrc)
#define CHANNEL_INTEGRATE(id, cname, cid, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_INTEGRATE, 0, 0, rsrc)
#define CHANNEL_DERIVATE(id, cname, cid, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_DERIVATE, 0, 0, rsrc)

#define CHANNEL_SINE(id, cname, cid, ampl, step) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_SINE, ampl, step, 0)
#define CHANNEL_SQUARE(id, cname, cid, step) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_SQUARE, 0, step, 0)
#define CHANNEL_PWM(id, cname, cid, con, coff) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_PWM, con, coff, 0)

#define CHANNEL_GREATER_THAN(id, cname, cid, limit, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_GREATER_THAN, limit, 0, rsrc)
#define CHANNEL_LESS_THAN(id, cname, cid, limit, rsrc) CHANNEL_INIT(id, cname, cid, CHANNEL_MODE_LESS_THAN, limit, 0, rsrc)
#define CHANNEL_IS_ENABLED(chn) (Bit_is_set(chn->flags, CHANNEL_FLAG_ENABLE))

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct channel
  {
    CHANNEL_VAL value; // channel value
    CHANNEL_VAL tmp1;  // temporary value 1
    CHANNEL_VAL tmp2;  // temporary value 2
    CHANNEL_VAL tmp3;  // temporary value 3

    uint8_t rid;         // channel ID
    char tid[16];        // text ID
    char name[NAMESIZE]; // channel name
    uint8_t flags;       // channel flags
    CHANNEL_MODE mode;   // channel mode
    union
    {
      struct channel *ptr; // external source channel channel
      int8_t init;
    } src;
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
  CHANNEL_VAL CHANNEL_GetValue(CHANNEL *chn);

  /**
   * Set value to channel.
   * @param ch channel
   * @param value value to be set
   */
  void CHANNEL_SetValue(CHANNEL *chn, CHANNEL_VAL value);

  void CHANNEL_SetConnection(CHANNEL *chn, CHANNEL *connection);

  void CHANNEL_Update(CHANNEL *chn, CHANNEL_VAL newValue, uint8_t divider);

  void CHANNEL_SetMode(CHANNEL *chn, CHANNEL_MODE mode);

  void CHANNEL_SetFlag(CHANNEL *chn, uint16_t flags);

  char *CHANNEL_modeToString(CHANNEL_MODE mode);

  char *CHANNEL_toString(CHANNEL *chn);

  char *CHANNEL_get_id(CHANNEL *chn);

  void CHANNEL_Enable(CHANNEL *chn, char enable);

#ifdef __cplusplus
}
#endif

#endif /* CHANNEL_H */
