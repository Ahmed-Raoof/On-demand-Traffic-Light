/*
 * button.c
 *
 * Created: 8/31/2022 4:46:50 PM
 *  Author: Ahmed Raoof
 */ 

#include "button.h"

void Button_init(uint8_t portNumber,uint8_t pinNumber)
{
	DIO_init(portNumber,pinNumber,IN);
}
void Button_read(uint8_t portNumber,uint8_t pinNumber,uint8_t *value)
{
	DIO_read(portNumber,pinNumber,value);
}