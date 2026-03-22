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

#include "main.h"

#include <errno.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/epoll.h>
#include <sys/timerfd.h>
#include <time.h>
#include <unistd.h>

typedef enum {
    EVENT_Print,
    EVENT_Counter
} Events;

typedef struct {
    int tfd;
    struct itimerspec ts;
    size_t id;
    void (*func)(void);
} timerx_t;

typedef struct {
    timerx_t* items;
    size_t count;
    size_t capacity;
} my_str_array;

void event_array_init(my_str_array* array) {
    array->items = NULL;
    array->count = 0;
    array->capacity = 0;
}

int my_str_array_add(my_str_array* arr, const timerx_t* item) {
    if (arr->count >= arr->capacity) {
        int new_cap = arr->capacity == 0 ? 4 : arr->capacity * 2;
        timerx_t* new_items = realloc(arr->items, new_cap * sizeof(timerx_t));
        if (!new_items) return -1;  // allocation failed

        arr->items = new_items;
        arr->capacity = new_cap;
    }

    arr->items[arr->count] = *item;
    arr->count++;
    return 0;  // success
}

void my_str_array_free(my_str_array* arr) {
    free(arr->items);
    arr->items = NULL;
    arr->count = 0;
    arr->capacity = 0;
}

static int epfd = 0;
void timer_init(timerx_t* timer, size_t id, size_t intervall_s,
                size_t intervall_ms) {

    timer->tfd = timerfd_create(CLOCK_MONOTONIC, 0);
    // if (timer->tfd == -1) {
    //     perror("timerfd_create");
    //     exit(EXIT_FAILURE);
    // }
    timer->id = id;
    timer->ts.it_interval.tv_sec = intervall_s;
    timer->ts.it_interval.tv_nsec = intervall_ms * 1000000;
    timer->ts.it_value.tv_sec = intervall_s;
    timer->ts.it_value.tv_nsec = intervall_ms * 1000000;
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

static my_str_array event_array;

static void event_init() {    
    epfd = epoll_create1(0);
    event_array_init(&event_array);
    if (epfd == -1) {
        perror("epoll_create1");
        exit(EXIT_FAILURE);
    }
}

static void event_close() {
    for (size_t i=0; i<event_array.count; i++) {
        close(event_array.items[i].tfd);
    }
    close(epfd);
}


timerx_t* event_add_timer(int id, char* name, size_t intervall) {
    timerx_t* timer;
    timer = malloc(sizeof(timerx_t));
    timer_init(timer, id, 0, intervall);
    my_str_array_add(&event_array, timer);
    return timer;
}

int event_get_id(int tfd) {
    for (size_t i = 0; i < event_array.count; i++) {
        if (event_array.items[i].tfd == tfd)
            return event_array.items[i].id;
    }
    return -1;
}

struct epoll_event* events = NULL;

int event_wait(void) {
    if (events == NULL) 
        events = malloc(event_array.count * sizeof(struct epoll_event));

    int n = epoll_wait(epfd, events, event_array.count, -1);
    // printf("Ev: %d\n", event_array.count);

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

        return event_get_id(events[i].data.fd);
    }
}

int main() {
    uint64_t counter = 0;

    event_init();
    event_add_timer(EVENT_Counter, "Timer count 10ms", 1);
    event_add_timer(EVENT_Print, "Timer print 1s", 999);

    while (true) {
        int ev = event_wait();
        // printf("E %d\n", ev);
        switch (ev) {
            case EVENT_Counter: counter++; break;
            case EVENT_Print: printf("Counter val: %lu\n", counter); break;
            default: printf("Def: %d\n", ev);
        }
    }

    event_close();
    return 0;
}