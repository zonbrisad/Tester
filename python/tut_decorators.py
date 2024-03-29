#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# tutorial for decorators
#
# File:     tut_decorators.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2023-09-12
# License:
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

# References:
# https://vegibit.com/how-to-create-custom-decorators-in-python/

from functools import wraps
from typing import Any, Callable


func_list = []


def my_decorator(func: Callable[..., Any]) -> Callable[..., Any]:
    """An example decorator implementation"""
    # global func_list
    # func_list.append(func.__name__)

    @wraps(func)
    def wrapper(*args: Any, **kwargs: Any) -> Any:
        print("Before...")
        result = func(*args, **kwargs)
        print("After...")
        return result

    return wrapper


def repeat_decorator(repeat):
    """An example of a decorator taking an argument"""

    def repeat_decorator(func):
        # global func_list
        # func_list.append(func.__name__)

        def wrapper(*args, **kwargs):
            for r in range(repeat):
                func(*args, **kwargs)
            return

        return wrapper

    return repeat_decorator


class class_decorator:
    def __init__(self):
        self.count = 0

    def __call__(self, func):
        def wrapper(*args, **kwargs):
            func(*args, **kwargs)
            self.count += 1
            print(f"Count: {self.count}")

        return wrapper


count_decorator = class_decorator()


# def regdecorator(func):
#     # print(desc)
#     func_list.append(func.__name__)
#     return func


def regdecorator2(desc="default"):
    # print(desc)

    def regdec(func):
        # func_list.append({func.__name__: desc})
        func_list.append({func.__name__: desc})
        return func

    return regdec


@my_decorator
def my_func(s: str):
    print(f"How dare you, {s}")
    return "Ha Ha"


@repeat_decorator(repeat=3)
@regdecorator2(desc="aa")
def my_print(s: str):
    print(s)


@count_decorator
@regdecorator2()
def my_tjohej():
    print("Tjohej!")


@regdecorator2("asdfasdf")
def my_not_use_this_function():
    print("Do not use this function")


print(f"Function list: {func_list}")


r = my_func("Nisse")
print(f"Result: {r}")

my_print("Kalle")

my_tjohej()
my_tjohej()


# print(my_func.__name__)
# print(my_print.__name__)
