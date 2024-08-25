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
 * - #### For vector<int>
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
 * @brief ### Bubble Sort Algorithm
 * *
 * - #### For vector<int>
 * @param arr
 * @link @Bubble_Sort
 */
void ST::bubble_sort(std::vector<int> &arr) {
  bubble_sort(arr, arr.size());
}

/**
 * @brief ### Bubble Sort Algorithm
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
 * @brief ### Bubble Sort Algorithm
 * *
 * - #### For string (using ASCII cmp)
 * @param str
 * @link @Bubble_Sort
 */
void ST::bubble_sort(std::string &str) {
  bubble_sort(str, str.size());
}

/**
 * @brief ### Bubble Sort Algorithm
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
 * @brief ### Bubble Sort Algorithm
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
 * @brief ### Bubble Sort Algorithm
 * *
 * - #### For char[]
 * @param str
 * @link @Bubble_Sort
 */
void ST::bubble_sort(char *str) {
  bubble_sort(str, std::strlen(str));
}

/*****************************************
 *? ===== Insertion Sort Dev Section =====
 *****************************************/

/**
 * @brief ### Insertion Sort Algorithm
 * *
 * - #### For vector<int>
 * @param arr
 * @param len
 * @link @Insertion_Sort
 */
void ST::insertion_sort(std::vector<int> &arr, size_t len) {
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

/**
 * @brief ### Insertion Sort Algorithm
 * *
 * - #### For vector<int>
 * @param arr
 * @link @Insertion_Sort
 */
void ST::insertion_sort(std::vector<int> &arr) {
  insertion_sort(arr, arr.size());
}

/**
 * @brief ### Insertion Sort Algorithm
 * *
 * - #### For string (using ASCII cmp)
 * @param str
 * @param len
 * @link @Insertion_Sort
 */
void ST::insertion_sort(std::string &str, size_t len) {
  int i{1};
  while (i < len) {
    int key{str[i]}, j{i - 1};
    while (j > -1 && str[j] > key) {
      str[j + 1] = str[j];
      j--;
    }
    str[j + 1] = key;
    i++;
  }
}

/**
 * @brief ### Insertion Sort Algorithm
 * *
 * - #### For string (using ASCII cmp)
 * @param str
 * @link @Insertion_Sort
 */
void ST::insertion_sort(std::string &str) {
  insertion_sort(str, str.size());
}

/**
 * @brief ### Insertion Sort Algorithm
 * *
 * - #### For int[]
 * @param arr
 * @param len
 * @link @Insertion_Sort
 */
void ST::insertion_sort(int *arr, size_t len) {
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

/**
 * @brief ### Insertion Sort Algorithm
 * *
 * - #### For char[]
 * @param str
 * @param len
 * @link @Insertion_Sort
 */
void ST::insertion_sort(char *str, size_t len) {
  int i{1};
  while (i < len) {
    int key{str[i]}, j{i - 1};
    while (j > -1 && str[j] > key) {
      str[j + 1] = str[j];
      j--;
    }
    str[j + 1] = key;
    i++;
  }
}

/**
 * @brief ### Insertion Sort Algorithm
 * *
 * - #### For char[]
 * @param str
 * @link @Insertion_Sort
 */
void ST::insertion_sort(char str[]) {
  insertion_sort(str, std::strlen(str));
}

/*****************************************
 *? ===== Selection Sort Dev Section =====
 *****************************************/

/**
 * @brief ### Selection Sort Algorithm
 * *
 * - #### For vector<int>
 * @param arr
 * @param len
 * @link @Selection_Sort
 */
void ST::selection_sort(std::vector<int> &arr, size_t len) {
  int i{};
  while (i < len - 1) {
    int mPos{i};
    for (int j = i + 1; j < len; j++)
      if (arr[j] < arr[mPos]) mPos = j;

    if (mPos != i) std::swap(arr[mPos], arr[i]);
    i++;
  }
}

/**
 * @brief ### Selection Sort Algorithm
 * *
 * - #### For vector<int>
 * @param arr
 * @link @Selection_Sort
 */
void ST::selection_sort(std::vector<int> &arr) {
  selection_sort(arr, arr.size());
}

/**
 * @brief ### Selection Sort Algorithm
 * *
 * - #### For string (using ASCII cmp)
 * @param str
 * @param len
 * @link @Selection_Sort
 */
void ST::selection_sort(std::string &str, size_t len) {
  int i{};
  while (i < len - 1) {
    int mPos{i};
    for (int j = i + 1; j < len; j++)
      if (str[j] < str[mPos]) mPos = j;

    if (mPos != i) std::swap(str[mPos], str[i]);
    i++;
  }
}

/**
 * @brief ### Selection Sort Algorithm
 * *
 * - #### For string (using ASCII cmp)
 * @param str
 * @link @Selection_Sort
 */
void ST::selection_sort(std::string &str) {
  selection_sort(str, str.size());
}

/**
 * @brief ### Selection Sort Algorithm
 * *
 * - #### For int[]
 * @param arr
 * @param len
 * @link @Selection_Sort
 */
void ST::selection_sort(int *arr, size_t len) {
  int i{};
  while (i < len - 1) {
    int mPos{i};
    for (int j = i + 1; j < len; j++)
      if (arr[j] < arr[mPos]) mPos = j;

    if (mPos != i) std::swap(arr[mPos], arr[i]);
    i++;
  }
}

/**
 * @brief ### Selection Sort Algorithm
 * *
 * - #### For char[]
 * @param str
 * @param len
 * @link @Selection_Sort
 */
void ST::selection_sort(char *str, size_t len) {
  int i{};
  while (i < len - 1) {
    int mPos{i};
    for (int j = i + 1; j < len; j++)
      if (str[j] < str[mPos]) mPos = j;

    if (mPos != i) std::swap(str[mPos], str[i]);
    i++;
  }
}

/**
 * @brief ### Selection Sort Algorithm
 * *
 * - #### For char[]
 * @param str
 * @link @Selection_Sort
 */
void ST::selection_sort(char *str) {
  selection_sort(str, strlen(str));
}