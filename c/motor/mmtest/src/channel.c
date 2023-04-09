/**
 * 
 * @file   channel.c
 * 
 * @brief Library describing channel.
 * @author Peter Malmberg <peter.malmberg@gmail.com>
 * 
 * @license Proprietary
 *
 ********************************************************************
 * 
 */

#include <stdio.h>

#include "def.h"
#include "channel.h"

typedef struct {
  CHANNEL_MODE mode;
  char         *name;
} modeName;

modeName mode2name[] = {
  {CHANNEL_MODE_NORMAL,     "Normal"},
  {CHANNEL_MODE_MIN,        "Min"},
  {CHANNEL_MODE_MAX,        "Max"},
  {CHANNEL_MODE_COUNT,      "Count"},
  {CHANNEL_MODE_LIMIT,      "Limit"},
  {CHANNEL_MODE_INTEGRATE,  "Integrate"},
  {CHANNEL_MODE_RATE_LIMIT, "Rate limit"},
  {CHANNEL_MODE_AVERAGE,    "Average"},
  {CHANNEL_MODE_TIMER,      "Timer"},
  {CHANNEL_MODE_SINUS,      "Sinus"},
  {CHANNEL_MODE_RAMP,       "Ramp"},
  {CHANNEL_MODE_PWM,        "PWM"},
	{CHANNEL_MODE_DIVIDE,     "Divide"},
	{CHANNEL_MODE_MULTIPLY,   "Multiply"},
	
  {CHANNEL_MODE_NONE,       "None"}
};


void CHANNEL_Init(CHANNEL *chn) {
  uint8_t i;
  chn->value = 0;
//  chn->tmp1  = 0;
  chn->src    = NULL;
  chn->mode  = CHANNEL_MODE_NORMAL;
  chn->flags = 0;
//  chn->gpCnt = 0;
//  for(i=0;i<3;i++) {
//    chn->param[i] = 0;
//  }
}
  
float CHANNEL_GetValue(CHANNEL *chn) {
  return chn->value;
}
  
void CHANNEL_SetValue(CHANNEL *chn, CHANNEL_VAL value) {
  chn->value = value;
}

void CHANNEL_Update(CHANNEL *chn, CHANNEL_VAL newValue, uint8_t divider) {
  CHANNEL_VAL nVal;

  // check if new value commes from connected channel or not
  if (chn->src != NULL) {
    nVal = chn->src->value;
  } else {
    nVal = newValue;
  }

  switch (chn->mode) {
    case CHANNEL_MODE_NORMAL: chn->value = nVal; break;
    case CHANNEL_MODE_MAX: if (nVal>chn->value) chn->value = nVal; break;
    case CHANNEL_MODE_MIN: if (nVal<chn->value) chn->value = nVal; break;
    case CHANNEL_MODE_COUNT:   
      if ((nVal > chn->tmp2) && (chn->tmp1 < chn->tmp2))
        chn->value++;
      chn->tmp1 = nVal;
      break;
    case CHANNEL_MODE_AVERAGE:
//		chn->param[0] += nVal;
//		chn->param[1] += 1;
//		if (chn->param[1] >= 10) {
//			chn->value = chn->param[0] / 10;
//			chn->param[0] = 0;
//			chn->param[1] = 0;
//		}
		
		break;
    case CHANNEL_MODE_RATE_LIMIT:  
      
      break;
    case CHANNEL_MODE_LIMIT: 
      chn->value = nVal;
      if (nVal>chn->tmp1) {     // max value
       chn->value = chn->tmp1;
      }
      if (nVal < chn->tmp2) {      // min value
        chn->value = chn->tmp2;
      }
      break;
    case CHANNEL_MODE_DELAY:       break;
    case CHANNEL_MODE_TIMER:
		  if (chn->value > 0) {
				chn->value = chn->value - 1;
			}
		break;
	 case CHANNEL_MODE_INTEGRATE: chn->value += nVal/divider;  break;
	 case CHANNEL_MODE_FILTER:
		FILTER_add(chn->filter, nVal);
		chn->value = FILTER_value(chn->filter);
		break;

	 case CHANNEL_MODE_DIVIDE:
		chn->value = nVal / chn->tmp1;
		break;
		
    default: break;
    
  }
}

void CHANNEL_SetConnection(CHANNEL *chn, CHANNEL *connection) {
  chn->src = connection;
}

void CHANNEL_SetMode(CHANNEL *chn, CHANNEL_MODE mode) {
  DEBUGPRINT("Mode = %d\n",mode);
  chn->mode = mode;
}


char *CHANNEL_modeToString(CHANNEL_MODE mode) {
  int i;
  i = 0;

  
  for (i=0;i<30;i++) {
    if (mode2name[i].mode == CHANNEL_MODE_NONE) {
      return "";
    }
    if (mode2name[i].mode == mode) {
      return mode2name[i].name;
    }    
  }
  
  
  while (mode2name[i].mode =! CHANNEL_MODE_NONE ) {
    if (mode2name[i].mode == mode) {
      return mode2name[i].name;
    }
    i++; 
  }
  return "";
}

char *CHANNEL_toString(CHANNEL *chn) {
  static char buf[128];
	if (chn==NULL) {
		return E_YELLOW "  Id          Name             Mode        Value" E_END ;
	}
	sprintf(buf, "%-10s  " E_BR_MAGENTA "%-16s" E_END " %-10s " E_CYAN "%6d" E_END, CHANNEL_get_id(chn), chn->name, CHANNEL_modeToString(chn->mode), chn->value);
  return buf;
}


char *CHANNEL_get_id(CHANNEL *chn) {
	static char buf[32];
	if (chn->src == NULL) {
		return chn->id;
	}
	
	sprintf(buf, ">%s", CHANNEL_get_id(chn->src));
	return buf;
}
