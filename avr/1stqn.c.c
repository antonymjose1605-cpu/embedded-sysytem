/*
 * blink.c
 *
 * Created: 9/9/2025 10:06:50 AM
 * Author : ADMIN
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
	DDRD=0b00001000;
	DDRB=0b00000000;
	while (1)
	{
		if(PINB==0b00000001)
		{
			PORTD=0b00001000;
		}
		else
		{
			PORTD=0b00000000;
		}
	}
}


