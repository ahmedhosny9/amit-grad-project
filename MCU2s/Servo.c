/*
 * Servo.c
 *
 * Created: 23/07/2020 01:39:41 م
 *  Author: Ali
 */ 


#include "Servo.h"


void ServoMotor_Init(void)
{
	DIO_SetPinDir(DIO_PORTD ,DIO_PIN5, DIO_PIN_OUTPUT);
	PWM1_Init();
	PWM1_Start();
	PWM1_Generate(7.3);
	
}

void ServoMotor_Move(uint8 degree)
{
	
	float duty_cycle = 7.3;
	
	if (degree==0)
	{
		
		duty_cycle =7.3 ;
	}
	else if (degree==90)
	{
		
		duty_cycle =10 ;
	}
	else if (degree==45)
	{
		duty_cycle = (45 * .190); //.192
		
	}
	else if (degree==60)
	{
		duty_cycle = (60 * .149); //.253
		
	}
	//else if (degree>=1&&degree<=89)
	//{
		//duty_cycle = (45 * .192); 
		//duty_cycle = 7.3 + (((degree /90)* 0.25)-2.7) ;
	//}
	
	
	
	//duty_cycle =7.3 + (((degree /90)* 0.25)-2.7) ;//.3  +5  .111
	
	
		PWM1_Generate(duty_cycle);
		
	
	
}