

#include "xc.h"
#include "rte.h"

void ASM_DcMotorInit()
{
    RTE_DcMotorInit();
}

void ASM_SetDcMotorDirSpeed(BOOL Dir,T_F16 DutyCycle)
{
    RTE_SetDcMotorDir(Dir);
    RTE_vSetMotorDuty(DutyCycle);
}



