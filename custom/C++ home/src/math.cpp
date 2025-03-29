/**
 * @file      math.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     Main math source file
 * @version   0.1
 * @date      2025-03-29
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/src/math.cpp math.cpp @endlink
 */

//? Include prototype declaration part
#include "../inc/math.hpp"

//? Function(s) prototype dev part

/**
 * @fn      Math::factorial(int)
 * @brief   Return the factorial of `x`
 * @param x int
 * @return  int
 */
int Math::factorial(int x) {
  if (!x)
    return 0;
  int res{1};
  for (size_t i{1}; i <= x; i++)
    res *= i;
  return res;
}

/**
 * @fn      Math::fib(int)
 * @brief   Return the fibonacci number of `x`
 * @param x int
 * @return  int
 */
int Math::fib(int x) {
  if (x < 3)
    return 1;
  return fib(x - 1) + fib(x - 2);
}

/**
 * @fn      Math::gcd(int, int)
 * @brief   Return the Greatest Common Divisor of `x` and `y`
 * @param x int
 * @param y int
 * @return  int
 */
int Math::gcd(int x, int y) {
  if (!x)
    return y;
  return gcd(y % x, x);
}

/**
 * @fn      Math::gcd(int, int)
 * @brief   Return the Least Common Multiple of `x` and `y`
 * @param x int
 * @param y int
 * @return  int
 */
int Math::lcm(int x, int y) {
  if (x < y)
    std::swap(x, y);
  int l{x};
  while (l % y)
    l += x;
  return l;
}

/**
 * @fn      Math::is_prime(int)
 * @brief   Return `true` if `x` is prime number, otherwise return `false`
 * @param x int
 * @return  bool
 */
bool Math::is_prime(int x) {
  if (x < 2)
    return false;
  double len = sqrt(x);
  for (size_t i = 2; i < len; i++)
    if (!(x % i))
      return false;
  return true;
}