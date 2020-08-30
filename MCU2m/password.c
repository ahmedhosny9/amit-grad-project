/*
 * password.c
 *
 * Created: 7/15/2020 11:06:35 PM
 *  Author: ahmed
 */ 
#include "LCD.h"
#include "password.h"

#include <util/delay.h>

uint8 i = 0, val = 0, save[3]={0,0,0},load[3]={0,0,0};
sint32 temp = 0;

extern rx;
extern tx;
void PASSWORD_FUN(void)
{
		

UART_SendString("save the password = "); //start from location 14 in lcd ro 2.

while(1){
		
		val = UART_ReceiveChar();
		if(val){save[i]=val; i++; }
        if (i==3){i=0;break;}
		}
			

//CHACKPASS_FUN();	
CHACKPASS_bluotooth_FUN();
		}
		
void CHACKPASS_FUN(void)
{
	
LCD_GoTo(1,0);
LCD_WriteString("enter the pass = ");
UART_SendString("enter the password = "); //start from location 14 in lcd ro 2.		
		
while(1){
	
    val=0;
    val = UART_ReceiveChar();
	
	if (val && i==0){load[i]=val;i++;val=0;}
	  if (val && i==1){load[i]=val;i++;val=0;}
		if (val && i==2){load[i]=val;i=0;val=0;break;}
		}
		
	
	uint8 s=0,l=0;
	for(i=0;i<3;i++)
	{
		s=save[i];l=load[i];
		if (s!=l)
		{
			
			UART_SendString(" error password ");
			LCD_GoTo(1,0);
			LCD_WriteString("wait 1s to enter");
			_delay_ms(100);
			i=0;
			CHACKPASS_FUN();
		}
	}
	if (s==l)       {
		             LCD_GoTo(1,0);
		             LCD_WriteString("password correct");
		             _delay_ms(1000);
					 LCD_GoTo(1,0);
		             LCD_WriteString("move to temp sys");
					 _delay_ms(1000);
					 i=0;
					 
	TEMP_FUN();
	 }   // generc adc 
		
 }
 
 void CHACKPASS_bluotooth_FUN(void)
 {
	 
	 LCD_GoTo(1,0);
	 LCD_WriteString("enter the pass = ");
	 UART_SendString("enter the password = "); //start from location 14 in lcd ro 2.
	 
	 while(1){
		 
		 val=0;
		 val = UART_ReceiveChar();
		 
		 if (val && i==0){load[i]=val;i++;val=0;}
		 if (val && i==1){load[i]=val;i++;val=0;}
		 if (val && i==2){load[i]=val;i=0;val=0;break;}
	 }
	 
	 
	 uint8 s=0,l=0;
	 for(i=0;i<3;i++)
	 {
		 s=save[i];l=load[i];
		 if (s!=l)
		 {
			 
			 UART_SendString(" error password ");
			 LCD_GoTo(1,0);
			 LCD_WriteString("wait 1s to enter");
			 _delay_ms(100);
			 i=0;
			 CHACKPASS_bluotooth_FUN();
		 }
	 }
	 if (s==l)       {
		 LCD_GoTo(1,0);
		 LCD_WriteString("password correct");
		 
		 _delay_ms(1000);
		 i=0;
	 isr_bluotooth(); }   // generc adc
	 
 }
 
 
	
	void TEMP_FUN(void)
	{
		
		uint8 tx;
		//UART_SendString("to reset click c");
		LCD_Clear();
		
		while(1){
		
		LCD_GoTo(0,0);
		LCD_WriteString("     welcome    ");
		
		tx= UART_ReceiveChar();
		
		//if (rx=='10'){ CHACKPASS_bluotooth_FUN();}
		//if (rx=='0'){ TEMP_FUN();}
			
		if (tx=='1'){LCD_GoTo(1,0);LCD_WriteString("st of kit (nice)");spi_fun1();}
		if (tx=='2'){LCD_GoTo(1,0);LCD_WriteString("st of kit (good)");spi_fun2();}	
		if (tx=='3'){LCD_GoTo(1,0);LCD_WriteString("open the win now");spi_fun3();}
		if (tx=='4'){LCD_GoTo(1,0);LCD_WriteString(" Fire alarm in k");spi_fun4();}
	    if (tx=='0'){LCD_GoTo(1,0);LCD_WriteString(" Manual control ");CHACKPASS_bluotooth_FUN();}
		
		val=0;
		
		//val = UART_ReceiveChar();
		
		//if (val=='c'){val=0;  UART_SendString(" reset  password");LCD_Clear();  main();}
	_delay_ms(100);
		 
		         }
	}
	
	
	
	void isr_bluotooth(void)
	{
		uint8 i=0;
		uint8 tx=0;
		
			SPI_TranSiver(tx);
			
			spi_bluotooth();
		
		
	}	
			
			
			
			
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	/*while(i)
	{
		 
		 
		
	}
	
	
	


	for(;o<2;o++){
		if(strcmp(name[o], nm)==0&&strcmp(password[o], ps)==0){
			printf("        Been confirmed Thank you   \n\n         ");
			control();
		}
	
void passcp(void){
	char erro=0;
	erro++;
	char o=0;

	printf("Enter the name and old password\n");

	printf("enter your name         = ");
	scanf("%s",nm);
	printf("enter your old password = ");
	scanf("%s",ps);

	for(;o<2;o++){
		if(strcmp(name[o], nm)==0&&strcmp(password[o], ps)==0){

			printf("Thank you reset your password\n\n");

			if(o==0){printf("Enter the new password ahmed = ");scanf("%s",password[0]);
			}
			if(o==1){printf("Enter the new password hosny = ");scanf("%s",password[1]);;
			}
			control();
		}
	}
	if(error==1){ printf("Error old password try again 1"); passcp();
	}
	if(error==2){ printf("Error old password try again 2"); passcp();
	}
	if(error==3){ printf("Error old password return to choose system"); control();
	}
}


void error(void){



	if(r==0){printf("  error in the password.\n Try again ( remaining 2 ) \n");r++; pass();
	}

	if(r==1){printf("  error in the password.\n Try again ( remaining 1 ) \n");r++;pass();
	}

	if(r==2){printf("          good bye you are an criminal XD            \n");pass();
	}


}
	
	
}*/