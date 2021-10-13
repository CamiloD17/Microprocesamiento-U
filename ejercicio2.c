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
#define bits 4
int main(void){
    
  ANSELH=0x00;
  PORTB=0x00;
  TRISB=0x00;

    int i;

    while(true) {

        for(i=0; i<=bits; i++) {
            __delay_ms(100);
            PORTB=0B0000;
            __delay_ms(1000);
            PORTB=0B0001;
            __delay_ms(1000);
            PORTB=0B0011;
            __delay_ms(1000);
            PORTB=0B0010;
            __delay_ms(1000);
            PORTB=0B0110;
            __delay_ms(1000);
            PORTB=0B0111;
            __delay_ms(1000);
            PORTB=0B0101;
            __delay_ms(1000);
            PORTB=0B0100;
            __delay_ms(1000);
            PORTB=0B1100;
            __delay_ms(1000);
            PORTB=0B1101;
            __delay_ms(1000);
            PORTB=0B1111;
            __delay_ms(1000);
            PORTB=0B1110;
            __delay_ms(1000);
            PORTB=0B1010;
            __delay_ms(1000);
            PORTB=0B1011;
            __delay_ms(1000);
            PORTB=0B1001;
            __delay_ms(1000);
            PORTB=0B1000;
            __delay_ms(1000);
        }
        
    }
    
    return 0;
}
