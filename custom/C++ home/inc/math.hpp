/**
 * @file    math.hpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   Main math header file
 * @version 0.1
 * @date    2025-03-29
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/inc/math.hpp math.hpp @endlink
 */

#ifndef __MATH_HPP__
#define __MATH_HPP__

//? Include prototype declaration part
//* Include c++ std headers
#include <cmath>
#include <iostream>

//? Namespace prototype declaration part

/**
 * @namespace Math
 * @brief     Math namespace
 */
namespace Math {
int factorial(int);
int fib(int);
int gcd(int, int);
int lcm(int, int);
bool is_prime(int);
} // namespace Math

#endif // __MATH_HPP__