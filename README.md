# WIP Programs for the BealgeBone Black Wireless

` WIP `

# BBBW_RELAYCAPE
More Source for the Beagleboard.org BBBW and RelayCape

` sudo apt install libtool autoconf-archive cmake make gcc g++ git python-is-python2 pkg-config linux-headers-$(uname -r) `

```

git clone git://git.kernel.org/pub/scm/libs/libgpiod/libgpiod.git

cd libgpiod

./autogen.sh --enable-tools=yes --enable-bindings-cxx --enable-bindings-python --prefix=/usr/bin
make 
sudo make install

```

If this build does not work and if it fails due to specific errors, please try this:

` sudo apt install gpiod libgpiod-dev `

# WIP
` THE USE OF LIBGPIOD on the AM335x/BEAGLEBONE BLACK WIRELESS May BREAK THE BOARD! `

If libgpiod does not break w/ a compatibility issue, good. But, you may need to restart your board
after using gpiod on the BBB or other am335x related board. 

Now, once all the above is done, one can use the source. If I am missing anytyhing, please tell me.

Seth

P.S. This is done with a specific kernel and image from beagleboard.org.

```

kernel: 5.10.100-ti-r37
cat /etc/dogtag: BeagleBoard.org Debian Bullseye Minimal Image 2022-03-02

```

Also...I have a /boot/uEnv.txt file that looks like this idea:

```

one can use this item of interest in promoting a .dtsi on the BBB/BBBW/am335x board:

https://github.com/mvduin/overlay-utils/blob/master/BBORG_RELAY-00A2.dtsi

```

That .dtsi file works w/ the RelayCape and you might have to disable cape_universal!

The file, MyThird.c, is a WIP too...

1. I am currently trying to adjust it to suit the am335x on the BeagleBone Black Wireless
2. The RelayCape is also in play here
3. Currently, my system is sort of broken. So, additional steps may need to take place
