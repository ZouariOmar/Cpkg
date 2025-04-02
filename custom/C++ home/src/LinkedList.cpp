/**
 * @file      LinkedList.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     LinkedList source file
 * @version   0.1
 * @date      2025-03-29
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/src/LinkedList.cpp LinkedList.cpp @endlink
 */

//? Include prototype declaration part
#include "../inc/LinkedList.hpp"

//? Function(s) prototype dev part

/**
 * @fn    LinkedList::SinglyLinkedList::SinglyLinkedList()
 * @brief Construct a new LinkedList::SinglyLinkedList::SinglyLinkedList object
 */
LinkedList::SinglyLinkedList::SinglyLinkedList()
    : data(0),
      next(nullptr) {};

/**
 * @fn          LinkedList::SinglyLinkedList::SinglyLinkedList(int)
 * @brief       Construct a new LinkedList::SinglyLinkedList::SinglyLinkedList object
 * @param _data int
 */
LinkedList::SinglyLinkedList::SinglyLinkedList(int _data)
    : data(_data), next(nullptr) {};

/**
 * @fn         LinkedList::SinglyLinkedList::print(LinkedList::SinglyLinkedList *)
 * @brief      Print the Singly Linked list
 * @param root {LinkedList::SinglyLinkedList *}
 * @return     void
 */
void LinkedList::SinglyLinkedList::print(LinkedList::SinglyLinkedList *root) {
  while (root) {
    std::cout << root->data << " ";
    root = root->next;
  }
}

/**
 * @fn        LinkedList::SinglyLinkedList::to_SinglyLinkedList(std::vector<int>)
 * @brief     Transfer the data from vector to LinkedList::SinglyLinkedList
 * @param arr std::vector<int>
 * @return    LinkedList::SinglyLinkedList*
 */
LinkedList::SinglyLinkedList *LinkedList::SinglyLinkedList::to_SinglyLinkedList(std::vector<int> arr) {
  size_t i{}, len{arr.size()};

  LinkedList::SinglyLinkedList *root = new LinkedList::SinglyLinkedList(arr[i++]);
  LinkedList::SinglyLinkedList *tmp = root;

  while (i != len) {
    LinkedList::SinglyLinkedList *newNode = new LinkedList::SinglyLinkedList(arr[i++]);
    tmp->next = newNode;
    tmp = tmp->next;
  }

  return root;
}

/**
 * @fn         LinkedList::SinglyLinkedList::sort(LinkedList::SinglyLinkedList *)
 * @brief      Sort `head` in ascending order
 * @details    This fn use bubble-sort
 * @param head {LinkedList::SinglyLinkedList *}
 * @return     void
 */
void LinkedList::SinglyLinkedList::sort(LinkedList::SinglyLinkedList *head) {
  if (!head)
    return;

  bool swapped;
  do {
    swapped = false;
    LinkedList::SinglyLinkedList *current = head;
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
 * @fn         LinkedList::SinglyLinkedList::reverse(LinkedList::SinglyLinkedList **)
 * @brief      Reverse the `root`
 * @param root {LinkedList::SinglyLinkedList **}
 * @return     void
 */
void LinkedList::SinglyLinkedList::reverse(LinkedList::SinglyLinkedList **root) {
  if (!(*root) || !(*root)->next)
    return;

  LinkedList::SinglyLinkedList *next, *current = *root, *prev{nullptr};
  while (current) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  *root = prev;
}

/**
 * @fn    LinkedList::LinkedListBase::LinkedListBase()
 * @brief Construct a new LinkedList::LinkedListBase::LinkedListBase object
 */
LinkedList::LinkedListBase::LinkedListBase()
    : data(0), next(nullptr), prev(nullptr) {};

/**
 * @fn          LinkedList::LinkedListBase::LinkedListBase(int, LinkedListBase *, LinkedListBase *)
 * @brief       Construct a new LinkedList::LinkedListBase::LinkedListBase object
 * @param _data int
 * @param _next {LinkedListBase *}
 * @param _prev {LinkedListBase *}
 */
LinkedList::LinkedListBase::LinkedListBase(int _data, LinkedListBase *_next, LinkedListBase *_prev)
    : data(_data), next(_next), prev(_prev) {};

/**
 * @fn    LinkedList::LinkedListBase::~LinkedListBase()
 * @brief Destroy the LinkedList::LinkedListBase::LinkedList Base object
 */
LinkedList::LinkedListBase::~LinkedListBase() {
  delete prev;
  prev = nullptr;
  delete next;
  next = nullptr;
}

/**
 * @fn          LinkedList::DoublyLinkedList::DoublyLinkedList(int, DoublyLinkedList *, DoublyLinkedList *)
 * @brief       Construct a new LinkedList::DoublyLinkedList::DoublyLinkedList object
 * @param _data int
 * @param _next {DoublyLinkedList *}
 * @param _prev {DoublyLinkedList *}
 */
LinkedList::DoublyLinkedList::DoublyLinkedList(int _data, DoublyLinkedList *_next = nullptr, DoublyLinkedList *_prev = nullptr)
    : LinkedList::LinkedListBase(data, next, prev) {};

/**
 * @fn        LinkedList::DoublyLinkedList::transform(std::vector<int>) const
 * @brief     Transfer the data from vector to `LinkedList::DoublyLinkedList`
 * @details   Push back the new data
 * @param arr std::vector<int>
 * @return    {LinkedList::DoublyLinkedList *}
 */
LinkedList::DoublyLinkedList *LinkedList::DoublyLinkedList::transform(std::vector<int> arr) const {
  if (arr.empty())
    return nullptr;

  size_t i{}, len{arr.size()};
  LinkedList::DoublyLinkedList *head = new LinkedList::DoublyLinkedList(arr[i++]);
  LinkedList::DoublyLinkedList *tmp = head;

  while (i != len) {
    LinkedList::DoublyLinkedList *newNode = new LinkedList::DoublyLinkedList(arr[i++]);
    tmp->next = newNode;
    newNode->prev = tmp;
    tmp = static_cast<DoublyLinkedList *>(tmp->next);
  }

  return head;
}

/**
 * @fn         LinkedList::DoublyLinkedList::print(LinkedList::DoublyLinkedList *)
 * @brief      Print the LinkedList::DoublyLinkedList from head to tail
 * @details    Forward Mode
 * @param head {LinkedList::DoublyLinkedList *}
 * @return     void
 */
void LinkedList::DoublyLinkedList::print(LinkedList::DoublyLinkedList *head) {
  if (head) {
    std::cout << head->data << " ";
    print(static_cast<DoublyLinkedList *>(head->next));
  }
}

/**
 * @fn         LinkedList::DoublyLinkedList::reprint(LinkedList::DoublyLinkedList *)
 * @brief      Print the LinkedList::DoublyLinkedList from tail to head
 * @details    Reverse Mode
 * @param head {LinkedList::DoublyLinkedList *}
 * @return     void
 */
void LinkedList::DoublyLinkedList::reprint(LinkedList::DoublyLinkedList *head) {
  // Move to the end of the list
  while (head->next)
    head = static_cast<DoublyLinkedList *>(head->next);

  // Traverse backwards
  while (head) {
    std::cout << head->data << " ";
    head = static_cast<DoublyLinkedList *>(head->prev);
  }
}

/**
 * @fn         LinkedList::DoublyLinkedList::sort(LinkedList::DoublyLinkedList *)
 * @brief      Sort the LinkedList::DoublyLinkedList in ascending order
 * @details    use bubble-sort
 * @param root {LinkedList::DoublyLinkedList *}
 * @return     void
 */
void LinkedList::DoublyLinkedList::sort(LinkedList::DoublyLinkedList *root) {
  if (!root)
    return;

  bool swapped;
  do {
    swapped = false;
    LinkedList::DoublyLinkedList *current = root;
    while (current->next) {
      if (current->data > static_cast<DoublyLinkedList *>(current->next)->data) {
        std::swap(current->data, static_cast<DoublyLinkedList *>(current->next)->data);
        swapped = true;
      }
      current = static_cast<DoublyLinkedList *>(current->next);
    }
  } while (swapped);
}

/**
 * @brief ### Reverse the LinkedList::DoublyLinkedList
 * @param root
 */

/**
 * @fn         LinkedList::DoublyLinkedList::reverse(LinkedList::DoublyLinkedList **)
 * @brief      Reverse the LinkedList::DoublyLinkedList
 * @param root {LinkedList::DoublyLinkedList **}
 * @return     void
 */
void LinkedList::DoublyLinkedList::reverse(LinkedList::DoublyLinkedList **root) {
  if (!(*root) || !(*root)->next)
    return;

  LinkedList::DoublyLinkedList *next, *current = *root, *prev{nullptr};
  while (current) {
    next = static_cast<DoublyLinkedList *>(current->next);
    current->next = prev;
    prev = current;
    current = next;
  }
  *root = prev;
}

/**
 * @fn          CircularLinkedList(int, CircularLinkedList *, CircularLinkedList *)
 * @brief       Construct a new Linked List:: Circular Linked List:: Circular Linked List object
 * @param _data int
 * @param _next {LinkedList::CircularLinkedList *}
 * @param _prev {LinkedList::CircularLinkedList *}
 */
LinkedList::CircularLinkedList::CircularLinkedList(int _data, CircularLinkedList *_next = nullptr, CircularLinkedList *_prev = nullptr)
    : LinkedList::LinkedListBase(data, next, prev) {};

/**
 * @fn        LinkedList::CircularLinkedList::transform(std::vector<int>) const
 * @brief     Transfer the data from vector to LinkedList::CircularLinkedList
 * @details   Push back the new data
 * @param arr std::vector<int>
 * @return    {LinkedList::CircularLinkedList *}
 */
LinkedList::CircularLinkedList *LinkedList::CircularLinkedList::transform(std::vector<int> arr) const {
  LinkedList::CircularLinkedList *root = new LinkedList::CircularLinkedList(arr[0]);
  LinkedList::CircularLinkedList *trv = root;

  size_t len{arr.size()}, i{1};
  while (i < len) {
    LinkedList::CircularLinkedList *newNode = new LinkedList::CircularLinkedList(arr[i]);
    newNode->prev = trv;
    trv->next = newNode;
    trv = static_cast<CircularLinkedList *>(trv->next);
    i++;
  }

  trv->next = root;
  root->prev = trv;
  return root;
}

/**
 * @fn         LinkedList::CircularLinkedList::print(CircularLinkedList *)
 * @brief      Print the LinkedList::DoublyLinkedList from tail to head
 * @details    Reverse Mode
 * @param head {CircularLinkedList *}
 * @return     void
 */
void LinkedList::CircularLinkedList::print(CircularLinkedList *root) {
  if (!root)
    return;

  // Print the root data in the first position
  std::cout << root->data << " ";

  LinkedList::CircularLinkedList *current = static_cast<CircularLinkedList *>(root->next);
  while (current != root) {
    std::cout << current->data << " ";
    current = static_cast<CircularLinkedList *>(current->next);
  }
}

/**
 * @fn         LinkedList::CircularLinkedList::reprint(LinkedList::CircularLinkedList *)
 * @brief      Print the LinkedList::DoublyLinkedList from head to tail
 * @details    Forward Mode
 * @param head {LinkedList::CircularLinkedList *}
 * @return     void
 */
void LinkedList::CircularLinkedList::reprint(LinkedList::CircularLinkedList *root) {
  if (!root)
    return;

  LinkedList::CircularLinkedList *current = static_cast<CircularLinkedList *>(root->prev);
  while (current != root) {
    std::cout << current->data << " ";
    current = static_cast<CircularLinkedList *>(current->prev);
  }

  // Print the root data in the last position
  std::cout << root->data << " ";
}

/**
 * @fn         LinkedList::CircularLinkedList::sort(CircularLinkedList *)
 * @brief      Sort the LinkedList::CircularLinkedList in ascending order
 * @details    Use bubble-sort
 * @param root {CircularLinkedList *}
 * @return     void
 */
void LinkedList::CircularLinkedList::sort(CircularLinkedList *root) {
  if (!root)
    return;

  bool swapped;
  do {
    swapped = false;
    LinkedList::CircularLinkedList *current = root;
    while (current->next != root) {
      if (current->data > static_cast<CircularLinkedList *>(current->next)->data) {
        std::swap(current->data, static_cast<CircularLinkedList *>(current->next)->data);
        swapped = true;
      }
      current = static_cast<CircularLinkedList *>(current->next);
    }
  } while (swapped);
}