/***************************************************
 * @file      Tree.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      18-08-2024
 * @copyright Copyright (c) 2024
 ***************************************************/

// ? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
#include "../src/Tree.cpp"
using namespace BT;
using namespace std;

//? --------------------------- MAIN TEST PROTOTYPE DEV PART ---------------------------

/**
 * @brief #### Main test function
 * @return int 
 */
int main() {
  TBT bt;

  node *root = new node(2);
  root->left = new node(1);
  root->right = new node(7, nullptr, new node(8));

  cout << bt.is_bst(root) << endl;
}