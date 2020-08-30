/*
 * SPI_Slave_Driver.c
 *
 * Created: 07/08/2020 12:46:14 
 * Author : Ali
 */ 

#include "SPI.h"
#include "LED.h"
#include "relay.h"
#include "Servo.h"
#include "buzzer.h"
#include "app.h"
#define F_CPU 4000000
#include <util/delay.h>

uint8 Trans_Data   = 0;

int main(void)
{
	uint8 Recived_Data =  0;
	
	
	LED0_Init();
	relay_init();
	SPI_Slave_Init();
	ServoMotor_Init();
	buzzer_init();
	Timer_Init();
	
	
  
	
    while (1) 
    {
		
		//SPI_SetCallBack(SPI_TranSiver(Trans_Data));
		
		Recived_Data=SPI_TranSiver(Trans_Data);
		
	if (Recived_Data==1)
	{
		 app_green();
	}
	
	else if(Recived_Data==2)
	{	
		app_yellow();
    }
	
	else if(Recived_Data==3)
	{
		app_red();
	}
	
	else if(Recived_Data==4)
	{
		app_toggle();
	}
	
	else if(Recived_Data==0)
	{
		app_bluorooth();
	}
	
}
}

