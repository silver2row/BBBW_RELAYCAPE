#!/usr/bin/python3

#import Adafruit_BBIO.GPIO as GPIO
import pathlib
from time import sleep

reset_pin = pathlib.Path("/dev/gpio/relay-jp3/value")
reset_pin.write_text("0")

class Steam():
    def __init__(self):
        reset_pin.write_text("0")
        sleep(2)

    def write_text(self):
        reset_pin.write_text("1")
        sleep(1)

"""BarNone = "P9_30"

GPIO.setup(BarNone, 1)

while True:
    GPIO.output(BarNone, 0)
    sleep(3)
    GPIO.output(BarNone, 1)
    sleep(3)

    print("Make it older...")

"""

if __name__=="__main__":
    try:
        while True:
            Steam.__init__("0")
            sleep(5)
            Steam.write_text("1")
            sleep(3)
    except KeyboardInterrupt:
        print("Oops!")
