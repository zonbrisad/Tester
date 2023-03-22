/**
 *---------------------------------------------------------------------------
 * @brief    Linux utils
 *
 * @file     def_linux.c
 * @author
 * @date     2017-10-22
 * @license
 *
 *---------------------------------------------------------------------------
 *
 *
 */
// Includes ---------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <errno.h>
#include <signal.h>

#include "def.h"
#include "def_linux.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------

void printSysInfo(void) {
    //  defprintf("File:       "__FILE__"\n");
    defprintf("Build:      "__DATE__"  "__TIME__"\n");
    defprintf("C Standard: "STRINGIZE(__STDC_VERSION__)"\n");
#ifdef __GNUC__
    defprintf("GNU C ver:  "__GNUC_VERSION__"\n");
#endif

    //defprintf("Byteorder:  "STRINGIZE(__BYTE_ORDER)"\n");
#ifdef __BIG_ENDIAN__
    defprintf("Byteorder:  big endian\n");
#endif
#ifdef __LITTLE_ENDIAN__
    defprintf("Byteorder:  little endian\n");
#endif

#ifdef __cplusplus
    defprint("C++: enabled\n");
#endif

}


char *getPathToSelf(void) {
    static char buf[128];
    int size;

    size = readlink("/proc/self/exe", buf, 128);
    buf[size] = '\0';
    return buf;
}

void removePidFile(char *pidFile) {
    remove(pidFile);
}

/**
 * http://www.man7.org/tlpi/code/online/dist/filelock/create_pid_file.c.html
 */
int createPidFile(char *pidFile) {
    pid_t pid, fPid;
    int  e;
    FILE *file;

    DEBUGPRINT("Creating PID file. (%s)\n", pidFile);

    // get pid of this process
    pid = getpid();

    DEBUGPRINT("This process PID=%d\n", pid);

    // open pid file and read PID
    file = fopen(pidFile, "a+");

    if ( file == NULL ) {
        ERRORPRINT("Failed to open pidfile (%s) [%s]\n", pidFile, strerror(errno));
        return -1;
    } else {

        e = fscanf(file, "%d", &fPid);

        // if pid file exist check if process is running
        if (e > 0) {

        }

        if (e == -1) {
            goto writePid;
        } else {
            WARNINGPRINT("Found PID file %d\n", fPid);
        }

        // check if process is running
        e = kill(fPid, 0);

        // write new pid to file
writePid:
        rewind(file);
        fprintf(file, "%d\n", pid);
        //closePid:
        fclose(file);
    }

    return 0;
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

void terminalSize(int *cols, int *lines) {
	struct winsize ts;
	*cols  = 0;
	*lines = 0;

	ioctl(STDIN_FILENO,  TIOCGWINSZ , &ts);
	*cols = ts.ws_col;
	*lines = ts.ws_row;
	//printf("Terminal is %dx%d\n", cols, lines);
}
