/**
 * @file      trees.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     Main trees header file
 * @version   0.1
 * @date      2025-03-30
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/inc/trees.hpp trees.hpp @endlink
 */

//? Pre-processor prototype declaration part
#ifndef __TREES_HPP__
#define __TREES_HPP__

// ? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
//* Include std c++ header(s)
#include <algorithm>
#include <limits>
#include <iostream>
#include <queue>

//? Namespace prototype declaration part

/**
 * @namespace BinaryTree
 * @brief     BinaryTree namespace
 */
namespace BinaryTree {
struct Node;
class TraversalBinaryTree;
}; // Namespace BinaryTree

//? Structure(s) prototype declaration part

/**
 * @struct BinaryTree::Node
 * @brief  Node structure
 */
struct BinaryTree::Node {
  int data;
  Node *left,
      *right;
  Node(int _data = 0, Node *_left = nullptr, Node *_right = nullptr);
}; // Node Struct

//? Class(es) prototype declaration part

/**
 * @class BinaryTree::TraversalBinaryTree
 * @brief TraversalBinaryTree class
 */
class BinaryTree::TraversalBinaryTree {
private:
  int maxVal(Node *);
  int minVal(Node *);

public:
  void ShowPreOrderedTraversalTree(Node *);
  void ShowInoderedTraversalTree(Node *);
  void ShowPostOrderedTraversalTree(Node *);
  void ShowLevelOrderedTraversalTree(Node *);
  Node *to_binarySearchTree(std::vector<int>, int, int);
  bool is_binarySearchTree(Node *);
}; // TraversalBinaryTree Class

#endif // __TREES_HPP__