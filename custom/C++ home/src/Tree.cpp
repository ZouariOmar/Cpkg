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