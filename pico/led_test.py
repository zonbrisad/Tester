# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# Testprogram for Led class
#
# File:     led_test.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2023-10-11
# License:
# Python:   >= Micropython
#
# ----------------------------------------------------------------------------

from machine import Pin, Timer
from led import *

led = Led(Pin("LED", Pin.OUT), Led_BLINK)


def tick(timer):
    global led
    led.update()


timer0 = Timer()
timer0.init(freq=20, mode=Timer.PERIODIC, callback=tick)
