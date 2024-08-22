/***************************************************
 * @file      Tree.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      18-08-2024
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef __TREE_HPP__
#define __TREE_HPP__

// ? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
//* Sys include headers
#include <bits/stdc++.h>

// ? ------------------------- STRUCT PROTOTYPE DECLARATION PART -------------------------

struct node {  //* Declare the binary tree structure
  // Vars declaration part
  int data;
  node *left,
      *right;
  // Contractures declaration part
  node();
  node(int);
  node(int, node *, node *);
};

//? --------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------

namespace BT {  //* Binary Tree space section
//* Traversal Binary Tree class
class TBT {
 private:
  int maxVal(node *);  // Max value in BT
  int minVal(node *);  // Min value in BT

 public:
  void in_ot(node *);                          // In-order Traversal (DFT)
  void pre_ot(node *);                         // Pre-order Traversal (DFT)
  void post_ot(node *);                        // Post-order Traversal (DFT)
  void lvl_ot(node *);                         // Level-order Traversal (BFT)
  node *to_bst(std::vector<int>, int, int);  // Vector to Binary Search Tree (DFT)
  bool is_bst(node *);                         // is Binary Search Tree ?
};
}  // namespace BT
#endif