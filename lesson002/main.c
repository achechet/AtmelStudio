/*
 * lesson002.c
 *
 * Created: 09.03.2022 8:56:09
 * Author : Alex Ch
 */ 

#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= (1<<5);
	
    while (1) 
    {
		PORTB |= (1<<5);
		_delay_ms(1000);
		asm volatile("nop");
		PORTB &= ~(1<<5);
		_delay_ms(1000);
		asm volatile("nop");
    }
}

