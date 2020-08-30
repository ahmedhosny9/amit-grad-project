/*
 * SPI.h
 *
 * Created: 07/08/2020 11:52:35 ص
 *  Author: Ali
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "DIO.h"

void SPI_Master_Init(void);

void SPI_Slave_Init(void);

void SPI_Master_InitTrans(void);

void SPI_Master_TermTrans(void);

uint8 SPI_TranSiver(uint8);

/*sint32 SPI_TranSiver1(sint32 trans_data);*/

//void SPI_SetCallBack(void(*ptr)(void));


#endif /* SPI_H_ */