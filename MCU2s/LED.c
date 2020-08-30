
#include "LED.h"



/************** This function Initialises the LED0 in the AMIT kit ****************************/
void LED0_Init(void)
{
	
	/*set the bit number 2 in the DDRC Register to initiate the pin's direction as output*/
	DIO_SetPinDir(DIO_PORTC, DIO_PIN2 ,DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTC, DIO_PIN7 ,DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTD, DIO_PIN3 ,DIO_PIN_OUTPUT);
}



/************** This function Turns on the LED0 in the AMIT kit ****************************/
void LED0_ON(void)
{
	/*set the bit number 2 in the PORTC Register to generate 5v*/
	DIO_WritePin(DIO_PORTC, DIO_PIN2 ,DIO_PIN_HIGH);
	
}
void LED1_ON(void)
{
	/*set the bit number 2 in the PORTC Register to generate 5v*/
	DIO_WritePin(DIO_PORTC, DIO_PIN7 ,DIO_PIN_HIGH);
	
}
void LED2_ON(void)
{
	/*set the bit number 2 in the PORTC Register to generate 5v*/
	DIO_WritePin(DIO_PORTD, DIO_PIN3 ,DIO_PIN_HIGH);
	
}


/************** This function Turns off the LED0 in the AMIT kit ****************************/
void LED0_OFF(void)
{
	/*clear the bit number 2 in the PORTC Register to generate 0v*/
	DIO_WritePin(DIO_PORTC, DIO_PIN2 ,DIO_PIN_LOW);
}
void LED1_OFF(void)
{
	/*clear the bit number 2 in the PORTC Register to generate 0v*/
	DIO_WritePin(DIO_PORTC, DIO_PIN7 ,DIO_PIN_LOW);
}
void LED2_OFF(void)
{
	/*clear the bit number 2 in the PORTC Register to generate 0v*/
	DIO_WritePin(DIO_PORTD, DIO_PIN3 ,DIO_PIN_LOW);
}

/************** This function Toggles the LED0 in the AMIT kit ****************************/
void LED0_toggle(void)
{
	/*toggle the value in the bit number 2 in the PORTC Register */
	//DIO_TogglePin(DIO_PORTC  , DIO_PIN2);
	//DIO_TogglePin(DIO_PORTC  , DIO_PIN7);
	//DIO_TogglePin(DIO_PORTD  , DIO_PIN3);
	LED0_ON();LED1_ON();LED2_ON();
	_delay_ms(100);
	LED0_OFF();LED1_OFF();LED2_OFF();
	
}