#!/usr/bin/python3

from MySecond import *
from time import sleep

try:
    LED = int(input("Please enter a 0 or 1 here: "))
    while True:
        if LED == 1:
            GO.apply(GPIO)
            sleep(2)
        else:
            LED == 0
            GO.init(GPIO)
            sleep(2)
except KeyboardInterrupt:
    print("Done for now!")
    pass
