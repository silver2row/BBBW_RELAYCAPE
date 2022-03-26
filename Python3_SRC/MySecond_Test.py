#!/usr/bin/python3

from MySecond import *
from time import sleep

i = 0
a = 1
b = 2
c = 3
init = GO.gone(GPIO)
init = "0"

try:
    LED = int(input("Please enter a whole number: "))
    for i in range(2, 10, 1):
        if LED >= 1:
            GO.apply(GPIO)
            sleep(2)
            GO.gone(GPIO)
            sleep(2)
            GO.apply(GPIO)
            sleep(2)
            GO.gone(GPIO)
            sleep(2)
        else:
            LED == 0
            GO.gone(GPIO)
            sleep(2)
            GO.gone(GPIO)
except KeyboardInterrupt:
    print("Done for now!")
    pass
