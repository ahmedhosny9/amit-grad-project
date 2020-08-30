/*
 * SPI_DRIVER.c
 *
 * Created: 07/08/2020 11:51:05 
 * Author : Ali
 */ 

#include "spi_app.h"
//#include "UART.h"
#include "LCD.h"
#include <avr/interrupt.h>
#define F_CPU 4000000
#include <util/delay.h>

extern tx; 
extern rx;

int main(void)
{
sei();
	LCD_Init();
	SPI_Master_Init();
	UART_Init();
	ExternaINT0_Init();
	
	
	LCD_GoTo(0,0);
	LCD_WriteString(" welcome sir  ");
	LCD_GoTo(1,0);
	LCD_WriteString("save password");
	
	
    while (1) 
    {
		tx=0;
		rx = SPI_TranSiver(tx);
		
		PASSWORD_FUN();
		//TEMP_FUN();
		
}
}

ISR(INT0_vect)
{
	cli();
	main();
	sei();
}
