/**
* Symmetric Tree .
* https://oj.leetcode.com/problems/symmetric-tree/
* Recursive and Iterative ways.
*/

#ifndef LEETCPP_SOLUTIONS_SYMMETRIC_TREE_H_
#define LEETCPP_SOLUTIONS_SYMMETRIC_TREE_H_

#include <string>
#include <utility>
#include <vector>

#include "util.h"

class SymmetricTreeRecursive {
public:
  bool isSymmetric(TreeNode *root);
private:
  bool isSymmetric(TreeNode* left_child, TreeNode* right_child);
};

class SymmetricTreeIterative {
public:
  bool isSymmetric(TreeNode *root);
private:
  struct TreeNodeInfo {
    TreeNode* root_;
    int level_;
    int node_num_;
    TreeNodeInfo(TreeNode* root, int level, int node_num)
      : root_(root), level_(level), node_num_(node_num) {}
  };
  bool isSymmetricAtLevel(const std::vector<TreeNodeInfo>& node_list,
                          int lelvel);
};

#endif  // LEETCPP_SOLUTIONS_SYMMETRIC_TREE_H_
