import network
import socket
from time import sleep
from machine import Pin

ssid = 'pmg'
password = 'demarkation'

html = """<!DOCTYPE html>
<html>
    <head> <title>Pico W</title> </head>
    <body> <h1>Pico W</h1>
        <p>%s</p>
    </body>
</html>
"""

led = Pin("LED", Pin.OUT)

def connect():
    #Connect to WLAN
    wlan = network.WLAN(network.STA_IF)
    wlan.active(True)
    wlan.connect(ssid, password)
    while wlan.isconnected() == False:
        print('Waiting for connection...')
        sleep(1)
    #print(wlan.ifconfig())
    print(f"Ip: {wlan.ifconfig()[0]}")


def listen():
    global led
    
    addr = socket.getaddrinfo('0.0.0.0', 80)[0][-1]
    s = socket.socket()
    s.bind(addr)
    s.listen(1)

    print('listening on', addr)

    # Listen for connections
    while True:
        try:
            cl, addr = s.accept()
            print('client connected from', addr)
            request = cl.recv(1024)
            print(request)

            request = str(request)
            led_on = request.find('/light/on')
            led_off = request.find('/light/off')
            print( 'led on = ' + str(led_on))
            print( 'led off = ' + str(led_off))

            if led_on == 6:
                print("led on")
                led.value(1)
                stateis = "LED is ON"

            if led_off == 6:
                print("led off")
                led.value(0)
                stateis = "LED is OFF"
            global html
            response = html % stateis

            cl.send('HTTP/1.0 200 OK\r\nContent-type: text/html\r\n\r\n')
            cl.send(response)
            cl.close()

        except OSError as e:
            cl.close()
            print('connection closed')

try:
    connect()
    listen()
except KeyboardInterrupt:
    machine.reset()
