/*
 * File:   main.c
 * Author: pmg
 *
 * Created on den 23 april 2012, 23:58
 */

#include <argtable3.h>
#include <fcntl.h>
#include <malloc.h>
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <pthread.h>

#include "channel.h"
// #include "alarm.h"
#include "mmmotor.h"
// #include "signal.h"
#include "def.h"
#include "filter.h"
#include "httpThread.h"
#include "motorThread.h"
#include "systemp.h"

// Variables -----------------------------------------------------------------

// Code ----------------------------------------------------------------------

void safeExit(int x) {
    // gp_log_close();
    // uart_close(dev);
    // system("reset");
    printf(E_SHOW);
    printf("SafeExit\n");
    exit(x);
}

void print_channels(CHANNEL* chns, size_t len) {
    printf("%s\n", CHANNEL_toString(NULL));

    for (size_t i = 0; i < len; i++) {
        printf("  %s\n", CHANNEL_toString(&chns[i]));
    }
    for (size_t i = 0; i <= len; i++) {
        printf(E_CUR_PREVIOUS_LINE);
    }
}

void temptest(const char* sensor) {
	STEMP* temp = STEMP_new();
	STEMP_init(temp, sensor);

	CHANNEL channels[] = {
        CHANNEL_NORMAL(1, "CPU Temperature", "CPU", CHANNEL_MODE_NORMAL, 0),
        CHANNEL_NORMAL(2, "Min", "", CHANNEL_MODE_MIN, 1),
        CHANNEL_NORMAL(3, "Max", "", CHANNEL_MODE_MAX, 1),
        CHANNEL_NORMAL(4, "Average", "", CHANNEL_MODE_AVERAGE, 1),
        //		CHANNEL_FILTER("Filter", "", filter),
    };

    mmotor_init(channels, MARRAY_LENGTH(channels));
    printf(E_HIDE);
    signal(SIGINT, safeExit);
    while (1) {
        STEMP_read(temp);
        CHANNEL_SetValue(&channels[0], (temp->temperature / 10));
        mmotor_update();
        print_channels(channels, MARRAY_LENGTH(channels));
		usleep(100000);
    }
}

void maintest() {
    CHANNEL channels[] = {
        CHANNEL_SINE(1, "Sinus", "Sin", 1000, 50),  // 0
        CHANNEL_SQUARE(2, "Square", "Sqr", 4),
        CHANNEL_MIN(3, "Min", "", 1),
        CHANNEL_MAX(4, "Max", "", 1),
        CHANNEL_COUNT(5, "Count", "", 100, 1),
        CHANNEL_DERIVATE(6, "Derivate", "", 1),
        CHANNEL_LIMIT(7, "Limit", "", 0, 700, 1),
        CHANNEL_DIVIDE(8, "Div / 10", "", 10, 7),
        CHANNEL_INTEGRATE(9, "Integrate", "", 7),
        CHANNEL_MULTIPLY(10, "x2", "", 2, 7),
        CHANNEL_SQUARE(11, "Square", "S2", 5),  // 10
        CHANNEL_INVERSE(12, "Inverse", "", 11),
        CHANNEL_COUNT(13, "Count", "", 0, 11),
        CHANNEL_SQUARE(14, "Square slow", "SL", 20),
        CHANNEL_DELAY(15, "Delay", "", 5, 14),
        CHANNEL_MULTIPLY(16, "Mult", "", 100, 14),  // 15
        CHANNEL_RATELIMIT(17, "Rate", "", 10, 16),
        CHANNEL_NORMAL(18, "Dissabled", "", CHANNEL_MODE_NORMAL, 17),
        CHANNEL_PWM(19, "PWM test", "", 1, 4),
        CHANNEL_GREATER_THAN(20, "Greater Than", "", 200, 1),
        CHANNEL_LESS_THAN(21, "Less Than", "", 200, 1)};

    mmotor_init(channels, MARRAY_LENGTH(channels));

    CHANNEL_Enable(&channels[17], false);
    printf(E_HIDE);

    signal(SIGINT, safeExit);
    while (1) {
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

    struct arg_lit* help = arg_lit0("h", "help", "Print help options");
    struct arg_lit* mainT = arg_lit0("m", "main", "Main test");
    struct arg_lit* tempT = arg_lit0("t", "temp", "Temperature test");
    struct arg_file* sensor = arg_file0("s", "sensor", "<sensorfile>", "File with sensor data");
    struct arg_end* end = arg_end(20);

    void* argtable[] = {help, mainT, tempT, sensor, end};

    if (arg_nullcheck(argtable) != 0) printf("error: insufficient memory\n");

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

    print_sysinfo();
    printf("\nSize of channel struct: %ld\n\n", sizeof(CHANNEL));

    if (mainT->count > 0) {
        maintest();
        safeExit(0);
    }

    if (tempT->count > 0) {
        if (sensor->count > 0) {
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
