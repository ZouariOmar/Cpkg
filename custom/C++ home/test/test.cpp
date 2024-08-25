/***************************************************
 * @file      Tree.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      18-08-2024
 * @copyright Copyright (c) 2024
 ***************************************************/

// ? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
// #include "../src/Tree.cpp"
// using namespace BT;
#include "../src/sort.cpp"
using namespace ST;
using namespace std;

//? --------------------------- MAIN TEST PROTOTYPE DEV PART ---------------------------

/**
 * @brief #### Main test function
 * @return int
 */
int main() {
  int arr[] = {1, 5, -1, -5, -10, 55};

  bubble_sort<int [], 6>(arr);

  for (int i = 0; i < 6; i++)
    cout << arr[i] << " ";

  return 0;
}