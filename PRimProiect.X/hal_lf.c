#include "xc.h"
#include "general_types.h"
#include "mcal_gpio.h"

void HAL_vSetLineFollower(BOOL bDir)
{
    T_U16 i;
    for(i=0;i<=5;i++)
    {
        GPIO_u8SetPortPin(PORT_C,i,DIGITAL,bDir);
    }
}

void HAL_writeLineFollower()
{
    T_U16 i;
    for(i=0;i<=5;i++)
    {
        GPIO_u8WritePortPin(PORT_C, i,1);
    }
}

T_U16 HAL_vGetLineFollower()
{
    HAL_vSetLineFollower(0);   //OUTPUT=0; INPUT=1
    HAL_writeLineFollower();   //scriere
    __delay_us(10);
    HAL_vSetLineFollower(1);
    __delay_us(1000);
     T_U16 p;
    p=GPIO_u16ReadPort(PORT_C);
    p=p&63;
    return p;
}
