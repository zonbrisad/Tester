

import argparse
from enum import Enum
from logging import NullHandler
from platform import node
from pydoc import doc
from math import sin
from xmlrpc.client import Boolean


class PaeType(Enum):
    Normal  = 0
    Max     = 1
    Min     = 2
    Count   = 3
    Average = 4

    Sine    = 100
    Noise   = 101
    
    # dict = {
    #     this.Normal : "Normal",
    #     this.Max    : "Max"
    # }


class PaeObject:
    tick = 0

    def __init__(self) -> None:
        self.enabled = True
        self.id = ""
        self.name = ""
        self.description = ""
        self.source = None
        self.unit = ""

    def enable(self, en: Boolean):
        self.enabled = en
    
    def is_enabled(self):
        return self.enabled

    def get_id(self):
        if self.source is not None :
            return self.source.getId()

        return self.id

    def setId(self, id):
        self.id = id

    def setDescription(self, description):
        self.description = description

    def getDescription(self):
        return self.description

    def setSource(self, source):
        self.source = source
    
    def getSource(self):
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
    
    
    n1.setId("Id1")
    n2.setSource(n1)
    
    motor = PaeMotor()
    
    motor.addNode(n1)
    motor.addNode(n2)
    motor.addNode(n_sin)
    
    
    print("n1 id = " + n1.getId() )
    print("n2 id = " + n2.getId() )
    
    
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
    