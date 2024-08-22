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
  sll();
  sll(int);
};

struct dll {  //* Declare the DLL structure
  // Vars declaration part
  int data;
  dll *next, *prev;

  // Contractures declaration part
  dll();
  dll(int);
};

typedef dll cll;  //* Declare the CLL structure

//? ------------------- NAMESPACE/Classes/FUNCTIONS PROTOTYPE DEV PART -------------------

namespace LL {  //* Linked List space section
class SLL {     //* Singly Linked List class
 public:
  //* Custom function declaration part
  sll *to_sll(std::vector<int>);  // Vector to SLL
  void sort(sll *);
  void reverse(sll **);
  void print(sll *);
};  // class SLL

class DLL {  //* Doubly linked list class
 public:
  dll *to_dll(std::vector<int>);
  void sort(dll *);
  void reverse(dll **);
  void print(dll *);
  void reprint(dll *);
};  // class DLL

class CLL {  //* Circular linked list class
 public:
  cll *to_cll(std::vector<int>);
  void sort(cll *);
  void print(cll *);
  void reprint(cll *);
};  // Class CLL

}  // namespace LL

#endif