#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# test state(enum) class.
#
# File:     test_state.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2022-07-20
# License:  
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------


import enum


class State(enum.Enum):
    IDLE = 0
    START = 1
    RUNNING = 2
    SHUTDOWN = 3
    ALARM = 4
    
class StateHandler():
    def __init__(self) -> None:
        self.cur_state = State.IDLE

    def set_state(self, new_state) -> None:
        self.cur_state = new_state
        print(f"Setting new state {new_state}")

    def __str__(self) -> str:
        return f"{self.cur_state}"
    


state = StateHandler()

print(state)