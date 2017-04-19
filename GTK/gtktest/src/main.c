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
GtkWidget *window;
GtkWidget *vbox;	
	
GtkWidget *button;
GtkWidget *button2;

GtkWidget *menubar;
GtkWidget *fileMenu;
GtkWidget *fileMi;
GtkWidget *quitMi;

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


	// GTK window -------------------------------------------------------------------
	gtk_init (&argc, &argv);
	
	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title (GTK_WINDOW (window), WINDOW_TITLE);
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);
	
//	vbox = gtk_vbox_new(FALSE, 2);
	vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 3);
	gtk_container_add(GTK_CONTAINER(window), vbox);
	
	button  = gtk_button_new_with_label ("Hello World");
	button2 = gtk_button_new_with_label ("Hello World 2");
  g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);
	
	// GTK menu  --------------------------------------------------------------------
	menubar  = gtk_menu_bar_new();
	fileMenu = gtk_menu_new();
	
	fileMi = gtk_menu_item_new_with_label("File");
	quitMi = gtk_menu_item_new_with_label("Quit");
	
	gtk_menu_item_set_submenu(GTK_MENU_ITEM(fileMi), fileMenu);
	gtk_menu_shell_append(GTK_MENU_SHELL(fileMenu), quitMi);
	gtk_menu_shell_append(GTK_MENU_SHELL(menubar),  fileMi);
	gtk_box_pack_start(GTK_BOX(vbox), menubar, FALSE, FALSE, 0);
	
	// GTK Signals ------------------------------------------------------------------
	
	// Exit program when window is destroyed
	g_signal_connect(window,           "destroy",  G_CALLBACK (gtk_main_quit), NULL);
	g_signal_connect(G_OBJECT(quitMi), "activate", G_CALLBACK(gtk_main_quit),  NULL);
	
	 /* This packs the button into the window (a gtk container). */
	gtk_container_add (GTK_CONTAINER (vbox), button);
	gtk_container_add (GTK_CONTAINER (vbox), button2);
	
	 /* The final step is to display this newly created widget. */
	gtk_widget_show_all(window);
	    
	gtk_main ();
	
	return 0;
}
