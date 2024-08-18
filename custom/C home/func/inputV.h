/***************************************************
 * @file      inputV.h
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef __INPUTV_H__
#define __INPUTV_H__

// ? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
// * SYS INCLUDE LIBS
#include <stdio.h>
#include <stdlib.h>

// ? ------------------------- STRUCT PROTOTYPE DECLARATION PART -------------------------
/*
 * struct...
 */

//? --------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------
/*
? is_date() int func
* check if the given date "dd/mm/yyyy" exist
* return 1 :: exist
* return 0 :: !exist
*/
int is_date(int day, int month, int year)
{ // isValidDate() bool func
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1980 || year > 2024)
        return 0; // Basic checks for day, month, and year ranges
    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
        daysInMonth[2] = 29; // Check for February and Leap year check
    return (day <= daysInMonth[month]);
}

#endif