/*
 * led.h
 *
 * Created: 8/31/2022 3:05:12 PM
 *  Author: Ahmed Raoof
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO Driver/dio.h"
#include "../../MCAL/T0 Driver/T0.h"
#include "../../MCAL/T1 Driver/T1.h"





void led_init(uint8_t ledPort,uint8_t ledPin);
void led_on(uint8_t ledPort,uint8_t ledPin);
void led_off(uint8_t ledPort,uint8_t ledPin);
void led_toggle(uint8_t ledPort,uint8_t ledPin);
void led_blink(uint8_t ledPort,uint8_t ledPin);





#endif /* LED_H_ */