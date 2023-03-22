/**
 * -----------------------------------------------------------------
 * @file  def.h
 * 
 * @brief 
 *
 *
 * @author Peter Malmberg <peter.malmberg@gmail.com>
 *
 * Licence MIT
 * -----------------------------------------------------------------
 */

#ifndef DEF_H_
#define	DEF_H_

/**
 * Uncomment to enable debugmode
 *
 */
//#define DDEBUG


/**
 * Some type definitions
 * -----------------------------------------------------------------
 */
#ifndef MAXCHAR
#define MAXCHAR         255
#endif

#ifndef MAXUCHAR
#define MAXUCHAR        255
#endif

#ifndef MAXSCHAR
#define MAXSCHAR        127
#endif

#ifndef MAXINT
#define MAXINT          32767
#endif

#ifndef MAXUINT
#define MAXUINT         65535
#endif

#ifndef MAXSINT
#define MAXSINT         32767
#endif

#ifndef MAXLONG
#define MAXLONG         2147483647
#endif

#ifndef MAXULONG
#define MAXULONG        4294967295
#endif

#ifndef MAXSLONG
#define MAXSLONG        2147483647
#endif


#ifndef FALSE
#define FALSE           0
#endif

#ifndef TRUE
#define TRUE            1
#endif

/**
 * Special character definitions.
 * -----------------------------------------------------------------
 */
#define NUL             0
#define SOH             1
#define STX             2
#define ETX             3
#define EOT             4
#define ENQ             5
#define ACK             6
#define BEL             7
#define BS              8
#define HT              9
#define LF              10
#define VT              11
#define FF              12
#define CR              13
#define SO              14
#define SI              15
#define DLE             16
#define DC1             17
#define DC2             18
#define DC3             19
#define DC4             20
#define NAK             21
#define SYN             22
#define ETB             23
#define CAN             24
#define EM              25
#define SUB             26
#define ESC             27
#define FS              28
#define GS              29
//#define RS            30
//#define US              31


/**
 * Unix Signal definitions.
 * -----------------------------------------------------------------
 */


#define SIGHUP          1       // Hangup
#define SIGINT          2       // Interrupt
#define SIGQUIT         3       // Quit and dump core
#define SIGILL          4       // Illegal instruction
#define SIGTRAP         5       // Trace/breakpoint trap
#define SIGABRT         6       // Process aborted
#define SIGBUS          7       // Bus error: "access to undefined portion of memory object"
#define SIGFPE          8       // Floating point exception: "erroneous arithmetic operation"
#define SIGKILL         9       // Kill (terminate immediately)
#define SIGUSR1         10      // User-defined 1
#define SIGSEGV         11      // Segmentation violation
#define SIGUSR2         12      // User-defined 2
#define SIGPIPE         13      // Write to pipe with no one reading
#define SIGALRM         14      // Signal raised by alarm
#define SIGTERM         15      // Termination (request to terminate)
#define SIGCHLD         17      // Child process terminated, stopped (or continued*)
#define SIGCONT         18      // Continue if stopped
#define SIGSTOP	        19      // Stop executing temporarily
#define SIGTSTP         20      // Terminal stop signal
#define SIGTTIN	        21      // Background process attempting to read from tty ("in")
#define SIGTTOU         22      // Background process attempting to write to tty ("out")
#define SIGURG	        23      // Urgent data available on socket
#define SIGXCPU         24      // CPU time limit exceeded
#define SIGXFSZ         25      // File size limit exceeded
#define SIGVTALRM       26      // Signal raised by timer counting virtual time: "virtual timer expired"
#define SIGPROF         27      // Profiling timer expired
//#define SIGPOLL         29      // Pollable event
#define SIGSYS          31      // Bad syscall


/**
 * ANSI escape code
 * -----------------------------------------------------------------
 */

/**
 * Color macro's
 */
#define E_OK            "\033[0;32m"
#define E_WARN          "\033[33;01m"
#define E_ERROR         "\033[31;01m"
#define E_BLACK         "\033[0;300m"
#define E_RED           "\033[0;31m"
#define E_GREEN         "\033[0;32m"
#define E_YELLOW        "\033[0;33m"
#define E_BLUE          "\033[0;34m"
#define E_MAGENTA       "\033[0;35m"
#define E_CYAN          "\033[0;36m"
#define E_GRAY          "\033[0;37m"
#define E_DARKGRAY      "\033[1;30m"
#define E_BR_RED        "\033[1;31m"
#define E_BR_GREEN      "\033[1;32m"
#define E_BR_YELLOW     "\033[1;33m"
#define E_BR_BLUE       "\033[1;34m"
#define E_BR_MAGENTA    "\033[1;35m"
#define E_BR_CYAN       "\033[1;36m"
#define E_WHITE         "\033[1;37m"

#define E_ON_BLACK      "\33[40"
#define E_ON_RED        "\33[41"
#define E_ON_GREEN      "\33[42"
#define E_ON_YELLOW     "\33[43"
#define E_ON_BLUE       "\33[44"
#define E_ON_MAGENTA    "\33[45"
#define E_ON_CYAN       "\33[46"
#define E_ON_WHITE      "\33[1;47"

#define E_END           "\033[0m"
#define E_CLEAR         "\033[2J"

#define E_WONR "\33[1;47\033[1;31m"

/**
 * Movement macro's
 */
#define E_CUR_RETURN  "\033[;0F"      // cursor return
#define E_CUR_UP      "\033[;0A"      // cursor up
#define E_CUR_DOWN    "\033[;0B"      // cursor down
#define E_CUR_FORWARD "\033[;0C"      // cursor forward
#define E_CUR_BACK    "\033[;0D"      // cursor back

#define E_HIDE_CURSOR "\033[?25l"     // hide cursor
#define E_SHOW_CURSOR "\033[?25h"     // show cursor

#define BLACK(s)        E_BLACK        s E_END
#define RED(s)          E_RED          s E_END
#define GREEN(s)        E_GREEN        s E_END
#define YELLOW(s)       E_YELLOW       s E_END
#define BLUE(s)         E_BLUE         s E_END
#define MAGENTA(s)      E_MAGENTA      s E_END
#define CYAN(s)         E_CYAN         s E_END
#define GRAY(s)         E_GRAY         s E_END
#define DARKGRAY(s)     E_DARKGRAY     s E_END
#define BR_RED(s)       E_BR_RED       s E_END
#define BR_GREEN(s)     E_BR_GREEN     s E_END
#define BR_YELLOW(s)    E_BR_YELLOW    s E_END
#define BR_BLUE(s)      E_BR_BLUE      s E_END
#define BR_MAGENTA(s)   E_BR_MAGENTA   s E_END
#define BR_CYAN(s)      E_BR_CYAN      s E_END
#define WHITE(s)        E_WHITE        s E_END

#define CUR_RETURN() printf(E_CUR_RETURN);         // return to column 0
#define CLEAR()      printf(E_CLEAR)


/**
 * Some Debugging macros's
 * -----------------------------------------------------------------
 */

#define FILEX (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
#define WHERESTR  "[ %s, %d]: "
#define WHEREARG  FILEX, __LINE__
#define DEBUGPRINT2(...)       fprintf(stderr, __VA_ARGS__)
#ifdef DDEBUG
#define DEBUGPRINT(_fmt, ...)  DEBUGPRINT2(WHERESTR _fmt, WHEREARG, __VA_ARGS__)
#else
#define DEBUGPRINT(_fmt, ...)
#endif

#define UNUSED_PARAM(p)		(void)p




#endif	/* DEF_H */

