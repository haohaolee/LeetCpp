/**
* Validate Binary Search Tree.
* https://oj.leetcode.com/problems/validate-binary-search-tree/
* Recursive way.
*/

#ifndef LEETCPP_SOLUTIONS_VALIDATE_BINARY_SEARCH_TREE_H_
#define LEETCPP_SOLUTIONS_VALIDATE_BINARY_SEARCH_TREE_H_

#include "../util/util.h"

class ValidateBinarySearchTree {
public:
  bool isValidBST(TreeNode *root);
private:
  int findMaxElem(TreeNode *root);
  int findMinElem(TreeNode *root);
};

#endif  // LEETCPP_SOLUTIONS_VALIDATE_BINARY_SEARCH_TREE_H_
