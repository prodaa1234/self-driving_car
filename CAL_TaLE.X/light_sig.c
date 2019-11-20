#include"light_sig.h"
#include"mcal_gpio.h"

 T_U16 c = 0;
 T_U16 b = 0;  
 
void vDoHandleLightSig()
{
      
    if(b<6)
    {
        if(c==0)
        {
            GPIO_u8WritePortPin(PORT_A, 10, 1);
            c=1;
           
        }
        b++;
        if(c==1)
        {
            GPIO_u8WritePortPin(PORT_A, 10, 0);
            c=0;
           
        }
        
    }
     if(b>=6&&b<=9)
     {
        
        GPIO_u8WritePortPin(PORT_A, 10, 0);
        b++;
     } 
    if(b==9)
    {
        b=0;
    }
    
}

 void vDoHandleLightSig2()
{
     b++;
    if(b==1)
    {
        
            GPIO_u8WritePortPin(PORT_A, 10, 1);
       
  
    }
     if(b>=2&&b<=4)
     {
        
        GPIO_u8WritePortPin(PORT_A, 10, 0);
       
     } 
    if(b==4)
    {
        b=0;
    }
}
