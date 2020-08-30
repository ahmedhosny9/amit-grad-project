/*
 * spi_app.c
 *
 * Created: 8/22/2020 1:42:25 PM
 *  Author: ahmed
 */ 
#include "spi_app.h"


uint8 tx,rx;

void spi_fun1(void)
{
	

	 tx=1;
	rx=SPI_TranSiver(tx);
	
	//if (rx=='10'){ CHACKPASS_bluotooth_FUN();}
	
//	SPI_SetCallBack(SPI_TranSiver(tx));	
}

void spi_fun2(void)
{
	
	tx=2;
   rx=  SPI_TranSiver(tx);
	
	  
}

void spi_fun3(void)
{
	
	
	 tx=3;
	rx=SPI_TranSiver(tx);
	
}

void spi_fun4(void)
{
	
	
	 tx=4;
	rx= SPI_TranSiver(tx);
	 
	  
}


void spi_bluotooth(void)
{
	uint8 a=0,b=0,c=0,d=0,e=0,ttx;

	sint32 temp = 0;
	
	UART_SendString ("LED green(1)");
	UART_SendString("LED yellow(2)");
	UART_SendString   ("LED red(3)");
	UART_SendString     ("relay(4)");
	UART_SendString    ("buzzer(5)");
	
	while(1){
		
		LCD_GoTo(0,0);
		
		ttx = UART_ReceiveChar();
		
		// SPI_TranSiver(ttx);
	rx = SPI_TranSiver(ttx);
	
		
		if (ttx=='1')
		{
			ttx='a';
			if (a==0)
			{
				UART_SendString("LED green is on");
				a=1;
				SPI_TranSiver(ttx);
				continue;
			}
			a=0;
				UART_SendString("LED green is off");
				SPI_TranSiver(ttx);
				
			
		}
		
		
	else	if (ttx =='2')
		{
			ttx='b';
			if (b==0)
			{
				UART_SendString("LED yellow is on");
				b=1;
				SPI_TranSiver(ttx);
				continue;
			}
			b=0;
				UART_SendString("LED yellow is off");
				
				 SPI_TranSiver(ttx);
				
			
		}
		
		
	else	if (ttx=='3')
		{
			ttx='c';
			if (c==0)
			{
				UART_SendString("LED red is on");
				c=1;
				SPI_TranSiver(ttx);
				continue;
			}
			c=0;
				UART_SendString("LED red is off");
				
				 SPI_TranSiver(ttx);
				
		}
		
		
	else	if (ttx=='4')
		{
			ttx='d';
			if (d==0)
			{
				UART_SendString("relay is on");
				d=1;
				SPI_TranSiver(ttx);
				continue;
			}
			d=0;
				UART_SendString("relay is off");
				
				SPI_TranSiver(ttx);
				
		}
		
		
	else	if (ttx=='5')
		{
			ttx='e';
			if (e==0)
			{
				UART_SendString("buzzer is on");
				e=1;
				SPI_TranSiver(ttx);
				continue;
			}
			e=0;
				UART_SendString("buzzer is off");
				
				SPI_TranSiver(ttx);
				
		}
	else	if (ttx=='0')
		{
			
			//ttx = UART_ReceiveChar();
			UART_SendString("back to normal system");
			_delay_ms(1000);
			CHACKPASS_FUN();
		}
 
	}
	
}	

