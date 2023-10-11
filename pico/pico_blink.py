"""
  Simple LED blink program for Raspberry Pi Pico
"""

from machine import Pin, Timer

led = Pin("LED", Pin.OUT)
timer0 = Timer()

def tick(timer):
    global led
    led.toggle()
    print("Toggle LED")

timer0.init(freq=10, mode=Timer.PERIODIC, callback=tick)
