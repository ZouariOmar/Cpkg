## Functions Included

1. **`isValidDate(date dt)`**
   - **Description:** This function checks whether the given date is valid.
   - **Parameters:**
     - `date` (type `dt`): A `dt` structure representing a date.
   - **Returns:**
     - `true` if the date is valid.
     - `false` if the date is not valid.
   - **Usage:**
     ```c
     dt myDate;
     bool isValid = isValidDate(myDate);
     ```
   - **Example:**
     ```c
     #include <stdio.h>
     #include "c_functions_package/date_validation.h"
     #include <stdbool.h>

     int main() {
         dt myDate = {2022, 1, 15}; // Assume January 15, 2022
         bool isValid = isValidDate(myDate);

         if (isValid) {
             printf("The date is valid.\n");
         } else {
             printf("The date is not valid.\n");
         }

         return 0;
     }
     ```

2. **`greaterThanZero(int *x, char *msg)`**
   - **Description:** This function prompts the user with a message until a positive integer is entered.
   - **Parameters:**
     - `x` (type `int*`): A pointer to an integer to store the user input.
     - `msg` (type `char*`): The message to display to the user.
   - **Usage:**
     ```c
     int userInput;
     greaterThanZero(&userInput, "Enter a positive integer: ");
     ```
   - **Example:**
     ```c
     #include <stdio.h>
     #include "c_functions_package/user_input.h"

     int main() {
         int userInput;
         greaterThanZero(&userInput, "Enter a positive integer: ");
         printf("User entered: %d\n", userInput);

         return 0;
     }
     ```

## How to Use

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/your-username/c-functions-package.git
