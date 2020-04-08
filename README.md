# AVR-C

This repository is about programming on microcontroller with ANSI C and compile with avr-gcc.

## Dependencies

install all dependencies

```bash
sudo apt-get install avr-libc avrdude binutils-avr gcc-avr srecord
```

for simulation and debugging (optional)

```bash
gdb-avr simulavr
```

## Usage

- Compile and burning

```bash
avr-gcc -Wall -g -Os -mmcu=attiny13 -o main.bin main.c
```

- Generate HEX file

```bash
avr-objcopy -j .text -j .data -O ihex main.bin main.hex
```

- Burn to target

```bash
avrdude -p attiny13 -c usbasp -U flash:w:main.hex:i -F -P usb
```
