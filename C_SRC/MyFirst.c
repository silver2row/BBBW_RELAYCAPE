/*

Example of programming GPIO from C using the sysfs interface on
a BeagleBone Black with RelayCape.

Will toggle physical pin 3.16 or P9.30 or gpio108 (which is gpio3_16 and it is 32 * 3 + 12 = 108) on the
RelayCape attached to the BBBW for a change in seconds and then exits on CTRL-C.

The original source can be found here by Mr. Tranter: https://github.com/tranter/blogs/blob/master/gpio/part5/demo1.c

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


// This is from https://github.com/mvduin/overlay-utils/blob/master/BBORG_RELAY-00A2.dtsi
// Run w/ make and then sudo make install if necessary?
// That will build the preprocessor directives for use w/ this script for enabling the .dtsi...


/*

#include "bone/black.h"
#include "gpio.h"

// IMPORTANT: if you have cape-universal enabled (which is the default),
// make sure your kernel version is one of the ones listed here or newer:
//	https://pastebin.com/2w2XtJBP

// disable conflicting cape-universal nodes.
// note that P9.41 and P9.42 connect to two cpu pins each, which cape-universal
// calls P9_41/P9_91 and P9_42/P9_92 respectively.
USES_PIN( P9_41 );  // gpio 0.20 / relay jp1 (unused)
USES_PIN( P9_91 );  // gpio 3.20 / relay jp1
USES_PIN( P9_42 );  // gpio 0.07 / relay jp2 (unused)
USES_PIN( P9_92 );  // gpio 3.18 / relay jp2
USES_PIN( P9_30 );  // gpio 3.16 / relay jp3
USES_PIN( P9_27 );  // gpio 3.19 / relay jp4


// A udev rule along these lines is recommended, to create symlinks in /dev/gpio:
//
//	SUBSYSTEM=="subsystem", KERNEL=="gpio", ACTION=="add", \
//		RUN+="/bin/mkdir -p /dev/gpio"
//
//	SUBSYSTEM=="gpio", ACTION=="add", TEST=="value", ATTR{label}!="sysfs", \
//		RUN+="/bin/ln -sT '/sys/class/gpio/%k' /dev/gpio/%s{label}"

/ {
	relay-cape {
		compatible = "gpio-of-helper";

		pinctrl-names = "default";
		pinctrl-0 = <&relay_cape_pins>;

		relay-jp1 {
			gpio = <&gpio3 20 ACTIVE_HIGH>;  // P9_41b
			init-low;
		};

		relay-jp2 {
			gpio = <&gpio3 18 ACTIVE_HIGH>;  // P9_42b
			init-low;
		};

		relay-jp3 {
			gpio = <&gpio3 16 ACTIVE_HIGH>;  // P9_30
			init-low;
		};

		relay-jp4 {
			gpio = <&gpio3 19 ACTIVE_HIGH>;  // P9_27
			init-low;
		};
	};
};

&am33xx_pinmux {
	relay_cape_pins: relay-cape {
		pinctrl-single,pins = <
			PIN_NOPULL( P9_41a, 7 )  // gpio 0.20 / relay jp1 (unused)
			PIN_PULLDN( P9_41b, 7 )  // gpio 3.20 / relay jp1
			PIN_NOPULL( P9_42a, 7 )  // gpio 0.07 / relay jp2 (unused)
			PIN_PULLDN( P9_42b, 7 )  // gpio 3.18 / relay jp2
			PIN_PULLDN( P9_30,  7 )  // gpio 3.16 / relay jp3
			PIN_PULLDN( P9_27,  7 )  // gpio 3.19 / relay jp4
		>;
	};
};

*/
