#include "mcal_adc.h"




T_U16 HAL_AccumulatorProcent()
{
    T_U16 a;
    T_U16 a1;
    T_U16 p;
   a= ADC_u16Read(0);
   a1=(a*3.07)/4095;
   if(a1<=8.4 && a1>=7)
   {
       p=(a1-7)*57+20;
   }
   if(a1<7 && a1>=6.5)
   {
       p=(a1-6.5)*20+10;
   }
   if(a1<6.5 && a1>=6)
   {
       p=(a1-6)*20;
   }
   return p;
}
