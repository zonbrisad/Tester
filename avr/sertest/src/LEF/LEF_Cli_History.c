/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   A simple Command Line Interface for LEF.
 *
 * @file    LEF_Cli_History.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-12-09
 * @license GPLv2
 *
 *---------------------------------------------------------------------------
 *
 * LEF is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  Full license text is available on the following
 *
 * Source repository:
 * https://github.com/zonbrisad/LEF
 *
 *
 */

#include <stdio.h>
#include <string.h>

#include "LEF_Cli_History.h"

void history_init(LEF_History* h) {
    // Zero out all memory (makes strcmp safe and shows empty slots)
    memset(h->entries, 0, sizeof(h->entries));
    h->head = 0;
    h->count = 0;
    h->cursor = -1;
}

// Add command — returns 1 if stored, 0 if ignored (empty / duplicate)
int history_add(LEF_History* h, const char* line) {

    if (line == NULL || line[0] == '\0') {
        return 0;
    }

    // Skip if same as most recent command
    if (h->count > 0 && strcmp(h->entries[h->head], line) == 0) {
        h->cursor = -1;
        return 0;
    }

    // Move forward (circular buffer)
    h->head = (h->head + 1) % LEF_CLI_HISTORY;

    // Safe copy — truncates if longer than 63 chars
    strncpy(h->entries[h->head], line, LEF_CLI_BUF_LENGTH - 1);
    h->entries[h->head][LEF_CLI_BUF_LENGTH - 1] = '\0';  // guarantee null termination

    if (h->count < LEF_CLI_HISTORY) {
        h->count++;
    }

    // Reset navigation after new entry
    h->cursor = -1;
    return 1;
}

// Returns pointer to current history line to display
// Returns empty string when showing the "typing now" line
const char* history_current(const LEF_History* h) {
    if (h->cursor == -1) {
        return "";
    }
    int idx = (h->head - h->cursor + LEF_CLI_HISTORY) % LEF_CLI_HISTORY;
    return h->entries[idx];
}

// ↑ key — move to older command
int history_up(LEF_History* h) {
    if (h->count == 0) {
        return 0;
    }
    if (h->cursor == -1) {
        h->cursor = 0;
        return 1;
    }
    if (h->cursor + 1 < h->count) {
        h->cursor++;
        return 1;
    }
    return 0;  // already at oldest
}

// ↓ key — move to newer command
int history_down(LEF_History* h) {
    if (h->cursor <= -1) {
        return 0;
    }
    h->cursor--;
    if (h->cursor < -1) {
        h->cursor = -1;
    }
    return 1;
}
