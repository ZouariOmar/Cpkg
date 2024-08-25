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

//* Selection sort methods declaration part
template <typename T>
void selection_sort(T &, size_t);

}  // namespace ST

#endif