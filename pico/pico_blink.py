"""
Simple LED blink program for Raspberry Pi Pico

Hardware:
PCB LED on GPIO 25
"""

from machine import Pin, Timer

led = Pin("LED", Pin.OUT)
timer0 = Timer()


def tick(timer):
    global led
    led.toggle()
    print("Toggle LED")


timer0.init(freq=20, mode=Timer.PERIODIC, callback=tick)
