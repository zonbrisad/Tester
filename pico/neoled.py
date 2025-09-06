"""
Set the color of a specific LED.
Raises:
    IndexError: _description_
"""

import neopixel
import machine
import time

# Predefined colors
NeoRed = (20, 0, 0)
NeoGreen = (0, 20, 0)
NeoBlue = (0, 0, 20)
NeoYellow = (20, 20, 0)
NeoWhite = (20, 20, 20)
NeoCyan = (0, 20, 20)
NeoMagenta = (20, 0, 20)
NeoBlack = (0, 0, 0)
NeoOrange = (20, 10, 0)


class NeoLED:
    def __init__(self, pin) -> None:
        """
        Initialize the NeoLED strip.

        :param pin: The GPIO pin connected to the LED strip.
        :param num_leds: The number of LEDs in the strip.
        """

        self.pixel = neopixel.NeoPixel(pin, 1)
        self.color = NeoBlack
        # self.leds = [(0, 0, 0)] * num_leds  # Initialize all LEDs to off (RGB: 0, 0, 0)

    def set_color(self, color):
        """
        Set the color of a specific LED.

        :param index: The index of the LED to set.
        :param color: A tuple (R, G, B) representing the color.
        """
        self.color = color
        self.pixel[0] = color
        self.pixel.write()


def NeoLED_test() -> None:
    led = NeoLED(machine.Pin.board.GP1)
    colors = (
        NeoRed,
        NeoGreen,
        NeoBlue,
        NeoYellow,
        NeoCyan,
        NeoMagenta,
        NeoOrange,
        NeoWhite,
        NeoBlack,
    )

    for color in colors:
        led.set_color(color)
        time.sleep_ms(100)

    for x in range(255):
        led.set_color((x, 0, 0))
        time.sleep_ms(2)

    for x in range(255, 0, -1):
        led.set_color((x, 0, 0))
        time.sleep_ms(2)

    for x in range(255):
        led.set_color((0, x, 0))
        time.sleep_ms(2)

    for x in range(255, 0, -1):
        led.set_color((0, x, 0))
        time.sleep_ms(2)

    for x in range(255):
        led.set_color((0, 0, x))
        time.sleep_ms(2)

    for x in range(255, 0, -1):
        led.set_color((0, 0, x))
        time.sleep_ms(2)

    for x in range(255):
        led.set_color((x, 0, 0))
        time.sleep_ms(2)
    for x in range(255):
        led.set_color((255, x, 0))
        time.sleep_ms(2)
    for x in range(255):
        led.set_color((255, 255, x))
        time.sleep_ms(2)

    led.set_color(NeoBlack)


NeoLED_test()
