/*
 * CTC_INTERRUPT.c
 *
 * Created: 10/1/2025 10:09:06 AM
 * Author : ADMIN
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include<stdint.h>
volatile uint16_t count=0;
ISR(TIMER0_COMPA_vect)
{
		count++;
		if(count>=977)
		{
			PORTB^=(1<<PORTB5);
			count=0;
		}	
}
int main(void)
{
	DDRB|=(1<<DDB5);
	TCCR0A|=(1 << WGM01);    // Set WGM01 = 1
	TCCR0A&=~(1 << WGM00);   // WGM00 = 0
	TCCR0B&=~(1 << WGM02);   // WGM02 = 0
	OCR0A = 249;   // Compare value
	TCCR0B|=(1<<CS01)|(1<<CS00);//Prescaler = 64
	TIMSK0|=(1 << OCIE0A);// Enable Timer0 Compare Match A interrupt
	sei();
    while (1) 
    {
    }
}

