#include <cstdlib>
#include <stack>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

#include "binary_tree_postorder_traversal.h"
#include "../util/util.h"

vector<int>
BinaryTreePostorderTraversal::postorderTraversalRecursive(TreeNode *root) {
  vector<int> traversal_history;

  if (root == NULL)
    return traversal_history;

  // Traversal the left sub-tree.
  auto left_traversal_history = postorderTraversalRecursive(root->left);
  traversal_history.insert(traversal_history.end(),
                           left_traversal_history.begin(),
                           left_traversal_history.end());

  // Traversal the left sub-tree.
  auto right_traversal_history = postorderTraversalRecursive(root->right);
  traversal_history.insert(traversal_history.end(),
                           right_traversal_history.begin(),
                           right_traversal_history.end());

  // Visit root node.
  traversal_history.push_back(root->val);

  return traversal_history;
}

vector<int>
BinaryTreePostorderTraversal::postorderTraversalIterative(TreeNode* root) {
  vector<int> traversal_history;

  if (root == NULL)
    return traversal_history;

  TreeNode* node;
  stack<TreeNode*> candidate_list;
  unordered_set<TreeNode*> pushed_list;
  candidate_list.push(root);
  pushed_list.insert(root);

  while (!candidate_list.empty()) {
    // Read current node on top of stack.
    node = candidate_list.top();

    // Push the root node of right sub-tree if it's never touched.
    if (node->right && pushed_list.find(node->right) == pushed_list.end()) {
      candidate_list.push(node->right);
      pushed_list.insert(node->right);
    }

    // Push the root node of left sub-tree if it's never touched.
    if (node->left && pushed_list.find(node->left) == pushed_list.end()) {
      candidate_list.push(node->left);
      pushed_list.insert(node->left);
    }

    // Visit current node if it has no children to be pushed:
    // 1. It has no children.
    // 2. Its children are all visited.
    if (node == candidate_list.top()) {
      traversal_history.push_back(node->val);
      candidate_list.pop();
    }
  }

  return traversal_history;
}