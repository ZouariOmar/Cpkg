/**
 * @file      Trees.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     Main Trees source file
 * @version   0.1
 * @date      2025-03-30
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/custom/C++%20home/src/Trees.cpp Trees.cpp @endlink
 */

//? Include prototype declaration part
#include "../inc/Trees.hpp"

//? Function(s) prototype dev part

/**
 * @fn           BinaryTree::Node::Node(int, Node *, Node *)
 * @brief        Construct a new Node::Node object
 * @param _data  int
 * @param _data  {Node *}
 * @param _right {Node *}
 */
BinaryTree::Node::Node(int _data, Node *_left, Node *_right)
    : data(_data), left(_left), right(_right) {};

/**
 * @fn         BinaryTree::TraversalBinaryTree::ShowPreOrderedTraversalTree(Node *)
 * @brief      Traverse binary tree in prefix order
 * @param root {Node *}
 * @return     void
 */
void BinaryTree::TraversalBinaryTree::ShowPreOrderedTraversalTree(Node *root) {
  if (root) {
    std::cout << root->data << " ";
    ShowPreOrderedTraversalTree(root->left);
    ShowPreOrderedTraversalTree(root->right);
  }
}

/**
 * @fn         BinaryTree::TraversalBinaryTree::ShowInoderedTraversalTree(Node *)
 * @brief      Traverse binary tree in infix order
 * @param root {Node *}
 * @return     void
 */
void BinaryTree::TraversalBinaryTree::ShowInoderedTraversalTree(Node *root) {
  if (root) {
    ShowInoderedTraversalTree(root->left);
    std::cout << root->data << " ";
    ShowInoderedTraversalTree(root->right);
  }
}

/**
 * @fn         BinaryTree::TraversalBinaryTree::ShowPostOrderedTraversalTree(Node *)
 * @brief      Traverse binary tree in posfix order
 * @param root {Node *}
 * @return     void
 */
void BinaryTree::TraversalBinaryTree::ShowPostOrderedTraversalTree(Node *root) {
  if (root) {
    ShowPostOrderedTraversalTree(root->left);
    ShowPostOrderedTraversalTree(root->right);
    std::cout << root->data << " ";
  }
}

/**
 * @fn         BinaryTree::TraversalBinaryTree::ShowLevelOrderedTraversalTree(Node *)
 * @brief      Traverse binary tree in level order
 * @param root {Node *}
 * @return     void
 */
void BinaryTree::TraversalBinaryTree::ShowLevelOrderedTraversalTree(Node *root) {
  if (!root)
    return;
  std::queue<Node *> q;
  q.push(root);
  while (!q.empty()) {
    Node *tmp = q.front();
    q.pop();
    std::cout << tmp->data << " ";
    if (tmp->left)
      q.push(tmp->left);
    if (tmp->right)
      q.push(tmp->right);
  }
}

/**
 * @fn        BinaryTree::TraversalBinaryTree::to_binarySearchTree(std::vector<int>, int, int);
 * @brief     Convert a vector to a Binary Search Tree
 * @param arr std::vector<int>
 * @tparam T  {std::vector<int>} 
 * @param l   int
 * @param h   int
 * @return    {BinaryTree::Node *}
 */
template <typename T>
BinaryTree::Node *BinaryTree::TraversalBinaryTree::to_binarySearchTree(T arr, int l, int h) {
  // Stop when the base length more then size of the vector
  if (h < l)
    return nullptr;

  // Sort the vector
  std::sort(arr.begin(), arr.end());

  // Add the new Node
  int mid{(l + h) / 2};
  Node *root = new Node(mid);

  // Same think to the left and right Node
  root->left = to_binarySearchTree(arr, l, mid - 1);
  root->right = to_binarySearchTree(arr, mid + 1, h);

  return root;
}

/**
 * @fn         BinaryTree::TraversalBinaryTree::is_binarySearchTree(Node *)
 * @brief      Return `true` if `root` is a BT, otherwise return `false`
 * @param root {Node *}
 * @return     bool
 */
bool BinaryTree::TraversalBinaryTree::is_binarySearchTree(Node *root) {
  // Return true if the Node is nullptr
  if (!root)
    return true;

  // The main check statement
  return !((root->left && maxVal(root->left) >= root->data) || (root->right && minVal(root->right) <= root->data) || !is_binarySearchTree(root->left) || !is_binarySearchTree(root->right));
}

/**
 * @fn         BinaryTree::TraversalBinaryTree::maxVal(Node *)
 * @brief      Return the max value from `root`
 * @param root {Node *}
 * @return     int
 */
int BinaryTree::TraversalBinaryTree::maxVal(Node *root) {
  if (!root)
    return std::numeric_limits<int>::min();
  return std::max({root->data, maxVal(root->left), maxVal(root->right)});
}

/**
 * @fn         BinaryTree::TraversalBinaryTree::maxVal(Node *)
 * @brief      Return the min value from `root`
 * @param root {Node *}
 * @return     int
 */
int BinaryTree::TraversalBinaryTree::minVal(Node *root) {
  if (!root)
    return std::numeric_limits<int>::max();
  return std::min({root->data, minVal(root->left), minVal(root->right)});
}