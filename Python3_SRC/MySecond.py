#!/usr/bin/python3

import pathlib
from time import sleep

GPIO = pathlib.Path("/dev/gpio/relay-jp3/value")
GPIO.write_text("0")

class GO:

    def init(GPIO):
        GPIO = GPIO.write_text("0")

    def apply(GPIO):
        GPIO = GPIO.write_text("1")

'''
GO.init(GPIO)
sleep(4)
GO.apply(GPIO)
sleep(4)
GO.init(GPIO)
sleep(4)
'''
