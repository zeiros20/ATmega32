#include "../../Drivers/DIO/DIO_config.h"


int main(void){
    PinMode(PA0,OUTPUT);
    WritePin(PA0,PIN_LOW);
    while(1);
    return 0;
}