#include "DIO_config.h"


void PinMode(uint8_t pin,uint8_t mode){
    if(pin <= PA7){
        switch(pin){
            case PA0:   mode?(mode==1?(A->DDR_REG.pin0=PIN_HIGH):(A->DDR_REG.pin0=PIN_LOW,A->PORT_REG.pin0=PIN_HIGH)):(A->DDR_REG.pin0=PIN_HIGH);break;
            case PA1:   mode?(mode==1?(A->DDR_REG.pin1=PIN_HIGH):(A->DDR_REG.pin1=PIN_LOW,A->PORT_REG.pin1=PIN_HIGH)):(A->DDR_REG.pin1=PIN_HIGH);break;
            case PA2:   mode?(mode==1?(A->DDR_REG.pin2=PIN_HIGH):(A->DDR_REG.pin2=PIN_LOW,A->PORT_REG.pin2=PIN_HIGH)):(A->DDR_REG.pin2=PIN_HIGH);break;
            case PA3:   mode?(mode==1?(A->DDR_REG.pin3=PIN_HIGH):(A->DDR_REG.pin3=PIN_LOW,A->PORT_REG.pin3=PIN_HIGH)):(A->DDR_REG.pin3=PIN_HIGH);break;
            case PA4:   mode?(mode==1?(A->DDR_REG.pin4=PIN_HIGH):(A->DDR_REG.pin4=PIN_LOW,A->PORT_REG.pin4=PIN_HIGH)):(A->DDR_REG.pin4=PIN_HIGH);break;
            case PA5:   mode?(mode==1?(A->DDR_REG.pin5=PIN_HIGH):(A->DDR_REG.pin5=PIN_LOW,A->PORT_REG.pin5=PIN_HIGH)):(A->DDR_REG.pin5=PIN_HIGH);break;
            case PA6:   mode?(mode==1?(A->DDR_REG.pin6=PIN_HIGH):(A->DDR_REG.pin6=PIN_LOW,A->PORT_REG.pin6=PIN_HIGH)):(A->DDR_REG.pin6=PIN_HIGH);break;
            case PA7:   mode?(mode==1?(A->DDR_REG.pin7=PIN_HIGH):(A->DDR_REG.pin7=PIN_LOW,A->PORT_REG.pin7=PIN_HIGH)):(A->DDR_REG.pin7=PIN_HIGH);break;
            default:    /* Do nth */
        }
    }
    else if(pin > PA7 && pin <= PB7){
        switch(pin){
            case PB0:   mode?(mode==1?(B->DDR_REG.pin0=PIN_HIGH):(B->DDR_REG.pin0=PIN_LOW,B->PORT_REG.pin0=PIN_HIGH)):(B->DDR_REG.pin0=PIN_HIGH);break;
            case PB1:   mode?(mode==1?(B->DDR_REG.pin1=PIN_HIGH):(B->DDR_REG.pin1=PIN_LOW,B->PORT_REG.pin1=PIN_HIGH)):(B->DDR_REG.pin1=PIN_HIGH);break;
            case PB2:   mode?(mode==1?(B->DDR_REG.pin2=PIN_HIGH):(B->DDR_REG.pin2=PIN_LOW,B->PORT_REG.pin2=PIN_HIGH)):(B->DDR_REG.pin2=PIN_HIGH);break;
            case PB3:   mode?(mode==1?(B->DDR_REG.pin3=PIN_HIGH):(B->DDR_REG.pin3=PIN_LOW,B->PORT_REG.pin3=PIN_HIGH)):(B->DDR_REG.pin3=PIN_HIGH);break;
            case PB4:   mode?(mode==1?(B->DDR_REG.pin4=PIN_HIGH):(B->DDR_REG.pin4=PIN_LOW,B->PORT_REG.pin4=PIN_HIGH)):(B->DDR_REG.pin4=PIN_HIGH);break;
            case PB5:   mode?(mode==1?(B->DDR_REG.pin5=PIN_HIGH):(B->DDR_REG.pin5=PIN_LOW,B->PORT_REG.pin5=PIN_HIGH)):(B->DDR_REG.pin5=PIN_HIGH);break;
            case PB6:   mode?(mode==1?(B->DDR_REG.pin6=PIN_HIGH):(B->DDR_REG.pin6=PIN_LOW,B->PORT_REG.pin6=PIN_HIGH)):(B->DDR_REG.pin6=PIN_HIGH);break;
            case PB7:   mode?(mode==1?(B->DDR_REG.pin7=PIN_HIGH):(B->DDR_REG.pin7=PIN_LOW,B->PORT_REG.pin7=PIN_HIGH)):(B->DDR_REG.pin7=PIN_HIGH);break;
            default:    /* Do nth */
        }
    }
    else if(pin > PB7 && pin <= PC7){
        switch(pin){
            case PC0:   mode?(mode==1?(C->DDR_REG.pin0=PIN_HIGH):(C->DDR_REG.pin0=PIN_LOW,C->PORT_REG.pin0=PIN_HIGH)):(C->DDR_REG.pin0=PIN_HIGH);break;
            case PC1:   mode?(mode==1?(C->DDR_REG.pin1=PIN_HIGH):(C->DDR_REG.pin1=PIN_LOW,C->PORT_REG.pin1=PIN_HIGH)):(C->DDR_REG.pin1=PIN_HIGH);break;
            case PC2:   mode?(mode==1?(C->DDR_REG.pin2=PIN_HIGH):(C->DDR_REG.pin2=PIN_LOW,C->PORT_REG.pin2=PIN_HIGH)):(C->DDR_REG.pin2=PIN_HIGH);break;
            case PC3:   mode?(mode==1?(C->DDR_REG.pin3=PIN_HIGH):(C->DDR_REG.pin3=PIN_LOW,C->PORT_REG.pin3=PIN_HIGH)):(C->DDR_REG.pin3=PIN_HIGH);break;
            case PC4:   mode?(mode==1?(C->DDR_REG.pin4=PIN_HIGH):(C->DDR_REG.pin4=PIN_LOW,C->PORT_REG.pin4=PIN_HIGH)):(C->DDR_REG.pin4=PIN_HIGH);break;
            case PC5:   mode?(mode==1?(C->DDR_REG.pin5=PIN_HIGH):(C->DDR_REG.pin5=PIN_LOW,C->PORT_REG.pin5=PIN_HIGH)):(C->DDR_REG.pin5=PIN_HIGH);break;
            case PC6:   mode?(mode==1?(C->DDR_REG.pin6=PIN_HIGH):(C->DDR_REG.pin6=PIN_LOW,C->PORT_REG.pin6=PIN_HIGH)):(C->DDR_REG.pin6=PIN_HIGH);break;
            case PC7:   mode?(mode==1?(C->DDR_REG.pin7=PIN_HIGH):(C->DDR_REG.pin7=PIN_LOW,C->PORT_REG.pin7=PIN_HIGH)):(C->DDR_REG.pin7=PIN_HIGH);break;
            default:    /* Do nth */
        }
    }
    else if(pin > PC7 && pin <= PD7){
        switch(pin){
            case PD0:   mode?(mode==1?(D->DDR_REG.pin0=PIN_HIGH):(D->DDR_REG.pin0=PIN_LOW,D->PORT_REG.pin0=PIN_HIGH)):(D->DDR_REG.pin0=PIN_HIGH);break;
            case PD1:   mode?(mode==1?(D->DDR_REG.pin1=PIN_HIGH):(D->DDR_REG.pin1=PIN_LOW,D->PORT_REG.pin1=PIN_HIGH)):(D->DDR_REG.pin1=PIN_HIGH);break;
            case PD2:   mode?(mode==1?(D->DDR_REG.pin2=PIN_HIGH):(D->DDR_REG.pin2=PIN_LOW,D->PORT_REG.pin2=PIN_HIGH)):(D->DDR_REG.pin2=PIN_HIGH);break;
            case PD3:   mode?(mode==1?(D->DDR_REG.pin3=PIN_HIGH):(D->DDR_REG.pin3=PIN_LOW,D->PORT_REG.pin3=PIN_HIGH)):(D->DDR_REG.pin3=PIN_HIGH);break;
            case PD4:   mode?(mode==1?(D->DDR_REG.pin4=PIN_HIGH):(D->DDR_REG.pin4=PIN_LOW,D->PORT_REG.pin4=PIN_HIGH)):(D->DDR_REG.pin4=PIN_HIGH);break;
            case PD5:   mode?(mode==1?(D->DDR_REG.pin5=PIN_HIGH):(D->DDR_REG.pin5=PIN_LOW,D->PORT_REG.pin5=PIN_HIGH)):(D->DDR_REG.pin5=PIN_HIGH);break;
            case PD6:   mode?(mode==1?(D->DDR_REG.pin6=PIN_HIGH):(D->DDR_REG.pin6=PIN_LOW,D->PORT_REG.pin6=PIN_HIGH)):(D->DDR_REG.pin6=PIN_HIGH);break;
            case PD7:   mode?(mode==1?(D->DDR_REG.pin7=PIN_HIGH):(D->DDR_REG.pin7=PIN_LOW,D->PORT_REG.pin7=PIN_HIGH)):(D->DDR_REG.pin7=PIN_HIGH);break;
            default:    /* Do nth */
        }
    }

}

void WritePin(uint8_t pin,uint8_t value){
    if(pin <= PA7){
        switch(pin){
            case PA0:   A->PORT_REG.pin0=value;break;
            case PA1:   A->PORT_REG.pin1=value;break;
            case PA2:   A->PORT_REG.pin2=value;break;
            case PA3:   A->PORT_REG.pin3=value;break;
            case PA4:   A->PORT_REG.pin4=value;break;
            case PA5:   A->PORT_REG.pin5=value;break;
            case PA6:   A->PORT_REG.pin6=value;break;
            case PA7:   A->PORT_REG.pin7=value;break;
            default:    /* Do nth */
        }
    }
    else if(pin > PA7 && pin <= PB7){
        switch(pin){
            case PB0:   B->PORT_REG.pin0=value;break;
            case PB1:   B->PORT_REG.pin1=value;break;
            case PB2:   B->PORT_REG.pin2=value;break;
            case PB3:   B->PORT_REG.pin3=value;break;
            case PB4:   B->PORT_REG.pin4=value;break;
            case PB5:   B->PORT_REG.pin5=value;break;
            case PB6:   B->PORT_REG.pin6=value;break;
            case PB7:   B->PORT_REG.pin7=value;break;
            default:    /* Do nth */
        }
    }
    else if(pin > PB7 && pin <= PC7){
        switch(pin){
            case PC0:   C->PORT_REG.pin0=value;break;
            case PC1:   C->PORT_REG.pin1=value;break;
            case PC2:   C->PORT_REG.pin2=value;break;
            case PC3:   C->PORT_REG.pin3=value;break;
            case PC4:   C->PORT_REG.pin4=value;break;
            case PC5:   C->PORT_REG.pin5=value;break;
            case PC6:   C->PORT_REG.pin6=value;break;
            case PC7:   C->PORT_REG.pin7=value;break;
            default:    /* Do nth */
        }
    }
    else if(pin > PC7 && pin <= PD7){
        switch(pin){
            case PD0:   D->PORT_REG.pin0=value;break;
            case PD1:   D->PORT_REG.pin1=value;break;
            case PD2:   D->PORT_REG.pin2=value;break;
            case PD3:   D->PORT_REG.pin3=value;break;
            case PD4:   D->PORT_REG.pin4=value;break;
            case PD5:   D->PORT_REG.pin5=value;break;
            case PD6:   D->PORT_REG.pin6=value;break;
            case PD7:   D->PORT_REG.pin7=value;break;
            default:    /* Do nth */
        }
    }
}

uint8_t ReadPin(uint8_t pin){
    uint8_t val;
    if(pin <= PA7){
        switch(pin){
            case PA0:   val=A->PIN_REG.pin0;
            case PA1:   val=A->PIN_REG.pin1;
            case PA2:   val=A->PIN_REG.pin2;
            case PA3:   val=A->PIN_REG.pin3;
            case PA4:   val=A->PIN_REG.pin4;
            case PA5:   val=A->PIN_REG.pin5;
            case PA6:   val=A->PIN_REG.pin6;
            case PA7:   val=A->PIN_REG.pin7;
            default:    /* Do nth */
        }
    }
    else if(pin > PA7 && pin <= PB7){
        switch(pin){
            case PB0:   val=B->PIN_REG.pin0;
            case PB1:   val=B->PIN_REG.pin1;
            case PB2:   val=B->PIN_REG.pin2;
            case PB3:   val=B->PIN_REG.pin3;
            case PB4:   val=B->PIN_REG.pin4;
            case PB5:   val=B->PIN_REG.pin5;
            case PB6:   val=B->PIN_REG.pin6;
            case PB7:   val=B->PIN_REG.pin7;
            default:    /* Do nth */
        }
    }
    else if(pin > PB7 && pin <= PC7){
        switch(pin){
            case PC0:   val=C->PIN_REG.pin0;
            case PC1:   val=C->PIN_REG.pin1;
            case PC2:   val=C->PIN_REG.pin2;
            case PC3:   val=C->PIN_REG.pin3;
            case PC4:   val=C->PIN_REG.pin4;
            case PC5:   val=C->PIN_REG.pin5;
            case PC6:   val=C->PIN_REG.pin6;
            case PC7:   val=C->PIN_REG.pin7;
            default:    /* Do nth */
        }
    }
    else if(pin > PC7 && pin <= PD7){
        switch(pin){
            case PD0:   val=D->PIN_REG.pin0;
            case PD1:   val=D->PIN_REG.pin1;
            case PD2:   val=D->PIN_REG.pin2;
            case PD3:   val=D->PIN_REG.pin3;
            case PD4:   val=D->PIN_REG.pin4;
            case PD5:   val=D->PIN_REG.pin5;
            case PD6:   val=D->PIN_REG.pin6;
            case PD7:   val=D->PIN_REG.pin7;
            default:    /* Do nth */
        }
    }
}

void PortMode(uint8_t port,uint8_t mode){
    switch(port){
        case PORTA:     mode?(mode==1?(A->DDR_REG.DDR=PORT_HIGH):(A->DDR_REG.DDR=PORT_LOW,A->PORT_REG.PORT=PORT_HIGH)):(A->DDR_REG.DDR=PORT_LOW);break;
        case PORTB:     mode?(mode==1?(B->DDR_REG.DDR=PORT_HIGH):(B->DDR_REG.DDR=PORT_LOW,B->PORT_REG.PORT=PORT_HIGH)):(B->DDR_REG.DDR=PORT_LOW);break;
        case PORTC:     mode?(mode==1?(C->DDR_REG.DDR=PORT_HIGH):(C->DDR_REG.DDR=PORT_LOW,C->PORT_REG.PORT=PORT_HIGH)):(C->DDR_REG.DDR=PORT_LOW);break;
        case PORTD:     mode?(mode==1?(D->DDR_REG.DDR=PORT_HIGH):(D->DDR_REG.DDR=PORT_LOW,D->PORT_REG.PORT=PORT_HIGH)):(D->DDR_REG.DDR=PORT_LOW);break;
        default: /*Do nth*/
    }
}

void WritePort(uint8_t port,uint8_t value){
    switch(port){
        case PORTA:     A->PORT_REG.PORT=value;break;
        case PORTB:     B->PORT_REG.PORT=value;break;
        case PORTC:     C->PORT_REG.PORT=value;break;
        case PORTD:     D->PORT_REG.PORT=value;break;
        default: /*Do nth*/
    }
}

uint8_t ReadPort(uint8_t port){
    uint8_t val;
    switch(port){
        case PORTA:     val=A->PIN_REG.PIN;break;
        case PORTB:     val=B->PIN_REG.PIN;break;
        case PORTC:     val=C->PIN_REG.PIN;break;
        case PORTD:     val=D->PIN_REG.PIN;break;
        default: /*Do nth*/
    }
}
