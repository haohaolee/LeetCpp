/**
* Utility functions.
*/

#ifndef LEETCPP_SOLUTIONS_UTIL_H_
#define LEETCPP_SOLUTIONS_UTIL_H_

#include <cstdlib>
#include <string>
#include <utility>

// Definition for binary tree.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

typedef enum TreeNodeType_ {
  Root,
  LeftChild,
  RightChild
} TreeNodeType;

typedef std::pair<TreeNode*, TreeNodeType> CandidateTreeNodeType;

void destroy_tree(TreeNode* root);
string output_tree(TreeNode* root);
TreeNode* build_tree(const std::string& tree_data);

#endif  // LEETCPP_SOLUTIONS_UTIL_H_
