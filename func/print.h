// by_zouari_omar_full_stack_c++_dev
// dd/mm/yyyy
// Path ::: pkg/func/print.h
#ifndef __PRINT_H__
#define __PRINT_H__
                    /* PRINT FUNCTIONS PROTOTYPE DECLARATION PART */
// print_type ::: print the type of given variable
#define printt(x) _Generic((x), \
    int: printf("<int>\n", #x), \
    float: printf("<float>\n", #x), \
    default: printf("<Unknown>\n"))
/* ------------------------------------------------------------------------- */
#endif