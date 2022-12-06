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

#define PIN0 0
#define PIN1 0
#define PIN2 0
#define PIN3 0
#define PIN4 0
#define PIN5 0
#define PIN6 0
#define PIN7 0


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

void ReadPin(uint8_t pin);

void PortMode(uint8_t port,uint8_t mode);

void WritePort(uint8_t port,uint8_t value);

void ReadPort(uint8_t port);




#endif