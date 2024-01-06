// by_zouari_omar_full_stack_c++_dev
// dd/mm/yyyy
// Name Of Project Or Name The File
#ifndef __PKG_H__
#define __PKG_H__
                    /* INCLUDE PROTOTYPE DECLARATION PART */
#include "import.h"
                    /* STRUCT PROTOTYPE DECLARATION PART */
typedef struct Date {                                                               // Date typedef struct
    int day, month, year;
} date;
                    /* FUNCTIONS PROTOTYPE DECLARATION PART */
int menu();                                                                         // menu() int func
bool isValidDate(date);                                                             // isValidDate() bool func
void greaterThanZero(int*, char*);                                                  // greaterThanZero() void func
#endif