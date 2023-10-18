# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# class for controling led's
#
# File:     led
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2023-10-11
# License:
# Python:   >= Micropython
#
# ----------------------------------------------------------------------------

from machine import Pin

Led_OFF = const(0)
Led_ON = const(1)
Led_BLINK = const(2)
# Led_FAST_BLINK = 3
# Led_FLASH = 4
# Led_DOUBLE_FLASH = 5


class Led:
    def __init__(self, pin, state=Led_OFF):
        self.state = state
        self.pin = pin
        self.tick = 0

    def update(self):
        if self.state == Led_OFF:
            self.pin.value(0)
        elif self.state == Led_ON:
            self.pin.value(1)
        elif self.state == Led_BLINK:
            self.pin.toggle()


LedRG_OFF = const(0)
LedRG_RED_ON = const(1)
LedRG_GREEN_ON = const(2)
LedRG_BOTH_ON = const(3)
LedRG_RED_BLINK = const(4)
LedRG_GREEN_BLINK = const(5)
LedRG_BOTH_BLINK = const(6)
LedRG_ALTERNATE_BLINK = const(7)


class LedRG:
    def __init__(self, pin_red, pin_green, state=Led_OFF):
        self.state = state
        self.pin_red = pin_red
        self.pin_green = pin_green
        self.tick = 0

    def update(self):
        if self.state == LedRG_OFF:
            self.pin_red.value(0)
            self.pin_green.value(0)
        elif self.state == LedRG_RED_ON:
            self.pin_red.value(1)
            self.pin_green.value(0)
        elif self.state == LedRG_GREEN_ON:
            self.pin_red.value(0)
            self.pin_green.value(1)
        elif self.state == LedRG_RED_BLINK:
            self.pin_red.toggle()
            self.pin_green.value(0)
        elif self.state == LedRG_GREEN_BLINK:
            self.pin_red.value(0)
            self.pin_green.toggle()
