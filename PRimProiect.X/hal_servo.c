#include "xc.h"
#include "mcal_pwm.h"
#include "general_types.h"


void Hal_Angle(T_F16 a)
{
    if(a<65)
    {
        a=65;
    }else if(a>115)
    {
        a=115;
    }
        
    T_F16 DutyCycle;
    DutyCycle=(a-60)*0.117+4;
    if(DutyCycle>9.6)
    {
        DutyCycle=9.6;
    }else if(DutyCycle<6.6)
    {
        DutyCycle=6.6;
    }
    PWM1_vSetDuty(DutyCycle,1);
}
