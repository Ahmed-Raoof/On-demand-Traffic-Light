/*
 * dio.c
 *
 * Created: 8/31/2022 11:44:24 AM
 *  Author: Ahmed Raoof
 */ 

//include files
#include "dio.h"



//global variables


//functions definition


void DIO_init(uint8_t portNumber,uint8_t pinNumber,uint8_t direction)
{
	switch (portNumber)
	{
		//PORTA
		case PORT_A:
		if (direction==IN)
		{
			DDRA&=(~(1<<pinNumber));
		}
		
		else if(direction==OUT)
		{
			DDRA |= (1<<pinNumber);
			
		}
		else 
		{
			//Error Handling
		}
		break;
		
		//PORTB
		case PORT_B:
		if (direction==IN)
		{
			DDRB &=(~(1<<pinNumber));
		}
		
		else if(direction==OUT)
		{
			DDRB |= (1<<pinNumber);
			
		}
		else
		{
			//Error Handling
		}
		break;
		//PORTC
		
		case PORT_C:
		if (direction==IN)
		{
			DDRC&=(~(1<<pinNumber));
			
		}
		
		else if(direction==OUT)
		{
			DDRC |= (1<<pinNumber);
			
		}
		else
		{
			//Error Handling
		}
		break;
		
		//PORTD
		
		
		case PORT_D:
		if (direction==IN)
		{
			DDRD &=(~(1<<pinNumber));
		}
		
		else if(direction==OUT)
		{
			DDRD |= (1<<pinNumber);
		}
		else
		{
			//Error Handling
		}
		break;
		
	}
}
void DIO_write(uint8_t portNumber,uint8_t pinNumber,uint8_t value) // write DIO
{
	switch (portNumber)
	{
		//PORTA
		case PORT_A:
		if (value==LOW)
		{
			PORTA &=(~(1<<pinNumber));
		}
		
		else if(value==HIGH)
		{
			PORTA |= (1<<pinNumber);
			
		}
		else
		{
			//Error Handling
		}
		break;
		
		//PORTB
		case PORT_B:
		if (value==LOW)
		{
			PORTB &=(~(1<<pinNumber));
		}
		
		else if(value==HIGH)
		{
			PORTB |= (1<<pinNumber);
			
		}
		else
		{
			//Error Handling
		}
		break;
		//PORTC
		
		case PORT_C:
		if (value==LOW)
		{
			PORTC &=(~(1<<pinNumber));
			
		}
		
		else if(value==HIGH)
		{
			PORTC |= (1<<pinNumber);
			
		}
		else
		{
			//Error Handling
		}
		break;
		
		//PORTD
		
		
		case PORT_D:
		if (value==LOW)
		{
			PORTD &=(~(1<<pinNumber));
		}
		
		else if(value==HIGH)
		{
			PORTD |= (1<<pinNumber);
		}
		else
		{
			//Error Handling
		}
		break;
		
	}
}
void DIO_toggle(uint8_t portNumber,uint8_t pinNumber) //toggle DIO
{
	switch (portNumber)
	{
	case PORT_A:
		TGL_BIT(PORTA,pinNumber);
		break;
		
	case PORT_B:
		TGL_BIT(PORTB,pinNumber);
		break;
		
	case PORT_C:
		TGL_BIT(PORTC,pinNumber);
		break;
		
			
	case PORT_D:
		TGL_BIT(PORTD,pinNumber);
		break;
	}
}


//DIO Read
void DIO_read(uint8_t portNumber,uint8_t pinNumber,uint8_t *value)	//read DIO
{
	switch (portNumber)
	{
	case PORT_A:
		*value=READ_BIT(PINA,pinNumber);
		break;
		
		
	case PORT_B:
		*value=READ_BIT(PINB,pinNumber);
		break;
		
		
	case PORT_C:
		*value=READ_BIT(PINC,pinNumber);
		break;
		
		
	case PORT_D:
		*value=READ_BIT(PIND,pinNumber);
		break;		
	}
}