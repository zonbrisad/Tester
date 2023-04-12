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

  CHANNEL_MODE_LAST
} CHANNEL_MODE;

typedef enum
{
  CHANNEL_FLAG_ENABLE = 0,
  CHANNEL_FLAG_OVERRIDE,
  CHANNEL_FLAG_CLEARONLOG,
  CHANNEL_FLAG_OUTOFBOUND,
  CHANNEL_FLAG_VALUE_NA
} CHANNEL_FLAGS;


#define CHANNEL_INIT(cname, cid, cmode, ctmp1, ctmp2, rsrc) { .value=0, .tmp1=ctmp1, .tmp2=ctmp2, .tmp3=0, .name=cname, .id=cid, .mode=cmode, .src.init=rsrc, .flags=(1<<CHANNEL_FLAG_ENABLE) }

#define CHANNEL_NORMAL(cname, cid, cmode, rsrc)   CHANNEL_INIT(cname, cid, cmode, 0, 0, rsrc)

#define CHANNEL_MIN(cname, cid, rsrc)   CHANNEL_INIT(cname, cid, CHANNEL_MODE_MIN, 0, 0, rsrc)
#define CHANNEL_MAX(cname, cid, rsrc)   CHANNEL_INIT(cname, cid, CHANNEL_MODE_MAX, 0, 0, rsrc)
#define CHANNEL_LIMIT(cname, cid, cmin, cmax, rsrc) CHANNEL_INIT(cname, cid, CHANNEL_MODE_LIMIT, cmax, cmin, rsrc)
#define CHANNEL_COUNT(cname, cid, thres, rsrc) CHANNEL_INIT(cname, cid, CHANNEL_MODE_COUNT, 0, 0, rsrc)
#define CHANNEL_RATELIMIT(cname, cid, crate, rsrc) CHANNEL_INIT(cname, cid, CHANNEL_MODE_RATE_LIMIT, crate, 0, rsrc)

#define CHANNEL_INVERSE(cname, cid, rsrc)  CHANNEL_INIT(cname, cid, CHANNEL_MODE_INVERSE, 0, 0, rsrc)
#define CHANNEL_DELAY(cname, cid, delay, rsrc)  CHANNEL_INIT(cname, cid, CHANNEL_MODE_DELAY, 0, delay, rsrc)

#define CHANNEL_ADD(cname, cid, cterm, rsrc) CHANNEL_INIT(cname, cid, CHANNEL_MODE_ADD, cterm, 0, rsrc)
#define CHANNEL_SUBTRACT(cname, cid, cterm, rsrc) CHANNEL_INIT(cname, cid, CHANNEL_MODE_SUBTRACT, cterm, 0, rsrc)
#define CHANNEL_MULTIPLY(cname, cid, cfact, rsrc) CHANNEL_INIT(cname, cid, CHANNEL_MODE_MULTIPLY, cfact, 0, rsrc)
#define CHANNEL_DIVIDE(cname, cid, cdiv, rsrc) CHANNEL_INIT(cname, cid, CHANNEL_MODE_DIVIDE, cdiv, 0, rsrc)
#define CHANNEL_INTEGRATE(cname, cid, rsrc)  CHANNEL_INIT(cname, cid, CHANNEL_MODE_INTEGRATE, 0, 0, rsrc)
#define CHANNEL_DERIVATE(cname, cid, rsrc)  CHANNEL_INIT(cname, cid, CHANNEL_MODE_DERIVATE, 0, 0, rsrc)

#define CHANNEL_SINE(cname, cid, ampl, step)  CHANNEL_INIT(cname, cid, CHANNEL_MODE_SINE, ampl, step, 0)
#define CHANNEL_SQUARE(cname, cid, step)  CHANNEL_INIT(cname, cid, CHANNEL_MODE_SQUARE, 0, step, 0)
#define CHANNEL_PWM(cname, cid, con, coff)  CHANNEL_INIT(cname, cid, CHANNEL_MODE_PWM, con, coff, 0)


#define CHANNEL_LAST()  CHANNEL_INIT("", "", CHANNEL_MODE_LAST, 0, 0, 0)



#define CHANNEL_IS_ENABLED(chn) (Bit_is_set(chn->flags, CHANNEL_FLAG_ENABLE))




#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct channel
  {
    CHANNEL_VAL value;
    CHANNEL_VAL tmp1;
    CHANNEL_VAL tmp2;
		CHANNEL_VAL tmp3;
		
    char id[16];
    char name[NAMESIZE];
    uint8_t flags;
    CHANNEL_MODE mode;
		union {
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
