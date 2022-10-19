/*
 * button.h
 *
 * Created: 8/31/2022 4:46:32 PM
 *  Author: Ahmed Raoof
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO Driver/dio.h"
#include "../../STD_TYPES.h"

#define Button1_Port PORT_C
#define Button1_PIN  0

#define Button2_Port PORT_C
#define Button2_PIN  3



void Button_init(uint8_t portNumber,uint8_t pinNumber);
void Button_read(uint8_t portNumber,uint8_t pinNumber,uint8_t *value);





#endif /* BUTTON_H_ */