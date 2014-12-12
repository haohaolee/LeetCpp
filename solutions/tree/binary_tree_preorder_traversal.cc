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

  TreeNode *root_node = root;
  stack<TreeNode*> candidate_list;

  do {
    // If current sub-tree is empty, then popup LCA node, visit it, and update
    // next sub-tree to its right sub-tree.
    if (root_node == NULL) {
      root_node = candidate_list.top();
      candidate_list.pop();
      traversal_history.push_back(root_node->val);
      root_node = root_node->right;
    }

    // If current sub-tree is not empty, then push the root node, update next
    // sub-tree to its left sub-tree.
    if (root_node) {
      candidate_list.push(root_node);
      root_node = root_node->left;
    }
  } while (!candidate_list.empty());

  return traversal_history;
}