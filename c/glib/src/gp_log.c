/**
 *---------------------------------------------------------------------------
 * @file    gp_log.c
 * @brief   A general purpose log/error management library.
 *
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2015-04-14
 * @licence GPLv2
 *
 *---------------------------------------------------------------------------
 */

#include <syslog.h>
#include <stdio.h>
#include <glib-2.0/glib.h>
#include <glib/gstdio.h>

#include "def.h"
#include "gp_log.h"

/**
 * Macro declarations
 *------------------------------------------------------------------
 */


/**
 * Variable declarations
 *------------------------------------------------------------------
 */

gboolean gp_verbose = FALSE;
gboolean gp_syslog = FALSE;
//gboolean gp_debug=FALSE;
gboolean gp_noColor = FALSE;

int gp_maxSize;
int gp_logSize;

char *gp_logFile;
char *gp_logDir;

FILE *gpLogFile = NULL;
char *gpLogFilename;

int log_mask;
unsigned int verbose_mask;

static void gp_log_handler(const gchar *log_domain,
                           GLogLevelFlags log_level,
                           const gchar *message,
                           gpointer user_data );

/**
 * Code
 *------------------------------------------------------------------
 */

void gp_log_set_verbose(gboolean v) {
    gp_verbose = v;
}

void gp_log_set_verbose_mask(int mask) {
    verbose_mask = mask;
}

void gp_log_set_log_mask(int mask) {
    log_mask = mask;
}


void gp_log_init(char *logfile) {
    GStatBuf st;

    gpLogFilename = logfile;

    gp_log_set_verbose(FALSE);

    gp_log_set_verbose_mask(GP_ALL);

    gp_log_set_log_mask(GP_ALL);

    /* Set handler for all levels */
    g_log_set_handler(G_LOG_DOMAIN, G_LOG_LEVEL_MASK | G_LOG_LEVEL_ERROR | G_LOG_FLAG_FATAL, gp_log_handler, NULL);

    gpLogFile = g_fopen(logfile, "a");

    if (gpLogFile == NULL) {
        g_warning("Could not open file for message logging\n");
        return;
    }

    g_stat(gpLogFilename, &st);
    gp_logSize = st.st_size;
    g_debug("Logfile size: %d\n", gp_logSize);

}

void gp_log_close() {
    fclose(gpLogFile);
}

static void gp_log_handler(const gchar *log_domain,
                           GLogLevelFlags log_level,
                           const gchar *message,
                           gpointer user_data ) {
    char *color;
    char *level;
    GDateTime *dt;
    char *dateTime;
    char *eDate;
    char *eTime;
    int i;
    int lm, vm;

    color = E_WHITE;
    level = "    ";

    switch (log_level & G_LOG_LEVEL_MASK) {
        case G_LOG_LEVEL_WARNING:
            color = E_BR_YELLOW;
            level = "wrn"; /*"warning";*/  lm = log_mask & GP_WARNING;
            vm = verbose_mask & GP_WARNING;
            break;

        case G_LOG_LEVEL_ERROR:
            color = E_BR_RED;
            level = "err"; /*"error";  */  lm = log_mask & GP_ERROR;
            vm = verbose_mask & GP_ERROR;
            break;

        case G_LOG_LEVEL_CRITICAL:
            color = E_WONR;
            level = "cri"; /*"critical";*/ lm = log_mask & GP_CRITICAL;
            vm = verbose_mask & GP_CRITICAL;
            break;

        case G_LOG_LEVEL_DEBUG:
            color = E_BR_GREEN;
            level = "dbg"; /*"debug";  */  lm = log_mask & GP_DEBUG;
            vm = verbose_mask & GP_DEBUG;
            break;

        case G_LOG_LEVEL_INFO:
            color = E_WHITE;
            level = "inf";
            lm = log_mask & GP_INFO;
            vm = verbose_mask & GP_INFO;
            break;

        case G_LOG_LEVEL_MESSAGE:
            color = E_BR_CYAN;
            level = "msg"; /* "message";*/ lm = log_mask & GP_MESSAGE;
            vm = verbose_mask & GP_MESSAGE;
            break;

        default:
            color = E_WHITE;
            level = "dflt";
            break;
    }

    // date and time information
    dt = g_date_time_new_now_local();
    dateTime = g_date_time_format(dt, "%Y-%m-%d %k:%M:%S");
    eTime = g_date_time_format(dt, "%k:%M:%S");
    eDate = g_date_time_format(dt, "%Y-%m-%d");


    // print to stdout if in verbose mode
    if ( gp_verbose && vm ) {
        if (SHOW_DATE()) {
            printf("%s ", eDate);
        }

        if (SHOW_TIME()) {
            printf("%s ", eTime);
        }

        printf("[%s%s%s] %s", color, level, E_END, message);
    }

    if (gp_logSize > gp_maxSize) {
        //g_see
    }

    // write to logfile if existing
    if (gpLogFile != NULL && lm) {
        i = fprintf(gpLogFile, "%s [%s] %s", dateTime, level, message);

        if (i > 0) {
            gp_logSize += i;
        }
    }

    g_free(dateTime);

    return ;
}

void gp_log_print() {

}
