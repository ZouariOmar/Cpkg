/* -----------------------------------------------
* @author:    @ZouariOmar
* @IDE:       @vsc
* @date:      mm/dd/yyyy
? @file_name: print.h
----------------------------------------------- */

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