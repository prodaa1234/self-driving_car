/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "asw_com.h"
#include "rte.h"
#include "asm_move.h"
#include "mcal_pwm.h"
#include "hal_lf.h"
#include "mcal_encoder.h"

T_U16 a = 0;
T_U16 dis=0;
void TASK_Inits()
{
     MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL ,OUTPUT);
     ASM_DcMotorInit();
}

void TASK_1ms()
{
    
     
        
    
    
}

void TASK_5ms()
{
    
}

void TASK_10ms()
{   
   //ASM_SetDcMotorDirSpeed();
   
   //encoder
   dis+=QEI_s16getElapsed();
  if(dis<1000)
 {
    
       RTE_SetDcMotorDir(0);
       RTE_SetDcMotorDuty(20);
   }
  else
  {
       RTE_SetDcMotorDir(0);
       RTE_SetDcMotorDuty(0);
  }
       
}

void TASK_100ms()
{ /*
     if(obs==1)
    {
       GPIO_u8WritePortPin(PORT_A, 10, 1); 
    }
    else
    {
        GPIO_u8WritePortPin(PORT_A, 10, 0);
    }
      
     if(a==1)
    {
    vDoHandleLightSig(a);
    a=0;
    }
    else
    {
        a=1;
    }
     
     */
}

void TASK_500ms()
{ 
  
}

void TASK_1000ms()
{
   /// a = !a;
   // GPIO_u8WritePortPin(PORT_A, 10, a);
   
  
}