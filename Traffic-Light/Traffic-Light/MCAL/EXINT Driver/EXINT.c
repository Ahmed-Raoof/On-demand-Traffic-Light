/*
 * EXINT.c
 *
 * Created: 9/7/2022 5:41:03 PM
 *  Author: Kimo Store
 */ 


#include "EXINT.h"


void INT0_init(void)
{
	
	SET_BIT(SREG,GIE);//General INT Enable
	MCUCR=0x02;//for failing edge sensing
	SET_BIT(GICR,6);//Enable INT0
}
void INT0_Enable(void)
{
	SET_BIT(GICR,6);
}
void INT0_Disable(void)
{
	CLR_BIT(GICR,6);
}
