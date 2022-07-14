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

import argparse
from dataclasses import dataclass
from enum import Enum
from logging import NullHandler
from platform import node
from pydoc import doc
from math import sin
from xmlrpc.client import Boolean


class PaeType(Enum):
    Normal = 0
    Max = 1
    Min = 2
    Count = 3
    Average = 4
    Integrate = 5

    Sine    = 100
    Noise   = 101
    
    # dict = {
    #     this.Normal : "Normal",
    #     this.Max    : "Max"
    # }

class PaeObject:
    tick = 0

    def __init__(self, enabled=True, id="", name="", description="", source=None, unit="") -> None:
        self.enabled = enabled
        self.id = id
        self.name = name
        self.description = description
        self.source = source
        self.unit = unit

    def enable(self, en: Boolean):
        self.enabled = en
    
    def is_enabled(self):
        return self.enabled

    def get_id(self):
        if self.source is not None :
            return self.source.get_id()

        return self.id

    def set_id(self, id):
        self.id = id

    def set_description(self, description):
        self.description = description

    def get_description(self):
        return self.description

    def set_source(self, source):
        self.source = source
    
    def get_source(self):
        return self.source

    def update(self):
        pass


class PaeNode(PaeObject):
    def __init__(self) -> None:
        super().__init__()
        self.value = 0
        self.type = PaeType.Normal

        self.invalid = False
        self.no_data = False
        self.out_of_range = False

    def getValue(self):
        return self.value 

    def update(self):
        super().update()
        
        if not self.isEnabled():
            return

        if self.source is not None: 
            sv = self.source.getValue()
        else:
            sv = self.value

        # match self.type:
        #     case PaeType.Normal:
        #         pass
        #     case PaeType.Min:
        #         pass
        #     case PaeType.Max:
        #         pass
        #     case PaeType.Average:
        #         pass
        if self.type == PaeType.Normal:
            pass
        if self.type == PaeType.Min:
            pass
        if self.type == PaeType.Max:
            pass
        if self.type == PaeType.Average:
            pass
        if self.type == PaeType.Sine:
            sv = sin(self.tick/10)
            
        self.value = sv

    def __str__(self) -> str:
        return super().__str__()


class PaeAlarm(PaeObject):
    def __init__(self) -> None:
        super().__init__()


class PaeMotor(PaeObject):
    def __init__(self) -> None:
        super().__init__()
        self.nodes = []
        self.alarms = []

    def addNode(self, node):
        self.nodes.append(node)

    def addAlarm(self, alarm):
        self.alarms.append(alarm)

    def update(self):
        PaeObject.tick = PaeObject.tick + 1
        for node in self.nodes:
            node.update()

        for alarm in self.alarms:
            alarm.update()
        pass

class PaeFType():
    MovingAverage = 0
    IIR = 1
    FIR = 2


class PaeFilter(PaeObject):
    def __init__(self) -> None:
        super().__init__()


def main() -> None:
    
    n1 = PaeNode()
    n2 = PaeNode()
    n_sin = PaeNode()
    
    
    n1.set_id("Id1")
    n2.set_source(n1)
    
    motor = PaeMotor()
    
    motor.addNode(n1)
    motor.addNode(n2)
    motor.addNode(n_sin)
    
    
    print("n1 id = " + n1.get_id() )
    print("n2 id = " + n2.get_id() )
    
    
    print("n1 tick = ", n1.tick )
    print("n2 tick = ", n2.tick )
    PaeObject.tick = PaeObject.tick + 1
    print("n1 tick = ", n1.tick )
    print("n2 tick = ", n2.tick )
    n1.tick = n1.tick + 1
    print("n1 tick = ", n1.tick )
    print("n2 tick = ", n2.tick )
    
    
if __name__ == "__main__":
    main()    
    