#ifndef HAL_SERVO_H
#define	HAL_SERVO_H

#include "general.h"

#define REZ (float)0.04375
#define OFFSET 4
#define ANGLEMIN 10
extern void HAL_ServoMotor(T_F16 Angle);
#endif