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
#include <math.h>

#include "def.h"
#include "def_util.h"
#include "channel.h"

typedef struct
{
	CHANNEL_MODE mode;
	char *name;
} modeName;

modeName mode2name[] = {
		{CHANNEL_MODE_NORMAL, "Normal"},
		{CHANNEL_MODE_MIN, "Min"},
		{CHANNEL_MODE_MAX, "Max"},
		{CHANNEL_MODE_COUNT, "Count"},
		{CHANNEL_MODE_LIMIT, "Limit"},

		{CHANNEL_MODE_DIVIDE, "Divide"},
		{CHANNEL_MODE_MULTIPLY, "Multiply"},
		{CHANNEL_MODE_INTEGRATE, "Integrate"},
		{CHANNEL_MODE_DERIVATE, "Derivate"},

		{CHANNEL_MODE_RATE_LIMIT, "Rate limit"},
		{CHANNEL_MODE_AVERAGE, "Average"},
		{CHANNEL_MODE_TIMER, "Timer"},

		{CHANNEL_MODE_SINE, "Sine"},
		{CHANNEL_MODE_RAMP, "Ramp"},
		{CHANNEL_MODE_SQUARE, "Square"},

		{CHANNEL_MODE_PWM, "PWM"},
		{CHANNEL_MODE_INVERSE, "Inverse"},
		{CHANNEL_MODE_DELAY, "Delay"},

		{CHANNEL_MODE_NONE, "None"}};

void CHANNEL_Init(CHANNEL *chn)
{
	chn->value = 0;
	chn->tmp1 = 0;
	chn->tmp2 = 0;
	chn->mode = CHANNEL_MODE_NORMAL;
	chn->flags = 0;
}

CHANNEL_VAL CHANNEL_GetValue(CHANNEL *chn)
{

	switch (chn->mode)
	{
	case CHANNEL_MODE_SINE:
		return (chn->tmp1 * sin(((float)chn->value / 1000)));
		break;
		//	 case CHANNEL_MODE_SQUARE:

		//		break;

	default:
		return chn->value;
	}
	return chn->value;
}

void CHANNEL_SetValue(CHANNEL *chn, CHANNEL_VAL value)
{
	// if (chn->value != value) {
	chn->value = value;
	//}
}

void CHANNEL_Update(CHANNEL *chn, CHANNEL_VAL newValue, uint8_t divider)
{
	CHANNEL_VAL nVal;
	CHANNEL_VAL rate;

	if (!CHANNEL_IS_ENABLED(chn))
	{
		return;
	}

	// check if new value commes from connected channel or not
	if (chn->src.ptr != NULL)
	{
		nVal = CHANNEL_GetValue(chn->src.ptr);
	}
	else
	{
		nVal = newValue;
	}

	switch (chn->mode)
	{
	case CHANNEL_MODE_NORMAL:
		break; // chn->value = nVal; break;
	case CHANNEL_MODE_MAX:
		if (nVal > chn->value)
			chn->value = nVal;
		break;
	case CHANNEL_MODE_MIN:
		if (nVal < chn->value)
			chn->value = nVal;
		break;
	case CHANNEL_MODE_COUNT:
		if ((nVal > chn->tmp2) && (chn->tmp1 <= chn->tmp2))
		{
			chn->value++;
		}
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
		//		  rate = Abs(chn->value - nVal);
		rate = Clamp(nVal - chn->value, 0 - chn->tmp1, chn->tmp1);
		chn->value += rate;
		//		chn->value += (chn->tmp1 > rate) ? (rate) : chn->tmp1;

		break;
	case CHANNEL_MODE_LIMIT:
		chn->value = nVal;
		if (nVal > chn->tmp1)
		{ // max value
			chn->value = chn->tmp1;
		}
		if (nVal < chn->tmp2)
		{ // min value
			chn->value = chn->tmp2;
		}
		break;
	case CHANNEL_MODE_DELAY:
		if ((nVal > chn->tmp2) && (chn->tmp1 <= chn->tmp2))
		{
			chn->value++;
		}
		chn->tmp1 = nVal;
		break;
	case CHANNEL_MODE_TIMER:
		if (chn->value > 0)
		{
			chn->value = chn->value - 1;
		}
		break;
	case CHANNEL_MODE_INTEGRATE:
		chn->value += nVal / divider;
		break;
	case CHANNEL_MODE_DERIVATE:
		chn->value = nVal - chn->tmp1;
		chn->tmp1 = nVal;
		break;
	case CHANNEL_MODE_FILTER:
		//		FILTER_add(chn->filter, nVal);
		//		chn->value = FILTER_value(chn->filter);
		break;

	case CHANNEL_MODE_ADD:
		chn->value = nVal + chn->tmp1;
		break;
	case CHANNEL_MODE_SUBTRACT:
		chn->value = nVal - chn->tmp1;
		break;

	case CHANNEL_MODE_DIVIDE:
		chn->value = nVal / chn->tmp1;
		break;

	case CHANNEL_MODE_MULTIPLY:
		chn->value = nVal * chn->tmp1;
		break;

	case CHANNEL_MODE_SINE:
		chn->value += chn->tmp2;
		break;

	case CHANNEL_MODE_SQUARE:
		chn->tmp1 += 1;
		if (chn->tmp1 > chn->tmp2)
		{
			chn->tmp1 = 0;
			chn->value ^= 1;
		}
		// chn->value += chn->tmp2;

		break;
	case CHANNEL_MODE_PWM:
		if (chn->tmp3 < 0)
		{
			chn->value = 0;
		}
		else
		{
			chn->value = 1;
		}
		chn->tmp3++;
		if (chn->tmp3 >= chn->tmp1)
		{
			chn->tmp3 = 0 - chn->tmp2;
		}
		break;

	case CHANNEL_MODE_INVERSE:
		if (nVal > 0)
		{
			chn->value = 0;
		}
		else
		{
			chn->value = 1;
		}
		break;

	case ALARM_MODE_ABOVE:

		break;

	default:
		break;
	}
}

void CHANNEL_SetConnection(CHANNEL *chn, CHANNEL *connection)
{
	chn->src.ptr = connection;
}

void CHANNEL_SetMode(CHANNEL *chn, CHANNEL_MODE mode)
{
	DEBUGPRINT("Mode = %d\n", mode);
	chn->mode = mode;
}

char *CHANNEL_modeToString(CHANNEL_MODE mode)
{
	int i;
	i = 0;

	for (i = 0; i < 30; i++)
	{
		if (mode2name[i].mode == CHANNEL_MODE_NONE)
		{
			return "";
		}
		if (mode2name[i].mode == mode)
		{
			return mode2name[i].name;
		}
	}

	while (mode2name[i].mode != CHANNEL_MODE_NONE)
	{
		if (mode2name[i].mode == mode)
		{
			return mode2name[i].name;
		}
		i++;
	}
	return "";
}

char *CHANNEL_toString(CHANNEL *chn)
{
	static char buf[128];
	char ibuf[16];

	if (chn == NULL)
	{
		return E_YELLOW "  rId   Id          Name             Mode           Value     Flags" E_END;
	}
	//	sprintf(buf, " %2d   %-10s  " E_BR_MAGENTA "%-16s" E_END " %-10s" E_CYAN "%10d" E_END "   %s", chn->rid, CHANNEL_get_id(chn), chn->name, CHANNEL_modeToString(chn->mode), CHANNEL_GetValue(chn), int2bin(ibuf, chn->flags,8));
	sprintf(buf, " %2d   %-10s  " E_BR_MAGENTA "%-16s" E_END " %-10s" E_CYAN "%10d" E_END "   %08b", chn->rid, CHANNEL_get_id(chn), chn->name, CHANNEL_modeToString(chn->mode), CHANNEL_GetValue(chn), chn->flags);
	return buf;
}

char *CHANNEL_get_id(CHANNEL *chn)
{
	static char buf[32];
	if (chn->src.ptr == NULL)
	{
		return chn->tid;
	}

	sprintf(buf, ">%s", CHANNEL_get_id(chn->src.ptr));
	return buf;
}

void CHANNEL_Enable(CHANNEL *chn, char enable)
{
	if (enable)
	{
		Bit_set(chn->flags, CHANNEL_FLAG_ENABLE);
	}
	else
	{
		Bit_clear(chn->flags, CHANNEL_FLAG_ENABLE);
	}
}
