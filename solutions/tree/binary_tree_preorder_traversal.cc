#include <cstdlib>
#include <stack>
#include <vector>
using namespace std;

#include "binary_tree_preorder_traversal.h"
#include "../util/util.h"

vector<int>
BinaryTreePreorderTraversal::preorderTraversalRecursive(TreeNode *root) {
  vector<int> traversal_history;

  if (root == NULL)
    return traversal_history;

  // Visit root node.
  traversal_history.push_back(root->val);

  // Traversal the left sub-tree.
  vector<int> left_traversal_history = preorderTraversalRecursive(root->left);
  traversal_history.insert(traversal_history.end(),
                           left_traversal_history.begin(),
                           left_traversal_history.end());

  // Traversal the left sub-tree.
  vector<int> right_traversal_history = preorderTraversalRecursive(root->right);
  traversal_history.insert(traversal_history.end(),
                           right_traversal_history.begin(),
                           right_traversal_history.end());

  return traversal_history;
}

vector<int>
BinaryTreePreorderTraversal::preorderTraversalIterative(TreeNode* root) {
  vector<int> traversal_history;

  if (root == NULL)
    return traversal_history;

  TreeNode *root_node = NULL;
  stack<TreeNode*> candidate_list;
  candidate_list.push(root);

  while (!candidate_list.empty()) {
    root_node = candidate_list.top();
    candidate_list.pop();
    traversal_history.push_back(root_node->val);
    if (root_node->right)
      candidate_list.push(root_node->right);
    if (root_node->left)
      candidate_list.push(root_node->left);
  }

  return traversal_history;
}