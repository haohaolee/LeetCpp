#include <algorithm>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

#include "binary_tree_level_order_traversal.h"
#include "../util/util.h"

Matrix BinaryTreeLevelOrderTraversal::levelOrder(TreeNode *root) {
  Matrix traversal_all_levels;

  if (root == NULL)
    return traversal_all_levels;

  size_t cur_level = 0;
  vector<int> traversal_per_level;
  queue<pair<TreeNode*, size_t>> candidate_list;
  candidate_list.push(pair<TreeNode*, size_t>(root, 1));

  while (!candidate_list.empty()) {
    TreeNode* node_root = candidate_list.front().first;
    size_t node_level = candidate_list.front().second;
    candidate_list.pop();

    if (node_level != cur_level && !traversal_per_level.empty()) {
      traversal_all_levels.push_back(traversal_per_level);
      traversal_per_level.clear();
    }

    cur_level = (cur_level == node_level ? cur_level : node_level);

    traversal_per_level.push_back(node_root->val);

    if (node_root->left) {
      candidate_list.push(pair<TreeNode*, size_t>(node_root->left,
                                                  node_level + 1));
    }

    if (node_root->right) {
      candidate_list.push(pair<TreeNode*, size_t>(node_root->right,
        node_level + 1));
    }
  }

  if (!traversal_per_level.empty()) {
    traversal_all_levels.push_back(traversal_per_level);
    traversal_per_level.clear();
  }

  return traversal_all_levels;
}

Matrix BinaryTreeLevelOrderTraversal::levelOrderBottom(TreeNode *root) {
  Matrix result = levelOrder(root);
  reverse(result.begin(), result.end());

  return result;
}