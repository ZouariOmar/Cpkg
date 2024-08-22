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
#include "../src/linkList.cpp"
using namespace LL;
using namespace std;

//? --------------------------- MAIN TEST PROTOTYPE DEV PART ---------------------------

/**
 * @brief #### Main test function
 * @return int
 */
int main() {
  vector<int> arr = {1, 0, 3, 4, -1, 8, -2, 100};
  LL::CLL c;

  cll *root = c.to_cll(arr);

  c.sort(root);

  c.print(root);

  return 0;
}