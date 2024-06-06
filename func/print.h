/***************************************************
 * @file      print.h
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef __PRINT_H__
#define __PRINT_H__

// ? ------------------------ PRINT FUNCTIONS PROTOTYPE DECLARATION PART ------------------------
/*
? printt() func
* print_type :: print the type of given variable
*/
#define printt(x) _Generic((x),     \
    int: printf("<int>\n", #x),     \
    float: printf("<float>\n", #x), \
    default: printf("<Unknown>\n"))

#endif