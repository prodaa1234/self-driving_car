#include "xc.h"
#include "mcal_pwm.h"


void HAL_DcMotorInit()
{
    PWM1_vInit();
}

void HAL_SetDcMotorDir(BOOL Dir){
    GPIO_u8WritePortPin(PORT_A,9,Dir);
}

void HAL_vSetMotorDuty(T_F16 DutyCycle)
{
    PWM1_vSetDuty(DutyCycle,2);
}
