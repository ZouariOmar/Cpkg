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

//* Bubble sort methods declaration part
void bubble_sort(std::vector<int> &);
void bubble_sort(std::vector<int> &, int);
void bubble_sort(std::string &);
void bubble_sort(int *);

}  // namespace ST

#endif