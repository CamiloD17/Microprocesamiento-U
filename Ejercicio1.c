#include <xc.h>

#pragma config FOSC = HS 
#pragma config WDTE = OFF 
#pragma config PWRTE = OFF 
#pragma config MCLRE = ON
#pragma config CP = OFF 
#pragma config CPD = OFF 
#pragma config BOREN = OFF 
#pragma config IESO = OFF
#pragma config FCMEN = OFF
#pragma config LVP = OFF 
#pragma config DEBUG = OFF 

#define _XTAL_FREQ 20000000
#define true 1
#define bits 8
#define pulsador RA7

int main(void) {

    ANSELH = 0x00;
    PORTB = 0x00;
    TRISB = 0x00;
    PORTA = 0x00;
    TRISA = 0x80;

    int cont = 0, i;

    while(true) {
        if(pulsador==0) {
            __delay_ms(100);

            if(pulsador==0) {
                cont++;
                __delay_ms(100);
            }
        }

        if(cont==1) {
            //Desplazamiento derecha a izquierda
            PORTB=0B00000001;
            __delay_ms(500);

            for(i=0; i<=bits; i++) {
                PORTB=PORTB<<1;
                __delay_ms(500);
            }

            cont=2;
        }

        if(cont==3) {
            //Desplazamiento izquierda a derecha
            PORTB=0B10000000;
            __delay_ms(500);

            for(i=0; i<=bits; i++) {
                PORTB=PORTB>>1;
                __delay_ms(500);
            }

            cont=4;
        }

        if(cont==5) {
            //Desplazamiento centros a extremos
            PORTB=0B00011000;
            __delay_ms(500);
            PORTB=0B00100100;
            __delay_ms(500);
            PORTB=0B01000010;
            __delay_ms(500);
            PORTB=0B10000001;
            __delay_ms(500);
            PORTB=0x00;
            cont=6;
        }

        if(cont==7) {
            //Desplazamiento extremos a centros
            PORTB=0B10000001;
            __delay_ms(500);
            PORTB=0B01000010;
            __delay_ms(500);
            PORTB=0B00100100;
            __delay_ms(500);
            PORTB=0B00011000;
            __delay_ms(500);
            PORTB=0x00;
            cont=0;
        }
    }

    return 0;

}

