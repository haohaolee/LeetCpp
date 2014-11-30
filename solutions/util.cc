#include <cstdlib>
#include <queue>
#include <string>
#include <utility>
using namespace std;

#include "util.h"

void destroy_tree(TreeNode* root) {
  if (root == NULL)
    return;

  // destroy sub-tree if exists.
  destroy_tree(root->left);
  root->left = NULL;
  destroy_tree(root->right);
  root->right = NULL;

  // desctruct root node.
  delete root;
}

// TODO:
string output_tree(TreeNode* root) {
  return NULL;
}

TreeNode* build_tree(const std::string& tree_data) {
  // Empty tree
  if (tree_data.empty() || tree_data[0] == '#')
    return NULL;

  TreeNode * root = NULL;

  // Queue used to store the candidate nodes to do per-level traversal.
  queue<CandidateTreeNodeType> candidate_nodes;

  // Enqueue the root node.
  candidate_nodes.push(CandidateTreeNodeType(NULL, TreeNodeType::Root));
  size_t data_index = 0;

  // Build the tree per-level.
  while (!candidate_nodes.empty() && data_index < tree_data.length()) {
    auto candidate_node = candidate_nodes.back();
    candidate_nodes.pop();

    auto parent_node = candidate_node.first;
    TreeNodeType node_type = candidate_node.second;

    // Check if current character in tree data buffer is valid one.
    char ch = tree_data[data_index++];
    if (ch == '#')
      continue;

    // Create the node and update the tree structure.
    auto node = new TreeNode(ch - '0');
    switch (node_type) {
      case TreeNodeType::Root:
        root = node;
        break;
      case TreeNodeType::LeftChild:
        parent_node->left = node;
        break;
      case TreeNodeType::RightChild:
        parent_node->right = node;
      default:
        break;
    };

    candidate_nodes.push(CandidateTreeNodeType(node, TreeNodeType::LeftChild));
    candidate_nodes.push(CandidateTreeNodeType(node, TreeNodeType::RightChild));
  }

  return root;
}