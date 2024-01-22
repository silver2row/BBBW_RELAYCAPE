# WIP Programs for the BealgeBone Black Wireless

` WIP `

# BBBW_RELAYCAPE
More Source for the Beagleboard.org, am335x BBBW and Relay Cape

`sudo apt install libgpiod-dev gpiod make cmake`

```

```

# WIP

If libgpiod does not break w/ a compatibility issue, good. But, you may need to restart your board
after using gpiod on the BBB or other am335x related board. 

Now, once all the above is done, one can use the source. If I am missing anytyhing, please tell me.

Seth

P.S. This is done with a specific kernel and image from beagleboard.org.

```

kernel: 5.10.100-ti-r37
cat /etc/dogtag: BeagleBoard.org Debian Bullseye Minimal Image 2022-03-02

```

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
