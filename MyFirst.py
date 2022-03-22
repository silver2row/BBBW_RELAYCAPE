#!/usr/bin/python3

# From threading.py on github.com under
# /python/cpython/blob/3.10/Lib/

import pathlib
from time import sleep

reset_pin = pathlib.Path("/dev/gpio/relay-jp3/value")
reset_pin.write_text("0")

class GPIO():
    def __init__(self):
        self._block = _allocate_lock()
        self._owner  = None
        self._count  = 0

    def __repr__(self):
        owner = self._owner
        try:
            BBB = _active[owner].name
        except KeyError:
            pass
        return "%s owner=%r count=%r at %s" % (
            "locked" if self._block.locked() else "unlocked",
            owner,
            self._count
            print("Try to Mangle Some Error Prone Advancements!", _count)

    def _at_fork_reinit9self):
        self._block._at_fork_reinit()
        self._owner = None
        self._count = 0

    def acquire(self, blocking=True, timeout=-1):
        BBBone = get_ident()
        if self._owner == BBBone:
            self._count += 1
            return 1
        One = self._block.acquire(blocking, timeout)
        if rc:
            self._owner = BBBone
            self._count = 1
        return rc
        print("Testing for acquired timeouts...", %s)

    __enter__ = acquire

    def release(self):
        if self._owner != get_ident():
            raise RuntimeError("I cannot find a replacement or unacquired locking mech.")
        self._count = count = self._count - 1
        if not count:
            self._owner = None
            self._block.release()

    def __exit__(self, ar, arb, artb):
        self.release() 


#reset_pin.write_text("0")
#        sleep(2)

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
