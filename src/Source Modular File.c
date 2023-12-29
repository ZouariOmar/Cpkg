// by_zouari_omar_full_stack_c/c++_dev
// dd/mm/yyyy
// Name Of Project Or Name The File
                    /* include declaration part */
#include "../include/Header Modular File.h"
#include "../lib/Library Modular File.c"
                    /* main() int function dev code */
int main(int argc, char const *argv[]) {
    // principal vars declaration part
    // vars...
    // system("cls");
    while(1) {
        switch(menu()) {
            case 1:                                                     // option1Code
                // option 1 code ...
                system("pause && cls"); break;
            case 0:                                                     // exitCodeOption
                printf("%s\n\tSee You Next Time !\n\n%s", green, def);
                Sleep(3000); return EXIT_SUCCESS;
            default:                                                    // invalidOptionCode
                printf("%s%s%s", red, errorMsg01, def);
                system("pause && cls"); break;
        }
    }
}
