/*
 * T0.c
 *
 * Created: 9/1/2022 9:40:54 PM
 *  Author: Ahmed Raoof
 */ 


#include "T0.h"


void T0_init(void)
{
	TCCR0 =0x00;
}
void T0_Start(uint8_t initial_value,uint8_t prescale)
{
	
	TCNT0=265-initial_value;
	TCCR0 |=prescale;
}
void T0_Stop(void)
{
	TCCR0=0x00;
	SET_BIT(TIFR,T0OVF);
}
void T0_wait(void)
{
	while(READ_BIT(TIFR,T0OVF)==0);
}
//void T0_get_value(uint8_t*T0_value)
//{
	//T0_value=TCNT0;
//}
/*void T0_delay(uint16_t delay,char scale)
{
	if((delay<=256) && (scale=='u'))
	{
		T0_init((256-delay));
		T0_Start(1);
		while(T0OVF==0);
		T0_Stop();
	}
	else if ((delay>256) && (scale== 'u'))
	{
		uint16_t cnt=0;
		while (cnt<ceil(delay/256))
		{
			T0_init(256-(delay%256));
			T0_Start(1);
			while(T0OVF==0);
			T0_Stop();
			cnt++;
		}
		cnt=0;
	
	}
	else if((delay<=256)&&(scale =='m'))
	{
		delay*=1000;
		uint16_t cnt=0;
		while (ceil(delay/256)>cnt)
		{
			T0_init(256-((delay%256)));
			T0_Start(1);
			while(T0OVF==0);
			T0_Stop();
			cnt++;
		}
		cnt=0;
	}
}*/