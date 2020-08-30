/*
 * buzzer.c
 *
 * Created: 8/22/2020 3:21:20 PM
 *  Author: ahmed
 */ 

#include "buzzer.h"


void buzzer_init(void)
{
	DIO_SetPinDir(DIO_PORTA, DIO_PIN3 ,DIO_PIN_OUTPUT);	
}
void buzzer_on(void)
{
	DIO_WritePin(DIO_PORTA, DIO_PIN3 ,DIO_PIN_HIGH);
}
void buzzer_off(void)
{
	DIO_WritePin(DIO_PORTA, DIO_PIN3 ,DIO_PIN_LOW);
}