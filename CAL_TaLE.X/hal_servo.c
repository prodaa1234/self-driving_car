/*
 * File:   hal_servo.c
 * Author: proda
 *
 * Created on November 27, 2019, 6:13 PM
 */


#include "xc.h"
#include "mcal_pwm.h"
#include "hal_servo.h"


void HAL_ServoMotor(T_F16 Angle)
{ 
   T_F16 DutyCycle;
   /*if(Angle<60)
   {
        Angle=60;
   }
   if(Angle<130)
   {
        Angle=130;
   }*/
    DutyCycle=(Angle-ANGLEMIN)*REZ+OFFSET;
     if(DutyCycle>8.81)
    {
        DutyCycle=8.81;
    }
     if(DutyCycle<6.15)
    {
        DutyCycle=6.15;
    }
    PWM1_vSetDuty(DutyCycle,1);
}