/**
 *---------------------------------------------------------------------------
 * @brief   Makeplates main example file.
 *
 * @file    main.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-10-24
 * @licence MIT
 *
 *---------------------------------------------------------------------------
 */

// Includes ---------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <errno.h>

#include "dnode.h"
#include "def.h"
#include "def_util.h"

// Defines ----------------------------------------------------------------

#define PROGNAME "makeplate"

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------


dNode nodes[] = {
	DNODE(DN_MODE_NORMAL),
	DNODE(DN_MODE_MIN),
	DNODE(DN_MODE_MAX),
	DNODE_END()		
};


void printNode(dNode *node) {
//	printf("X %d\n", node->);
}

void printNodes(dNode nodes[]) {
	int i,j;
	i = 0;
	
	while (nodes[i].mode != DN_MODE_END) {
		printf("X %d\n", i);
		printNode(&nodes[i]);
		i++;
	}
	
	for (j=0;j<=i;j++) {
		printf(E_CUR_UP);

	}
	printf(E_CUR_RETURN);
	
}



int main(int argc, char *argv[]) {
	UNUSED(argc);
	UNUSED(argv);
	
	printNodes(nodes);
	
	return 0;
}
