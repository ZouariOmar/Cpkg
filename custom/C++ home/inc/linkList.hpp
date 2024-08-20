/***************************************************
 * @file      linkedList.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      18-08-2024
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef __LINKEDLIST_HPP__
#define __LINKEDLIST_HPP__

//? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
//* Sys include headers
#include <bits/stdc++.h>

// ? ------------------------- STRUCT PROTOTYPE DECLARATION PART -------------------------

struct sll {  //* Declare the SLL structure
  // Vars declaration part
  int data;
  sll *next;

  // Contractures declaration part
  sll(int);
};

//? ------------------- NAMESPACE/Classes/FUNCTIONS PROTOTYPE DEV PART -------------------

namespace LL {  //* Linked List space section
class SLL {     //* Singly Linked List class

 public:
  /************************************
   * Custom function declaration part
   ************************************/
  sll *v_to_sll(std::vector<int>, int);  // Vector to SLL (version 0)
  sll *v_to_sll(std::vector<int>);       // Vector to SLL (version 1)
  void sortSLL(sll *);
  void printSll(sll *);
};
}  // namespace LL

#endif