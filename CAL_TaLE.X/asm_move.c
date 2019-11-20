/*
 * File:   asm_move.c
 * Author: proda
 *
 * Created on November 20, 2019, 7:25 PM
 */


#include "xc.h"
#include "rte.h"

void ASM_DcMotorInit()
{
    RTE_DcMotorInit();
}

void ASM_SetDcMotorDirSpeed()
{
    RTE_SetDcMotorDir(0);
    RTE_vSetMotorDuty();
}



