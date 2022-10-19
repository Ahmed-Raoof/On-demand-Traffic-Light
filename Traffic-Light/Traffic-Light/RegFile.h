/*
 * RegFile.h
 *
 * Created: 8/31/2022 11:22:18 AM
 *  Author: Ahmed Raoof
 * AVR ATmega32A all Registers
 */ 


#ifndef REGFILE_H_
#define REGFILE_H_

#include "STD_TYPES.h"

/************************************************************************/
/*				DIO all Registers                                                    */
/************************************************************************/

//PORTA Registers

#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)

//PORTB Registers

#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

//PORTA Registers

#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)

//PORTA Registers

#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)



/************************************************************************/
/* Timer0 Registers                                                     */
/************************************************************************/


#define TIMSK *((volatile uint8_t*)0x59) //timer interrupt mask register
#define TIFR *((volatile uint8_t*)0x58)	 //timer interrupt flag register
#define TCCR0 *((volatile uint8_t*)0x53) //timer control register (Configurations)
#define TCNT0 *((volatile uint8_t*)0x52) //timer data register (timer value)




/************************************************************************/
/* Timer1 Registers                                                     */
/************************************************************************/

#define TCCR1A *((volatile uint8_t*)0x4F) //timer control register (Configurations)
#define TCCR1B *((volatile uint8_t*)0x4E) //timer control register (Configurations)
#define TCNT1H *((volatile uint8_t*)0x4D) //timer data register (timer value)
#define TCNT1L *((volatile uint8_t*)0x4C) //timer data register (timer value)
#define TCNT1 *((volatile uint16_t*)0x4C)
#define OCR1AH *((volatile uint8_t*)0x4B)
#define OCR1AL *((volatile uint8_t*)0x4A)
#define OCR1A *((volatile uint16_t*)0x4A)
#define ICR1H *((volatile uint8_t*)0x49)
#define ICR1L *((volatile uint8_t*)0x48)
#define ICR1 *((volatile uint16_t*)0x48)







/************************************************************************/
/* EXTINT Registers                                                     */
/************************************************************************/


#define SREG *((volatile uint8_t*)0x5F)//General INT Reg with Pin 7
#define GIE 7//Global INT Enable bit
#define GICR *((volatile uint8_t*)0x5B)//General INT Control Reg
#define GIFR *((volatile uint8_t*)0x5A)//General INT Flag Reg
#define MCUCR *((volatile uint8_t*)0x55) //Choosing sense control [LOW_LEVEL,RISING,FAILING] from pins 0,1,2,3 (ISC)
//#define MCUCSR *((volatile uint8_t*)0x54) // 




#endif /* REGFILE_H_ */