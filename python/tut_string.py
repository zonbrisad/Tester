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


num = 123456789
num2 = 42
num3 = 123.456
pad = 8


#
# Strings
s  = "aa bb cc dd"
sl = s.split()
print(sl)

s2 = "aa 'bb cc' dd"
print(s2.split())


print(f"No formating:    {num}")
print(f"Force sign:      {num:+}")
print(f"Underscore:      {num:_}")
print(f"Comma:           {num:,}")
print(f"Hexadecimal:     {num:x}")
print(f"Binary:          {num:b}")
print(f"Octal:           {num:o}")
print(f"Scientific:      {num:e}")
print(f"Hexadecimal alt: {num:#x}")
print(f"Binary alt:      {num:#b}")
print(f"Octal alt:       {num:#o}")

print(f"No format:       {num2}")
print(f"Right aligned:   {num2:>10}")
print(f"Left aligned:    {num2:<10}")
print(f"Middle aligned:  {num2:^10}")
print(f"Middle aligned:  {num2:_^10}")

print(f"Decimal:         {num3}")
print(f"2 decimals:      {num3:.2f}")
print(f"4 total digits:  {num3:.4g}")