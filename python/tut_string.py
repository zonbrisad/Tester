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

from enum import Enum, auto


class State(Enum):
    IDLE = 0
    STARTUP = 1
    RUNNING = 2
    ALARM = 3


num = 123456789
num2 = 42
num3 = 123.456
pad = 8
num4 = .42
num5 = 12
my_variable = "Some value"
state = State.STARTUP

#
# Strings
s  = "aa bb cc dd"
sl = s.split()
print(sl)

s2 = "aa 'bb cc' dd"
print(s2.split())


print(f"No formating:    {num}")
print(f"Hexadecimal:     {num:x}")
print(f"Hexadecimal:     {num5:#02x}")

print(f"Binary:          {num:b}")
print(f"Octal:           {num:o}")
print(f"Scientific:      {num:e}")
print(f"Hexadecimal alt: {num:#x}")
print(f"Binary alt:      {num:#b}")
print(f"Octal alt:       {num:#o}")
print(f"Separator:       {num:_}")
print(f"Separator:       {num:,}")

print(f"No format:       {num2}")
print(f"Force sign:      {num2:+}")
#print(f"Force sign:      {num2:>20+}")

print(f"Right aligned:   {num2:>10}")
print(f"Left aligned:    {num2:<10}")
print(f"Middle aligned:  {num2:^10}") 

print(f"Pad:                {num2:_}")
print(f"Right aligned pad:  {num2:_>10}")
print(f"Left aligned pad:   {num2:_<10}")
print(f"Middle aligned pad: {num2:_^10}")

print(f"Decimal:         {num3}")
print(f"2 decimals:      {num3:.2f}")
print(f"4 total digits:  {num3:.4g}")

print(f"Percentage:  {num4:%}")
print(f"Percentage:  {num4:.2%}")
print(f"Percentage:  {num4:.0%}")

print(f"Var:  {my_variable=}")
print(f"Var:  {state=}")

str1 = "a"
str2 = "bb"
str3 = "ccc"
print(f"Align string right:  {str1:>5}")
print(f"Align string right:  {str2:>5}")
print(f"Align string right:  {str3:>5}")
print(f"Align string left:   {str1:<5}")
print(f"Align string left:   {str2:<5}")
print(f"Align string left:   {str3:<5}")

