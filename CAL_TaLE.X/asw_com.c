/* 
 * File:   asw_com.c
 * Author: Cristian T. A.
 *
 * Created on August 28, 2018, 9:37 AM
 */

#include "general.h"
#include "hal_nRF.h"
#include "asw_com.h"

/* nRF variables */
extern T_U8 au8RxBuff[];
extern T_U8 u8RxBuff_Index;
extern BOOL u8NewRX;


void COM_vInit()
{
    
    
}

void COM_vSendMessage(T_U8 u8Message)
{
    RF_vBeginTransmit(u8Message);
}

void COM_vStartListening()
{
    RF_vBeginReceive();
}

/****************************************/
/* Message decoding ********************/
/**************************************/
void COM_vProcessMessage(T_U8 u8Message)
{


}


void COM_vProcessFIFO()
{
    if(TRUE == u8NewRX)
    {
        u8NewRX = FALSE;
        
        T_U8 i;
        for(i = 0; i < u8RxBuff_Index; ++i)
        {
            COM_vProcessMessage(au8RxBuff[i]);
        } 
        u8RxBuff_Index = 0;
    }
}

