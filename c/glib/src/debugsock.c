/**
 *---------------------------------------------------------------------------
 * @brief    A simple library that provides debugprintots via a domain socket.
 *
 * @file     debugsock.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @date     2017-12-11
 * @license  GPLv2
 *
 *---------------------------------------------------------------------------
 *
 *
 */


// Includes -----------------------------------------------------------------

#include <glib-2.0/glib.h>
#include <glib-2.0/glib/gstdio.h>
#include <glib-2.0/gio/gio.h>
//#include <glib-2.0/gio/gunixsocketaddress.h>

#include "debugsock.h"
#define DEBUGPRINT
#define ERRORPRINT
#include "def.h"

// Macros -------------------------------------------------------------------
//#define SOCKNAMEX "socket_dirtest.sock"

#define DSNAMELEN 256
// Variables ----------------------------------------------------------------
GMainLoop   *mLoop;
GMainLoop   *mLoop1;
GSocket     *sock2;
GThread     *thread1;
GThread     *threadT;
GSocket     *serverSock;
GSocketListener *listener;
//char dsName[DSNAMELEN];

// Prototypes ---------------------------------------------------------------

// Code ---------------------------------------------------------------------

void dsprintf(const char *format, ... ) {
	char buf[1024];
	GError *error = NULL;
  
  va_list args;
	va_start(args, format);
	vsnprintf(buf, 1024, format, args); 
	va_end(args);
	DEBUGPRINT("A\n");
	if (sock2== NULL) {
    return;
  }
  
	if (g_socket_is_closed(sock2)) {
		ERRORPRINT("Socket is closed\n");
    return;
	}
  DEBUGPRINT("B\n");
  DEBUGPRINT("Sending message: %s\n", buf);
  
	g_socket_send(sock2, buf, strlen(buf), NULL, &error);
	
	if (error != NULL) {
		ERRORPRINT("Error %d  %s\n", error->code, error->message);
		//break;
	}
		
}

gboolean dsIsActive(char *sockName) {
  GSocket *sock;	
	GError *error = NULL;
	GSocketAddress *sockAddr;
	gboolean result;
	
	if (!g_file_test(sockName, G_FILE_TEST_EXISTS)) {
		ERRORPRINT("Domain socket \"%s\" does not exist\n", sockName);
		return false;
	}
  
	// create domain socket address
	sockAddr = g_unix_socket_address_new(sockName);
  
	// create socket
	//sock = g_socket_new(G_SOCKET_FAMILY_UNIX, G_SOCKET_TYPE_STREAM, G_SOCKET_PROTOCOL_DEFAULT, &error);
  sock = g_socket_new(G_SOCKET_FAMILY_UNIX, G_SOCKET_TYPE_STREAM, G_SOCKET_PROTOCOL_DEFAULT, NULL);
  
  error = NULL;
	// check if connection is possible to domain socket file
	//if  (g_socket_connect(sock, sockAddr, NULL, &error)) {
  if  (g_socket_connect(sock, sockAddr, NULL, NULL)) {
		DEBUGPRINT("Domain socket \"%s\" exist\n", sockName);
		result = true;
	} else {
		ERRORPRINT("Domain socket \"%s\" is not active\n", sockName);
//		ERRORPRINT("Error code %d  Msg: %s\n",error->code, error->message);
		result = false;
	}
	
	g_socket_close(sock, NULL);
//	g_free(sock);
//	g_free(sockAddr);
//	g_free(error);
 
	return result;
}


static gboolean sock_io(GIOChannel *source, GIOCondition condition, gpointer data) {
 ERRORPRINT("Sock fail %d\n", condition);
 //g_object_unref(source);
 g_free(source);
 sock2=NULL; 
 g_io_channel_close(source);
 //sock2 = g_socket_accept(serverSock, NULL, NULL);
 return TRUE;
}

static gboolean serverSock_io(GIOChannel *source, GIOCondition condition, gpointer data) {
 DEBUGPRINT("Serversock io %d\n", condition);
 sock2 = g_socket_accept(serverSock, NULL, NULL);
 if (sock2 != NULL) {
  g_io_add_watch(g_io_channel_unix_new(g_socket_get_fd(sock2)), 
                 G_IO_HUP, 
                 sock_io, 
                 NULL);
 }
 return TRUE;
}

void dsServerSockAccept(GObject *source_object,
                        GAsyncResult *res,
                        gpointer user_data) {
  GError *error = NULL;  

  DEBUGPRINT("Accepting message\n");
  //sock2 = g_socket_accept(serverSock, NULL, &error);
  //sock2 = g_socket_listener_accept_socket_finish(listener, NULL, NULL, &error);
  
  
  if (error != NULL) {
		ERRORPRINT("Error %d  %s\n", error->code, error->message);
    exit(0);
	}

  DEBUGPRINT("Message Accept:\n");
}
    
void initServerSock(char *sockName) {
  GError *error = NULL;  
	GSocketAddress *sockAddr;
	//char buf[128];
	//int i;
  
  // Remove old socket file if present
	if (!dsIsActive(sockName)) {
		DEBUGPRINT("Unlinking domainsocket \"%s\"\n", sockName);
	  g_unlink(sockName);
	}

  // create socket domain address
	sockAddr = g_unix_socket_address_new(sockName);
  
	// create socket
	serverSock = g_socket_new(G_SOCKET_FAMILY_UNIX, G_SOCKET_TYPE_STREAM, G_SOCKET_PROTOCOL_DEFAULT, &error);
    
  if (error != NULL) {
		ERRORPRINT("Error %d  %s\n", error->code, error->message);
		exit(0);
	}
  
  // bind socket to address 
	g_socket_bind(serverSock, sockAddr, TRUE,  &error);

  if (error != NULL) {
		ERRORPRINT("Error %d  %s\n", error->code, error->message);
    exit(0);
	}

  // mark socket as server socket 
	g_socket_listen(serverSock, &error);
 
  // add watch of socket channel
  g_io_add_watch(g_io_channel_unix_new(g_socket_get_fd(serverSock)), 
                 G_IO_IN, 
                 serverSock_io, 
                 (gpointer) serverSock);
  
  
   if (error != NULL) {
		ERRORPRINT("Error %d  %s\n", error->code, error->message);
    exit(0);
	}    
}
    
GMainLoop   *mLoopX;
GTimer      *timer1;

void dsThreadX(gpointer data) {
  DEBUGPRINT("Starting thread...\n");
  mLoopX = g_main_loop_new(NULL, FALSE);
  g_main_loop_run(mLoopX);
}

void dsThreadT(gpointer data) {
  DEBUGPRINT("Starting test thread...\n");
  sleep(2);
  while (1) {
    dsprintf("XXX\n");
		sleep(1);
	}	
}

gboolean timeout(gpointer user_data) {
  DEBUGPRINT("Timeout\n");
  dsprintf("Timeout\n");
  return TRUE;
}

void dsInit(char *domainSockName) {
  initServerSock(domainSockName);
  
  DEBUGPRINT("Initing dsInit\n");
  
  //thread1 = g_thread_new ("dsThreadX", dsThreadX, NULL);
  //threadT = g_thread_new ("dsThreadT", dsThreadT, NULL);
  //g_timeout_add(1000, timeout, NULL);
  g_timeout_add_seconds(2, timeout, NULL);
  mLoopX = g_main_loop_new(NULL, FALSE);
  g_main_loop_run(mLoopX);
}

void xdomainServer(char *sockName) {
  dsInit(sockName);    
}

void gErrorFail(GError *err) {
	printf("Error code %d  Msg: %s\n", err->code, err->message);
}

void xdomainClient(char *sockName) {
	GError *err = NULL;
  GError *error = NULL;
	GSocket *sock;
	GSocketAddress *sockAddr;
	char buf[128];
	int cnt;
		
	// create socket domain address
	sockAddr = g_unix_socket_address_new(sockName);

	while (1) {
		
		err = NULL;
		
		// create socket
		sock = g_socket_new(G_SOCKET_FAMILY_UNIX, G_SOCKET_TYPE_STREAM, G_SOCKET_PROTOCOL_DEFAULT, &err);
		
		while (1) {

			err = NULL;
			
		  if (g_socket_connect(sock, sockAddr, NULL, &err)) {
				break;
			} else {
				ERRORPRINT("Error code %d  Msg: %s\n", err->code, err->message);
				g_error_free(err);
				//ERRORPRINTC(err!=NULL, "Error code %d  Msg: %s\n", err->code, err->message);
			}
				
			sleep(1);
		}
		
		DEBUGPRINT("Connecting to domain socket.\n");
    
    sprintf(buf, "1234");
		g_socket_send(sock, buf, strlen(buf), NULL, &error);
		
    
    while (1) {
			err = NULL;
			
			cnt = g_socket_receive(sock, buf, 128, NULL, &err);
			if (g_socket_is_closed(sock)) {
				ERRORPRINT(, "Socket is closed\n");
			}
			if (cnt==0) {
				ERRORPRINT("No data\n");
				g_socket_close(sock, NULL);
			//	g_socket_shutdown(sock, NULL);
				break;
			}
		
			buf[cnt] = '\0';
			if (err == NULL) {
				DEBUGPRINT("Count : %d  buf %s\n", cnt, buf);
			} else {
				ERRORPRINT("Error code %d  Msg: %s\n",err->code, err->message);
			}
		}
	}
}




