/*
 * app.h
 *
 * Created: 9/7/2022 12:56:04 PM
 *  Author: Ahmed Raoof
 */ 


#ifndef APP_H_
#define APP_H_

#include "../MCAL/T1 Driver/T1.h"
#include "../MCAL/T0 Driver/T0.h"
#include "../ECUAL/BUTTON Driver/button.h"
#include "../ECUAL/LED Driver/led.h"
#include "../RegFile.h"
#include "../STD_TYPES.h"
#include "../MCAL/EXINT Driver/EXINT.h"

#define Red		0
#define Yellow  1
#define Green	2



void App_init(void);
void App_start(void);



#endif /* APP_H_ */