/***************************************************
 * @file      sort.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      18-08-2024
 * @copyright Copyright (c) 2024
 ***************************************************/

// ? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
#include "../inc/sort.hpp"

//? --------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------

/**************************************
 *? ===== Bubble Sort Dev Section =====
 **************************************/

/**
 * @brief ### Bubble Sort Algorithm
 * *
 * - #### T: vector<int> | string | int* |char*
 * @tparam T
 * @tparam len
 * @param arr
 * @link @Bubble_Sort
 */
template <typename T>
void ST::bubble_sort(T &arr, size_t len) {
  bool swapped{true};
  for (size_t i{}; i < len - 1 && swapped; i++)
    for (size_t j{}; j < len - i - 1; j++)
      if (arr[j] > arr[j + 1]) {
        std::swap(arr[j], arr[j + 1]);
        swapped = true;
      }
}

/*****************************************
 *? ===== Insertion Sort Dev Section =====
 *****************************************/

/**
 * @brief ### Insertion Sort Algorithm
 * *
 * - #### T: vector<int> | string | int* |char*
 * @tparam T
 * @tparam len
 * @param arr
 * @link @Insertion_Sort
 */
template <typename T>
void ST::insertion_sort(T &arr, size_t len) {
  int i{1};
  while (i < len) {
    int key{arr[i]}, j{i - 1};
    while (j > -1 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
    i++;
  }
}

/*****************************************
 *? ===== Selection Sort Dev Section =====
 *****************************************/

/**
 * @brief ### Selection Sort Algorithm
 * *
 * - #### T: vector<int> | string | int* |char*
 * @tparam T
 * @tparam len
 * @param arr
 * @link @Selection_Sort
 */
template <typename T>
void ST::selection_sort(T &arr, size_t len) {
  int i{};
  while (i < len - 1) {
    int mPos{i};
    for (int j = i + 1; j < len; j++)
      if (arr[j] < arr[mPos]) mPos = j;
    if (mPos != i) std::swap(arr[mPos], arr[i]);
    i++;
  }
}

/*****************************************
 *? ===== Merge Sort Dev Section =====
 *****************************************/

/**
 * @brief ### Merge Sort Algorithm
 * ! work for vector<int> | vector<char> | string
 * TODO: Support the int[], char[]
 * @tparam T
 * @param arr
 * @param l
 * @param h
 * @link @Merge_Sort
 */
template <typename T>
void ST::merge_sort(T &arr, size_t l, size_t h) {
  if (h <= l) return;
  size_t mid = (l + h) / 2;
  merge_sort(arr, l, mid);
  merge_sort(arr, mid + 1, h);
  merge(arr, l, mid, h);
}

template <typename T>
void ST::merge(T &arr, size_t l, size_t mid, size_t h) {
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

template <>
void ST::merge(std::string &arr, size_t l, size_t mid, size_t h) {
  size_t n1 = mid - l + 1;
  size_t n2 = h - mid;

  std::string L = arr.substr(l, n1);
  std::string R = arr.substr(mid + 1, n2);

  size_t i = 0, j = 0, k = l;
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

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

/*****************************************
 *? ===== Tree Sort Dev Section =====
 *****************************************/

/**
 * @brief #### Construct a new node::node struct
 */
ST::node::node()
    : data(0), left(nullptr), right(nullptr) {};

/**
 * @brief #### Construct a new node::node struct
 * @param x
 */
ST::node::node(int x)
    : data(x), left(nullptr), right(nullptr) {};

/**
 * @brief #### Construct a new node::node struct
 * @param x
 * @param y
 * @param z
 */
ST::node::node(int x, ST::node *y, ST::node *z)
    : data(x), left(y), right(z) {};

/**
 * @brief ### Tree Sort Algorithm
 * - #### T: vector<int> | string | int* |char*
 * @tparam T
 * @param arr
 * @param len
 * @link @Tree_Sort
 */
template <typename T>
void ST::tree_sort(T &arr, size_t len) {
  if (!len) return;
  ST::node *root = nullptr;

  for (size_t i{}; i < len; i++)
    root = to_BST(root, arr[i]);

  // BST to T
  to_T(root, arr);
}

/**
 * @brief #### Convert a vector to a Binary Search Tree
 * @param root
 * @param val
 * @return ST::node*
 * @link @Tree_Sort
 */
ST::node *ST::to_BST(node *root, int val) {
  if (!root) return (new ST::node(val));

  (val < root->data) ? root->left = to_BST(root->left, val) : root->right = to_BST(root->right, val);

  return root;
}

/**
 * @brief #### Convert a Binary Search Tree to a vector
 * @tparam T
 * @param root
 * @param arr
 * @link @Tree_Sort
 */
template<typename T>
void ST::to_T(ST::node *root, T &arr) {
  static int i{};
  if (!root) return;
  to_T(root->left, arr);
  arr[i++] = root->data;
  to_T(root->right, arr);
}