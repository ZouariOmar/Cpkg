/***************************************************
 * @file      Tree.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      18-08-2024
 * @copyright Copyright (c) 2024
 ***************************************************/

// ? ------------------------- INCLUDE PROTOTYPE DECLARATION PART -------------------------
#include "../inc/Tree.hpp"

//? --------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------

/**
 * @brief #### Construct a new node::node struct
 */
node::node()
    : data(0), left(nullptr), right(nullptr) {};

/**
 * @brief #### Construct a new node::node struct
 * @param x
 */
node::node(int x)
    : data(x), left(nullptr), right(nullptr) {};

/**
 * @brief #### Construct a new node::node struct
 * @param x
 * @param y
 * @param z
 */
node::node(int x, node *y, node *z)
    : data(x), left(y), right(z) {};

//////////////////////////////////////////////////////////////////////

/**
 * @brief #### Pre-order Traversal Technique (DFT)
 * @param root
 */
void BT::TBT::pre_ot(node *root) {
  if (root) {
    std::cout << root->data << " ";
    pre_ot(root->left);
    pre_ot(root->right);
  }
}

/**
 * @brief #### In-order Traversal Technique (DFT)
 * @param root
 */
void BT::TBT::in_ot(node *root) {
  if (root) {
    in_ot(root->left);
    std::cout << root->data << " ";
    in_ot(root->right);
  }
}

/**
 * @brief #### Post-order Traversal Technique (DFT)
 * @param root
 */
void BT::TBT::post_ot(node *root) {
  if (root) {
    post_ot(root->left);
    post_ot(root->right);
    std::cout << root->data << " ";
  }
}

/**
 * @brief #### Level-order Traversal Technique (BFT)
 * @param root
 */
void BT::TBT::lvl_ot(node *root) {
  if (!root) return;
  std::queue<node *> q;
  q.push(root);
  while (!q.empty()) {
    node *tmp = q.front();
    q.pop();
    std::cout << tmp->data << " ";
    if (tmp->left) q.push(tmp->left);
    if (tmp->right) q.push(tmp->right);
  }
}

//////////////////////////////////////////////////////////////////////

/**
 * @brief #### Convert a vector to a Binary Search Tree
 * @param arr
 * @param l
 * @param h
 * @return node*
 */
node *BT::TBT::to_bst(std::vector<int> arr, int l, int h) {
  // Stop when the base length more then size of the vector
  if (h < l) return nullptr;

  // Sort the vector
  std::sort(arr.begin(), arr.end());

  // Add the new node
  int mid{(l + h) / 2};
  node *root = new node(mid);

  // Same think to the left and right node
  root->left = to_bst(arr, l, mid - 1);
  root->right = to_bst(arr, mid + 1, h);

  return root;
}

/**
 * @brief #### Check if the Binary Tree is a Binary Search Tree
 * @param root
 * @return true
 * @return false
 */
bool BT::TBT::is_bst(node *root) {
  // Return true if the node is nullptr
  if (!root) return true;

  // The main check statement
  if ((root->left && maxVal(root->left) >= root->data) || (root->right && minVal(root->right) <= root->data) || !is_bst(root->left) || !is_bst(root->right))
    return false;

  return true;
}

/**
 * @brief #### Return the max value in a Binary Tre
 * @param root
 * @return int
 */
int BT::TBT::maxVal(node *root) {
  if (!root) return INT16_MIN;
  return std::max({root->data, maxVal(root->left), maxVal(root->right)});
}

/**
 * @brief #### Return the min value in a Binary Tree
 * @param root
 * @return int
 */
int BT::TBT::minVal(node *root) {
  if (!root) return INT16_MAX;
  return std::min({root->data, minVal(root->left), minVal(root->right)});
}