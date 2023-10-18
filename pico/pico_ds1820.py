"""
  DS18b20 program for Raspberry Pi Pico
  
  sensors attached to pin 0
"""

from machine import Pin, Timer
import time
import onewire
import ds18x20 

led = Pin("LED", Pin.OUT)
led.value(1)

print("DS18b20 testprogram\n")

ow_pin = Pin(0)
ow = onewire.OneWire(ow_pin)

ds_sensor = ds18x20.DS18X20(ow)

#roms = ow.scan()
roms = ds_sensor.scan()

print("Roms found on onewire bus:")
for rom in roms:
    print(rom)

timer0 = Timer()

def tick(timer):
    global led
    ds_sensor.convert_temp()
    led.toggle()
    time.sleep_ms(750)
    for rom in roms:
        print(f"{rom}: {ds_sensor.read_temp(rom):4.1f}")
    led.toggle()

timer0.init(freq=2, mode=Timer.PERIODIC, callback=tick)
