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
  {CHANNEL_MODE_NONE,       "None"}
};


void channelInit(CHANNEL *chn) {
  uint8_t i;
  chn->value = 0;
  chn->tmp1  = 0;
  chn->src    = NULL;
  chn->mode  = CHANNEL_MODE_NORMAL;
  chn->flags = 0;
  chn->gpCnt = 0;
  for(i=0;i<3;i++) {
    chn->param[i] = 0;
  }
}
  
float channelGetValue(CHANNEL *chn) {
  return chn->value;
}
  
void channelSetValue(CHANNEL *chn, CHANNEL_VAL value) {
  chn->value = value;
}

void channelUpdate(CHANNEL *chn, CHANNEL_VAL newValue, uint8_t divider) {
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
      if ((nVal > chn->param[0]) && (chn->tmp1 < chn->param[0]))
        chn->value++;
      chn->tmp1 = nVal;
      break;
    case CHANNEL_MODE_AVERAGE:     break;
    case CHANNEL_MODE_RATE_LIMIT:  
      
      break;
    case CHANNEL_MODE_LIMIT: 
      chn->value = nVal;
      if (nVal>chn->param[0]) {     // max value
        chn->value = chn->param[0];
      }
      if (nVal < chn->param[1]) {      // min value
        chn->value = chn->param[1];
      }
      break;
    case CHANNEL_MODE_DELAY:       break;
    case CHANNEL_MODE_TIMER:       break;
    case CHANNEL_MODE_INTEGRATE: chn->value += nVal/divider;  break;
    default: break;
    
  }
}

void channelSetConnection(CHANNEL *chn, CHANNEL *connection) {
  chn->src = connection;
}

void channelSetMode(CHANNEL *chn, CHANNEL_MODE mode) {
  DEBUGPRINT("Mode = %d\n",mode);
  chn->mode = mode;
}

void channelSetParam(CHANNEL *chn, uint8_t param, CHANNEL_VAL value)  {
  chn->param[param] = value;
}

char *channel_modeToString(CHANNEL_MODE mode) {
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

char *channel_toString(CHANNEL *chn) {
  static char buf[128];
	if (chn==NULL) {
		return "  Id          Name             Mode       Value";
	}
	sprintf(buf, "%-10s  %-16s %-10s %6.2f", channel_get_id(chn), chn->name, channel_modeToString(chn->mode), chn->value);
  return buf;
}


char *channel_get_id(CHANNEL *chn) {
	static char buf[32];
	if (chn->src == NULL) {
		return chn->id;
	}
	
	sprintf(buf, ">%s", channel_get_id(chn->src));
	return buf;
}
