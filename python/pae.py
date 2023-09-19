#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# --------------------------------------------------------------------------
#
# Python automation engine
#
# File:    pae.py
# Author:  Peter Malmberg <peter.malmberg@gmail.com>
# Date:
# Version: 0.3
# Python:  >=3
# License: MIT
#
# ---------------------------------------------------------------------------

from __future__ import annotations
import argparse
from dataclasses import dataclass
from enum import Enum
from logging import NullHandler
from math import sin
from xmlrpc.client import Boolean
from escape import Esc
import time


class PaeType(Enum):
    Normal = 0
    Max = 1
    Min = 2
    Count = 3
    Average = 4
    Integrate = 5

    Sine = 100
    Noise = 101

    # dict = {
    #     this.Normal : "Normal",
    #     this.Max    : "Max"
    # }


@dataclass
class PaeObject:
    tick: int = 0
    enabled: Boolean = True
    id: str = ""
    name: str = ""
    desc: str = ""
    unit: str = ""

    def enable(self, en: Boolean) -> None:
        self.enabled = en

    def is_enabled(self) -> Boolean:
        return self.enabled

    def get_id(self) -> str:
        if self.source is not None:
            return self.source.get_id()

        return self.id

    def set_id(self, id) -> None:
        self.id = id

    def set_description(self, description) -> None:
        self.description = description

    def get_description(self) -> str:
        return self.description

    def set_source(self, source: PaeNode) -> None:
        self.source = source

    def get_source(self) -> PaeNode:
        return self.source

    def update(self) -> None:
        pass


class PaeNode(PaeObject):
    def __init__(
        self,
        id: str = "",
        desc: str = "",
        type: PaeType = PaeType.Normal,
        source: PaeNode = None,
    ) -> None:
        super().__init__(id=id)
        self.value = 0
        self.type = type
        self.source = source
        self.invalid = False
        self.no_data = False
        self.out_of_range = False

    def get_value(self):
        return self.value

    def update(self):
        super().update()

        if not self.is_enabled():
            return

        if self.source is not None:
            sv = self.source.get_value()
        else:
            sv = self.value

        if self.type == PaeType.Normal:
            self.value = sv

        if self.type == PaeType.Min:
            if sv < self.value:
                self.value = sv

        if self.type == PaeType.Max:
            if sv > self.value:
                self.value = sv

        if self.type == PaeType.Average:
            pass

        if self.type == PaeType.Sine:
            sv = sin(self.tick / 20)
            self.value = sv
            self.tick += 1

    def __str__(self) -> str:
        return f"{self.id:8} {self.type.name:6} {self.value:8.3}"


class PaeAlarm(PaeObject):
    def __init__(self) -> None:
        super().__init__()


class PaeMotor(PaeObject):
    def __init__(self) -> None:
        super().__init__()
        self.nodes = []
        self.alarms = []

    def add_node(self, node: PaeNode):
        self.nodes.append(node)

    def add_alarm(self, alarm: PaeAlarm):
        self.alarms.append(alarm)

    def update(self):
        # PaeObject.tick = PaeObject.tick + 1
        for node in self.nodes:
            node.update()

        for alarm in self.alarms:
            alarm.update()
        pass


class PaeFType:
    MovingAverage = 0
    IIR = 1
    FIR = 2


class PaeFilter(PaeObject):
    def __init__(self) -> None:
        super().__init__()


def main() -> None:
    # n_sin = PaeNode()
    # n_sin = PaeNode()
    n_sin = PaeNode(type=PaeType.Sine, id="sin")
    n_min = PaeNode(type=PaeType.Min, source=n_sin)
    n_max = PaeNode(type=PaeType.Max, source=n_sin)

    motor = PaeMotor()

    motor.add_node(n_sin)
    motor.add_node(n_min)
    motor.add_node(n_max)

    print()
    for i in range(1, 10):
        motor.update()
        print(f"{Esc.UP}", end="")
        print(n_sin)
        time.sleep(0.1)

    # print("n_sin id = " + n_sin.get_id())
    # print("n_min id = " + n_min.get_id())

    # print("n_sin tick = ", n_sin.tick)
    # print("n_min tick = ", n_min.tick)
    # PaeObject.tick = PaeObject.tick + 1
    # print("n_sin tick = ", n_sin.tick)
    # print("n_min tick = ", n_min.tick)
    # n_sin.tick = n_sin.tick + 1
    # print("n_sin tick = ", n_sin.tick)
    # print("n_min tick = ", n_min.tick)


if __name__ == "__main__":
    main()
