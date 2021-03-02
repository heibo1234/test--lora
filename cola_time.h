#ifndef _COLA_TIME_H
#define _COLA_TIME_H
 
#ifdef __cplusplus
extern "C"
{
#endif
 
#include <stdint.h>
 
#define	IsLeapYear(yr)	(!((yr) % 400) || (((yr) % 100) && !((yr) % 4)))
// number of seconds since 0 hrs, 0 minutes, 0 seconds, on the
// 1st of January 2000 UTC
typedef uint32_t cola_unix_time;
 
// To be used with
typedef struct cola_time
{
    uint8_t seconds;  // 0-59
    uint8_t minutes;  // 0-59
    uint8_t hour;     // 0-23
    uint8_t day;      // 1-31
    uint8_t month;    // 1-12
    uint16_t year;    // 2000+
}cola_time_t ;
 
//0 转换失败，1转换成功;
extern int cola_convert_cola_time( struct cola_time *tm, cola_unix_time sec_time );
 

extern cola_unix_time cola_convert_uinx_time( struct cola_time *tm );
 
#ifdef __cplusplus
}
#endif
 
#endif 
