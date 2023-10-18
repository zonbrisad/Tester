# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# Some pico specific functions.
#
# File:     pico
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2023-10-12
# License:
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

from machine import ADC
import gc
import os


def meminfo():
    free = gc.mem_free()
    alloc = gc.mem_alloc()
    print("Mem:    Total     Used    Avail   Usage(%)")
    print(f"     {free+alloc:8} {alloc:8} {free:8}     {alloc/(free+alloc):2.1%}\n")


def diskinfo():
    s = os.statvfs("//")
    print("Disk:   Total     Used    Avail   Usage(%)")
    print(
        f"     {s[0]*s[2]:8} {s[0]*(s[2]-s[3]):8} {s[0]*s[3]:8}     {(s[0]*(s[2]-s[3]))/(s[0]*s[2]):2.1%}"
    )


def sysinfo():
    meminfo()
    diskinfo()


def Temperature():
    volt = (3.3 / 65535) * sensor.read_u16()
    temp = 27 - (volt - 0.706) / 0.001721
    return round(temp, 1)
