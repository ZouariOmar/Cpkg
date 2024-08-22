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

/***************************************************
 *? ===== Singly Linked List (SLL) Dev Section =====
 ***************************************************/

/**
 * @brief #### Construct a new sll::sll struct
 */
sll::sll()
    : data(0), next(nullptr) {};

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
void LL::SLL::print(sll *root) {
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
sll *LL::SLL::to_sll(std::vector<int> arr) {
  size_t i{}, len{arr.size()};

  sll *root = new sll(arr[i++]);
  sll *tmp = root;

  while (i != len) {
    sll *newNode = new sll(arr[i++]);
    tmp->next = newNode;
    tmp = tmp->next;
  }

  return root;
}

/**
 * @brief ### Sort the SLL in ascending order
 * *
 * - #### Using the bubble-sort
 * @param root
 */
void LL::SLL::sort(sll *root) {
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

/**
 * @brief ### Reverse the SLL
 * @param root 
 */
void LL::SLL::reverse(sll **root) {
  if (!(*root) || !(*root)->next) return;

  sll *next, *current = *root, *prev{nullptr};
  while (current) {
    next = current->next;
    current->next = prev; 
    prev = current;
    current = next;
  }
  *root = prev;
}

/***************************************************
 *? ===== Double Linked List (DLL) Dev Section =====
 ***************************************************/

/**
 * @brief #### Construct a new dll::dll struct
 */
dll::dll()
    : data(0), next(nullptr), prev(nullptr) {};

/**
 * @brief #### Construct a new dll::dll struct
 * @param x
 */
dll::dll(int x)
    : data(x), next(nullptr), prev(nullptr) {};

/**
 * @brief #### Transfer the data from vector to DLL (V0)
 * *
 * - Push back the new data
 * @param arr
 * @param x
 * @return dll*
 */
dll *LL::DLL::to_dll(std::vector<int> arr) {
  if (arr.empty()) return nullptr;

  size_t i{}, len{arr.size()};
  dll *head = new dll(arr[i++]);
  dll *tmp = head;

  while (i != len) {
    dll *newNode = new dll(arr[i++]);
    tmp->next = newNode;
    newNode->prev = tmp;
    tmp = tmp->next;
  }

  return head;
}

/**
 * @brief ### Print the dll from head to tail
 * *
 * - #### Forward Mode
 * @param head
 */
void LL::DLL::print(dll *head) {
  if (head) {
    std::cout << head->data << " ";
    print(head->next);
  }
}

/**
 * @brief ### Print the dll from tail to head
 * *
 * - #### Reverse Mode
 * @param head
 */
void LL::DLL::reprint(dll *head) {
  // Move to the end of the list
  while (head->next)
    head = head->next;

  // Traverse backwards
  while (head) {
    std::cout << head->data << " ";
    head = head->prev;
  }
}

/**
 * @brief ### Sort the DLL in ascending order
 * *
 * - #### Using the bubble-sort
 * @param root
 */
void LL::DLL::sort(dll *root) {
  if (!root) return;

  bool swapped;
  do {
    swapped = false;
    dll *current = root;
    while (current->next) {
      if (current->data > current->next->data) {
        std::swap(current->data, current->next->data);
        swapped = true;
      }
      current = current->next;
    }
  } while (swapped);
}

/**
 * @brief ### Reverse the DLL
 * @param root
 */
void LL::DLL::reverse(dll **root) {
  if (!(*root) || !(*root)->next) return;

  dll *next, *current = *root, *prev{nullptr};
  while (current) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  *root = prev;
}

/*****************************************************
 *? ===== Circular Linked List (CLL) Dev Section =====
 *****************************************************/

/**
 * @brief #### Transfer the data from vector to CLL (V0)
 * *
 * - Push back the new data
 * @param arr
 * @param x
 * @return dll*
 */
cll *LL::CLL::to_cll(std::vector<int> arr) {
  cll *root = new cll(arr[0]);
  cll *trv = root;

  size_t len{arr.size()}, i{1};
  while (i < len) {
    cll *newNode = new cll(arr[i]);
    newNode->prev = trv;
    trv->next = newNode;
    trv = trv->next;
    i++;
  }

  trv->next = root;
  root->prev = trv;

  return root;
}

/**
 * @brief ### Print the dll from tail to head
 * *
 * - #### Reverse Mode
 * @param head
 */
void LL::CLL::print(cll *root) {
  if (!root) return;

  // Print the root data in the first position
  std::cout << root->data << " ";

  cll *current = root->next;
  while (current != root) {
    std::cout << current->data << " ";
    current = current->next;
  }
}

/**
 * @brief ### Print the dll from head to tail
 * *
 * - #### Forward Mode
 * @param head
 */
void LL::CLL::reprint(cll *root) {
  if (!root) return;

  cll *current = root->prev;
  while (current != root) {
    std::cout << current->data << " ";
    current = current->prev;
  }

  // Print the root data in the last position
  std::cout << root->data << " ";
}

/**
 * @brief ### Sort the CLL in ascending order
 * *
 * - #### Using the bubble-sort
 * @param root
 */
void LL::CLL::sort(cll *root) {
  if (!root) return;

  bool swapped;
  do {
    swapped = false;
    dll *current = root;
    while (current->next != root) {
      if (current->data > current->next->data) {
        std::swap(current->data, current->next->data);
        swapped = true;
      }
      current = current->next;
    }
  } while (swapped);
}