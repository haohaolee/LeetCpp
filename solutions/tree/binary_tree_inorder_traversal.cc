#include <cstdlib>
#include <vector>
using namespace std;

#include "binary_tree_inorder_traversal.h"
#include "../util/util.h"

vector<int> BinaryTreeInorderTraversal::inorderTraversal(TreeNode *root) {
  vector<int> traversal_history;

  if (root == NULL)
    return traversal_history;

  // Traverse the left child sub-tree.
  vector<int> left_traversal_history = inorderTraversal(root->left);
  traversal_history.insert(traversal_history.end(),
                           left_traversal_history.begin(),
                           left_traversal_history.end());
  traversal_history.push_back(root->val);
  vector<int> right_traversal_history = inorderTraversal(root->right);
  traversal_history.insert(traversal_history.end(),
                           right_traversal_history.begin(),
                           right_traversal_history.end());

  return traversal_history;
}
