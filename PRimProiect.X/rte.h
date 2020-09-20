/* 
 * File:   rte.h
 * Author: cubin
 *
 * Created on 25 noiembrie 2019, 20:13
 */

#ifndef RTE_H
#define	RTE_H

#include "hal_dc.h"
#include "hal_servo.h"
#include "hal_lf.h"

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* RTE_H */

#define RTE_DcMotorInit HAL_DcMotorInit
#define RTE_SetDcMotorDir HAL_SetDcMotorDir
#define RTE_SetDcMotorDuty HAL_SetDcMotorDuty
#define RTE_Angle Hal_Angle
#define RTE_vSetLineFollower HAL_vSetLineFollower
#define RTE_writeLineFollower HAL_writeLineFollower
#define RTE_vGetLineFollower HAL_vGetLineFollower
