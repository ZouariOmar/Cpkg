// by_zouari_omar_full_stack_c++_dev
// dd/mm/yyyy
// Name Of Project Or Name The File
                    /* INCLUDE PROTOTYPE DECLARATION PART */
#include "../include/Header Modular File.h"
                    /* FUNCTIONS PROTOTYPE DECLARATION PART */
int menu() {
    int choice;
    printf(
        "%s\t-- N A M E  O F  A P P --\n"
        "[1] Option 1.\n"
        "[2] Option 2.\n"
        "[3] Option 3.\n"
        "[0] Exit Option.\n...%s", cyan, def); scanf("%d", &choice);
        return choice;
}
int is_validDate(date *dt) {
    if (dt->mm < 1 || dt->mm > 12 || dt->dd < 1 || dt->dd > 31 || dt->yyyy < 1980 || dt->yyyy > 2024) {             // Basic checks for day, month, and year ranges
        return 0;           // Invalid date
    }
    if ((dt->mm == 4 || dt->mm == 6 || dt->mm == 9 || dt->mm == 11) && dt->dd > 30) {                               // Check for months with 30 days
        return 0;           // Invalid date
    }
    if (dt->mm == 2) {                                                                                              // Check for February
        if (((dt->yyyy % 4 == 0 && dt->yyyy % 100 != 0) || (dt->yyyy % 400 == 0)) && (dt->dd > 29)) {               // Leap year check
            return 0;       // Invalid date for a leap year
        } else if (dt->dd > 28) {
            return 0;       // Invalid date for a non-leap year
        }
    }
    return 1;               // Valid date
}
