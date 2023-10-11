import network
import socket
from time import sleep
#from picozero import pico_temp_sensor, pico_led
import machine

ssid = 'pmg'
password = 'demarkation'

def connect():
    #Connect to WLAN
    wlan = network.WLAN(network.STA_IF)
    wlan.active(True)
    wlan.connect(ssid, password)
    while wlan.isconnected() == False:
        print('Waiting for connection...')
        sleep(1)
    print(wlan.ifconfig())
    print(wlan)

try:
    connect()
except KeyboardInterrupt:
    machine.reset()
