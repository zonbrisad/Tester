#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
# Python Tutorial and test project
# ----------------------------------------------------------------------------
#
# string tutorials
#
# File:     tut_string.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Date:     2022-06-26
# License:
#
# ----------------------------------------------------------------------------

from enum import Enum
from datetime import datetime


class State(Enum):
    IDLE = 0
    STARTUP = 1
    RUNNING = 2
    ALARM = 3


def separator(txt: str) -> None:
    print()
    print(f"{txt}")
    # print()


def main() -> None:
    num1: int = 123456789
    num2: int = 42
    num3: float = 123.456
    num4: float = 0.42
    num5: int = 12
    # pad: int = 8
    str1: str = "a"
    str2: str = "bb"
    str3: str = "ccc"
    state: State = State.STARTUP
    my_variable: str = "Some value"

    #
    # Strings
    s = "aa bb cc dd"
    sl = s.split()
    print(sl)

    s2 = "aa 'bb cc' dd"
    print(s2.split())

    separator("Number formating:")
    print(f"No formating:    {num1}")
    print(f"Hexadecimal:     {num1:x}")
    print(f"Hexadecimal:     {num5:#02x}")

    print(f"Binary:          {num1:b}")
    print(f"Octal:           {num1:o}")
    print(f"Scientific:      {num1:e}")
    print(f"Hexadecimal alt: {num1:#x}")
    print(f"Binary alt:      {num1:#b}")
    print(f"Octal alt:       {num1:#o}")
    print(f"Separator:       {num1:_}")
    print(f"Separator:       {num1:,}")

    print(f"No format:       {num2}")
    print(f"Force sign:      {num2:+}")
    # print(f"Force sign:      {num2:>20+}")
    print(f"Decimal:         {num3}")
    print(f"2 decimals:      {num3:.2f}")
    print(f"4 total digits:  {num3:.4g}")

    print(f"Percentage:      {num4:%}")
    print(f"Percentage:      {num4:.2%}")
    print(f"Percentage:      {num4:.0%}")

    separator("Number alignment:")
    print(f"Right aligned:      {num2:>10}")
    print(f"Left aligned:       {num2:<10}")
    print(f"Middle aligned:     {num2:^10}")
    print(f"Pad:                {num2:_}")
    print(f"Right aligned pad:  {num2:_>10}")
    print(f"Left aligned pad:   {num2:_<10}")
    print(f"Middle aligned pad: {num2:_^10}")

    separator("Variable expressions:")
    print(f"Var:  {my_variable = }")
    print(f"Var:  {state = }")
    print(f"Var:  {num2 + num5 = }")
    print(f"Var:  {num2 < num5 = }")

    # String alignment
    print(f"Align string right:  {str1:>5}")
    print(f"Align string right:  {str2:>5}")
    print(f"Align string right:  {str3:>5}")
    print(f"Align string left:   {str1:<5}")
    print(f"Align string left:   {str2:<5}")
    print(f"Align string left:   {str3:<5}")

    # Date output
    now = datetime.now()
    print(f"Datetime:               {now:%y.%m.%d (%H:%M:%S)}")
    print(f"Datetime(local format): {now:%c}")


if __name__ == "__main__":
    main()
