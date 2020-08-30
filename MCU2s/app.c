/*
 * app.c
 *
 * Created: 8/22/2020 2:04:36 PM
 *  Author: ahmed
 */ 

#include "app.h"
extern Trans_Data;
void app_green(void){
	
	LED0_ON();
	    relay_off();
	LED1_OFF();
	LED2_OFF();
	ServoMotor_Move(0);
	buzzer_off();
}
void app_yellow(void){
	
	LED1_ON();
		relay_off();
    LED0_ON();
	LED2_OFF();
	ServoMotor_Move(45);
	buzzer_off();
}
void app_red(void){
	
	
	//LED2_ON();
		relay_on();
    LED0_ON();
	LED1_ON();
	buzzer_off();
	
		ServoMotor_Move(60);
		_delay_ms(200);
		
	
}
void app_toggle(void){
	
	ServoMotor_Move(90);
	
	LED0_ON();
	LED1_ON();
	LED2_ON();
	
		relay_on();
		buzzer_on();
           
		   
}

void app_bluorooth(void){
	
uint8 Recived_Data,a=0, k=0, c=0, r=0, b=0;

ServoMotor_Move(0);
LED0_ON();
LED1_ON();
LED2_ON();
relay_on();
buzzer_on();
_delay_ms(1000);
LED0_OFF();
LED1_OFF();
LED2_OFF();
relay_off();
buzzer_off();

//Recived_Data = SPI_TranSiver(Trans_Data);

while(1){
	
Recived_Data = SPI_TranSiver(Trans_Data);
Trans_Data= Recived_Data;


if (Recived_Data=='a')
{
	
		if ( a==0)
		{
			LED0_ON();
			a=1;
			continue;
		}
		
		LED0_OFF();
		a=0;
		
		//	return_fun();
	
	
	 
	 
	
}

else if(Recived_Data=='b')
{
	if ( k==0)
	{
		LED1_ON();
		k=1;
		continue;
	}
	
	LED1_OFF();
	k=0;
	
	//	return_fun();

		
	
}

else if(Recived_Data=='c')
{
	if ( c==0)
	{
		LED2_ON();
		c=1;
		continue;
	}
	
	LED2_OFF();
	c=0;
	
//	return_fun();
}


else if(Recived_Data=='d')
{
	if ( r==0)
	{
		relay_on();
		r=1;
	
		continue;
	}
	
	relay_off();
	r=0;

	//return_fun();
}

else if(Recived_Data=='e')
{
	if ( b==0)
	{
		buzzer_on();
		b=1;
		
		continue;
	}
	 
	 buzzer_off();
	b=0;
	
	//return_fun();
}



else if(Recived_Data=='0')
{
	break;
}

}


}

void return_fun(void)
{
	
	//cli();
	
	
		
		//Trans_Data =10;
		//SPI_TranSiver(Trans_Data);
		
		//Trans_Data = 10;
		//SPI_TranSiver(Trans_Data);
		relay_on();
		_delay_ms(1000);
	
	//sei();
	
	//isr_bluotooth();
	//CHACKPASS_bluotooth_FUN();
	
	
	


}
