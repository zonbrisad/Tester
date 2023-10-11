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
