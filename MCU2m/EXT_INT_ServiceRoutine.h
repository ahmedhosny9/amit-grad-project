/*
 * INT_ServiceRoutine.h
 *
 * Created: 09/07/2020 01:00:19 م
 *  Author: Ali
 */ 


#ifndef INT_SERVICEROUTINE_H_
#define INT_SERVICEROUTINE_H_

#include "BIT_Math.h"
#include "ATMEGA32_Regs.h"
#include "INT_Cfg.h"


#define  GLOBAL_INTERRUPT_ENABLE     1
#define  GLOBAL_INTERRUPT_DISABLE    0

/***************************************** External INTerrupts ************************************/

#define  EXTERNAL_INT0                     6
#define  EXTERNAL_INT1                     5
#define  EXTERNAL_INT2                     7

#define  INT0_TRIGGER_LOW_LEVEL            0
#define  INT0_TRIGGER_RISING_EDGE          1
#define  INT0_TRIGGER_FALLING_EDGE         2
#define  INT0_TRIGGER_ANY_LOGICAL_CHANGE   3


#define  INT1_TRIGGER_LOW_LEVEL            0
#define  INT1_TRIGGER_RISING_EDGE          1
#define  INT1_TRIGGER_FALLING_EDGE         2
#define  INT1_TRIGGER_ANY_LOGICAL_CHANGE   3


#define  INT2_TRIGGER_RISING_EDGE          0
#define  INT2_TRIGGER_FALLING_EDGE         1



/***********************************           APIs          ***************************************/

void SET_GlobalInterrupt(void);

void ExternaINT0_Init(void);

void ExternaINT1_Init(void);

void ExternaINT2_Init(void);



#endif /* INT_SERVICEROUTINE_H_ */