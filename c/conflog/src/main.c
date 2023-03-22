/**
 *---------------------------------------------------------------------------
 *
 * @brief Makeplate GLIB test example
 *
 * @file    main.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2015-05-19 01:20:00
 *
 *---------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib/gstdio.h>

#include "gp_log.h"
#include "Def.h"

#include "conflog.h"

/**
 * Defines
 *---------------------------------------------------------------------------
 */
#define APP_NAME        "conflog"
#define APP_VERSION     "0.1"
#define APP_DESCRIPTION "- Configuration log program"
#define APP_LOGFILE     "conflog.log"
#define APP_PIDFILE     "/tmp/conflog.pid"

/**
 * Variables
 *---------------------------------------------------------------------------
 */

pid_t  appPid;
pid_t  appPid2;
const char  *appPath;
const char  *appHomeDir;
const char  *appUserName;
const char  *appRealName;
const char  *appHostName;

static gboolean opt_verbose    = FALSE;
static gboolean opt_version    = FALSE;
static gboolean opt_quiet      = FALSE;
//static gboolean opt_daemon     = FALSE;
//static gboolean opt_errorTest  = FALSE;
//static gboolean opt_threadTest = FALSE;
static gboolean opt_info       = FALSE;
//static gboolean opt_daemonTest = FALSE;
//static gboolean opt_queueTest  = FALSE;
char *opt_fileName;

static GOptionEntry entries[] = {
  { "verbose",  'v', 0, G_OPTION_ARG_NONE,     &opt_verbose,    "Be verbose output",    NULL },
  { "version",  'b', 0, G_OPTION_ARG_NONE,     &opt_version,    "Output version info",  NULL },
  { "quiet",    'q', 0, G_OPTION_ARG_NONE,     &opt_quiet,      "No output to console", NULL },
  { "info",     'i', 0, G_OPTION_ARG_NONE,     &opt_info,       "Show info",            NULL },
	{ "file",     'f', 0, G_OPTION_ARG_FILENAME, &opt_fileName,   "Filename",            NULL },
  { NULL }
};


/**
 * Code
 *---------------------------------------------------------------------------
 */

void writePidFile() {
  FILE *f;
  f = g_fopen(APP_PIDFILE, "w");
  if (f!=NULL) {
    fprintf(f, "%d\n", appPid);
    fclose(f);
  }
}
void removePidFile() {
  g_unlink(APP_PIDFILE);
}

int isAppRunning() {
  FILE *f;
  int  pid;
  char buf[20];
  
  appPid2 = 0;
  f = g_fopen(APP_PIDFILE, "r");
  if (f!=NULL) {
    fscanf(f, "%d", &pid);
    fclose(f);
    
    sprintf(buf, "/proc/%d", pid);
    if (g_file_test(buf,G_FILE_TEST_EXISTS)) {
      appPid2 = pid;
      return pid;
    }
  }
 
  // write to pidfile
  f = g_fopen(APP_PIDFILE, "w");
  if (f!=NULL) {
    fprintf(f, "%d\n", appPid);
    fclose(f);
  }
  
  return 0;
}

/**
 * Retrieve some basic information about system.
 */
void appInfo() {
  GError *err; 
  // get some system data
  appPid      = getpid();
  appPath     = g_file_read_link("/proc/self/exe", &err);
  appHomeDir  = g_get_home_dir();
  appUserName = g_get_user_name();
  appRealName = g_get_real_name();
  appHostName = g_get_host_name();
}

void safeExit() {
	g_message("Shuting down...");
  gp_log_close();
  
  // Do not remove file if already running.
  if (appPid2==0) {
    removePidFile();
  }
	exit(0);
}

void sig_ctrl_c(int sig) {


}

void sig_usr1(int sig) {
  int *x;
  x=malloc(sizeof(int));
  printf("Signal USR1\n");

}


void infoTest() {
  printf("PID:          %d\n", appPid);
  printf("Program path: %s\n", appPath);
  printf("Username:     %s\n", appUserName);
  printf("Full name:    %s\n", appRealName);
  printf("Home dir:     %s\n", appHomeDir);
  printf("Hostname:     %s\n", appHostName);
  printf("App. name:    %s\n", APP_NAME);
  printf("Version:      %s\n", APP_VERSION);
  printf("Description:  %s\n", APP_DESCRIPTION);
  printf("Logfile:      %s\n", APP_LOGFILE);
  printf("Pidfile:      %s\n", APP_PIDFILE);
}


int main(int argc, char *argv[]) {
	GError *error = NULL;
	GOptionContext *context;
	
  atexit(safeExit);
  
	// init log system
	gp_log_init(APP_LOGFILE);
  
  // Get some application/host data
  appInfo();
  
  if (isAppRunning()) {
    printf("Application is already running\n");
    exit(0);
    g_critical("Application is already running");
  }
  
  // parse command line arguments
  context = g_option_context_new (APP_DESCRIPTION);
  g_option_context_add_main_entries (context, entries, NULL);
  if (!g_option_context_parse (context, &argc, &argv, &error)) {
    g_print ("option parsing failed: %s\n", error->message);
    exit (1);
  }

	// enable verbose mode
	if (opt_verbose) {
	  gp_log_set_verbose(TRUE);  
	}
  
  g_message("Program start\n");
	
  // print version information
	if (opt_version) {
		printf("Program version %s\nBuild ("__DATE__" "__TIME__")\n", APP_VERSION);
		exit(0);
	}
	
	
  
	// 
	if (opt_info) { 
		infoTest();
		exit(0);
	}

 	
	return 0;
}
