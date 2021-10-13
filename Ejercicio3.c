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

const unsigned char DIGITOS[10] = {0x3F, 0x06,  0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};

void mostrar_numeros(int valor) {
    unsigned short aux=0;
    unsigned short cen=0;
    unsigned short dec=0;
    unsigned short uni=0;

    aux=valor/1000;
    cen=(valor-aux*1000)/100;
    dec=(valor-aux*1000-cen*100)/10;
    uni=valor-aux*1000-cen*100-dec*10;

    PORTC=DIGITOS[uni];
    RD3=1;
    __delay_ms(5);
    PORTD=0x00;

    PORTC=DIGITOS[dec];
    RD2=1;
    __delay_ms(5);
    PORTD=0x00;

    PORTC=DIGITOS[cen];
    RD1=1;
    __delay_ms(5);
    PORTD=0x00;

    PORTC=DIGITOS[aux];
    RD0=1;
    __delay_ms(5);
    PORTD=0x00;

}

int main(void) {
    unsigned char cont=0;
    int valor=0;

    PORTC=0x00;
    TRISC=0x00;
    PORTD=0x00;
    TRISD=0x00;

    while(1) {
        mostrar_numeros(valor);
        cont++;

        if(cont==5) {
            
            cont=0;
            valor++;

            if(valor==9999) {
                valor=0;
            }
        }
    }

    return 0;

}