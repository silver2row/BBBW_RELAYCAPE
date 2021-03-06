#!/usr/bin/python3

# Getting help from #beagle on IRC
# You know who you are currently!

# PATH = pathlib.Path("/dev/gpio/relay-jp3/value")
# PATH.write_text("0")

from pathlib import Path
from time import sleep

class Gpio:
    def __init__( self, name ):
        self.name = name
        self._value_path = Path( '/dev/gpio', name, 'value' )

    def get( self ):
        return int( self._value_path.read_text() )

    def set( self, value ):
        self._value_path.write_text( str( value ) )

relay1 = Gpio( 'relay-jp3' )

relay1.set( 1 )
sleep( 1 )
relay1.set( 0 )
