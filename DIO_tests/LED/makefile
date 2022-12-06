CC=avr-gcc
MCU=m32
F_CPU=8000000UL
OBJCOPY=avr-objcopy
CFLAS= -std=c99 -Wall -g -Os -mmcu=$(MCU) -DF_CPU=$(F_CPU) -I.
PORT=/dev/ttyUSB0
Target=main
src_code=$(Target).c
driver_dir=../../Drivers/DIO
sources= $(wildcard $(driver_dir)/*.c)
obj=$(wildcard *.o)
AVR_PROGRAMMER=avrdude
FLASH=-U flash:w:$(Target).hex:i


all:
	$(CC) $(CFLAGS) -o $(Target).bin $(src_code) $(sources)
	$(OBJCOPY) -j .text -j .data -O ihex $(Target).bin $(Target).hex

flash:
	$(AVR_PROGRAMMER) -p $(MCU) -c USBasp $(FLASH) -F -P $(PORT)
clean:
	rm -f *.bin *.hex *.o
