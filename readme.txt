AVR-C
=====

This repository is about programming on microcontroller with ANSI C and compile with avr-gcc.

usage
-----

1. Install avr-gcc 

sudo apt-get install gcc-avr avr-libc avrdude

2. Compile and burning

avr-gcc -Wall -g -Os -mmcu=attiny13 -o main.bin main.c

3. Generate HEX file

avr-objcopy -j .text -j .data -O ihex main.bin main.hex

4. Burn to target

avrdude -p attiny13 -c usbasp -U flash:w:main.hex:i -F -P usb

Alternative
-----------

Using Makefile

