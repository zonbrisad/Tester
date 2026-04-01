#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# --------------------------------------------------------------------------
#
# Python automation engine for MicroPython
#
# File:    mpae.py
# Author:  Peter Malmberg <peter.malmberg@gmail.com>
# Date:
# Version: 0.3
# Python:  >=3
# License: MIT
#
# ---------------------------------------------------------------------------

from math import sin
import time
#from random import random



class PaeFilter:
    len: int = 10

    def __init(self, len = 10):
        self.data = []
        
    def update(self, new_val: float) -> float:
        self.data.append(new_val)
        if len(self.data) > self.len:
            self.data.pop(0)

        return sum(self.data) / len(self.data)


PaeType_Normal = const(0)
PaeType_Max = const(1)
PaeType_Min = const(2)
PaeType_Count = const(3)
PaeType_Average = const(4)
PaeType_Integrate = const(5)
PaeType_Derivate = const(6)
PaeType_Counter = const(7)
PaeType_Limit = const(8)
PaeType_RateLimit = const(9)
PaeType_Addition = const(10)
PaeType_Subtract = const(11)
PaeType_Multiply = const(12)
PaeType_Division = const(13)
PaeType_Multiply_Add = const(14)
PaeType_Absolute = const(40)
PaeType_Above = const(41)
PaeType_Below = const(42)
PaeType_Sine = const(100)
PaeType_Square = const(101)
PaeType_Random = const(102)
PaeType_Alarm_above = const(200)
PaeType_Alarm_below = const(201)
PaeType_Alarm_between = const(203)


class MPaeNode:
    def __init__(
        self,
        id: str = "",
        desc: str = "",
        name: str = "",
        unit: str = "",
        type: int = PaeType_Normal,
        source: MPaeNode = None,
        max_limit: float = 0.0,
        min_limit: float = 0.0,
        term: float = 0.0,
        factor: float = 1.0,
        offset: float = 0.0,
        plot: bool = True,
        param: bool = False,
        threshold: float = 0.0,
        period: float = 1.0,
        amplitude: float = 1.0,
        average: int = 1,
        divider: float = 1.0,
        tick: int = 0,
        enabled: bool = True,
    ) -> None:
        self.id = id
        self.name = name
        self.value = 0.0
        self.last = 0.0
        self.type = type
        self.source = source
        self.invalid = False
        self.no_data = False
        self.out_of_range = False
        self.max_limit = max_limit
        self.min_limit = min_limit
        self.term = term
        self.offset = offset
        self.factor = factor
        self.threshold = threshold
        self.period = period
        self.amplitude = amplitude
        self.average = average
        self.divider = divider
        self.is_enabled = True
        self.tick = tick

        if self.type == PaeType_Average:
            self.filter = PaeFilter(self.average)

    def get_id(self) -> str:
        return self.id

    def get_value(self) -> float:
        return self.value

    def get(self, d) -> float:
        if type(d) is float:
            return d

        if type(d) is MPaeNode:
            return d.get_value()

    def update(self, value = None) -> None:

        if not self.is_enabled:
            return
        
        if value is not None:
            self.value = value

        if self.source is not None:
            sv = self.source.get_value()
        else:
            sv = self.value

        if self.type == PaeType_Normal:
            self.value = sv

        if self.type == PaeType_Min:
            if sv < self.value:
                self.value = sv

        if self.type == PaeType_Max:
            if sv > self.value:
                self.value = sv

        if self.type == PaeType_Counter:
            if self.source.value > 0.5 and self.last < 0.5:
                self.value += 1

            self.last = self.source.value

        if self.type == PaeType_Average:
            self.value = self.filter.update(sv)

        if self.type == PaeType_Sine:
            sv = self.get(self.amplitude) * sin(self.tick / 20) + self.get(self.offset)
            self.value = sv
            self.tick += 1

        if self.type == PaeType_Square:
            if self.tick > 0:
                self.value = 1
            else:
                self.value = 0
            self.tick += 1
            if self.tick > self.get(self.period):
                self.tick = -self.get(self.period)
            # if self.tick > 5:
            #     self.tick = -5

        if self.type == PaeType_Random:
            self.value = self.offset + (self.factor * random())

        if self.type == PaeType_Limit:
            if sv > self.max_limit:
                self.value = self.max_limit
                return
            if sv < self.min_limit:
                self.value = self.min_limit
                return
            self.value = sv

        if self.type == PaeType_RateLimit:
            self.last = self.source.value

        if self.type == PaeType_Multiply:
            self.value = sv * self.get(self.factor)

        if self.type == PaeType_Division:
            self.value = sv / self.get(self.divider)

        if self.type == PaeType_Multiply_Add:
            self.value = sv * self.get(self.factor) + self.get(self.term)

        if self.type == PaeType_Subtract:
            self.value = sv - self.get(self.term)

        if self.type == PaeType_Addition:
            self.value = sv + self.get(self.term)

        if self.type == PaeType_Absolute:
            self.value = abs(sv)

        if self.type == PaeType_Above:
            if sv > self.threshold:
                self.value = 1
            else:
                self.value = 0

        if self.type == PaeType_Below:
            if sv < self.threshold:
                self.value = 1
            else: 
                self.value = 0

    def __str__(self) -> str:
        return f"{self.name:24} {self.id:10} {self.value:10.3f}"



class PaeMotor:
    def __init__(self) -> None:
        super().__init__()
        self.nodes = []
        self.first = False
        self.plots = []

    def add_node(self, node: MPaeNode, plot: bool = True) -> MPaeNode:
        self.nodes.append(node)
        if plot is True:
            self.plots.append(node)
        return node

    def find_node(self, id: str) -> MPaeNode:
        for node in self.nodes:
            if node.id == id:
                return node
        return None

    def initiate(self):
        for node in self.nodes:
            if type(node.source) is str:
                node.source = self.find_node(node.source)

            if type(node.term) is str:
                node.term = self.find_node(node.term)

            if type(node.factor) is str:
                node.factor = self.find_node(node.factor)

            if type(node.divider) is str:
                node.divider = self.find_node(node.divider)

            if type(node.max_limit) is str:
                node.max_limit = self.find_node(node.max_limit)

            if type(node.min_limit) is str:
                node.min_limit = self.find_node(node.min_limit)

            if type(node.offset) is str:
                node.offset = self.find_node(node.offset)

            if type(node.threshold) is str:
                node.threshold = self.find_node(node.threshold)

            if type(node.period) is str:
                node.period = self.find_node(node.period)

            if type(node.amplitude) is str:
                node.amplitude = self.find_node(node.amplitude)

    def update(self) -> None:
        for node in self.nodes:
            node.update()

    def printout(self) -> None:
        print(self, end="")

    def __str__(self) -> str:
        out = ""
        if self.first is not True:
            for _ in self.nodes:
                out += "\n"
            self.first = True

        for _ in self.nodes:
            out +=  "\x1b[A"  # cursor up

        for x in self.nodes:
            out += f"{str(x)}\n"
        return out


# def main() -> None:
#     motor = PaeMotor()
#     
#     motor.add_node(MPaeNode(type=PaeType_Sine, name="Sine", id="sin"))
#     motor.add_node(MPaeNode(type=PaeType_Square, name="Square", id="sqr"))
#     motor.add_node(MPaeNode(type=PaeType_Min, name="Min sin", source="sin"))
#     motor.add_node(MPaeNode(type=PaeType_Max, name="Max sin", source="sin"))
#     motor.add_node(MPaeNode(type=PaeType_Counter, name="Square count", source="sqr"))
# 
#     motor.initiate()
# 
#     while True:
#         motor.update()
#         motor.printout()
#         time.sleep(0.1)
# 
# 
# if __name__ == "__main__":
#     main()
