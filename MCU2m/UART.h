/*
 * UART.h
 *
 * Created: 25/07/2020 08:19:55 ص
 *  Author: Ali
 */ 


#ifndef UART_H_
#define UART_H_

#include "ATMEGA32_Regs.h"
#include "BIT_Math.h"



void UART_Init(void);

void UART_SendChar(uint8 data);

void UART_SendString(uint8* str);

uint8 UART_ReceiveChar(void);






#endif /* UART_H_ */