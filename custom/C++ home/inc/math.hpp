/***************************************************
 * @file      math.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-08-2024
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef __MATH_HPP__
#define __MATH_HPP__

//? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
//* Sys include headers
#include <iostream>
#include <cmath>

// ? ------------------------- STRUCT PROTOTYPE DECLARATION PART -------------------------

//? ------------------- NAMESPACE/Classes/FUNCTIONS PROTOTYPE DEV PART -------------------

namespace math {
int factorial(int);
int fib(int);
int gcd(int, int);
int lcm(int, int);
bool is_prime(int);
}  // namespace math

#endif