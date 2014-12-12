/**
* Binary Tree Preorder Traversal.
* https://oj.leetcode.com/problems/binary-tree-preorder-traversal/
* Recursive and Iterative.
*/

#ifndef LEETCPP_SOLUTIONS_BINARY_TREE_PREORDER_TRAVERSAL_H_
#define LEETCPP_SOLUTIONS_BINARY_TREE_PREORDER_TRAVERSAL_H_

#include <vector>

#include "../util/util.h"

class BinaryTreePreorderTraversal {
public:
  std::vector<int> preorderTraversalRecursive(TreeNode *root);
  std::vector<int> preorderTraversalIterative(TreeNode *root);
};

#endif  // LEETCPP_SOLUTIONS_BINARY_TREE_PREORDER_TRAVERSAL_H_
