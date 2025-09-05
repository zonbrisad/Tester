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
#include <signal.h>
#include "mmmotor.h"
#include "channel.h"
#include "alarm.h"
// #include "signal.h"
#include "filter.h"
#include "httpThread.h"
#include "motorThread.h"
#include "systemp.h"
#include "def.h"

// Variables -----------------------------------------------------------------

// Code ----------------------------------------------------------------------

void printInfo(char *a, char *b)
{
	defprintf(E_BR_MAGENTA "%-20s" E_END " " E_CYAN "%s\n" E_END, a, b);
}

void printSysInfo(void)
{
	char buf[16];
	printInfo("Build:", __DATE__ "  " __TIME__);
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

	sprintf(buf, "%ld", sizeof(void *));

	printInfo("Pointer size:", buf);
	sprintf(buf, "%ld", sizeof(CHANNEL));
	printInfo("Size of channel:", buf);
}

void safeExit(int x)
{

	// gp_log_close();
	// uart_close(dev);
	// system("reset");
	printf(E_SHOW_CURSOR);
	printf("SafeExit\n");
	exit(x);
}

void print_channels(CHANNEL *chns, int len)
{
	int i;
	printf("%s\n", CHANNEL_toString(NULL));

	for (i = 0; i < len; i++)
	{
		printf("  %s\n", CHANNEL_toString(&chns[i]));
	}
	for (i = 0; i <= len; i++)
	{
		printf(E_PREVLINE);
	}
}

void temptest(const char *sensor)
{
	STEMP *temp;

	//	filter = FILTER_new();
	CHANNEL channels[] = {
			CHANNEL_NORMAL(1, "CPU Temperature", "CPU", CHANNEL_MODE_NORMAL, 0),
			CHANNEL_NORMAL(2, "Min", "", CHANNEL_MODE_MIN, 1),
			CHANNEL_NORMAL(3, "Max", "", CHANNEL_MODE_MAX, 1),
			CHANNEL_NORMAL(4, "Average", "", CHANNEL_MODE_AVERAGE, 1),
			//		CHANNEL_FILTER("Filter", "", filter),
	};

	temp = STEMP_new();
	STEMP_init(temp, sensor);
	mmotor_init(channels, MARRAY_LENGTH(channels));
	printf(E_HIDE_CURSOR);
	signal(SIGINT, safeExit);
	while (1)
	{
		STEMP_read(temp);
		CHANNEL_SetValue(&channels[0], (temp->temperature / 10));

		mmotor_update();

		print_channels(channels, MARRAY_LENGTH(channels));
	}
}

void maintest()
{
	CHANNEL channels[] = {
			CHANNEL_SINE(1, "Sinus", "Sin", 1000, 50), // 0
			CHANNEL_SQUARE(2, "Square", "Sqr", 4),
			CHANNEL_MIN(3, "Min", "", 1),
			CHANNEL_MAX(4, "Max", "", 1),
			CHANNEL_COUNT(5, "Count", "", 100, 1),
			CHANNEL_DERIVATE(6, "Derivate", "", 1),
			CHANNEL_LIMIT(7, "Limit", "", 0, 700, 1),
			CHANNEL_DIVIDE(8, "Div / 10", "", 10, 7),
			CHANNEL_INTEGRATE(9, "Integrate", "", 7),
			CHANNEL_MULTIPLY(10, "x2", "", 2, 7),
			CHANNEL_SQUARE(11, "Square", "S2", 5), // 10
			CHANNEL_INVERSE(12, "Inverse", "", 11),
			CHANNEL_COUNT(13, "Count", "", 0, 11),
			CHANNEL_SQUARE(14, "Square slow", "SL", 20),
			CHANNEL_DELAY(15, "Delay", "", 5, 14),
			CHANNEL_MULTIPLY(16, "Mult", "", 100, 14), // 15
			CHANNEL_RATELIMIT(17, "Rate", "", 10, 16),
			CHANNEL_NORMAL(18, "Dissabled", "", CHANNEL_MODE_NORMAL, 17),
			CHANNEL_PWM(19, "PWM test", "", 1, 4),
			CHANNEL_GREATER_THAN(20, "Greater Than", "", 200, 1),
			CHANNEL_LESS_THAN(21, "Less Than", "", 200, 1)};

	mmotor_init(channels, MARRAY_LENGTH(channels));

	CHANNEL_Enable(&channels[17], false);
	printf(E_HIDE_CURSOR);

	signal(SIGINT, safeExit);
	while (1)
	{
		mmotor_update();
		print_channels(channels, MARRAY_LENGTH(channels));
		usleep(100000);
	}
}

/**
 *
 */
int main(int argc, char **argv)
{
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
	if (nerrors > 0)
	{
		arg_print_errors(stdout, end, "mmmotor");
		printf("Try '%s --help' for more information.\n", "mmmotor");
		exit(0);
	}
	if (help->count)
	{
		printf("Testprogram for Malmberg Mini Motor\n");
		arg_print_glossary(stdout, argtable, "  %-25s %s\n");
		exit(0);
	}

	printSysInfo();

	printf("\n");
	printf("Size of channel struct: %ld\n", sizeof(CHANNEL));
	printf("\n");

	if (mainT->count > 0)
	{
		maintest();
		safeExit(0);
	}

	if (tempT->count > 0)
	{
		if (sensor->count > 0)
		{
			temptest(sensor->filename[0]);
			safeExit(0);
		}
		temptest("/sys/class/hwmon/hwmon1/temp1_input");
		safeExit(0);
	}

	arg_print_glossary(stdout, argtable, "  %-25s %s\n");

	arg_freetable(argtable, sizeof(argtable) / sizeof(argtable[0]));
	pthread_exit(NULL);

	return (EXIT_SUCCESS);
}
