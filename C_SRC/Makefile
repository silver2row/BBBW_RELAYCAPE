all:    MyFirst MyThird

MyFirst:  MyFirst.c
	arm-linux-gnueabihf-gcc -Wall -O2 -o MyFirst MyFirst.c

MyThird: MyThird.c
	arm-linux-gnueabihf-gcc -Wall -Wmaybe-uninitialized -O2 -o MyThird MyThird.c

clean:
	$(RM) MyFirst MyThird
