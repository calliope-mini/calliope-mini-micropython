#!/bin/bash

git clone https://github.com/Make-Code-Play/calliope-mini-micropython.git
cd calliope-mini-micropython/
yt target bbc-microbit-classic-gcc-nosd
yt up
yt clean
yt build

#
#./tools/makeqstrhdr.sh
#yt build
