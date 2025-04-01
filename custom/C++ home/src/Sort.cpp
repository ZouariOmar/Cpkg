/**
 * @file       Sort.cpp
 * @author     @ZouariOmar (zouariomar20@gmail.com)
 * @brief      Sort source file
 * @version    0.1
 * @date       2025-04-01
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/src/Sort.cpp Sort.cpp @endlink
 */

//? Include prototype declaration part
#include "../inc/Sort.hpp"

//? Functions prototype declaration part

/**
 * @fn         Sort::bubble_sort(T &, size_t)
 * @brief      Bubble sort algorithm
 * @tparam T   {std::vector<int> | std::string | int * |char *}
 * @param  arr {T &}
 * @param  len size_t
 * @return     void
 */
template <typename T>
void Sort::bubble_sort(T &arr, size_t len) {
  bool swapped{true};
  for (size_t i{}; i < len - 1 && swapped; i++)
    for (size_t j{}; j < len - i - 1; j++)
      if (arr[j] > arr[j + 1]) {
        std::swap(arr[j], arr[j + 1]);
        swapped = true;
      }
}

/**
 * @fn         Sort::insertion_sort(T &, size_t)
 * @brief      Insertion sort algorithm
 * @tparam T   {std::vector<int> | std::string | int * |char *}
 * @param  arr {T &}
 * @param  len size_t
 * @return     void
 */
template <typename T>
void Sort::insertion_sort(T &arr, size_t len) {
  int i{1};
  while (i < len) {
    int key{arr[i]}, j{i - 1};
    while (j > -1 && arr[j] > key)
      arr[j + 1] = arr[j], j--;
    arr[j + 1] = key;
    i++;
  }
}

/**
 * @fn         Sort::selection_sort(T &, size_t)
 * @brief      Selection sort algorithm
 * @tparam T   {vector<int>|vector<char>|string}
 * @param  arr {T &}
 * @param  len size_t
 * @return     void
 */
template <typename T>
void Sort::selection_sort(T &arr, size_t len) {
  int i{};
  while (i < len - 1) {
    int mPos{i};
    for (int j = i + 1; j < len; j++)
      if (arr[j] < arr[mPos])
        mPos = j;
    if (mPos != i)
      std::swap(arr[mPos], arr[i]);
    i++;
  }
}

/**
 * @fn         Sort::merge(T &, size_t, size_t)
 * @brief      Merge sort algorithm
 * @tparam T   {vector<int>|vector<char>|string}
 * @param  arr {T &}
 * @param  l   size_t
 * @param  h   size_t
 * @return     void
 */
template <typename T>
void Sort::merge_sort(T &arr, size_t l, size_t h) { // TODO: Support the int[], char[]
  if (h <= l)
    return;
  size_t mid = (l + h) / 2;
  merge_sort(arr, l, mid);
  merge_sort(arr, mid + 1, h);
  merge(arr, l, mid, h);
}

template <typename T>
void Sort::merge(T &arr, size_t l, size_t mid, size_t h) {
  // length of the first sub_lists "n1" and "n2"
  int n1 = mid - l + 1;
  int n2 = h - mid;

  // Create tmp vectors L and R
  T L(n1), R(n2);

  // Copy data to temporary vectors L and R
  std::copy(arr.begin() + l, arr.begin() + mid + 1, L.begin());
  std::copy(arr.begin() + mid + 1, arr.begin() + h + 1, R.begin());

  size_t i{}, j{}, k{l};
  while (i < n1 && j < n2) {
    if (L[i] > R[j]) {
      arr[k] = R[j];
      j++;
    } else {
      arr[k] = L[i];
      i++;
    }
    k++;
  }

  // Cpy the remaining element(s) of L (if there are any)
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  // Cpy the remaining element(s) of L (if there are any)
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

/**
 * @fn         Sort::tree_sort(T &, size_t)
 * @brief      Tree sort algorithm
 * @tparam T   {int *|char *|std::vector<int>|..}
 * @param  arr {T &}
 * @param  len {size_t}
 * @return     void
 */
template <typename T>
void Sort::tree_sort(T &arr, size_t len) {
  if (!len)
    return;
  BinaryTree::TraversalBinaryTree tree;
  BinaryTree::Node *root = tree.to_binarySearchTree(arr, 0, len);
  to_array(root, arr);
}

/**
 * @fn          Sort::to_array(BinaryTree::Node *, T &)
 * @brief       Convert a Binary Search Tree to array
 * @tparam T    {std::vector<int>}
 * @param  root {BinaryTree::Node *}
 * @param  arr  {T &}
 * @return      void
 */
template <typename T>
void Sort::to_array(BinaryTree::Node *root, T &arr) {
  static int i{};
  if (!root)
    return;
  to_array(root->left, arr);
  arr[i++] = root->data;
  to_array(root->right, arr);
}