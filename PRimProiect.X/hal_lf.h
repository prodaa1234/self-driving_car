/* 
 * File:   hal_lf.h
 * Author: student
 *
 * Created on December 11, 2019, 8:17 AM
 */

#ifndef HAL_LF_H
#define	HAL_LF_H

#ifdef	__cplusplus
extern "C" {
#endif

extern void HAL_vSetLineFollower(BOOL bDir);
extern void HAL_writeLineFollower();
extern T_U16 HAL_vGetLineFollower();


#ifdef	__cplusplus
}
#endif

#endif	/* HAL_LF_H */

