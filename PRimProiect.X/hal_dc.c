/*
 * File:   hal_dc.c
 * Author: cubin
 *
 * Created on 25 noiembrie 2019, 20:15
 */


#include "xc.h"
#include "mcal_pwm.h"
//T_F16 DutyCycle=30;

void HAL_DcMotorInit()
{
    PWM1_vInit();
}

void HAL_SetDcMotorDir(BOOL Dir){
    GPIO_u8WritePortPin(PORT_A,9,Dir);
}

void HAL_SetDcMotorDuty(T_F16 duty)
{
    PWM1_vSetDuty(duty,2);
}