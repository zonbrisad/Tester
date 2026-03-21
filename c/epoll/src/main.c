/**
 *---------------------------------------------------------------------------
 * @brief    Test of epoll function
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

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#include <time.h>
#include <unistd.h>
#include <errno.h>
#include <sys/epoll.h>
#include <sys/timerfd.h>

int main() {
    int epfd = epoll_create1(0);
    if (epfd == -1) {
        perror("epoll_create1");
        exit(EXIT_FAILURE);
    }

    // Timer 1: 10 ms counter increment
    int tfd1 = timerfd_create(CLOCK_MONOTONIC, 0);
    if (tfd1 == -1) {
        perror("timerfd_create");
        exit(EXIT_FAILURE);
    }
    struct itimerspec ts1 = {{0, 10 * 1000 * 1000},
                             {0, 10 * 1000 * 1000}};  // 10ms
    if (timerfd_settime(tfd1, 0, &ts1, NULL) == -1) {
        perror("timerfd_settime");
        exit(EXIT_FAILURE);
    }

    // Timer 2: 1 second print
    int tfd2 = timerfd_create(CLOCK_MONOTONIC, 0);
    if (tfd2 == -1) {
        perror("timerfd_create");
        exit(EXIT_FAILURE);
    }
    struct itimerspec ts2 = {{1, 0}, {1, 0}};  // 1s
    if (timerfd_settime(tfd2, 0, &ts2, NULL) == -1) {
        perror("timerfd_settime");
        exit(EXIT_FAILURE);
    }

    // Add timers to epoll
    struct epoll_event ev;
    ev.events = EPOLLIN;

    ev.data.fd = tfd1;
    if (epoll_ctl(epfd, EPOLL_CTL_ADD, tfd1, &ev) == -1) {
        perror("epoll_ctl");
        exit(EXIT_FAILURE);
    }

    ev.data.fd = tfd2;
    if (epoll_ctl(epfd, EPOLL_CTL_ADD, tfd2, &ev) == -1) {
        perror("epoll_ctl");
        exit(EXIT_FAILURE);
    }

    uint64_t counter = 0;

    while (1) {
        struct epoll_event events[2];
        int n = epoll_wait(epfd, events, 2, -1);
        if (n == -1) {
            if (errno == EINTR) continue;
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

            if (events[i].data.fd == tfd1) {
                counter += expirations;
            } else if (events[i].data.fd == tfd2) {
                printf("Counter value: %lu\n", counter);
            }
        }
    }

    close(tfd1);
    close(tfd2);
    close(epfd);
    return 0;
}