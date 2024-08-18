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
#include <iostream>
#include <queue>

// ? ------------------------- STRUCT PROTOTYPE DECLARATION PART -------------------------

//* Declare the binary tree structure
struct node {
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

//* Binary Tree space section
namespace BT {
//* Traversal Binary Tree class
class TBT {
 public:
  void in_ot(node *);    // In-order Traversal (DFT)
  void pre_ot(node *);   // Pre-order Traversal (DFT)
  void post_ot(node *);  // Post-order Traversal (DFT)
  void lvl_ot(node *);   // Level-order Traversal (BFT)
};
}  // namespace BT
#endif