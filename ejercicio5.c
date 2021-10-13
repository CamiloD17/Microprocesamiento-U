#include <xc.h>
#define _XTAL_FREQ 8000000
#include "flex_lcd.h"
#include <stdio.h>
#define true 1

// PIC16F887 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FOSC = EXTRC_CLKOUT// Oscillator Selection bits (RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, RC on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = ON      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = ON       // Brown Out Reset Selection bits (BOR enabled)
#pragma config IESO = ON        // Internal External Switchover bit (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
#pragma config LVP = ON         // Low Voltage Programming Enable bit (RB3/PGM pin has PGM function, low voltage programming enabled)

// CONFIG2
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

void main(void) {
     
    OSCCONbits.IRCF=0b1110;
    OSCCONbits.SCS=0b00;
    
    ANSELH=0;
    Lcd_Init();
    Lcd_Cmd(LCD_CLEAR);
    Lcd_Cmd(LCD_CURSOR_OFF);
    __delay_ms(50);
    
    unsigned char Hora=6;
    unsigned char Minuto=58;
    unsigned char valor1[12];
    unsigned char valor2[59];
    
    while(true) {

        Lcd_Out(1, 1, "Santa Marta");
        Lcd_Out(2, 1, "Hora");
        Lcd_Out(2, 9, ":");
        Lcd_Out(2, 13, "a.m");
        
        sprintf(valor1,"%02d",Hora);
        Lcd_Out2(2,7, valor1);
        sprintf(valor2,"%02d",Minuto);
        Lcd_Out2(2,10, valor2);
        
        if(Minuto>=59) {
            Hora++;
            Minuto=0;
        }else {
            Minuto++;
        }
        if(Hora>12){       
            Hora=Hora-12;
        }
         __delay_ms(2500);
    }
    return;
}