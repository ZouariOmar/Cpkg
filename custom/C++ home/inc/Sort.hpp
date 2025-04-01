/**
 * @file      Sort.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     Sort header file
 * @version   0.1
 * @date      2025-03-29
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/inc/sort.hpp sort.hpp @endlink
 */

//? Pre-processor prototype declaration part
#ifndef __SORT_HPP__
#define __SORT_HPP__

//? Include prototype declaration part
//* Include std c++ header(s)
#include "Trees.hpp"

//? Namespace prototype declaration part
namespace Sort {
template <typename T>
void bubble_sort(T &, size_t);

template <typename T>
void insertion_sort(T &, size_t);

template <typename T>
void selection_sort(T &, size_t);

template <typename T>
void merge_sort(T &, size_t, size_t);
template <typename T>
void merge(T &, size_t, size_t, size_t);

template <typename T>
void tree_sort(T &, size_t);
template <typename T>
void to_array(BinaryTree::Node *, T &);

} // Namespace Sort

//? Structure(s) prototype declaration part

#endif // __SORT_HPP__