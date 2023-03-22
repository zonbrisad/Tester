/**
 *---------------------------------------------------------------------------
 * @file    gp_log.h
 * @brief   A general purpose log/error management library.
 *
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2015-04-14
 * @licence GPLv2
 *
 *---------------------------------------------------------------------------
 */
#ifndef GP_LOG_H
#define GP_LOG_H

#include <glib-2.0/glib.h>

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * Macro declarations
 *------------------------------------------------------------------
 */
/*
    #define gp_log_message()
    #define gp_log_debug()
  #define gp_log_warning()
  #define gp_log_error()
    #define gp_log_critical()
*/
#define GP_MESSAGE   0x0001
#define GP_DEBUG     0x0002
#define GP_WARNING   0x0004
#define GP_ERROR       0x0008
#define GP_CRITICAL  0x0010
#define GP_INFO      0x0020
#define GP_TIME      0x0040
#define GP_DATE      0x0080

#define GP_ALL (GP_MESSAGE | GP_DEBUG | GP_WARNING | GP_ERROR | GP_CRITICAL | GP_INFO)
#define GP_NONE

#define SHOW_DATE()  (verbose_mask & GP_DATE)
#define SHOW_TIME()  (verbose_mask & GP_TIME)


/**
 * Variable declarations
 *------------------------------------------------------------------
 */


/**
 * Function declarations
 *------------------------------------------------------------------
 */

/**
 * Init log system.
 */
void gp_log_init(char *logfile);

void gp_log_set_verbose_mask(int mask);

void gp_log_set_log_mask(int mask);

/**
 *  Set verbose mode
 */
void gp_log_set_verbose(gboolean v);

/**
 * Print log to stdout.
 */
void gp_log_print();


/**
 * Close down log system
 */
void gp_log_close();


#ifdef  __cplusplus
}
#endif

#endif  /* GP_LOG_H */

