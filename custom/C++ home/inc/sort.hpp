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
void bubble_sort(std::vector<int> &, size_t);
void bubble_sort(std::string &);
void bubble_sort(std::string &, size_t);
void bubble_sort(int *, size_t);
void bubble_sort(char *, size_t);
void bubble_sort(char *);

//* Insertion sort methods declaration part
void insertion_sort(std::vector<int> &);
void insertion_sort(std::vector<int> &, size_t);
void insertion_sort(std::string &);
void insertion_sort(std::string &, size_t);
void insertion_sort(int *, size_t);
void insertion_sort(char *, size_t);
void insertion_sort(char *);

//* Selection sort methods declaration part
void selection_sort(std::vector<int> &);
void selection_sort(std::vector<int> &, size_t);
void selection_sort(std::string &);
void selection_sort(std::string &, size_t);
void selection_sort(int *, size_t);
void selection_sort(char *, size_t);
void selection_sort(char *);

}  // namespace ST

#endif