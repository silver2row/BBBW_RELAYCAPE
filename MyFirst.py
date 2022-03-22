#!/usr/bin/python3

# From threading.py on github.com under
# /python/cpython/blob/3.10/Lib/

import pathlib
from time import sleep

reset_pin = pathlib.Path("/dev/gpio/relay-jp3/value")
reset_pin.write_text("0")

class GPIO():
    def __init__(self):
        self._FarOff = _allocate_lock()
        self._owner  = none
        self._count  = 0

    def __repr__(self):
        owner = self._owner
        try:
            owner = _active[owner].name
        except KeyError:
            pass
        return "%s owner=%r count=%r at %s" %




reset_pin.write_text("0")
        sleep(2)

    def write_text(self):
        reset_pin.write_text("1")
        sleep(1)

    def more_info(self, GPIOone, GPIOtwo):
        

#if __name__=="__main__":
#    try:
#        while True:
#            GPIO.__init__("0")
#            sleep(5)
#            GPIO.write_text("1")
#            sleep(3)
#    except KeyboardInterrupt:
#        print("Oops!")
