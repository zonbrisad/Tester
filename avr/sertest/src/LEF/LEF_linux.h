
#pragma once 

#include <unistd.h>
#include <sys/epoll.h>
#include <sys/timerfd.h>

typedef void (*LEF_Callback)(void);

typedef struct {
    int tfd;
    struct itimerspec ts;
    size_t id;
    char* name;
    LEF_Callback callback;
} ev_timer_t;


typedef struct {
    ev_timer_t** items;
    size_t count;
    size_t capacity;
} event_array_t;

void event_init(void);

int event_wait(void);

void event_close(void);

ev_timer_t* event_add_timer(int id, char* name, size_t intervall);

ev_timer_t* event_add_timer_callback(int id, char* name, size_t intervall, LEF_Callback callback);


