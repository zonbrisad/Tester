"""
NeoLED class for controlling a single NeoPixel LED
on a specified GPIO pin.
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
        self.pixel = neopixel.NeoPixel(pin, 1)
        self.color = NeoBlack
        self.alt_color = NeoBlack
        self.on: bool = False

    def _set(self, color) -> None:
        self.pixel[0] = color
        self.pixel.write()

    def set_color(self, color) -> None:
        self.color = color
        self.on = True
        self._set(color)

    def set_alt_color(self, color) -> None:
        self.alt_color = color

    def toggle(self) -> None:

        if self.on is True:
            self._set(self.alt_color)
            self.on = False
        else:
            self._set(self.color)
            self.on = True


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
        time.sleep_ms(200)

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

    for x in range(255, 0, -1):
        led.set_color((x, 255, 255))
        time.sleep_ms(2)

    for x in range(255, 0, -1):
        led.set_color((0, x, 255))
        time.sleep_ms(2)

    for x in range(255, 0, -1):
        led.set_color((0, 0, x))
        time.sleep_ms(2)

    led.set_color(NeoBlack)


def NeoLED_blink_test() -> None:
    led = NeoLED(machine.Pin.board.GP1)
    led.set_color(NeoRed)
    led.set_alt_color(NeoBlue)

    for _ in range(10):
        led.toggle()
        time.sleep_ms(500)

    led.set_color(NeoBlack)


if __name__ == "__main__":
    NeoLED_test()
    NeoLED_blink_test()
