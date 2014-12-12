/**
* Binary Tree Postorder Traversal.
* https://oj.leetcode.com/problems/binary-tree-postorder-traversal/
* Recursive and Iterative.
*/

#ifndef LEETCPP_SOLUTIONS_BINARY_TREE_POSTORDER_TRAVERSAL_H_
#define LEETCPP_SOLUTIONS_BINARY_TREE_POSTORDER_TRAVERSAL_H_

#include <vector>

#include "../util/util.h"

class BinaryTreePostorderTraversal {
public:
  std::vector<int> postorderTraversalRecursive(TreeNode *root);
  std::vector<int> postorderTraversalIterative(TreeNode *root);
};

#endif  // LEETCPP_SOLUTIONS_BINARY_TREE_POSTORDER_TRAVERSAL_H_
