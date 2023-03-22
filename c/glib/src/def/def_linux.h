/**
 *---------------------------------------------------------------------------
 * @brief    Linux utils
 *
 * @file     def_linux.h
 * @author   
 * @date     2017-10-22
 * @license  
 *
 *---------------------------------------------------------------------------
 *
 *
 */
#ifndef DEF_LINUX_H
#define DEF_LINUX_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------

// Macros -----------------------------------------------------------------

// Typedefs ---------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------


/**
 * Print system information.
 */
void printSysInfo(void);

/**
 *
 * @return
 */
char *getPathToSelf(void);

/**
 *
 * @param pidFile
 * @return
 */
int createPidFile(char *pidFile);

/**
 *
 * @param pidFile
 */
void removePidFile(char *pidFile);


/**
 * Start process in daemon mode.
 */
void daemonize(void);


	
void terminalSize(int *cols, int *lines);
	
#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

