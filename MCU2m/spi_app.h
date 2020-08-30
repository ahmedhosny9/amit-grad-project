/*
 * spi_app.h
 *
 * Created: 8/22/2020 1:42:32 PM
 *  Author: ahmed
 */ 


#ifndef SPI_APP_H_
#define SPI_APP_H_

#include "SPI.h"
#include "UART.h"
#include "EXT_INT_ServiceRoutine.h"

#define F_CPU 4000000
#include <util/delay.h>

void spi_fun1(void);

void spi_fun2(void);

void spi_fun3(void);

void spi_fun4(void);

//void isr_bluotooth(void);

void spi_bluotooth(void);




#endif /* SPI_APP_H_ */