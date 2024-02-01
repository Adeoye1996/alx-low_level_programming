#!/bin/bash
wget -P .. https:/raw.githubusercontent.com/Adeoye1996/alx-low_level_programming/master/0x18-dynamic_libraries/libfunc.so
export LD_PRELOAD="$PWD/../libfunc.so"
