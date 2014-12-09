/**
* Binary Tree Level Order Traversal I & II
* https://oj.leetcode.com/problems/binary-tree-level-order-traversal/
* https://oj.leetcode.com/problems/binary-tree-level-order-traversal-ii/
* Breath-first Search.
*/

#ifndef LEETCPP_SOLUTIONS_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H_
#define LEETCPP_SOLUTIONS_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H_

#include <vector>

#include "../util/util.h"

typedef std::vector<std::vector<int>> Matrix;

class BinaryTreeLevelOrderTraversal {
public:
  Matrix levelOrder(TreeNode *root);
  Matrix levelOrderBottom(TreeNode *root);
};

#endif  // LEETCPP_SOLUTIONS_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H_
