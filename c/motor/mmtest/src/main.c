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

#include "mmmotor.h"
#include "channel.h"
#include "alarm.h"
#include "signal.h"
#include "filter.h"
#include "httpThread.h"
#include "motorThread.h"
#include "systemp.h"
#include "def.h"


// Variables -----------------------------------------------------------------
 
CHANNEL chTest = CHANNEL_NORMAL("Sinus", "Sin",   CHANNEL_MODE_NORMAL);

CHANNEL channels[] = {
  CHANNEL_NORMAL("Sinus", "Sin", CHANNEL_MODE_NORMAL),
  CHANNEL_NORMAL("Square", "",   CHANNEL_MODE_NORMAL),
  CHANNEL_NORMAL("Min", "",      CHANNEL_MODE_MIN),
  CHANNEL_NORMAL("Max", "",      CHANNEL_MODE_MAX),
  CHANNEL_NORMAL("Average", "",  CHANNEL_MODE_AVERAGE),
  CHANNEL_LIMIT("Limit", "", 0.1, 0.8),
  CHANNEL_NORMAL("Integrate","", CHANNEL_MODE_INTEGRATE),
  CHANNEL_COUNT("Count", "", 0.5),
	CHANNEL_LAST()
};


// Code ----------------------------------------------------------------------


void safeExit(int x) {

  //gp_log_close();  
  //uart_close(dev);
  //system("reset");
  printf("SafeExit\n");
  exit(x);
}

void print_channels(CHANNEL *chns) {
  int i = 0;
	int j;
	printf("%s\n",CHANNEL_toString(NULL));
	
	while (chns[i].mode != CHANNEL_MODE_LAST) {
		printf("  %s\n", CHANNEL_toString(&chns[i]));
		i++;
	}
	for (j=0; j<(i+1); j++) {
			printf(E_CUR_RETURN);
	}

}


void temptest(char *sensor) {
  STEMP *temp;
	CHANNEL *chns;
	FILTER *filter;
	int i;

	filter = FILTER_new();
	CHANNEL cpu_temp[] = {
		CHANNEL_NORMAL("CPU Temperature", "CPU", CHANNEL_MODE_NORMAL),
		CHANNEL_NORMAL("Min", "",      CHANNEL_MODE_MIN),
		CHANNEL_NORMAL("Max", "",      CHANNEL_MODE_MAX),
		CHANNEL_NORMAL("Average", "",  CHANNEL_MODE_AVERAGE),
		CHANNEL_FILTER("Filter", "", filter),
		CHANNEL_LAST()
	};
	
	temp = STEMP_new();
	STEMP_init(temp, sensor);
	chns = cpu_temp;

	chns[1].src = &chns[0];
	chns[2].src = &chns[0];
	chns[3].src = &chns[0];
	chns[4].src = &chns[0];
	
	while(1) {
		STEMP_read(temp);
		CHANNEL_Update(&chns[0], (temp->temperature/1000), 10);
		i = 1;
		while (chns[i].mode != CHANNEL_MODE_LAST) {
			CHANNEL_Update(&chns[i], 0, 10);
			i++;
		}
		
		print_channels(chns);
		
		usleep(100000);
  }
	
}


void maintest() {
	int i;
	SIGNAL *sig;
	CHANNEL *chns;

	//channels[1].src = &channels[0];
  channels[2].src = &channels[0];
  channels[3].src = &channels[0];
  channels[6].src = &channels[5];
  channels[7].src = &channels[0];
	
	chns = channels;
	sig = SIGNAL_new();
  SIGNAL_init(sig, SIGNAL_MODE_SINUS);
  SIGNAL_setChannel(sig, &channels[0]);


  while(1) {

    SIGNAL_update(sig);		
		i = 1;
		while (chns[i].mode != CHANNEL_MODE_LAST) {
			CHANNEL_Update(&chns[i], 0, 10);
			i++;
		}
		
    print_channels(chns);
		usleep(100000);
  }
}

/**
 * 
 */
int main(int argc, char** argv) {
  int nerrors;

  struct arg_lit *help = arg_lit0("h", "help", "Print help options");
	struct arg_lit *mainT = arg_lit0("m", "main", "Main test");
	struct arg_lit *tempT = arg_lit0("t", "temp", "Temperature test");
	struct arg_file *sensor = arg_file0("s", "sensor", "<sensorfile>", "File with sensor data");
  struct arg_end *end = arg_end(20);

  void *argtable[] = {help, mainT, tempT, sensor, end};

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

	if (mainT->count > 0) {
		maintest();
		safeExit(0);
	}

	if (tempT->count > 0) {
		if (sensor->count > 0) {
			temptest(sensor->filename[0]);
			safeExit(0);
		}
		temptest("/sys/class/thermal/thermal_zone0/temp");
		safeExit(0);
		
 	}

	arg_print_glossary(stdout, argtable, "  %-25s %s\n");

  arg_freetable(argtable, sizeof (argtable) / sizeof (argtable[0]));
  pthread_exit(NULL);

	return (EXIT_SUCCESS);
}

