/**
 * @file      test.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     tester file
 * @version   0.1
 * @date      2025-04-01
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/test/test.cpp test.cpp @endlink
 */

//? Include prototype declaration part
#include "../src/Trees.cpp"
#include "../src/Sort.cpp"
using namespace Sort;
using namespace std;

//? Main test prototype dev part

/**
 * @fn     main(void)
 * @brief  Main test function
 * @return int
 */
int main(void) {
  vector<int> arr({5, 77, 1, 6, 0, 778});
  tree_sort(arr, arr.size());
  for (const int &it : arr)
    cout << it << " ";
  return EXIT_SUCCESS;
}