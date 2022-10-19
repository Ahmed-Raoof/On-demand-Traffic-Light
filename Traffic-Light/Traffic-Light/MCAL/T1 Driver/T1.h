/*
 * T1.h
 *
 * Created: 9/7/2022 9:45:39 AM
 *  Author: Ahmed Raoof
 */ 


#ifndef T1_H_
#define T1_H_

#include <math.h>
#include "../../RegFile.h"
#include "../../STD_TYPES.h"

#define T1OVF 2


void T1_init(void);
void T1_start(void);
void T1_stop(void);
void T1_wait (void);
//void T1_delay_5(void);





#endif /* T1_H_ */


/*switch (state)
{
	
	
	red_state :
		
		while (5s);
		state = yellow;
		prev=red;
		
		
	yellow_state :
		
		while (5s);
		if(prev==red)
		{
			state = green;
		}
		else if (prev==green)
		{
			state = red;
		}
		
		
	green_state: 
	
	while (5s);
	state = yellow;
	prev = green;*/