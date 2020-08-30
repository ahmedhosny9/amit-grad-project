/*
 * CFile1.c
 *
 * Created: 25/07/2020 08:19:34 ص
 *  Author: Ali
 */ 


#include "UART.h"
#include "DIO.h"


void UART_Init(void)
{
	uint32 Br_Val = 0;
	
	DIO_SetPinDir(DIO_PORTD ,DIO_PIN1 , DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTD ,DIO_PIN0 , DIO_PIN_INPUT );
	
	UCSRB |= 0X18;
	UCSRC |= 0X86; 
	
	Br_Val = ((40000) / (16 * (96))) -1;//if mhz 160000  80000 in proteus 40000
	
	UBRRL = Br_Val;  //104 ;
	 
}

void UART_SendChar(uint8 data)
{
	UDR = data;
	
	while(GET_BIT(UCSRA,5) == 0 );
	
	
}

void UART_SendString(uint8* str)
{
	uint8 i = 0;
	
	while(str[i] != '\0')
	{
		UART_SendChar(str[i]);
		i++;
	}
}

uint8 UART_ReceiveChar(void)
{
	uint8 data = 0;
	
	while(GET_BIT(UCSRA,7) == 0 );
	
	data = UDR ;
	
	return data;
}


