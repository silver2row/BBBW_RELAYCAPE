# WIP Programs for the BealgeBone Black Wireless

` WIP `

# BBBW_RELAYCAPE
More Source for the Beagleboard.org, am335x BBBW and Relay Cape (can be used with the BBAI-64 and BeagleV-Ahead...

I think one or more of the Python3 files are exempt from use. Mostly, the source does not work as expected for now.

`sudo apt install libgpiod-dev gpiod`

# WIP

Now, once all the above is done, one can use the source. If I am missing anytyhing, please tell me.

```
kernel: Linux BeagleBone 5.10.168-ti-r73
cat /etc/dogtag: BeagleBoard.org Debian Bullseye Minimal Image 2023-10-07
```

You can find this image and more at:

https://forum.beagleboard.org/t/debian-11-x-bullseye-monthly-snapshot-2023-10-07/31280 

I found the above combination of kernel and image to work for the Relay Cape and BBB thus far.

Other kernels and images may work too. There is a Spec. for specific firmware(s) and kernels, i.e. please see below.

`https://docs.beagleboard.org/latest/boards/capes/cape-interface-spec.html`

```
one can use this item of interest in promoting a .dtsi on the BBB/BBBW/am335x board:

https://github.com/mvduin/overlay-utils/blob/master/BBORG_RELAY-00A2.dtsi
```

That .dtsi file works w/ the Relay Cape! You might have to disable cape-universal too.

The file, MyThird.c, is a WIP too...I found it online and am trying to change it a bit.

1. I am currently trying to adjust it to suit the am335x on the BeagleBone Black Wireless
2. The Relay Cape is also in play here
3. Additional steps may need to take place

Please let me know how it goes. 

P.S. Also...a few things to note here:

```
1. Depending on which kernel and image you are choosing, the Spec. may change...
2. Also...
	a. Some kernels and images will allow for a quick plug and play experience.
	b. While other firmware, kernels, and images may not be plug and play.
3. If b. is the case, use the .dtbo in /boot/uEnv.txt under this header:
	c. https://docs.beagleboard.org/latest/boards/capes/relay.html#bone-cape-relay
```

3.c. from above will guide you seemlessly into a build of cmake, make, and/or with the C programming language.

This may be fun at first but soon you will find out what you can do next! Enjoy...

Seth

1. The next few sections will be about the BBAI-64 and BeagleV-Ahead along with the Relay Cape.
2. I will promote my findings and report back.
3. Enjoy the BBB until next time...
