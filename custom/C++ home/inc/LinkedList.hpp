/**
 * @file      LinkedList.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     LinkedList header file
 * @version   0.1
 * @date      2025-03-28
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/inc/LinkedList.hpp LinkedList.hpp @endlink
 */

//? Pre-processor prototype declaration part
#ifndef __LINKEDLIST_HPP__
#define __LINKEDLIST_HPP__

//? Include prototype declaration part
//* Include std c++ header(s)
#include <iostream>
#include <vector>

//? Namespace prototype declaration part

/**
 * @namespace LinkedList
 * @brief     LinkedList namespace
 */
namespace LinkedList {
class LinkedListBase;
class SinglyLinkedList;
class DoublyLinkedList;
class CircularLinkedList;
} // Namespace LinkedList

//? Class(es) prototype declaration part

/**
 * @class LinkedList::SinglyLinkedList
 * @brief SinglyLinkedList class
 */
class LinkedList::SinglyLinkedList {
private:
  int data;
  SinglyLinkedList *next;

public:
  SinglyLinkedList();
  SinglyLinkedList(int);
  SinglyLinkedList *to_SinglyLinkedList(std::vector<int>);
  void sort(SinglyLinkedList *);
  void reverse(SinglyLinkedList **);
  void print(SinglyLinkedList *);
}; // SinglyLinkedList class

class LinkedList::LinkedListBase {
protected:
  int data;
  LinkedListBase *next;
  LinkedListBase *prev;

public:
  LinkedListBase();
  LinkedListBase(int, LinkedListBase *nxt = nullptr, LinkedListBase *prv = nullptr);
  virtual ~LinkedListBase();
  virtual LinkedListBase *transform(std::vector<int>) const = 0;
}; // LinkedListBase class

/**
 * @class LinkedList::DoublyLinkedList
 * @brief DoublyLinkedList class
 */
class LinkedList::DoublyLinkedList : private LinkedList::LinkedListBase {
public:
  DoublyLinkedList();
  DoublyLinkedList(int, DoublyLinkedList *nxt = nullptr, DoublyLinkedList *prv = nullptr);
  DoublyLinkedList *transform(std::vector<int>) const override;
  void sort(DoublyLinkedList *);
  void reverse(DoublyLinkedList **);
  void print(DoublyLinkedList *);
  void reprint(DoublyLinkedList *);
}; // DoublyLinkedList class

/**
 * @fn    LinkedList::CircularLinkedList
 * @brief CircularLinkedList class
 */
class LinkedList::CircularLinkedList : private LinkedList::LinkedListBase {
public:
  CircularLinkedList();
  CircularLinkedList(int, CircularLinkedList *nxt = nullptr, CircularLinkedList *prv = nullptr);
  CircularLinkedList *transform(std::vector<int>) const override;
  void sort(CircularLinkedList *);
  void print(CircularLinkedList *);
  void reprint(CircularLinkedList *);
}; // CircularLinkedList Class

#endif // __LINKEDLIST_HPP__