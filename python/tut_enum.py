#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# enumeration tutorial
#
# File:     tut_enum
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2024-08-03
# License:
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------


from enum import Enum

from attr import dataclass
from matplotlib.dates import FR


class Fruit(Enum):
    APPLE = 1
    ORANGE = 2
    PEAR = 3
    LEMON = 4
    BANANA = 5
    PLUM = 6


@dataclass
class PlaneBase:
    type: str
    weight: int
    engines: int


class Plane(PlaneBase, Enum):
    GRIPEN = "fighter", 8000, 1
    EUROFIGHTER = "fighter", 11000, 2
    HERCULES = "transport", 34000, 4
    CESSNA = "general", 767, 1


def main() -> None:
    print(Fruit)
    print(Fruit["PEAR"])
    fruit = Fruit.LEMON
    print(f"Name: {fruit.name}   Value: {fruit.value}")
    print(f"List: {list(Fruit)}")
    for fruit in Fruit:
        print(f"Item: {fruit}")

    print(list(Plane))


if __name__ == "__main__":
    main()
