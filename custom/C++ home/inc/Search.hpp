/**
 * @file    Search.hpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Search header file
 * @version 0.1
 * @date    2025-04-03
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/inc/Search.hpp Search.hpp @endlink
 */

//? Pre-processor prototype declaration part
#ifndef __SEARCH_HPP__
#define __SEARCH_HPP__

//? Include prototype declaration part
//* Include std c++ header(s)
#include <iostream>
#include <vector>

//? Namespace prototype declaration part

/**
 * @namespace Search
 * @brief     Search namespace
 */
namespace Search {
template <typename T>
int linearSearch(int, T, size_t);

template <typename T>
int linearSearch(int, std::vector<T>);
} // Namespace Search

#endif // __SEARCH_HPP__
