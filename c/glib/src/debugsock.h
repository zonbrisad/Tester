/**
 *---------------------------------------------------------------------------
 * @brief    A simple library that provides debugprintouts via a domain socket.
 *
 * @file     debugsock.h
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @date     2017-12-11
 * @license  GPLv2
 *
 *---------------------------------------------------------------------------
 *
 *
 */
#ifndef DEBUGSOCK_H
#define DEBUGSOCK_H

#ifdef __cplusplus
extern "C" {
#endif



// Includes -----------------------------------------------------------------


// Macros -------------------------------------------------------------------


// Variables ----------------------------------------------------------------


// Prototypes ---------------------------------------------------------------

void xdomainServer(char *sockName);
	
void xdomainClient(char *sockName);

void dsMonitor(char *sockName);	
	
	
void dsprintf(const char *format, ... );
	
#endif

#ifdef __cplusplus
} //end brace for extern "C"
#endif
