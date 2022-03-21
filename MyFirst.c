/*

Example of programming GPIO from C using the sysfs interface on
a BeagleBone Black with RelayCape.

Will toggle physical pin 3.16 or P9.30 or gpio108 (which is gpio3_16 and it is 32 * 3 + 12 = 108) on the
RelayCape attached to the BBBW for a change in seconds and then exits on CTRL-C.

Jeff Tranter <jtranter@ics.com>

and...Seth. I changed the source a bit to fit the BBBW and RelayCape! SysFS!

*/

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    // Export the desired pin by writing to /sys/class/gpio/export

    int fd = open("/dev/gpio/relay-jp3/active_low", O_WRONLY);
    if (fd == -1) {
        perror("Unable to open /dev/gpio/relay-jp3/active_low");
        exit(1);
    }

    // Set the pin to be an output by writing "out" to /sys/class/gpio/gpio108/direction

    fd = open("/dev/gpio/relay-jp3/direction", O_WRONLY);
    if (fd == -1) {
        perror("Unable to open /dev/gpio/relay-jp3/direction");
        exit(1);
    }

    if (write(fd, "out", 3) != 3) {
        perror("Error writing to /dev/gpio/relay-jp3/direction");
        exit(1);
    }

    close(fd);

    fd = open("/dev/gpio/relay-jp3/value", O_WRONLY);
    if (fd == -1) {
        perror("Unable to open /dev/gpio/relay-jp3/value");
        exit(1);
    }

    // Toggle LED 50 ms on, 50ms off, 100 times (10 seconds)

    for (int i = 0; i < 100; i++) {
        if (write(fd, "1", 1) != 1) {
            perror("Error writing to /dev/gpio/relay-jp3/value");
            exit(1);
        }
        usleep(50000);

        if (write(fd, "0", 1) != 1) {
            perror("Error writing to /dev/gpio/relay-jp3/value");
            exit(1);
        }
        usleep(500000);
    }

    close(fd);

    // And exit
    return 0;
}
