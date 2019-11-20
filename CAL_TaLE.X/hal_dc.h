/* 
 * File:   hal_dc.h
 * Author: student
 *
 * Created on November 20, 2019, 8:19 AM
 */

#ifndef HAL_DC_H
#define	HAL_DC_H

#include "general_types.h"


#ifdef	__cplusplus

#endif

extern void HAL_DcMotorInit();
extern void HAL_SetDcMotorDir(BOOL Dir);
extern void HAL_vSetMotorDuty();


#ifdef	__cplusplus
}
#endif

#endif	/* HAL_DC_H */

