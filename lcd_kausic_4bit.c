/* 
 * lcd_kausic_4bit.c
 *
 * Created: 5/31/2013 3:34:40 PM
 *  Author: admin
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include <stdlib.h>
#include "kau_lcd4.h"
int main(void)
{
	char *str;
	initialize();
	lcd_write("kausic here");
	moveto(1,0);
	disp_int(94);
	_delay_ms(2000);
	clr_lcd();
	center("thank you");
	_delay_ms(1000);
	clr_lcd();
	bounce(1,200,"bouncing");
    while(1)
    {
        //TODO:: Please write your application code 
    }
}

