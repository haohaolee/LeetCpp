/**
* Utility functions.
*/

#ifndef LEETCPP_SOLUTIONS_UTIL_H_
#define LEETCPP_SOLUTIONS_UTIL_H_

#include <cstdlib>
#include <string>

// Definition for binary tree.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

string serialize_tree(TreeNode* root);
TreeNode* deserialize_tree(const std::string& tree_data);

#endif  // LEETCPP_SOLUTIONS_UTIL_H_
