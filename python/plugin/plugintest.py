#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# tutorial for plugin
#
# File:     plugintest
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2023-09-09
# License:
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

# Imports --------------------------------------------------------------------


import logging
import traceback
import os
import sys
import importlib

# Variables ------------------------------------------------------------------


class App:
    NAME = "plugintest"
    VERSION = "0.01"
    DESCRIPTION = "tutorial for plugin"
    LICENSE = ""
    AUTHOR = "Peter Malmberg"
    EMAIL = "<peter.malmberg@gmail.com>"
    ORG = "__ORGANISATION__"
    HOME = ""
    ICON = ""


# Code -----------------------------------------------------------------------


def main() -> None:
    logging_format = "[%(levelname)s] %(lineno)d %(funcName)s() : %(message)s"
    logging.basicConfig(format=logging_format, level=logging.DEBUG)

    # _plugins = [importlib.import_module(plugin, ".").Plugin() for plugin in plugins]
    plugin_files = [
        os.path.splitext(fn)[0]
        for fn in os.listdir("plugins")
        if os.path.isfile(f"plugins/{fn}")
    ]
    print(plugin_files)

    plugins = [importlib.import_module(f"plugins.{fn}").Plugin() for fn in plugin_files]
    # plugins = [importlib.import_module("plugins.default").Plugin()]

    for pl in plugins:
        pl.process()


if __name__ == "__main__":
    try:
        main()
        sys.exit(0)
    except KeyboardInterrupt as e:  # Ctrl-C
        raise e
    except SystemExit as e:  # sys.exit()
        raise e
    except Exception as e:
        print("ERROR, UNEXPECTED EXCEPTION")
        print(str(e))
        traceback.print_exc()
        os._exit(1)
