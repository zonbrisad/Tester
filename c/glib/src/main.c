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

// Includes ---------------------------------------------------------------

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib/gstdio.h>
#include <glib-2.0/gio/gio.h>
#include <ncurses.h>

#include "gp_log.h"
#include "debugsock.h"

#define DEBUGPRINT
#define ERRORPRINT
#include "def.h"



// Defines ----------------------------------------------------------------

#define APP_NAME        "glibtest"
#define APP_VERSION     "0.1"
#define APP_DESCRIPTION "- a general purpose log program"
#define APP_LOGFILE     "glib.log"
#define APP_PIDFILE     "/tmp/glibtest.pid"

// Variables --------------------------------------------------------------

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
static gboolean opt_daemon     = FALSE;
static gboolean opt_errorTest  = FALSE;
static gboolean opt_threadTest = FALSE;
static gboolean opt_info       = FALSE;
static gboolean opt_daemonTest = FALSE;
static gboolean opt_queueTest  = FALSE;
static gboolean opt_pipeTest   = FALSE;
static gboolean opt_domainS    = FALSE;
static gboolean opt_domainC    = FALSE;

static gboolean opt_stdinTest  = FALSE;
static gboolean opt_cliTest    = FALSE;

static GOptionEntry entries[] = {
	{ "verbose",  'v', 0, G_OPTION_ARG_NONE, &opt_verbose,    "Be verbose output",    NULL },
	{ "version",  'b', 0, G_OPTION_ARG_NONE, &opt_version,    "Output version info",  NULL },
	{ "quiet",    'q', 0, G_OPTION_ARG_NONE, &opt_quiet,      "No output to console", NULL },
	{ "daemon",    0,  0, G_OPTION_ARG_NONE, &opt_daemon,     "Start as daemon",      NULL },
	{ "error",     0,  0, G_OPTION_ARG_NONE, &opt_errorTest,  "Error test",           NULL },
	{ "thread",    0,  0, G_OPTION_ARG_NONE, &opt_threadTest, "Thread test",          NULL },
	{ "info",     'i', 0, G_OPTION_ARG_NONE, &opt_info,       "Show info",            NULL },
	{ "daemon",   'd', 0, G_OPTION_ARG_NONE, &opt_daemonTest, "Daemon test",          NULL },
	{ "queue",     0,  0, G_OPTION_ARG_NONE, &opt_queueTest,  "Queue test",           NULL },
	{ "pipe",      0,  0, G_OPTION_ARG_NONE, &opt_pipeTest,   "Pipe test",            NULL },
	{ "domains",   0,  0, G_OPTION_ARG_NONE, &opt_domainS,    "Domain socket server", NULL },
	{ "domainc",   0,  0, G_OPTION_ARG_NONE, &opt_domainC,    "Domain socket client", NULL },
	{ "stdin",     0,  0, G_OPTION_ARG_NONE, &opt_stdinTest,  "Listen to Stdin",      NULL },
	{ "cli",       0,  0, G_OPTION_ARG_NONE, &opt_cliTest,    "CLI test",             NULL },
	{ NULL }
};

GTimer      *timer;
GThread     *thread1;
GThread     *thread2;
GMainLoop   *mLoop1;
GMainLoop   *mLoop2;
GAsyncQueue *queue1;

struct termios orig_termios_stdin;
struct termios orig_termios_stdout;

// Code -------------------------------------------------------------------

void writePidFile() {
    FILE *f;
    f = g_fopen(APP_PIDFILE, "w");

    if (f != NULL) {
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

    if (f != NULL) {
        fscanf(f, "%d", &pid);
        fclose(f);

        sprintf(buf, "/proc/%d", pid);

        if (g_file_test(buf, G_FILE_TEST_EXISTS)) {
            appPid2 = pid;
            return pid;
        }

        //    f = g_fopen(buf, "r");
        //    if (f!=NULL) {
        //      fclose(f);
        //      appPid2 = pid;
        //      return pid;
        //    }
    }

    // write to pidfile
    f = g_fopen(APP_PIDFILE, "w");

    if (f != NULL) {
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
    DEBUGPRINT("End\n");

    g_message("Shuting down...");
    gp_log_close();

    // Do not remove file if already running.
    if (appPid2 == 0) {
        removePidFile();
    }

    //tcsetattr(0, TCSANOW, &orig_termios);
    exit(0);
}

void errorTest() {
    gp_log_set_verbose(TRUE);

    g_message("This is a message\n");
    g_debug("This is a debug message\n");
    g_warning("This is a warning\n");
    g_error("This is an error\n");
    g_info("This is information\n");
    g_critical("This is critical\n");

}

void sig_ctrl_c(int sig) {
    g_main_loop_quit(mLoop1);
}

void sig_usr1(int sig) {
    int *x;
    x = malloc(sizeof(int));
    printf("Signal USR1\n");
    g_async_queue_push(queue1, x);
}


void thread_2(void *ptr) {
    printf("Starting thread 2\n");

    while (1) {
        sleep(3);
        printf("Thread 2\n");
    }
}
void thread_1(void *ptr) {
    gpointer *data;
    printf("Starting thread 1\n");

    while (1) {
        data = g_async_queue_pop(queue1);
        printf("Data received from queue\n");
    }
}

gboolean timeout_1() {
    gulong t;
    gdouble d;
    d = g_timer_elapsed(timer, &t);
    printf("Elapsed time %f s\n", d);
    return TRUE;
}

void threadTesto() {
    timer = g_timer_new();
    g_timer_start(timer);
    //  queue1 = g_async_queue_new();

    //signal(SIGINT, sig_ctrl_c);
    //g_unix_signal_add(SIGINT, sig_ctrl_c);
    //g_unix_signal_add(SIGUSR1, sig_usr1);

    queue1 = g_async_queue_new();

    mLoop1 = g_main_loop_new(NULL, FALSE);

    g_timeout_add_seconds(1, timeout_1, "Timeout 1");

    //thread1 = g_thread_new("TestThread1", thread_1, NULL);
    //thread2 = g_thread_new("TestThread2", thread_2, NULL);

    //pthread_create(&thread1, NULL, thread_1, NULL);

    g_main_loop_run(mLoop1);

}

void threadTest() {
    timer = g_timer_new();
    g_timer_start(timer);

    //signal(SIGINT, sig_ctrl_c);

    queue1 = g_async_queue_new();

    //mLoop1 = g_main_loop_new(NULL, FALSE);

    g_timeout_add_seconds(1, timeout_1, "Timeout 1");

    while (1) {
        sleep(3);
        printf("A\n");
    }

    //g_main_loop_run(mLoop1);

}

void queueTest() {
    gpointer *data;
    queue1 = g_async_queue_new();
    printf("Queue test\n");

    while (1) {
        data = g_async_queue_pop(queue1);
        printf("Data received\n");
    }
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

void daemonTest(void) {
    printf("Starting up daemon\n");
    daemonize();

    mLoop1 = g_main_loop_new(NULL, FALSE);
    g_main_loop_run(mLoop1);
}


void pipe_callback(GIOChannel *source, GIOCondition condition, gpointer data) {
    char buf[128];
    gsize size;
    GError *err;

    g_io_channel_read_chars(source, buf, 128, &size, &err);
    printf("Kalle");
    return FALSE;
}
/*
void pipeTest(void) {
    GIOChannel *chn;
    int fd[2];
    int ret;

    printf("PipeTest\n");
    ret = pipe(fd);
    chn = g_io_channel_unix_new(fd[0]);

    g_io_add_watch(chn,G_IO_IN | G_IO_HUP | G_IO_ERR,(GIOFunc)pipe_callback,NULL);
    mLoop1 = g_main_loop_new(NULL, FALSE);
}
 */

static gboolean gio_in (GIOChannel *gio, GIOCondition condition, gpointer data) {
    GIOStatus ret;
    GError *err = NULL;
    gchar *msg;
    gsize len = 0;
    char buf[32];


    //  printf("Cond: %x\n",condition);
    if (condition & G_IO_IN) {
        ret = g_io_channel_read_chars (gio, buf, 4, &len, &err);

        if (ret == G_IO_STATUS_ERROR) {
            g_error ("Error reading: %s\n", err->message);
        }

        printf ("Read %u bytes: %s\n", len, msg);
    }

    if ((condition & G_IO_HUP) && (len == 0)) {
        DEBUGPRINT("Ending pipe test\n");
        g_main_loop_quit(mLoop1);
    }

    g_free (msg);
    return TRUE;
}

void pipeTest() {
    GIOChannel *channel, *channel2;
    pid_t childPid;

    printf("Pipe test\n");

    mLoop1 = g_main_loop_new(NULL, FALSE);
    timer = g_timer_new();
    g_timer_start(timer);

    //  g_timeout_add_seconds(5, timeout_1, "Pipe timeout");

    channel = g_io_channel_unix_new (STDIN_FILENO);

    if (!channel) {
        g_error ("Cannot create new GIOChannel!\n");
    }

    if (!g_io_add_watch (channel, G_IO_IN | G_IO_HUP, gio_in, NULL)) {
        g_error ("Cannot add watch on GIOChannel!\n");
    }

    g_main_loop_run(mLoop1);
}

#include <sys/un.h>

static gboolean socket_in(GIOChannel *gio, GIOCondition condition, gpointer data) {
    GIOStatus ret;
    GError *err = NULL;
    gchar *msg;
    gsize len = 0;
    char buf[32];
    static int x;

    DEBUGPRINT("Socket data in. cond %x\n", condition);

    //  printf("Cond: %x\n",condition);
    if (condition & G_IO_IN) {
        DEBUGPRINT("\n");
        ret = g_io_channel_read_chars (gio, buf, 4, &len, &err);

        if (ret == G_IO_STATUS_ERROR) {
            g_error ("Error reading: %s\n", err->message);
        }

        printf ("Read %u bytes: %s\n", len, msg);
    }

    if ((condition & G_IO_HUP) && (len == 0)) {
        DEBUGPRINT("Ending pipe test\n");
        //g_main_loop_quit(mLoop1);
        return FALSE; // remove the event source
    }

    //g_free (msg);
    return TRUE;
}

#define SOCKNAME "socket_dirtest.sock"

void domainServer(void) {
	xdomainServer(SOCKNAME);
}

void domainClient(void) {
	xdomainClient(SOCKNAME);
}

typedef struct {
    int    val;
    char   *name;
} c2s;

char cBuf[10];
int b = 0;
//#define ESC          0x1b
#define ARROW_UP     0x8041
#define ARROW_DOWN   0x8042
#define ARROW_RIGHT  0x8043
#define ARROW_LEFT   0x8044
#define ARROW_MIDDLE 0x8045
#define END          0x8046
#define HOME         0x8048
#define INSERT       0x8032
#define DELETE       0x8033
#define PAGE_UP      0x8035
#define PAGE_DOWN    0x8036

#define NO_CHAR     0x00

c2s charToStr[] = {
    { 0x1b,        "Escape"        },
    { ARROW_UP,    "Arrow Up"      },
    { ARROW_DOWN,  "Arrow Down"    },
    { ARROW_RIGHT, "Arrow Right"   },
    { ARROW_LEFT,  "Arrow Left"    },
    { ARROW_MIDDLE, "Arrow Middle" },
    { END,         "End"           },
    { HOME,        "Home"          },
    { INSERT,      "Insert"        },
    { DELETE,      "Delete"        },
    { PAGE_UP,     "Page Up"       },
    { PAGE_DOWN,   "Page Down"     },
    { NO_CHAR,     NULL},
};

char *char2Str(int ch) {
    int i;
    static char xbuf[4];
    i = 0;

    //printf("CH %4x\n",ch);

    while (charToStr[i].val != NO_CHAR) {
        if (ch == charToStr[i].val) {

            return charToStr[i].name;
        }

        i++;
    }

    sprintf(xbuf, "%c", (ch & 0xff));
    return xbuf;
}


uint16_t getCharX(char ch) {
    static int xChar;

    cBuf[b] = ch;

    switch (b) {
        case 0:
            if (ch == ESC) {
                b++;
                return NO_CHAR;
            } else {
                return ch;
            }

            break;

        case 1:
            if (ch == 0x5b) {
                b++;
            } else {  // alt + ch
                b = 0;
                return ch;
            }

            break;

        case 2:
            switch (ch) {
                case 0x41:
                    b = 0;
                    return ARROW_UP;
                    break;

                case 0x42:
                    b = 0;
                    return ARROW_DOWN;
                    break;

                case 0x43:
                    b = 0;
                    return ARROW_LEFT;
                    break;

                case 0x44:
                    b = 0;
                    return ARROW_RIGHT;
                    break;

                case 0x45:
                    b = 0;
                    return ARROW_MIDDLE;
                    break;

                case 0x46:
                    b = 0;
                    return END;
                    break;

                case 0x48:
                    b = 0;
                    return HOME;
                    break;

                case 0x32:
                    b++;
                    xChar = INSERT;
                    break;

                case 0x33:
                    b++;
                    xChar = DELETE;
                    break;

                case 0x35:
                    b++;
                    xChar = PAGE_UP;
                    break;

                case 0x36:
                    b++;
                    xChar = PAGE_DOWN;
                    break;

                default:
                    break;
            }

            break;

        case 3:
            if (ch == 0x7e) {
                b = 0;
                return xChar;
            } else {
                b = 0;
                return ch;
            }

            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            break;

        default:
            b = 0;
            break;
    }

    if (ch == ESC) {
        b++;
        return NO_CHAR;
    }

    return NO_CHAR;
}


static gboolean stdin_in (GIOChannel *gio, GIOCondition condition, gpointer data) {
    GIOStatus ret;
    GError *err = NULL;
    gchar *msg;
    gsize len = 0;
    char buf[32];
    int ch;
    int i, j;

    if (condition & G_IO_IN) {
        ret = g_io_channel_read_chars (gio, buf, 1, &len, &err);

        if (ret == G_IO_STATUS_ERROR) {
            g_error ("Error reading: %s\n", err->message);
        } else {


            //for (i=0;i<len;i++) {
            ch = getCharX(buf[i]);

            if (ch != NO_CHAR) {
                for (j = 0; j < b; j++) {
                    printf("%x ", cBuf[j]);
                }

                printf("%s\n", char2Str(ch));
            }


        }
    }

    if ((condition & G_IO_HUP) && (len == 0)) {
        DEBUGPRINT("Ending stdin test\n");
        g_main_loop_quit(mLoop1);
    }

    g_free (msg);
    return TRUE;
}

void ttySetup() {
    struct termios new_termios;

    /* take two copies - one for now, one for later */
    tcgetattr(STDIN_FILENO, &orig_termios_stdin);
    memcpy(&new_termios, &orig_termios_stdin, sizeof(new_termios));

    new_termios.c_lflag &= ~(ICANON | ECHO   /* | ECHONL  | ISIG | IEXTEN */);
    //new_termios_p->c_cflag &= ~(CSIZE | PARENB);
    //new_termios.c_lflag &= ~OPOST;
    new_termios.c_oflag = 0;

    //cfmakeraw(&new_termios);

    tcsetattr(STDIN_FILENO, TCSANOW, &new_termios);


    tcgetattr(STDOUT_FILENO, &orig_termios_stdout);
    memcpy(&new_termios, &orig_termios_stdout, sizeof(new_termios));
    new_termios.c_oflag = 0;
    new_termios.c_lflag &= ~(ECHO | ICANON );
    tcsetattr(STDOUT_FILENO, TCSANOW, &new_termios);

}

void stdinTest() {
    GIOChannel *channel, *channel2;
    pid_t childPid;

    printf("Stdin test\n");


    ttySetup();

    mLoop1 = g_main_loop_new(NULL, FALSE);
    timer = g_timer_new();
    g_timer_start(timer);

    channel = g_io_channel_unix_new (STDIN_FILENO);

    if (!channel) {
        g_error ("Cannot create new GIOChannel!\n");
    }

    if (!g_io_add_watch (channel, G_IO_IN | G_IO_HUP, stdin_in, NULL)) {
        g_error ("Cannot add watch on GIOChannel!\n");
    }

    g_main_loop_run(mLoop1);
}

void cli_in(int ch) {
    static int pos = 0;
    char *str;
    char buf[16];
    printf("%d", ch);
    tcflush(stdout, TCIOFLUSH);

    if (ch == 'q') {
        exit(0);
    }

    switch (ch) {
        case NO_CHAR:
            break;

        case ARROW_UP:
            break;

        case ARROW_DOWN:
            break;

        case ARROW_LEFT:
            if (pos > 0) {
                str = E_CUR_BACK;
                pos--;
            }

            break;

        case ARROW_RIGHT:
            break;

        default:
            break;
    }


    //putc('a', STDOUT_FILENO);
    //printf(str);
}

static gboolean stdin_in_cli (GIOChannel *gio, GIOCondition condition, gpointer data) {
    GIOStatus ret;
    GError *err = NULL;
    gchar *msg;
    gsize len = 0;
    char buf[32];
    int ch;


    if (condition & G_IO_IN) {
        ret = g_io_channel_read_chars (gio, buf, 1, &len, &err);

        if (ret == G_IO_STATUS_ERROR) {
            g_error ("Error reading: %s\n", err->message);
        } else {
            //printChar(buf[0]);

            ch = getCharX(buf[0]);
            //printf("b %x\n", ch);
            cli_in(ch);
            //            if (ch != NO_CHAR) {
            //                //printf("%s\n", char2Str(ch));
            //                cli_in(ch);
            //            }


        }
    }

    if ((condition & G_IO_HUP) && (len == 0)) {
        DEBUGPRINT("Ending stdin test\n");
        g_main_loop_quit(mLoop1);
    }

    g_free (msg);
    return TRUE;
}

void cliTest() {
    GIOChannel *channel;
    printf("CLI test\n");
    //fprintf(stdout, "Stdout\n");
    //fprintf(stdin, "Stdin\n");

    ttySetup();

    mLoop1 = g_main_loop_new(NULL, FALSE);
    timer = g_timer_new();
    g_timer_start(timer);

    channel = g_io_channel_unix_new (STDIN_FILENO);

    if (!channel) {
        g_error ("Cannot create new GIOChannel!\n");
    }

    if (!g_io_add_watch (channel, G_IO_IN | G_IO_HUP, stdin_in_cli, NULL)) {
        g_error ("Cannot add watch on GIOChannel!\n");
    }

    g_main_loop_run(mLoop1);
}


int main(int argc, char *argv[]) {
    GError *error = NULL;
    GOptionContext *context;

    atexit(safeExit);

    // init log system
    gp_log_init(APP_LOGFILE);

    // Get some application/host data
    appInfo();
    /*
      if (isAppRunning()) {
        printf("Application is already running\n");
        exit(0);
        g_critical("Application is already running");
      }
      */
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


    // Error Test
    if (opt_errorTest) {
        errorTest();
        exit(0);
    }

    // thread test
    if (opt_threadTest) {
        threadTest();
        exit(0);
    }

    // info test
    if (opt_info) {
        infoTest();
        exit(0);
    }

    // daemon test
    if (opt_daemonTest) {
        daemonTest();
        exit(0);
    }

    // queue test
    if (opt_queueTest) {
        queueTest();
        exit(0);
    }

    // pipe test
    if (opt_pipeTest) {
        pipeTest();
        exit(0);
    }

    // domain socket test
    if (opt_domainS) {
        domainServer();
        exit(0);
    }

	    // domain socket test
	  if (opt_domainC) {
        domainClient();
        exit(0);
    }

	
    // stdin test
    if (opt_stdinTest) {
        stdinTest();
        exit(0);
    }

    // CLI test
    if (opt_cliTest) {
        cliTest();
        exit(0);
    }


    return 0;
}
