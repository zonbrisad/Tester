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


def main() -> None:
    num1: int = 123456789
    num2: int = 42
    num3: float = 123.456
    num4: float = 0.42
    num5: int = 12
    pad: int = 30
    str1: str = "a"
    str2: str = "bb"
    str3: str = "ccc"
    state: State = State.STARTUP
    my_variable: str = "Some value"

    separator("Integer formating:")
    print(f"No formating:       {num2}")
    print(f"Padding:            {num2:04}")
    print(f"Force sign:         {num2:+}")
    print(f"Hexadecimal:        {num2:x}")
    print(f"Hexadecimal prefix: {num2:#04x}")
    print(f"Binary:             {num1:b}")
    print(f"Binary prefix:      {num1:#b}")
    print(f"Octal:              {num1:o}")
    print(f"Octal prefix:       {num1:#o}")
    print(f"Scientific:         {num1:e}")
    print(f"Separator _:        {num1:_}")
    print(f"Separator ,:        {num1:,}")

    separator("Float formating:")
    print(f"Decimal full:       {num3}")
    print(f"2 decimals:         {num3:.2f}")
    print(f"4 total digits:     {num3:.4g}")
    print(f"Percentage:         {num4:%}")
    print(f"Percentage:         {num4:.2%}")
    print(f"Percentage:         {num4:.0%}")

    separator("Number alignment:")
    print(f"Right aligned:      {num2:>10}")
    print(f"Left aligned:       {num2:<10}")
    print(f"Middle aligned:     {num2:^10}")
    print(f"Right aligned pad:  {num2:_>10}")
    print(f"Left aligned pad:   {num2:_<10}")
    print(f"Middle aligned pad: {num2:_^10}")

    separator("Variable expressions:")
    print(f"Var:                {my_variable = }")
    print(f"Var:                {state = }")
    print(f"Var:                {num2 + num5 = }")
    print(f"Var:                {num2 < num5 = }")

    # String alignment
    print(f"Align string right: {str1:>15}")
    print(f"Align string right: {str2:>15}")
    print(f"Align string right: {str3:>15}")
    print(f"Align string left:  {str1:<15}")
    print(f"Align string left:  {str2:<15}")
    print(f"Align string left:  {str3:<15}")
    print(f"Align string left:  {str3:>{pad}}")

    # Date output
    now = datetime.now()
    print(f"Datetime:           {now:%y.%m.%d (%H:%M:%S)}")
    print(f"Datetime(local ):   {now:%c}")

    # Special output
    separator("Special output:")
    print(f"Braces:             {{{num2}}}")


if __name__ == "__main__":
    main()
