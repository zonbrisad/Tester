/**
 * LEF - Lightweiht Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   Main LEF file
 *
 * @file    LEF.c
 * @author  Your Name <your.name@yourdomain.org>
 * @date    2016-11-30
 * @licence GPLv2
 *
 *---------------------------------------------------------------------------
 *
 * LEF is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  Full license text is available on the following
 *
 * https://github.com/zonbrisad/LEF
 *
 * 
 */

// Includes ---------------------------------------------------------------

#include "LEF.h"

#ifdef LEF_SYSTEM_LINUX
#include "LEF_linux.h"
#endif

#include <stdio.h>

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

LEF_EventQueue lef_std_queue;
LEF_Timer lef_delay_timer;
LEF_EventHandler lef_pre_event_handler = NULL;

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------


void LEF_init(void) {

    // initiate LEF standard queue
    LEF_QueueInit(&lef_std_queue);
    
    // initiate delay timer
    LEF_Timer_init(&lef_delay_timer, LEF_EVENT_DELAY);
}

void LEF_Send(LEF_Event *event) {
    return LEF_QueueSend(&lef_std_queue, event);
}

void LEF_Send_msg(LEF_EventId id, LEF_EventFunc func) {
    LEF_Event event;
    event.id = id;
    event.func = func;
    LEF_Send(&event);
}

void LEF_Clear(void) {
    return LEF_QueueClear(&lef_std_queue);
}

uint16_t LEF_Count(void) {
  return LEF_QueueCnt(&lef_std_queue);
}

void LEF_systick(void) {
    LEF_Timer_update(&lef_delay_timer);
}

void LEF_Delay(uint16_t ticks) {
    LEF_Event event;

    LEF_Timer_start_single(&lef_delay_timer, ticks);
    while (true) {
        LEF_Wait(&event);
        if (event.id == LEF_EVENT_DELAY) {
            break;
        }
        if (lef_pre_event_handler != NULL) {
            lef_pre_event_handler(&event);
        }
    }
}

void LEF_Print_event(LEF_Event *event) {
    printf("Event id: %3d   func: %3d\n", event->id, event->func);
}

int LEF_Run(LEF_EventHandler main_event_handler, LEF_EventHandler pre_event_handler) {
    LEF_Event event;

    lef_pre_event_handler = pre_event_handler;
    while (true) {
        LEF_Wait(&event);
        if (pre_event_handler != NULL) {
            if (!pre_event_handler(&event)) {
                main_event_handler(&event);
            }
        } else {
            main_event_handler(&event);
        }
    }
    return 0;
}

#ifdef LEF_SYSTEM_LINUX

void LEF_Wait(LEF_Event* event) {
    while (true) {
        if (LEF_QueueCnt(&lef_std_queue) > 0) {
            LEF_QueueWait(&lef_std_queue, event);
            return;
        }
        event_wait();
    }
}

/**
 * @brief Add system(Linux) timer
 *
 * @param name Name of timer
 * @param invervall Timer intervall in ms
 * @param callback Callback function for timer
 */
void LEF_add_systimer(char* name, size_t intervall, LEF_Callback callback) {
    event_add_timer_callback(0, name, intervall, callback);
}

#else 

void LEF_Wait(LEF_Event *event) {
    return LEF_QueueWait(&lef_std_queue, event);
}

#endif

// Create a string from a definition
#define LEFSTRINGIZE2(s) #s
#define LEFSTR(s) LEFSTRINGIZE2(s)

static inline void lef_print_info(char* a, char* b) {
    lefprintf("%-20s    %s\n", a, b);
}


void LEF_print_sysinfo(void) {
    char buf[16];
    
    lefprintf("\nLEF system information\n\n");
    lef_print_info("Build:", __DATE__ "  " __TIME__);
    lef_print_info("C Standard:", LEFSTR(__STDC_VERSION__));

#ifdef __GNUC__
    lef_print_info("GNU C ver:", __VERSION__);
#endif

#ifdef __BIG_ENDIAN__
    lef_print_info("Byteorder:", "big endian");
#endif
#ifdef __LITTLE_ENDIAN__
    lef_print_info("Byteorder:", "little endian");
#endif

#ifdef __cplusplus
    lef_print_info("C++:", "enabled");
#endif

#ifdef __OPTIMIZE__
#ifdef __OPTIMIZE_SIZE__
    lef_print_info("Optimization, size:", "Enabled");
#else
    lef_print_info("Optimization:", "Enabled");
#endif
#endif

    sprintf(buf, "%d", sizeof(void*));
    lef_print_info("Pointer size:", buf);

#if defined(__x86_64__)
    lef_print_info("Architecture:", "x86-64");
#elif defined(__i386__)
    lef_print_info("Architecture:", "x86 (32-bit)");
#elif defined(__aarch64__)
    lef_print_info("Architecture:", "ARM64 / AArch64");
#elif defined(__arm__)
    lef_print_info("Architecture:", "ARM (32-bit)");
#elif defined(__AVR__)
    lef_print_info("Architecture:", "AVR");
#else
    lef_print_info("Architecture:", "Not identified");
#endif

#ifdef F_CPU
    lef_print_info("CPU Freq:", LEFSTR(F_CPU));
#endif

    lef_print_info("Std queue", LEFSTR(LEF_QUEUE_LENGTH));
    lefprintf("\n");
}
