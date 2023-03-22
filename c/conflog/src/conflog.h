/**
 *---------------------------------------------------------------------------
 * @brief   Config log file manager
 *
 * @file    conflog.h
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-03-04
 * @licence GPLv2
 *
 *---------------------------------------------------------------------------
 */

#ifndef CONFLOG_H
#define CONFLOG_H

#ifdef __cplusplus
extern "C"
#endif

/* Macros -----------------------------------------------------------------*/

/* Typedefs ---------------------------------------------------------------*/
typedef struct {
	sqlite3 *db;
} conflog_struct;

/* Variables --------------------------------------------------------------*/

/* Functions --------------------------------------------------------------*/

#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

