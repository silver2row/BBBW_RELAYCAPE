# This is short idea on related items:

` You will need a short udev rule from https://github.com/mvduin/overlay-utils/blob/master/BBORG_RELAY-00A2.dtsi `

In that file, you will find a short udev rule to place at /etc/udev/rules.d/ and this will create
the symlinks for /dev/gpio/relay-jp1/2/3/4/ from /sys/class/gpio/.

This should be helpful for handling such a Cape, the RelayCape in Python3.

` Enjoy `
