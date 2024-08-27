/***************************************************
 * @file      sort.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      18-08-2024
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef __SORT_HPP__
#define __SORT_HPP__

//? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
//* Sys include headers
#include <bits/stdc++.h>

// ? ------------------------- STRUCT PROTOTYPE DECLARATION PART -------------------------

//? ------------------- NAMESPACE/Classes/FUNCTIONS PROTOTYPE DEV PART -------------------
namespace ST {

//* Bubble sort template declaration part
template <typename T>
void bubble_sort(T &, size_t);

//* Insertion sort template declaration part
template <typename T>
void insertion_sort(T &, size_t);

//* Selection sort template declaration part
template <typename T>
void selection_sort(T &, size_t);

//* Merge sort template declaration part
template <typename T>
void merge_sort(T &, size_t, size_t);
template <typename T>
void merge(T &, size_t, size_t, size_t);
template <>
void merge(std::string &, size_t, size_t, size_t);

//* Tree sort template declaration part
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
template<typename T>
void tree_sort(T &, size_t);
node *to_BST(node *, int);
template <typename T>
void to_T(node *, T &);

}  // namespace ST

#endif