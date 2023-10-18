"""
  DS18b20 program for Raspberry Pi Pico
  
  sensors attached to pin 0
"""

from machine import Pin, Timer
import time
import onewire
import ds18x20
from mpae import *

led = Pin("LED", Pin.OUT)
led.value(1)

print("DS18b20 testprogram\n")

ow_pin = Pin(0)
ow = onewire.OneWire(ow_pin)

ds_sensor = ds18x20.DS18X20(ow)
roms = ds_sensor.scan()


motor = PaeMotor()
t1 = motor.add_node(MPaeNode(type=PaeType_Normal, name="Temperature 1", id="t1"))
t2 = motor.add_node(MPaeNode(type=PaeType_Normal, name="Temperature 2", id="t2"))
motor.add_node(MPaeNode(type=PaeType_Min, name="Temp1 min", source="t1"))
motor.add_node(MPaeNode(type=PaeType_Max, name="Temp1 max", source="t1"))
motor.add_node(MPaeNode(type=PaeType_Min, name="Temp2 min", source="t2"))
motor.add_node(MPaeNode(type=PaeType_Max, name="Temp2 max", source="t2"))

motor.initiate()

nodes = [t1, t2]

print("Roms found on onewire bus:")
for rom in roms:
    print(rom)

timer0 = Timer()

def tick(timer):
    global led
    ds_sensor.convert_temp()
    led.toggle()
    time.sleep_ms(750)
    for rom, node in zip(roms, nodes):
        #print(f"{rom}: {ds_sensor.read_temp(rom):4.1f}")
        node.update(ds_sensor.read_temp(rom))
    
    motor.update()
    motor.printout()
    led.toggle()

timer0.init(freq=2, mode=Timer.PERIODIC, callback=tick)
