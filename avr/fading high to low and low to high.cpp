/*
 * fading.cpp
 *
 * Created: 9/26/2025 9:34:12 AM
 * Author : ADMIN
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD|=(1 << PD6);
	TCCR0A|=(1 << WGM01);
	TCCR0A|=(1 << WGM00);
	TCCR0B&=~(1 << WGM02);
	TCCR0A|=(1 << COM0A1);
	TCCR0A&=~(1 << COM0A0);
	TCCR0B|=(1 << CS01);
	TCCR0B|=(1 << CS00);
	TCCR0B&=~(1 << CS02);
	int i;
	while (1)
	{
	for (i = 0;i< 255;i++)
		{
		OCR0A =i;
			_delay_ms(10);
		}
		for (i= 255;i>= 0;i--)
		{
	OCR0A =i;
	_delay_ms(10);
		}
	}
}

