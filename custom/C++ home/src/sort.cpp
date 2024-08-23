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
 * @brief ### Bubble_Sort Algorithm
 * *
 * - #### For vector<int> / vector<char>
 * @param arr
 * @param len
 * @link @Bubble_Sort
 */
void ST::bubble_sort(std::vector<int> &arr, size_t len) {
  bool swapped{true};
  for (size_t i{}; i < len - 1 && swapped; i++) {
    for (size_t j{}; j < len - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        std::swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
  }
}

/**
 * @brief ### Bubble_Sort Algorithm
 * *
 * - #### For vector<int> / vector<char>
 * @param arr
 * @link @Bubble_Sort
 */
void ST::bubble_sort(std::vector<int> &arr) {
  bubble_sort(arr, arr.size());
}

/**
 * @brief ### Bubble_Sort Algorithm
 * *
 * - #### For string (using ASCII cmp)
 * @param str
 * @param len
 * @link @Bubble_Sort
 */
void ST::bubble_sort(std::string &str, size_t len) {
  bool swapped{true};
  for (size_t i{}; i < len - 1 && swapped; i++) {
    for (size_t j{}; j < len - i - 1; j++) {
      if (str[j] > str[j + 1]) {
        std::swap(str[j], str[j + 1]);
        swapped = true;
      }
    }
  }
}

/**
 * @brief ### Bubble_Sort Algorithm
 * *
 * - #### For string (using ASCII cmp)
 * @param str
 * @link @Bubble_Sort
 */
void ST::bubble_sort(std::string &str) {
  bubble_sort(str, str.size());
}

/**
 * @brief ### Bubble_Sort Algorithm
 * *
 * - #### For int[]
 * @param arr
 * @param len
 * @link @Bubble_Sort
 */
void ST::bubble_sort(int *arr, size_t len) {
  bool swapped{true};
  for (size_t i{}; i < len - 1 && swapped; i++) {
    for (size_t j{}; j < len - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        std::swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
  }
}

/**
 * @brief ### Bubble_Sort Algorithm
 * *
 * - #### For int[]
 * @param arr
 * @link @Bubble_Sort
 */
void ST::bubble_sort(int *arr) {
  bubble_sort(arr, sizeof(arr) / sizeof(int));
}

/**
 * @brief ### Bubble_Sort Algorithm
 * *
 * - #### For char[]
 * @param str
 * @param len
 * @link @Bubble_Sort
 */
void ST::bubble_sort(char *str, size_t len) {
  bool swapped{true};
  for (size_t i{}; i < len - 1 && swapped; i++) {
    for (size_t j{}; j < len - i - 1; j++) {
      if (str[j] > str[j + 1]) {
        std::swap(str[j], str[j + 1]);
        swapped = true;
      }
    }
  }
}

/**
 * @brief ### Bubble_Sort Algorithm
 * *
 * - #### For char[]
 * @param str
 * @link @Bubble_Sort
 */
void ST::bubble_sort(char *str) {
  bubble_sort(str, sizeof(str) / sizeof(char));
}

/*****************************************
 *? ===== Insertion Sort Dev Section =====
 *****************************************/
