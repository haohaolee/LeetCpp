/**
* Symmetric Tree .
* https://oj.leetcode.com/problems/symmetric-tree/
* In-order traversal sequence is palindrome.
*/

#ifndef LEETCPP_SOLUTIONS_SYMMETRIC_TREE_H_
#define LEETCPP_SOLUTIONS_SYMMETRIC_TREE_H_

#include "util.h"

class SymmetricTreeRecursive {
public:
  bool isSymmetric(TreeNode *root);
private:
  bool isSymmetric(TreeNode* left_child, TreeNode* right_child);
};

#endif  // LEETCPP_SOLUTIONS_SYMMETRIC_TREE_H_
