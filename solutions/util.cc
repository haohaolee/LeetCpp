#include <cstdlib>
#include <queue>
#include <string>
#include <sstream>
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

string output_tree(TreeNode* root) {
  string output = "";

  if (root == NULL)
    return output;

  queue<TreeNode*> candidate_list;

  // Enqueue the root node.
  candidate_list.push(root);

  // Iterate each node per level.
  while (!candidate_list.empty()) {
    TreeNode* node = candidate_list.front();
    candidate_list.pop();

    // Add comma for non-first iteration.
    if (!output.empty()) {
      output.append(",");
    }

    // Placehold for empty nodes.
    if (node == NULL) {
      output.append("#");
      continue;
    } else {
      output.append(to_string(node->val));
    }

    // Enqueue children nodes
    candidate_list.push(node->left);
    candidate_list.push(node->right);
  }

  // Remove the left trailing "#,".
  output = trim(output, "#,");
  // Remove the right trailing "#,".
  output = trim(output, ",#");

  return output;
}

TreeNode* build_tree(const std::string& tree_data) {
  TreeNode * root = NULL;

  // Empty tree
  if (tree_data.empty() || tree_data[0] == '#')
    return root;

  // Use stream to split string with delimiter = ",".
  istringstream stream(tree_data);
  string token = "";

  // Queue used to store the candidate nodes to do per-level traversal.
  queue<CandidateTreeNodeType> candidate_nodes;

  // Enqueue the root node.
  candidate_nodes.push(CandidateTreeNodeType(NULL, TreeNodeType::Root));

  // Build the tree per-level.
  while (!candidate_nodes.empty() && getline(stream, token, ',')) {
    auto candidate_node = candidate_nodes.front();
    candidate_nodes.pop();

    auto parent_node = candidate_node.first;
    TreeNodeType node_type = candidate_node.second;

    // Check if current character in tree data buffer is valid one.
    if (token == "#")
      continue;

    // Create the node and update the tree structure.
    auto node = new TreeNode(stoi(token));
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

string trim(string& data, const string& pattern) {
  // [start_pos, end_pos]
  string trimed = "";
  string::size_type start_pos = data.find_first_not_of(pattern);
  string::size_type end_pos = data.find_last_not_of(pattern);

  if (start_pos == string::npos || end_pos == string::npos)
    return trimed;

  return data.substr(start_pos, end_pos - start_pos + 1);
}