/*
 * app.c
 *
 * Created: 9/7/2022 12:55:49 PM
 *  Author: Ahmed Raoof
 */ 


#include "app.h"


//#include <setjmp.h>
//jmp_buf buf;

  volatile uint8_t flag=0;
  volatile uint8_t Current_State =Red;
  volatile uint8_t  Prev_State =Red;


void App_init(void)
{
	
	//setjmp(buf);
	
	
	//timers initialization
	T0_init();
	T1_init();
	
	
	//LEDs initializations//
	
	//car LEDs
	led_init(PORT_A,0);
	led_init(PORT_A,1);
	led_init(PORT_A,2);
	
	
	//pedestrians LEDs
	led_init(PORT_B,0);
	led_init(PORT_B,1);
	led_init(PORT_B,2);		
	
	
	//button initializations
	Button_init(PORT_D,2);
	
	//INT0 Initialization
	INT0_init();
	
}
void App_start(void)
{
	
	uint8_t i=0;//counter initialization for Yellow LED
	
	while(1)
	{
	//	setjmp(buf);
		
		
		
		
		if(Current_State == Red)
		{
			led_on(PORT_A,Red);
			T1_start();
			T1_wait();
			T1_stop();
			led_off(PORT_A,Red);
			Prev_State = Red;
			Current_State=Yellow;
			
		}
	 	else if(Current_State==Yellow)
		{  
			//T1_start();
			while(i<20)
			{
				led_blink(PORT_A,Yellow);
				i++;
				
			if(flag==1){
					flag=0;
				break;}		
			}
			led_off(PORT_A,Yellow);
			i=0;
			//T1_stop();
			if (Prev_State==Red)
			{
				Current_State=Green;
			}
			else if (Prev_State==Green)
			{
				Current_State= Red;
			}
			
		}
		else if(Current_State==Green)
		{
			led_on(PORT_A,Green);
			T1_start();
			T1_wait();
			T1_stop();
			led_off(PORT_A,Green);
			Prev_State=Green;
			Current_State=Yellow;
		}
	}
}








void __vector_1 (void)    __attribute__((signal));
void __vector_1 (void)
{
	INT0_Disable();
	if (Current_State==Red)
	{
		led_on(PORT_B,Green);
		T1_start();
		T1_wait();
		led_off(PORT_B,Green);	
	}
	else if(Current_State==Green || Current_State==Yellow)
	{
		uint8_t z=0;
		
		
		led_off(PORT_A,Yellow);
		led_off(PORT_A,Green);
		
		/////////////////////////////////////////////////////////////////////////////////
		
		
		
		led_on(PORT_B,Red);
		
		for(uint8_t x=0;x<2;x++){
		T0_Start(250,5);
		while(READ_BIT(TIFR,T0OVF)==0);
		T0_Stop();
		}
		led_off(PORT_B,Red);
		while(z<10)
		{
			led_blink(PORT_A,Yellow);
			led_blink(PORT_B,Yellow);
			z++;
		}
		T0_Start(250,5);
		led_off(PORT_A,Yellow);
		led_off(PORT_B,Yellow);
		z=0;
		//////////////////////////////////////////////////////////////////////////
		led_on(PORT_B,Green);
		led_on(PORT_A,Red);
		T1_start();
		T1_wait();
		led_off(PORT_B,Green);
		led_off(PORT_A,Red);
		Prev_State=Red;
		Current_State=Yellow;
	
		
	}
	INT0_Enable();
	//flag=1;
}