/*
 * T0.h
 *
 * Created: 9/1/2022 9:41:09 PM
 *  Author: Ahmed Raoof
 */ 


#ifndef T0_H_
#define T0_H_
#include <math.h>
#include "../../RegFile.h"
#include "../../STD_TYPES.h"


//Flags

#define T0OVF 0 //timer0 overflow flag

//#define CLRT0F SET_BIT(TIFR,0)//clear T0 flag


//functions prototype

void T0_init(void);
void T0_Start(uint8_t initial_value,uint8_t prescale);
void T0_Stop(void);
void T0_wait(void);
//void T0_get_value(uint8_t*T0_value);//
//void T0_delay(uint16_t delay,char scale);





#endif /* T0_H_ */