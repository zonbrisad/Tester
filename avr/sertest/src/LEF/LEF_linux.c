
/**
 *---------------------------------------------------------------------------
 * @brief    Create a simple framework for LEF
 *
 * @file     main.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2026-03-21
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

// Include ------------------------------------------------------------------

#include "LEF_linux.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <errno.h>
#include <time.h>
#include <unistd.h>
#include <sys/epoll.h>
#include <sys/timerfd.h>

static int epfd = 0;
static event_array_t event_array;
struct epoll_event* events = NULL;

static void event_array_init(event_array_t* array) {
    array->items = NULL;
    array->count = 0;
    array->capacity = 0;
}

static int event_array_add(event_array_t* arr, ev_timer_t* item) {
    if (arr->count >= arr->capacity) {
        int new_cap = arr->capacity == 0 ? 10 : arr->capacity * 2;
        ev_timer_t** new_items = realloc(arr->items, new_cap * sizeof(ev_timer_t*));
        
        if (!new_items) 
            return -1;  // allocation failed

        arr->items = new_items;
        arr->capacity = new_cap;
    }

    arr->items[arr->count] = item;
    arr->count++;
    return 0;  // success
}

static void event_array_free(event_array_t* arr) {
    arr->items = NULL;
    arr->count = 0;
    arr->capacity = 0;
    for (size_t i = 0; i < arr->count; i++) {
        close(arr->items[i]->tfd);
    }
    free(arr->items);
}

static ev_timer_t* timer_new(void) {
    ev_timer_t* timer = malloc(sizeof(ev_timer_t));
    return timer;
}

static void timer_init(ev_timer_t* timer, size_t id, char* name, size_t intervall_s, size_t intervall_us) {
    timer->tfd = timerfd_create(CLOCK_MONOTONIC, 0);
    if (timer->tfd == -1) {
        perror("Failed to create timer.");
        exit(EXIT_FAILURE);
    }

    timer->id = id;
    timer->ts.it_interval.tv_sec = intervall_s;
    timer->ts.it_interval.tv_nsec = intervall_us;
    timer->ts.it_value.tv_sec = intervall_s;
    timer->ts.it_value.tv_nsec = intervall_us;
    timer->name = name;
    timer->callback = NULL;
    if (timerfd_settime(timer->tfd, 0, &timer->ts, NULL) == -1) {
        perror("timerfd_settime");
        exit(EXIT_FAILURE);
    }

    struct epoll_event ev;
    ev.events = EPOLLIN;

    ev.data.fd = timer->tfd;
    if (epoll_ctl(epfd, EPOLL_CTL_ADD, timer->tfd, &ev) == -1) {
        perror("epoll_ctl");
        exit(EXIT_FAILURE);
    }
}

void event_init(void) {
    epfd = epoll_create1(0);
    event_array_init(&event_array);
    if (epfd == -1) {
        perror("epoll_create1");
        exit(EXIT_FAILURE);
    }
}

void event_close(void) {
    event_array_free(&event_array);
    close(epfd);
}

ev_timer_t* event_add_timer(int id, char* name, size_t intervall) {
    ev_timer_t* timer;

    timer = timer_new();
    timer_init(timer, id, name, intervall / 1000, (intervall % 1000) * 1000000);
    
    event_array_add(&event_array, timer);
    return timer;
}

ev_timer_t* event_add_timer_callback(int id, char* name, size_t intervall, LEF_Callback callback) {
    ev_timer_t* timer = event_add_timer(id, name, intervall);
    timer->callback = callback;
    return timer;
}

// static int event_get_id(int tfd) {
//     for (size_t i = 0; i < event_array.count; i++) {
//         if (event_array.items[i]->tfd == tfd) return event_array.items[i]->id;
//     }
//     return -1;
// }

static ev_timer_t* event_get_timer(int tfd) {
    for (size_t i = 0; i < event_array.count; i++) {
        if (event_array.items[i]->tfd == tfd) 
            return event_array.items[i];
    }
    return NULL;
}

int event_wait(void) {
    if (events == NULL)
        events = malloc(event_array.count * sizeof(struct epoll_event));

    int n = epoll_wait(epfd, events, event_array.count, -1);
    if (n == -1) {
        if (errno == EINTR) return -1;
        perror("epoll_wait");
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i < n; i++) {
        uint64_t expirations;
        if (read(events[i].data.fd, &expirations, sizeof(expirations)) !=
        sizeof(expirations)) {
            perror("read");
            exit(EXIT_FAILURE);
        }
        ev_timer_t* timer = event_get_timer(events[i].data.fd);
        if (timer->callback != NULL) {
            timer->callback();
        }
        return timer->id;
    }
    return -1;
}
