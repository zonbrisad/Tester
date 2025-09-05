"""
  Testprogram for digital input on gpio.
  
  Hardware:
  Switch on GPIO 0
  Onboard LED on GPIO 25
  
"""

from machine import Pin, Timer
#from pico import meminfo, diskinfo, Temperature


led = Pin("LED", Pin.OUT)
sw = Pin(0, Pin.IN, Pin.PULL_UP)
timer0 = Timer()

print("Digital input test program")

def tick(timer):
    global led
    global sw
    
    val = sw.value()
    print(f"Read gpio {val}")
    if val > 0:
        led.on()
    else:
        led.off()

timer0.init(freq=1, mode=Timer.PERIODIC, callback=tick)
