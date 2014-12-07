/**
* Balanced Binary Tree
* https://oj.leetcode.com/problems/balanced-binary-tree/
* Depth-first traversal.
* We should use height strictly here instead of depth.
*/

#ifndef LEETCPP_SOLUTIONS_BALANCED_BINARY_TREE_H_
#define LEETCPP_SOLUTIONS_BALANCED_BINARY_TREE_H_

#include "../util/util.h"

class BalancedBinaryTree {
public:
  bool isBalanced(TreeNode *root);
private:
  // The longest path from root to the leaf node.
  int getHeight(TreeNode* root);
};

#endif  // LEETCPP_SOLUTIONS_BALANCED_BINARY_TREE_H_
