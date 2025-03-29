/**
 * @file    sort.hpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Main sort header file
 * @version 0.1
 * @date    2025-03-29
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/inc/sort.hpp sort.hpp @endlink
 */

#ifndef __SORT_HPP__
#define __SORT_HPP__

//? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
//* Sys include headers
#include <bits/stdc++.h>

// ? ------------------------- STRUCT PROTOTYPE DECLARATION PART -------------------------

//? ------------------- NAMESPACE/Classes/FUNCTIONS PROTOTYPE DEV PART -------------------
namespace Sort {
template <typename T>
void bubble_sort(T &, size_t);

template <typename T>
void insertion_sort(T &, size_t);

template <typename T>
void selection_sort(T &, size_t);

template <typename T>
void merge(T &, size_t, size_t);
template <typename T>
void merge(T &, size_t, size_t, size_t);
void merge(std::string &, size_t, size_t, size_t);

struct TreeNode;
template <typename T>
void tree_sort(T &, size_t);
struct TreeNode *to_BST(TreeNode *, int);
template <typename T>
void to_T(TreeNode *, T &);

} // namespace ST

struct Sort::TreeNode {
  int data;
  TreeNode *left,
      *right;
  TreeNode(int _data = 0, TreeNode *_left = nullptr, TreeNode *_right = nullptr);
}; // TreeNode struct

#endif // __SORT_HPP__