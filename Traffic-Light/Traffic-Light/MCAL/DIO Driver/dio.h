/*
 * dio.h
 *
 * Created: 8/31/2022 11:44:08 AM
 *  Author: Ahmed Raoof
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../STD_TYPES.h"
#include "../../RegFile.h"
//all internal driver typedefs
//all driver macros
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

//Direction defines
#define IN 0
#define OUT 1

//Value defines
#define LOW 0
#define HIGH 1



//all functions prototype

void DIO_init(uint8_t portNumber,uint8_t pinNumber,uint8_t direction); //initialization DIO directio
void DIO_write(uint8_t portNumber,uint8_t pinNumber,uint8_t value); // write DIO	
void DIO_toggle(uint8_t portNumber,uint8_t pinNumber); //toggle DIO
void DIO_read(uint8_t portNumber,uint8_t pinNumber,uint8_t *value);	//read DIO



#endif /* DIO_H_ */