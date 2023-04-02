/* 
 * File:   main.c
 * Author: pmg
 *
 * Created on den 23 april 2012, 23:58
 */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <argtable3.h>
#include <stdbool.h>
#include <signal.h>
#include <glib-2.0/glib.h>
#include <glib-unix.h>
#include <termios.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ncurses.h>

#include "mmmotor.h"
#include "channel.h"
#include "alarm.h"
#include "httpThread.h"
#include "motorThread.h"



typedef enum {
	SIGNAL_MODE_SINUS = 0,
	SIGNAL_MODE_RAMP,
	SIGNAL_MODE_SAWTOOTH,
	SIGNAL_MODE_SQUARE,
	SIGNAL_MODE_RANDOM,
} SIGNAL_MODE;

typedef struct {
	SIGNAL_MODE mode;
  float param1;
  float param2;
  float param3;
  CHANNEL *channel;
} SIGNAL;

void signal_init(SIGNAL *signal, SIGNAL_MODE mode, char *name) {
  signal->mode = mode;
  signal->param1 = 1;
  signal->param2 = 0.1;
  signal->param3 = 0;
}

void signal_setChannel(SIGNAL *signal, CHANNEL *channel) {
  signal->channel = channel;
}

void signal_update(SIGNAL *signal) {
  CHANNEL_VAL value;
  switch (signal->mode){
    case SIGNAL_MODE_SINUS:
      value = signal->param1 * sin(signal->param3);
      signal->param3 += signal->param2;
      break;
    case SIGNAL_MODE_RAMP: break;
    case SIGNAL_MODE_SAWTOOTH: break;
    case SIGNAL_MODE_SQUARE: break;
    case SIGNAL_MODE_RANDOM: break;
    default: break;
    
  }
  channelSetValue(signal->channel, value);
}


// Variables -----------------------------------------------------------------
 
WINDOW    *mainWin = NULL; 
WINDOW    *infoWin = NULL;

CHANNEL chTest = CHANNEL_NORMAL("Sinus", "Sin",   CHANNEL_MODE_NORMAL);

//CHANNEL chns[10];

CHANNEL channels[] = {
  CHANNEL_NORMAL("Sinus", "Sin", CHANNEL_MODE_NORMAL),
  CHANNEL_NORMAL("Square", "",   CHANNEL_MODE_NORMAL),
  CHANNEL_NORMAL("Min", "",      CHANNEL_MODE_MIN),
  CHANNEL_NORMAL("Max", "",      CHANNEL_MODE_MAX),
  CHANNEL_NORMAL("Average", "",  CHANNEL_MODE_AVERAGE),
  CHANNEL_LIMIT("Limit", "", 0.1, 0.8),
  CHANNEL_NORMAL("Integrate","", CHANNEL_MODE_INTEGRATE),
  CHANNEL_COUNT("Count", "", 0.5),
};

// Code ----------------------------------------------------------------------

void initChannels() {
  channels[2].src = &channels[0];
  channels[3].src = &channels[0];
  channels[5].src = &channels[0];
  channels[6].src = &channels[5];
  channels[7].src = &channels[0];
}


void createWindows() {
  if (infoWin != NULL) {
    delwin(infoWin);
  }
  
  if (mainWin != NULL) {
    delwin(mainWin);
  }
  
  infoWin = newwin(1,COLS, LINES-1, 0);
  mainWin = newwin(LINES-1,COLS, 0, 0);
  scrollok(mainWin, TRUE);  
}

void safeExit(int x) {

  delwin(mainWin);
  delwin(infoWin);
  endwin();        
  
  //gp_log_close();
  
  //uart_close(dev);
  //system("reset");
  printf("SafeExit\n");
  exit(x);
}

void printResourses() {
  int i;
	wprintw(mainWin, "%s\n",channel_toString(NULL));
  for (i=0; i<CHANNELS; i++) {
    wprintw(mainWin, "  %s\n", channel_toString(&channels[i]));
  }
  
}


/**
 * 
 */
int main(int argc, char** argv) {
  int nerrors;
  int i, j;
  SIGNAL sig;
  
//  for (i=0; i<10; i++) {
//    channelInit(&chns[i]);
//    channelSetMode(&chns[i], modes[i]);
//  }

  struct arg_lit *help = arg_lit0("h", "help", "Print help options");
  struct arg_end *end = arg_end(20);

  void *argtable[] = {help, end};

  if (arg_nullcheck(argtable) != 0)
    printf("error: insufficient memory\n");

  nerrors = arg_parse(argc, argv, argtable);

  // Display the error details contained in the arg_end struct.
  if (nerrors > 0) {
    arg_print_errors(stdout, end, "mmmotor");
    printf("Try '%s --help' for more information.\n", "mmmotor");
    exit(0);
  }
  if (help->count) {
    printf("Testprogram for Malmberg Mini Motor\n");
    arg_print_glossary(stdout, argtable, "  %-25s %s\n");
    exit(0);
  }
/*  
  for (i=0; i<CHANNELS; i++) {
    printf("%3d %s\n", i, channel_toString(&channels[i]));
  }
  */
  signal_init(&sig, SIGNAL_MODE_SINUS, "Sinus");
  signal_setChannel(&sig, &channels[0]);
  initChannels();

  initscr();            // init ncurses
  //raw();                // raw mode
  cbreak();             // c break mode

  createWindows();

  while(1) {

    signal_update(&sig);

		for(j=1;j<CHANNELS;j++) {
			channelUpdate(&channels[j],0, 10);
		}
		wclear(mainWin);
		printResourses();
		wrefresh(mainWin);
		//sleep(1);
		usleep(100000);
		wrefresh(mainWin);
  }
  
  safeExit(0);
  // cleanup
  arg_freetable(argtable, sizeof (argtable) / sizeof (argtable[0]));
  pthread_exit(NULL);
  return (EXIT_SUCCESS);
}

