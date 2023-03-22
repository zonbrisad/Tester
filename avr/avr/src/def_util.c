/**
 *---------------------------------------------------------------------------
 * @brief   Some usefull C routines.
 *
 * @file    pmutil.c
 * @author  Peter Malmberg  <peter.malmberg@gmail.com>
 * @date    2017-05-04
 * @licence GPLv2
 *
 *---------------------------------------------------------------------------
 */

// Includes ---------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef DEF_PLATFORM_UNIX
#include <sys/socket.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#endif


#include "def.h"
#include "def_util.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------

// I2S ----------------------------------------------------------------------


I2S *I2S_new(int size) {
  I2S *db;
	
	db = malloc((size+1) * sizeof(I2S));

	db[size].key = I2S_LAST;
	db[size].val[0] ='\0';
	
	return db;
}

I2S *I2S_copy(I2S *db) {
	I2S *dst;
	int len;

	len = I2S_len(db);

	dst = I2S_new(len);

	memcpy(dst, db, len * sizeof(I2S));

	return dst;
}

void I2S_free(I2S *db) {
  free(db);
}

int I2S_findIdx(I2S *db, int val) {
    int i = 0;

    while (db[i].key != I2S_LAST) {
        if (db[i].key == val) {
            return i;
        }

        i++;
    }

    return -1;
}

int I2S_findIdxStr(I2S *db, char *str) {
    int i = 0;

    while (db[i].key != I2S_LAST) {
        if (!strncmp(db[i].val, str, I2S_STRLEN)) {
            return i;
        }

        i++;
    }

    return -1;
}

char *I2S_getValue(I2S *db, int val) {
    int idx = 0;

    idx = I2S_findIdx(db, val);

    if (idx != -1) {
        return db[idx].val;
    } else {
        return NULL;
    }
}

void I2S_setValue(I2S *db, int val, char *str) {
    int idx = 0;

    idx = I2S_findIdx(db, val);

    if (idx != -1) {
        strncpy(db[idx].val, str, I2S_STRLEN);
    }
}

void I2S_setKeyValue(I2S *db, int idx, int key, char *value) {

	if (isWithin(idx, 0, I2S_len(db)-1)) {
		db[idx].key = key;
		strncpy(db[idx].val, value, I2S_STRLEN);
	}
}


int I2S_len(I2S *db) {
    int i = 0;

    while (db[i].key != I2S_LAST) {
        i++;
    }

    return i;
}

int I2S_last(I2S *db) {
    return I2S_len(db) - 1;
}

int I2S_first(I2S *db) {
    UNUSED(db);
    return 0;
}


// S2S ----------------------------------------------------------------------


int S2S_findIdx(S2S *db, char *key) {
    int i = 0;

    while (strncmp(db[i].key, "",  S2S_STRLEN)) {
        if (!strncmp(db[i].key, key, S2S_STRLEN)) {
            return i;
        }

        i++;
    }

    return -1;
}

int S2S_len(S2S *db) {
    int i = 0;

    while (strncmp(db[i].key, "",  S2S_STRLEN)) {
        i++;
    }

    return i;
}


char *S2S_getValue(S2S *db, char *key) {
    int i;
    i = S2S_findIdx(db, key);

    if (i != -1) {
        return db[i].val;
    }

    return NULL;
}



// Binary--------------------------------------------------------------------

#define MAXBITS  32

char *int2bin(int val, uint8_t bits) {
	static char buf[MAXBITS+1];
	int i;
	int n;
	int mb;
	
  n = val;
	
	mb = Clamp(bits, 0, MAXBITS);
//	printf("Maxibits %d\n", mb);
	buf[mb] = '\0';
	
	for (i = mb-1; i >= 0; --i) {
		buf[i] = (n & 1) ? '1' : '0';
		n >>= 1;
	}

	return buf;
}





// Unix specific  ---------------------------------------------------------


#ifdef DEF_PLATFORM_UNIX
void daemonize(void) {
    pid_t pid, sid;
    int fd;

    /* already a daemon */
    if ( getppid() == 1 ) {
        return;
    }

    /* Fork off the parent process */
    pid = fork();

    if (pid < 0) {
        exit(EXIT_FAILURE);
    }

    /* Killing the Parent Process*/
    if (pid > 0) {
        exit(EXIT_SUCCESS);
    }

    /* At this point we are executing as the child process */

    /* Create a new SID for the child process */
    sid = setsid();

    if (sid < 0) {
        exit(EXIT_FAILURE);
    }

    /* Change the current working directory. */
    if ((chdir("/")) < 0)   {
        exit(EXIT_FAILURE);
    }

    fd = open("/dev/null", O_RDWR, 0);

    // redirect streams
    if (fd != -1) {
        dup2 (fd, STDIN_FILENO);
        dup2 (fd, STDOUT_FILENO);
        dup2 (fd, STDERR_FILENO);

        if (fd > 2) {
            close (fd);
        }
    }

    /* resettign File Creation Mask */
    umask(027);
}

#endif
