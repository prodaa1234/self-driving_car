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
#include "light_sig.h"
#include "rte.h"
#include "asm_move.h"
T_U16 contor = 0;

void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL ,OUTPUT);
    ASM_DcMotorInit();
}

void TASK_1ms()
{
   ASM_SetDcMotorDirSpeed();
}

void TASK_5ms()
{
    
}

void TASK_10ms()
{   
    contor++;
    if(contor==25)
    {
       vDoHandleLightSig2();
       contor=0;
    }  

}

void TASK_100ms()
{ 
   // contor++;
    //if(contor==2)
   // {
     //  vDoHandleLightSig();
     //  contor=0;
  //  }       
        
    
}

void TASK_500ms()
{ 

}

void TASK_1000ms()
{
    //a = !a;
    //GPIO_u8WritePortPin(PORT_A, 10, a);
}