/*
 * Blink.c
 *
 * Created: 09-05-2023 10:17:35 PM
 * Author : DONY THOMAS
 */ 
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB = 0b00100000; // set PB5 as output
	for(;;)
	{
		_delay_ms(1000);
		PORTB = 0b00100000;
		_delay_ms(100);
		PORTB = 0b00000000;
	}
	return 0;
}

