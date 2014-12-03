#include <cmath>
#include <string>
#include <vector>
#include <queue>
using namespace std;

#include "symmetric_tree.h"
#include "util.h"

bool SymmetricTreeRecursive::isSymmetric(TreeNode *root) {
  // Empty tree.
  if (root == NULL)
    return true;

  // Left & Right sub-trees should be symmetric.
  return isSymmetric(root->left, root->right);
}

bool SymmetricTreeRecursive::isSymmetric(TreeNode* left_child,
                                         TreeNode* right_child) {
  if (left_child) {
    return (right_child &&
            left_child->val == right_child->val &&
            isSymmetric(left_child->left, right_child->right) &&
            isSymmetric(left_child->right, right_child->left));
  }

  return !right_child;
}


bool SymmetricTreeIterative::isSymmetric(TreeNode* root) {
  bool ret = true;

  if (root == NULL)
    return ret;

  vector<TreeNodeInfo> node_list;
  int current_level = 0;
  queue<TreeNodeInfo> candidate_list;
  candidate_list.push(TreeNodeInfo(root, 1, 1));

  while (!candidate_list.empty() && ret) {
    TreeNodeInfo node_info = candidate_list.front();
    auto node_root = node_info.root_;
    auto node_level = node_info.level_;
    auto node_num = node_info.node_num_;

    // Process currently visiting node.
    if (node_level != current_level) {
      ret &= isSymmetricAtLevel(node_list, current_level);
      node_list.clear();
      current_level = node_level;
    }
    node_list.push_back(node_info);

    // Enqueue children node.
    if (node_root->left) {
      candidate_list.push(TreeNodeInfo(node_root->left,
                                       node_level + 1,
                                       2 * node_num));
    }
    if (node_root->right) {
      candidate_list.push(TreeNodeInfo(node_root->right,
                                       node_level + 1,
                                       2 * node_num + 1));
    }

    candidate_list.pop();
  }

  if (!node_list.empty() && ret) {
    ret &= isSymmetricAtLevel(node_list, current_level);
  }

  return ret;
}

bool SymmetricTreeIterative::isSymmetricAtLevel(
  const vector<TreeNodeInfo>& node_list,
  int level) {
  size_t length = node_list.size();
  bool ret = (level <= 1) ? true : (length & 1) == 0;

  for (size_t i = 0; i < length / 2 && ret; ++i) {
    const TreeNodeInfo& left = node_list[i];
    const TreeNodeInfo& right = node_list[length - 1 - i];

    if (left.root_->val != right.root_->val) {
      ret = false;
      break;
    }

    if (left.level_ != level || right.level_ != level) {
      ret = false;
      break;
    }

    if ((left.node_num_ + right.node_num_) !=
        (3 * pow(2, left.level_ - 1) -1)) {
      ret = false;
      break;
    }
  }

  return ret;
}