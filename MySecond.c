/*
  Simple gpiod example of toggling a LED connected a gpio line from
  the BeagleBone Black Wireless and RelayCape.
  Exits when CTRL-C is typed.
*/

// This source can be found here: https://github.com/tranter/blogs/blob/master/gpio/part9/example.c
// It has been changed by me, Seth, to handle the RelayCape and BBBW Linux based SiP...

#include <gpiod.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  const char *chipname = "gpiochip3";
  struct gpiod_chip *chip;
  struct gpiod_line *lineLED;    // a LED from relay-jp3

  int i, ret;

  // Open GPIO chip
  chip = gpiod_chip_open_by_name(chipname);
  if (!chip) {
    perror("Open chip failed\n");
    return 1;
  }

  // Open GPIO lines
  lineLED = gpiod_chip_get_line(chip, 16);
  if (!lineLED) {
    perror("Get line failed\n");
    return 1;
  }

  // Open LED lines for output
  ret = gpiod_line_request_output(lineLED, "relay-jp3", 0);
  if (ret < 0) {
    perror("Request line as output failed\n");
    return 1;
  }

  // Blink a LED
  i = 0;
  while (true) {
    ret = gpiod_line_set_value(lineLED, (i & 1) != 0);
    if (ret < 0) {
      perror("Set line output failed\n");
      return 1;
    }
    usleep(1000000);
    i++;
  }

  // Release lines and chip
  gpiod_line_release(lineLED);
  gpiod_chip_close(chip);
  return 0;
}
