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
bool is_validDate(date dt) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (dt.dd < 1 || dt.dd > 31 || dt.mm < 1 || dt.mm > 12 || dt.yyyy < 1980 || dt.yyyy > 2024) return false;       // Basic checks for day, month, and year ranges
    if (dt.mm == 2 && (dt.yyyy % 4 == 0 && (dt.yyyy % 100 != 0 || dt.yyyy % 400 == 0))) daysInMonth[2] = 29;        // Check for February and Leap year check
    return (dt.dd <= daysInMonth[dt.mm]);
}