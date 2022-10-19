/*
 * T1.c
 *
 * Created: 9/7/2022 9:45:52 AM
 *  Author: Ahmed Raoof
 */ 
#include "T1.h"


void T1_init(void)
{
	TCCR1A=0x00;
	TCCR1B=0x00;
}



void T1_start(void)
{
	TCNT1=65536-4883;// Total ticks=65536....required ticks = 4883
	TCCR1B |=0x05;	//	clk/1024......OVT=67.1s
}
void T1_stop(void)
{
	TCCR1B=0x00;
	SET_BIT(TIFR,T1OVF);
}

void T1_wait(void)
{
	while(READ_BIT(TIFR,T1OVF)==0);
}