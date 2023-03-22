/**
 *---------------------------------------------------------------------------
 * @brief   Some usefull C routines.
 *
 * @file    s2s.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2017-05-04
 * @license MIT
 *
 *---------------------------------------------------------------------------
 */

// Includes ---------------------------------------------------------------

#include "def.h"
#include "s2s.h"


// Code -------------------------------------------------------------------

S2S *S2S_new(int size) {
    S2S *db;

    db = malloc((size + 1) * sizeof(S2S));

    db[size].key[0] = '\0';
    db[size].value[0] = '\0';

    return db;
}

S2S *S2S_copy(S2S *db) {
    S2S *dst;
    int len;

    len = S2S_len(db);
    dst = S2S_new(len);
    memcpy(dst, db, len * sizeof(S2S));

    return dst;
}

void S2S_free(S2S *db) {
    free(db);
}

int S2S_findKey(S2S *db, char *key) {
    int i = 0;

    while (strncmp(db[i].key, S2S_LAST, 6)) {
        //    DEBUGPRINT("%d\n",i);
        if (!strncmp(db[i].key, key, S2S_STRLEN)) {
            //         DEBUGPRINT("%d\n",i);
            return i;
        }

        i++;
    }

    return -1;
}

int S2S_findValue(S2S *db, char *value) {
    int i = 0;

    //      while (db[i].key != S2S_LAST) {
    while (strncmp(db[i].key, S2S_LAST, 6)) {
        if (!strncmp(db[i].value, value, S2S_STRLEN)) {
            return i;
        }

        i++;
    }

    return -1;
}

char *S2S_getValue(S2S *db, char *key) {
    int idx = 0;

    idx = S2S_findKey(db, key);

    if (idx != -1) {
        return db[idx].value;
    } else {
        return NULL;
    }
}

void S2S_setValue(S2S *db, char *key, char *value) {
    int idx = 0;

    idx = S2S_findKey(db, key);

    if (idx != -1) {
        strncpy(db[idx].value, value, S2S_STRLEN);
    }
}

void S2S_setKeyValue(S2S *db, int idx, char *key, char *value) {

    if (isWithin(idx, 0, S2S_len(db) - 1)) {
        strncpy(db[idx].key, key, S2S_STRLEN);
        strncpy(db[idx].value, value, S2S_STRLEN);
    }
}


int S2S_len(S2S *db) {
    int i = 0;

    while (strncmp(db[i].key, S2S_LAST, 6)) {
        i++;
    }

    //    while (db[i].key != S2S_LAST) {
    //        i++;
    //    }

    return i;
}

int S2S_last(S2S *db) {
    return S2S_len(db) - 1;
}

int S2S_first(S2S *db) {
    UNUSED(db);
    return 0;
}

void S2S_printDb(S2S *db) {
    int i;

    for (i = 0; i < S2S_len(db); i++) {
        printf("%20s   %s\n", db[i].key, db[i].value);
    }
}


