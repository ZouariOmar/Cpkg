// by_zouari_omar_full_stack_c++_dev
// dd/mm/yyyy
// Name Of Project Or Name The File
                    /* INCLUDE PROTOTYPE DECLARATION PART */
#include "../Func/pkg.h"
                    /* FUNCTIONS PROTOTYPE DEV PART */
bool isValidDate(date dt) {
    int *daysInMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (dt.day < 1 || dt.day > 31 || dt.month < 1 || dt.month > 12 || dt.year < 1980 || dt.year > 2024) return false;       // Basic checks for day, month, and year ranges
    if (dt.month == 2 && (dt.year % 4 == 0 && (dt.year % 100 != 0 || dt.year % 400 == 0))) daysInMonth[2] = 29;             // Check for February and Leap year check
    return (dt.day <= daysInMonth[dt.month]);
}
/* ------------------------------------------------------------------------- */
void greaterThanZero(float *x, char *msg) {
    while (1) {
        if(printf("%s%s%s", yellow, msg, def) && scanf("%f", x) && *x > 0) break;
        printf("%s%s%s", red, errorMsg18, def);
    }
} // testt