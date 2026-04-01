# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# Some Raspberry Pi Pico specific functions.
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
import sys


def mem_info() -> None:
    print("Memory information:")
    free = gc.mem_free()
    alloc = gc.mem_alloc()
    print("         Total     Used    Avail    Usage")
    print(f"Mem:  {free+alloc:8} {alloc:8} {free:8}     {alloc/(free+alloc):2.1%}")
    s = os.statvfs("//")
    print(
        f"Disk: {s[0]*s[2]:8} {s[0]*(s[2]-s[3]):8} {s[0]*s[3]:8}     {(s[0]*(s[2]-s[3]))/(s[0]*s[2]):2.1%}"
    )
    
def module_info() -> None:
    print("\nActive modules:")
    for module in sys.modules:
        print(f"                {module}")
 
def sys_info() -> None:
    print("System information:")
    print(f"Version:     {sys.version}")
    print(f"Machine:     {sys.implementation[2]}")
    print(f"Platform:    {sys.platform}")
    print(f"Flash:       {sys.maxsize}")
    print(f"Temperature: {sys_temp()}\n")
    
    mem_info()
    module_info()


def sys_temp() -> float:
    temp_sensor = ADC(ADC.CORE_TEMP)
    volt = (3.3 / 65535) * temp_sensor.read_u16()
    temp = 27 - (volt - 0.706) / 0.001721
    return round(temp, 1)
