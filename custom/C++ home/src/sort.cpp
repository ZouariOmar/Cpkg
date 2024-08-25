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
template <typename T, std::size_t len>
void ST::bubble_sort(T &arr) {
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
template <typename T, std::size_t len>
void ST::insertion_sort(T &arr) {
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
template <typename T, std::size_t len>
void ST::selection_sort(T &arr) {
  int i{};
  while (i < len - 1) {
    int mPos{i};
    for (int j = i + 1; j < len; j++)
      if (arr[j] < arr[mPos]) mPos = j;
    if (mPos != i) std::swap(arr[mPos], arr[i]);
    i++;
  }
}