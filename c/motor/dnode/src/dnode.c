/**
 *---------------------------------------------------------------------------
 * @brief    A simple data node library.
 *
 * @file     dnode.c
 * @author   Your Name <your.name@yourdomain.org>
 * @date     2017-07-24
 * @license  GPLv2
 *
 *---------------------------------------------------------------------------
 *
 *
 */
// Includes ---------------------------------------------------------------

#include "def.h"
#include "def_util.h"
#include "dnode.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

I2S mode2str[] = {
	{ DN_MODE_NORMAL,        "Normal"        },
	{ DN_MODE_MAX,           "Max"           },
	{ DN_MODE_MIN,           "Min"           }, 
	{ DN_MODE_AVERAGE,       "Average"       }, 
	{ DN_MODE_ACCUMULATE,    "Accumulate"    },
	{ DN_MODE_DIFFERENTIATE, "Differentiate" },
	{ DN_MODE_LIMIT,         "Limit"         },
	{ DN_MODE_RATELIMIT,     "Rate limit"    },
	{ I2S_END                                }
};

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------


void dNode_init(dNode *node, dnMode mode) {
	node->mode = mode;
	node->value = 0;
}

void dNode_setVal(dNode *node, dnData val) {
	node->value = val;
}

dnData dNode_getVal(dNode *node) {
	return node->value;
}


void dNode_updateVal(dNode *node, dnData val) {
	switch (node->mode) {
	 case DN_MODE_NORMAL:  node->value = val; break;
	 case DN_MODE_MAX:     node->value = Max(node->value, val); break;
	 case DN_MODE_MIN:     node->value = Min(node->value, val); break;
	 case DN_MODE_AVERAGE:    break;
	 case DN_MODE_ACCUMULATE: node->value += val; break;
	 case DN_MODE_DIFFERENTIATE: break;
	 case DN_MODE_LIMIT:      break;
	 case DN_MODE_RATELIMIT:  break;
	 		
	 case DN_MODE_SRC_SIN:    break;
	 case DN_MODE_SRC_RAMP:   node->value += node->x.tmp1; break;
	 case DN_MODE_SRC_SQUARE: break;
		
		
	 default:break;
	}
	
}

