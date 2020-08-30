/*
 * Servo.h
 *
 * Created: 23/07/2020 01:39:54 م
 *  Author: Ali
 */ 


#ifndef SERVO_H_
#define SERVO_H_

#include "DIO.h"
#include "Timer.h"


void ServoMotor_Init(void);

void ServoMotor_Move(uint8 degree);



#endif /* SERVO_H_ */