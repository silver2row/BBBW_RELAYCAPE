#!/usr/bin/python3
# some ideas are from pathlib.py

import pathlib
from time import sleep

GPIO = pathlib.Path("/dev/gpio/relay-jp3/value")
GPIO.write_text("0")

class GO:

    def new(see, *args, **kwargs):
        if see is GPIO:
            see = PosixPath
        self = see._from_parts(args)
        if not self._flavour.is_supported:
            raise NotImplementedError("working on making it work, %r" % (see.__name__,))

    def enter(self):
        warnings.warn("pathlib.GPIO.enter() will not be around in Python3.13!", stacklevel=2)
        return self

    def exit(self, t):
        pass

    def init(self):
        self = self._working

    def apply(GPIO):
        GPIO = GPIO.write_text("1")

    def gone(GPIO):
        GPIO = GPIO.write_text("0")

    def glob(self, pattern):
        sys.audit("pathlib.GPIO.glob", self, pattern)
        if not pattern:
            raise ValueError("wrong pattern: {!r}".format(pattern))
        root, pattern_parts = self._flavour.parse_parts((pattern,))
        if root:
            raise NotImplementedError("patterns are unsupported!")
        selector = _make_selector(tuple(pattern_parts), self._flavour)
        for p in selector.select_from(self):
            yield p

    def absolute(self):
        if self.is_absolute():
            return self
        return self._from_parts([self.cwd()] + self._parts)

'''
GO.init(GPIO)
sleep(4)
GO.apply(GPIO)
sleep(4)
GO.init(GPIO)
sleep(4)
'''
