/**
 *---------------------------------------------------------------------------
 * @brief   Makeplates main example file.
 *
 * @file    main.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-10-24
 * @licence GPLv2
 *
 *---------------------------------------------------------------------------
 */

// Includes ---------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <errno.h>
#include <gtk/gtk.h>

#include "def.h"

// Defines ----------------------------------------------------------------

#define PROGNAME "gtktest"
#define WINDOW_TITLE PROGNAME

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------
void sigInt(int sig);
void sigHup(int sig);

// Code -------------------------------------------------------------------


void sigInt(int sig) {
	UNUSED(sig);
	
	printf("\nExiting program\n");
	exit(0);
}

void sigHup(int sig) {
	UNUSED(sig);
	printf("Sighup\n");
}

print_hello (GtkWidget *widget, gpointer   data) {
	  g_print ("Hello World\n");
}

int main(int argc, char *argv[]) {
	
	signal(SIGINT, sigInt);
	signal(SIGHUP, sigHup);
	
	printf("\nGTK+ example program\n\n\n");

	GtkWidget *window;
	GtkWidget *button;
	    
	gtk_init (&argc, &argv);
	
	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title (GTK_WINDOW (window), WINDOW_TITLE);
	gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);
	
	button = gtk_button_new_with_label ("Hello World");
  g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);
	
	 /* This packs the button into the window (a gtk container). */
	    gtk_container_add (GTK_CONTAINER (window), button);
	
	 /* The final step is to display this newly created widget. */
	    gtk_widget_show (button);	
	gtk_widget_show  (window);
	    
	gtk_main ();
	
	return 0;
}
