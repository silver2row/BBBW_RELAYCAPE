# BBBW_RELAYCAPE
More Source for the Beagleboard.org BBBW and RelayCape

sudo apt install libtool autoconf-archive cmake make gcc g++ git python

...or whatever way you like to build. Installing python should bring about another lib. that handles this bindings to Python from below.

```

git clone git://git.kernel.org/pub/scm/libs/libgpiod/libgpiod.git

cd libgpiod

./autogen.sh --enable-tools=yes --enable-bindings-cxx --enable-bindings-python --prefix=/usr/bin
make 
sudo make install

```

Now, once all the above is done, one can use the source. If I am missing anytyhing, please tell me.

Seth
