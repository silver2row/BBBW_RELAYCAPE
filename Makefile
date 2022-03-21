all:    MyFirst

MyFirst:  MyFirst.c
	gcc -Wall -O2 -o MyFirst MyFirst.c

clean:
	$(RM) MyFirst
