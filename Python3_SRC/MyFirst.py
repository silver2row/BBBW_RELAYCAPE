#!/usr/bin/python3

# Getting help from #beagle on IRC
# You know who you are currently!

from pathlib import Path
from time import sleep

class Gpio:
    def __init__(self, name):
        self.name = name
        self._value_path = Path('/sys/class/leds/', name, 'brightness')

    def get(self):
        return int(self._value_path.read_text())

    def set(self, value):
        self._value_path.write_text(str(value))

relay_one = Gpio('relay1/')

relay_one.set('1')
sleep(2)
relay_one.set('0')
sleep(2)

"""
relay_one.set(1)
sleep(2)
relay_one.set(0)
sleep(2)
"""
