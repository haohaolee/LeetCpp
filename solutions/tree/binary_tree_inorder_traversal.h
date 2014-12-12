/**
* Binary Tree Inorder Traversal.
* https://oj.leetcode.com/problems/binary-tree-inorder-traversal/
* Recursive and Iterative.
*/

#ifndef LEETCPP_SOLUTIONS_BINARY_TREE_INORDER_TRAVERSAL_H_
#define LEETCPP_SOLUTIONS_BINARY_TREE_INORDER_TRAVERSAL_H_

#include <vector>

#include "../util/util.h"

class BinaryTreeInorderTraversal {
public:
  std::vector<int> inorderTraversalRecursive(TreeNode *root);
  std::vector<int> inorderTraversalIterative(TreeNode *root);
};

#endif  // LEETCPP_SOLUTIONS_BINARY_TREE_INORDER_TRAVERSAL_H_
