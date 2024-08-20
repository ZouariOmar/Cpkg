/***************************************************
 * @file      Tree.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      18-08-2024
 * @copyright Copyright (c) 2024
 ***************************************************/

// ? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
#include "../inc/linkList.hpp"

//? --------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------

/**
 * @brief #### Construct a new sll::sll struct
 * @param x
 */
sll::sll(int x)
    : data(x), next(nullptr) {};

/**
 * @brief #### Print the Singly Linked list
 * @param root
 */
void LL::SLL::printSll(sll *root) {
  while (root) {
    std::cout << root->data << " ";
    root = root->next;
  }
}

/**
 * @brief #### Transfer the data from vector to SLL (V0)
 * @param arr
 * @param x
 * @return sll*
 */
sll *LL::SLL::v_to_sll(std::vector<int> arr, int x) {
  if (x == arr.size()) return nullptr;

  sll *root = new sll(arr[x]);
  root->next = v_to_sll(arr, ++x);

  return root;
}

/**
 * @brief #### Transfer the data from vector to SLL (V1)
 * @param arr
 * @return sll*
 */
sll *LL::SLL::v_to_sll(std::vector<int> arr) {
  return v_to_sll(arr, 0);
}

/**
 * @brief #### Sort the Singly Linked List
 * *
 * - Using the bubble-sort
 * @param root 
 */
void LL::SLL::sortSLL(sll *root) {
  if (!root) return;

  bool swapped;
  do {
    swapped = false;
    sll *current = root;
    while (current->next) {
      if (current->data > current->next->data) {
        std::swap(current->data, current->next->data);
        swapped = true;
      }
      current = current->next;
    }
  } while (swapped);
}