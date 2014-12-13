#include <cstdlib>
#include <vector>
using namespace std;

#include "path_sum_ii.h"
#include "../util/util.h"

vector<vector<int>> PathSumII::pathSum(TreeNode* root, int sum) {
  paths_.clear();
  current_path_.clear();

  preOrderTraversal(root, sum);

  return paths_;
}

void PathSumII::preOrderTraversal(TreeNode* root, int sum) {
  if (!root)
    return;

  current_path_.push_back(root->val);

  // Find first leaf node that total sum from root node equals to given value.
  if (!root->left && !root->right && sum == root->val) {
    paths_.push_back(current_path_);
  }

  // Traversal left & right sub-trees to find matching leaf nodes.
  preOrderTraversal(root->left, sum - root->val);
  preOrderTraversal(root->right, sum - root->val);

  current_path_.pop_back();
}
