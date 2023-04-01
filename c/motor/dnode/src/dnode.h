/**
 *---------------------------------------------------------------------------
 * @brief    A simple data node library.
 *
 * @file     dnode.h
 * @author   Your Name <your.name@yourdomain.org>
 * @date     2017-07-24
 * @license  GPLv2
 *
 *---------------------------------------------------------------------------
 *
 *
 */
#ifndef DNODE_H
#define DNODE_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------

#include <stdint.h>
	
// Macros -----------------------------------------------------------------
#define DN_NAME_LEN 32
#define DN_NAME char *name[DN_NAME_LEN],

#define DNODE(mode) {	"", mode,        0, .x.tmp1 = 0 }
#define DNODE_END() {	"", DN_MODE_END, 0, .x.tmp1 = 0 }


	
// Typedefs ---------------------------------------------------------------

typedef enum {	
	DN_MODE_NONE = 0x00,
	DN_MODE_NORMAL,
	DN_MODE_MAX,
	DN_MODE_MIN, 
	DN_MODE_AVERAGE,
	DN_MODE_ACCUMULATE,
	DN_MODE_DIFFERENTIATE,
	DN_MODE_LIMIT,
	DN_MODE_RATELIMIT,
	
	// Source modes
	DN_MODE_SRC_SIN  =  0x50,
	DN_MODE_SRC_SQUARE, 
	DN_MODE_SRC_RAMP,
	
	DN_MODE_END
} dnMode;
	
typedef int16_t dnData;
	
typedef struct {
	char   name[DN_NAME_LEN];
	dnMode mode;
	dnData value;	
	union {
		dnData tmp1;
		dnData tmp2;
	} x;
} dNode;
	
	
// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

	
void dNode_init(dNode *node, dnMode mode);	
	
void dNode_setVal(dNode *node, dnData val);
	
void dNode_updateVal(dNode *node, dnData val);

dnData dNode_getVal(dNode *node);	

	
typedef struct {	
	dNode *node;
	int mode;
	uint8_t status;
} dAlarm;

	
	
	
#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

