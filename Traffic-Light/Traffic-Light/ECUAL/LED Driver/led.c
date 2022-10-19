/*
 * led.c
 *
 * Created: 8/31/2022 3:04:58 PM
 *  Author: Ahmed Raoof
 */ 



#include "led.h"

void led_init(uint8_t ledPort,uint8_t ledPin)
{
	DIO_init(ledPort,ledPin,OUT);
}
void led_on(uint8_t ledPort,uint8_t ledPin)
{
	DIO_write(ledPort,ledPin,HIGH);
}
void led_off(uint8_t ledPort,uint8_t ledPin)
{
	DIO_write(ledPort,ledPin,LOW);
}
void led_toggle(uint8_t ledPort,uint8_t ledPin)
{
	DIO_toggle(ledPort,ledPin);
}
void led_blink(uint8_t ledPort,uint8_t ledPin)
{
	led_toggle(ledPort,ledPin);
	T0_Start(250,5);
	while(READ_BIT(TIFR,T0OVF)==0);
	T0_Stop();
}