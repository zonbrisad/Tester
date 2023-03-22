/**
 *---------------------------------------------------------------------------
 * @brief   Some usefull C routines.
 *
 * @file    def_util.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2017-05-04
 * @license MIT
 *
 *---------------------------------------------------------------------------
 */

// Includes ---------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/socket.h>


#include "def.h"
#include "def_util.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------

// Binary -----------------------------------------------------------------

#define MAXBITS  64

char *int2bin(char *buf, int val, int8_t bits) {
    int i;
    int n;
    int mb;

    n = val;

    mb = Clamp(bits, 0, MAXBITS);
    buf[mb] = '\0';

    for (i = mb - 1; i >= 0; --i) {
        buf[i] = (n & 1) ? '1' : '0';
        n >>= 1;
    }

    return buf;
}

#define COLS 80

void printLine(void) {
    char buf[COLS + 2];
    int i;

    for (i = 0; i < COLS; i++) {
        buf[i] = '-';
    }

    buf[COLS] = '\n';
    buf[COLS + 1] = '\0';
    printf("%s", buf);
}

void printTextLine(char *text) {
    char buf[COLS + 2];
    int i;
    int len;

    len = strlen(text);

    buf[0] = ' ';

    for (i = 1; i < (COLS - len - 1); i++) {
        buf[i] = '-';
    }

    buf[COLS - len]   = '\n';
    buf[COLS - len + 1] = '\0';

    printf("%s%s", text, buf);
}




