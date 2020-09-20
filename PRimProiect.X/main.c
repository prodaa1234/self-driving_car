/* 
 * File:   main.c
 * Author: uidq2935
 *
 * Created on July 19, 2018, 3:51 PM
 */

#include "sys_tasks.h"
#include "sys_schedule.h"


/* Map programming & debugging pins to pin pair 2 */
#pragma config ICS = PGD2

/* Main function */
int main() 
{
    TASK_Inits();
    
    TASK_vSchedule();

    
    while(1)
    {           
        /* never here */
    }   
    return 0;
}

