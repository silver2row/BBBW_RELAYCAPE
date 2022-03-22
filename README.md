# WIP Programs for the BealgeBone Black Wireless

` WIP `

# BBBW_RELAYCAPE
More Source for the Beagleboard.org BBBW and RelayCape

` sudo apt install libtool autoconf-archive cmake make gcc g++ git python `

...or whatever way you like to build. Installing python should bring about another lib. that handles this bindings to Python called python-is-python2.

```

git clone git://git.kernel.org/pub/scm/libs/libgpiod/libgpiod.git

cd libgpiod

./autogen.sh --enable-tools=yes --enable-bindings-cxx --enable-bindings-python --prefix=/usr/bin
make 
sudo make install

```

Now, once all the above is done, one can use the source. If I am missing anytyhing, please tell me.

Seth

P.S. This is done with a specific kernel and image from beagleboard.org.

```

kernel: 5.10.100-ti-r40
cat /etc/dogtag: BeagleBoard.org Debian Bullseye IoT Image 2022-03-12

```

Also...I have a /boot/uEnv.txt file that looks like this idea:

```

#Docs: http://elinux.org/Beagleboard:U-boot_partitioning_layout_2.0

uname_r=5.10.100-ti-r40
#uuid=
#dtb=

###U-Boot Overlays###
###Documentation: http://elinux.org/Beagleboard:BeagleBoneBlack_Debian#U-Boot_Overlays
###Master Enable
enable_uboot_overlays=1
###
###Overide capes with eeprom
#uboot_overlay_addr0=BBORG_RELAY-00A2.dtbo
#uboot_overlay_addr1=/home/debian/overlay-utils/BBORG_RELAY-00A2.dtbo
#uboot_overlay_addr2=<file2>.dtbo
#uboot_overlay_addr3=<file3>.dtbo
###
###Additional custom capes
#uboot_overlay_addr4=<file4>.dtbo
#uboot_overlay_addr5=<file5>.dtbo
#uboot_overlay_addr6=<file6>.dtbo
#uboot_overlay_addr7=<file7>.dtbo
###
###Custom Cape
#dtb_overlay=<file8>.dtbo
###
###Disable auto loading of virtual capes (emmc/video/wireless/adc)
disable_uboot_overlay_emmc=1
disable_uboot_overlay_video=1
disable_uboot_overlay_audio=1
#disable_uboot_overlay_wireless=1
#disable_uboot_overlay_adc=1
###
###Cape Universal Enable
enable_uboot_cape_universal=1

```
