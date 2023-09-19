#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# tutorial for rich library
#
# File:     tut_rich.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2023-09-19
# License:
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

from rich import print
from rich.console import Console
from rich.text import Text
from rich.theme import Theme
from rich.table import Table
import time

# Print replacement
types = [False, True, None, 3.14, "Some text", [1, 2, 3]]

print(f"Colored types: {types}")


# Console
console = Console()

console.print("This is some [bold]bold[/] text.")
console.print("This is some [dim]dim[/] text.")
console.print("This is some [cyan]cyan[/] text.")
console.print("This is some [italic]italic[/] text.")
console.print("This is some [strike]strike[/] text.")
console.print("This is some [underline]underline[/] text.")
console.print("This is some [underline2]double underline[/] text.")
console.print("This is some [frame]frame[/] text.")
console.print("This is some [blink]blink[/] text.")
console.print("This is some [reverse]reverse[/] text.")
console.print("This is some [link]http://google.com[/] text.")
console.print("This is red bold strike text.", style="bold strike red")


# Text stylizing
text = Text("Hello, world!")
text.stylize("bold magenta", 0, 6)
console.print(text)

# Custom theme
my_theme = Theme({"success": "green", "error": "bold red"})
console = Console(theme=my_theme)

console.print("Operation successful", style="success")
console.print("Operation failed", style="error")
console.print("Operation [error]failed[/]")

# Emoji's
console.print("Some emoji examples: :apple: :thumbs_up:")


# Table
table = Table(title="My table")
table.add_column("Id", style="bold")
table.add_column("Data", style="cyan")
table.add_column("Comment", style="magenta")

table.add_row("1", "abc", "First row")
table.add_row("2", "def", "second row")
table.add_row("3", "geh", "third row")

console.print(table)

# Logs
# for i in range(1, 10):
#     console.log(f"Logging {i}")
#     time.sleep(0.3)
