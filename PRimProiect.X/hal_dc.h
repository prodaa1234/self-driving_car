/* 
 * File:   hal_dc.h
 * Author: cubin
 *
 * Created on 25 noiembrie 2019, 20:13
 */

#ifndef HAL_DC_H
#define	HAL_DC_H
#include "general_types.h"
#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* HAL_DC_H */

extern void HAL_DcMotorInit();
extern void HAL_SetDcMotorDir(BOOL Dir);
extern void HAL_SetDcMotorDuty(T_F16 duty);