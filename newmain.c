// PIC16F887 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FOSC = INTRC_NOCLKOUT
#pragma config WDTE = OFF      
#pragma config PWRTE = OFF      
#pragma config MCLRE = ON       
#pragma config CP = OFF         
#pragma config CPD = OFF        
#pragma config BOREN = ON       
#pragma config IESO = ON        
#pragma config FCMEN = ON       
#pragma config LVP = ON         


#pragma config BOR4V = BOR40V   
#pragma config WRT = OFF        



#define _XTAL_FREQ 4000000
#include <xc.h>

void __interrupt () my_isr_routine (void)
{
    if (INTCONbits.T0IF)
    {
      
        TMR0=256-234;
 INTCONbits.T0IF=0;
    }
return;
}

void main(void) {
    INTCON      =0b10100000;
    OPTION_REG  =0b11010111;
    return;
}