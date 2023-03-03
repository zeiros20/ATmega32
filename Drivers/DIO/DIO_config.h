#ifndef DIO_CONFIG_H
#define DIO_CONFIG_H

#include "../std_types.h"
#include "../Registers/REG.h"


// Pins and Ports modes/values
#define PIN_LOW 0
#define PIN_HIGH 1

#define PORT_LOW 0x00
#define PORT_HIGH 0xff

#define INPUT 0
#define OUTPUT 1
#define INPUT_PULLUP 2


//Pins and Ports names
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define PA0 0
#define PA1 1
#define PA2 2
#define PA3 3
#define PA4 4
#define PA5 5
#define PA6 6
#define PA7 7

#define PB0 8
#define PB1 9
#define PB2 10
#define PB3 11
#define PB4 12
#define PB5 13
#define PB6 14
#define PB7 15

#define PC0 16
#define PC1 17
#define PC2 18
#define PC3 19
#define PC4 20
#define PC5 21
#define PC6 22
#define PC7 23

#define PD0 24
#define PD1 25
#define PD2 26
#define PD3 27
#define PD4 28
#define PD5 29
#define PD6 30
#define PD7 31


//Mapping I/O
typedef struct{
    union{
        uint8_t PORT;
        struct{
            uint8_t pin0:1;
            uint8_t pin1:1;
            uint8_t pin2:1;
            uint8_t pin3:1;
            uint8_t pin4:1;
            uint8_t pin5:1;
            uint8_t pin6:1;
            uint8_t pin7:1;
        };
    }PORT_REG;

    union{
        uint8_t DDR;
        struct{
            uint8_t pin0:1;
            uint8_t pin1:1;
            uint8_t pin2:1;
            uint8_t pin3:1;
            uint8_t pin4:1;
            uint8_t pin5:1;
            uint8_t pin6:1;
            uint8_t pin7:1;
        };
    }DDR_REG;

    union{
        uint8_t PIN;
        struct{
            uint8_t pin0:1;
            uint8_t pin1:1;
            uint8_t pin2:1;
            uint8_t pin3:1;
            uint8_t pin4:1;
            uint8_t pin5:1;
            uint8_t pin6:1;
            uint8_t pin7:1;
        };
    }PIN_REG;

}GPIO;

//Base addresses
#define A ((volatile GPIO*)ADDR_PORTA)
#define B ((volatile GPIO*)ADDR_PORTB)
#define C ((volatile GPIO*)ADDR_PORTC)
#define D ((volatile GPIO*)ADDR_PORTD)




//prototypes
void PinMode(uint8_t pin,uint8_t mode);

void WritePin(uint8_t pin,uint8_t value);

uint8_t ReadPin(uint8_t pin);

void PortMode(uint8_t port,uint8_t mode);

void WritePort(uint8_t port,uint8_t value);

uint8_t ReadPort(uint8_t port);




#endif