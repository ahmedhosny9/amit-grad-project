/*
 * relay.c
 *
 * Created: 8/22/2020 2:24:14 PM
 *  Author: ahmed
 */ 

#include "relay.h"


void relay_init(void){
	
DIO_SetPinDir(DIO_PORTA, DIO_PIN2 ,DIO_PIN_OUTPUT);	
}
void relay_on(void){
	
DIO_WritePin(DIO_PORTA, DIO_PIN2 ,DIO_PIN_HIGH);
	
}
void relay_off(void){
	
DIO_WritePin(DIO_PORTA, DIO_PIN2 ,DIO_PIN_LOW);

}
