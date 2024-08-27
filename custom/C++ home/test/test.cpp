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
  char arr[] = "dcba";
  size_t len = 4;

  tree_sort<char []>(arr, len);

  for (int i = 0; i < len; i++)
    cout << arr[i] << " ";

  return 0;
}