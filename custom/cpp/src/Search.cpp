/**
 * @file      Search.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     Search source file
 * @version   0.1
 * @date      2025-04-03
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/src/Search.cpp Search.cpp @endlink
 */

//? Include prototype declaration part
#include "../inc/Search.hpp"

//? Functions prototype declaration part

/**
 * @brief Return the index of founded target, otherwise return -1
 *
 * @tparam T      {std::vector<int>}
 * @param target  int
 * @param arr     
 * @param length
 * @return int
 */
template <typename T>
int Search::linearSearch(int target, T arr, size_t length) {
  for (size_t i{}, len{}; i < len; i++)
    if (arr[i] == target)
      return i;
  return -1;
}

/**
 * 
 * @brief Return the index of founded target, otherwise return -1
 * @tparam T 
 * @param target 
 * @param arr 
 * @return int 
 */
template <typename T>
int Search::linearSearch(int target, std::vector<T> arr) {
  linearSearch(target, arr, arr.size());
}