/*

This is an example of programming GPIO from C using the sysfs interface on
a BeagleBone Black/BeagleBone Black Wireless or other am335x board with the Relay Cape.

Use the Relay Cape attached to the BeagleBone Black for a change in seconds and then exit with CTRL-C.

The original source can be found here by Mr. Tranter: https://github.com/tranter/blogs/blob/master/gpio/part5/demo1.c

Jeff Tranter <jtranter@ics.com>

and...Seth. I changed the source a bit to fit the BeagleBone Black and Relay Cape while using sysfs.

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

// Export the desired pin by writing to /sys/class/leds/relay1/brightness

    int fd = open("/sys/class/leds/relay1/brightness", O_WRONLY);
    if (fd == -1) {
        perror("Unable to open /sys/class/leds/relay1/brightness");
        exit(1);
    }

    fd = open("/sys/class/leds/relay1/brightness", O_WRONLY);
    if (fd == -1) {
        perror("Unable to open /sys/class/leds/relay1/brightness");
        exit(1);
    }

// Toggle LED 50 ms on, 50ms off, 100 times (10 seconds)

    for (int i = 0; i < 100; i++) {
        if (write(fd, "1", 1) != 1) {
            perror("Error writing to /sys/class/leds/relay1/brightness");
            exit(1);
        }
        usleep(50000);

        if (write(fd, "0", 1) != 1) {
            perror("Error writing to /sys/class/leds/relay1/brightness");
            exit(1);
        }
        usleep(50000);
    }

    close(fd);

    // And exit
    return 0;
}
