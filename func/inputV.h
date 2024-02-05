// by_zouari_omar_full_stack_c++_dev
// dd/mm/yyyy
// Path ::: pkg/func/inputV.h
#ifndef __PKG_H__
#define __PKG_H__
                    /* INCLUDE PROTOTYPE DECLARATION PART */
// C INCLUDE SYS
#include <stdio.h>
                    /* STRUCT PROTOTYPE DECLARATION PART */
/*
struct...
*/
                    /* FUNCTIONS PROTOTYPE DEV PART */                                                
int is_date(int day, int month, int year) {                                                                                                 // isValidDate() bool func
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1980 || year > 2024) return 0;                                             // Basic checks for day, month, and year ranges
    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))) daysInMonth[2] = 29;                                         // Check for February and Leap year check
    return (day <= daysInMonth[month]);
}
/* ------------------------------------------------------------------------- */
#endif