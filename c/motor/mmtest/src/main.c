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
 


// Code ----------------------------------------------------------------------

void printInfo(char *a, char *b) {
	defprintf(E_BR_MAGENTA"%-20s"E_END" "E_CYAN"%s\n"E_END, a, b);
}

void printSysInfo(void) {
	char buf[16];
	printInfo("Build:",__DATE__"  "__TIME__);	
	printInfo("C Standard:", STRINGIZE(__STDC_VERSION__));
	
#ifdef __GNUC__
	printInfo("GNU C ver:", __GNUC_VERSION__);
#endif

#ifdef __BIG_ENDIAN__
	printInfo("Byteorder:", "big endian");
#endif
#ifdef __LITTLE_ENDIAN__
	printInfo("Byteorder:", "little endian");
#endif
	
#ifdef __cplusplus
	printInfo("C++:", "enabled");
#endif
	
#ifdef __OPTIMIZE__
#ifdef __OPTIMIZE_SIZE__
	printInfo("Optimization, size:", "Enabled");
#else
	printInfo("Optimization:", "Enabled");
#endif
#endif

	sprintf(buf,"%d",sizeof(void*));
//	printf("Size %d\n",sizeof(void*));
	
	printInfo("Pointer size:", buf);

}


void safeExit(int x) {

  //gp_log_close();  
  //uart_close(dev);
  //system("reset");
  printf("SafeExit\n");
  exit(x);
}

void print_channels(CHANNEL *chns, int len) {
  int i;
	printf("%s\n",CHANNEL_toString(NULL));
	
  for (i=0; i<len; i++) {
		printf("  %s\n", CHANNEL_toString(&chns[i]));
	}
	for (i=0; i<=len; i++) {
			printf(E_PREVLINE);
	}
}


void temptest(const char *sensor) {
  STEMP *temp;

//	filter = FILTER_new();
	CHANNEL channels[] = {
		CHANNEL_NORMAL("CPU Temperature", "CPU", CHANNEL_MODE_NORMAL, 0),
		CHANNEL_NORMAL("Min", "",      CHANNEL_MODE_MIN, -1),
		CHANNEL_NORMAL("Max", "",      CHANNEL_MODE_MAX, -2),
		CHANNEL_NORMAL("Average", "",  CHANNEL_MODE_AVERAGE, -3),
//		CHANNEL_FILTER("Filter", "", filter),
	};
	
	temp = STEMP_new();
	STEMP_init(temp, sensor);

	mmotor_init(channels, MARRAY_LENGTH(channels));

	while(1) {
		STEMP_read(temp);
		CHANNEL_SetValue(&channels[0], (temp->temperature/10));

		mmotor_update();

		print_channels(channels, MARRAY_LENGTH(channels));
  }	
}


void maintest() {
	CHANNEL channels[] = {
		CHANNEL_SINE("Sinus", "Sin", 1000, 50), // 0
    CHANNEL_SQUARE("Square", "Sqr", 4),
    CHANNEL_MIN("Min", "", -2),
    CHANNEL_MAX("Max", "", -3),
		CHANNEL_COUNT("Count", "", 100, -4),
		CHANNEL_DERIVATE("Derivate","", -5),
    CHANNEL_LIMIT("Limit", "", 0, 700, -6),
		CHANNEL_DIVIDE("Div / 10", "", 10, -1),
		CHANNEL_INTEGRATE("Integrate","", -1),
		CHANNEL_MULTIPLY("x2","", 2, -3),
		CHANNEL_SQUARE("Square", "S2",  5), // 10
		CHANNEL_INVERSE("Inverse", "", -1),
		CHANNEL_COUNT("Count", "", 0, -2),
		CHANNEL_SQUARE("Square slow", "SL",  20),
		CHANNEL_DELAY("Delay", "", 5, -1),
		CHANNEL_MULTIPLY("Mult", "", 100, -2), // 15
		CHANNEL_RATELIMIT("Rate", "", 10, -1),
		CHANNEL_NORMAL("Dissabled", "", CHANNEL_MODE_NORMAL, -1),
		CHANNEL_PWM("PWM test", "", 1, 4),
	};
	
	mmotor_init(channels, MARRAY_LENGTH(channels));
	
  CHANNEL_Enable(&channels[17], false);

  while(1) {
		mmotor_update();
    print_channels(channels, MARRAY_LENGTH(channels));
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


	printSysInfo();


	printf("\n");
	printf("Size of channel struct: %ld\n", sizeof(CHANNEL));
	printf("\n");

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

