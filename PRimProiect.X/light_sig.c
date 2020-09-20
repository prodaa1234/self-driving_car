/*
 * File:   light_sig.c
 * Author: cubin
 *
 * Created on 13 noiembrie 2019, 18:39
 */


#include "xc.h"
#include "mcal_gpio.h"
#include "hal_acm.h"
int p;
int i=0;
void vDoHandleLightSig(int a)
{
     /*counter++;
    if(counter==10)
    {
       GPIO_u8WritePortPin(PORT_A, 10, 0);
         counter=0;
    }
    if(i<10)
    {
        if(i<6 && i%2==1)
         {
             GPIO_u8WritePortPin(PORT_A, 10, 1);
         }
         else 
         {
             GPIO_u8WritePortPin(PORT_A, 10, 0);
         }
        i++;
    }
    if(i==10)
    {
        i=0;

    }*/
    
    p=HAL_AccumulatorProcent();
    p=p/10;
    i++;
    if(i<=p)
    {
    
       GPIO_u8WritePortPin(PORT_A, 10, a); 
  
    }
    else 
    {
        GPIO_u8WritePortPin(PORT_A, 10, 0); 
    }
    
}
