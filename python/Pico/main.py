# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# blinking led
#
# File:     main.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2023-04-17
# License:  
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

import machine
import utime

led = machine.Pin(28, machine.Pin.OUT)

while True:
    led.value(1)
    utime.sleep(1)
    led.value(0)
    utime.sleep(1)




#def main() -> None:
#    pass

#if __name__ == "__main__":
#    main()
