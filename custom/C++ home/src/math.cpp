/***************************************************
 * @file      math.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-08-2024
 * @copyright Copyright (c) 2024
 ***************************************************/

// ? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
#include "../inc/math.hpp"

//? --------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------

/**
 * @brief ### Return the factorial of `x`
 * @param x
 * @return int
 */
int math::factorial(int x) {
  if (!x) return 0;
  int res{1};
  for (size_t i{1}; i <= x; i++) res *= i;
  return res;
}

/**
 * @brief ### Return the fibonacci number of `x`
 * @param x
 * @return int
 */
int math::fib(int x) {
  if (x < 3) return 1;
  return fib(x - 1) + fib(x - 2);
}

/**
 * @brief ### Return the Greatest Common Divisor of `x` and `y`
 * @param x
 * @param y
 * @return int
 */
int math::gcd(int x, int y) {
  if (!x) return y;
  return gcd(y % x, x);
}

/**
 * @brief ### Return the Least Common Multiple of `x` and `y`
 *
 * @param x
 * @param y
 * @return int
 */
int math::lcm(int x, int y) {
  if (x < y) std::swap(x, y);
  int l{x};
  while (l % y) l += x;
  return l;
}

/**
 * @brief ### Check if `x` is prime or not
 * @param x 
 * @return true 
 * @return false 
 */
bool math::is_prime(int x) {
  if (x < 2) return false;
  double len = sqrt(x);
  for (size_t i = 2; i < len; i++)
    if (!(x % i)) return false;
  return true;
}