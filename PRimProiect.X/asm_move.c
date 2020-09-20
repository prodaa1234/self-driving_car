/*
 * File:   asm_move.c
 * Author: cubin
 *
 * Created on 25 noiembrie 2019, 20:12
 */


#include "xc.h"
#include"rte.h"
#include "asm_move.h"

T_U16 angle = 90;
T_U16 contor=0;
void ASM_DcMotorInit()
{
    RTE_DcMotorInit();
}

void ASM_SetDcMotorDirSpeed()
{
    RTE_SetDcMotorDir(0);
    //RTE_SetDcMotorDuty(30);
    T_U16 v=RTE_vGetLineFollower();
    if(v==63)
    {
        RTE_SetDcMotorDuty(0);
    }
     if(v==12)
    {
         RTE_SetDcMotorDuty(18);
         RTE_Angle(90);
    }
    if(v>=6 && v<=11)
    { 
         RTE_SetDcMotorDuty(18);
         RTE_Angle(105);
    }
    if(v>=3 && v<=5)
    {
         RTE_SetDcMotorDuty(18);
         RTE_Angle(110);
    } 
    if(v>=1 && v<=2)
    {
         RTE_SetDcMotorDuty(18);
         RTE_Angle(115);
    }
    if(v>=12 && v<=23)
    {
         RTE_SetDcMotorDuty(18);
         RTE_Angle(75);
    }
    
    if(v>=24 && v<=31)
    {
         RTE_SetDcMotorDuty(18);
         RTE_Angle(70);
    } 
    if(v>=32 && v<=48)
    {
         RTE_SetDcMotorDuty(18);
         RTE_Angle(65);
    } 
    
    
}
void ASM_Angle()
{
    
        RTE_Angle(angle);
        
    
}