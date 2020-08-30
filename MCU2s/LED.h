

#ifndef LED_H
#define LED_H

#include "BIT_Math.h"
#include "DIO.h"
#define F_CPU 8000000
#include <util/delay.h>

 void LED0_Init(void);

 void LED0_ON(void);
  void LED1_ON(void);
   void LED2_ON(void);

 void LED0_OFF(void);
  void LED1_OFF(void);
   void LED2_OFF(void);

 void LED0_toggle(void);

#endif /* LED_H */