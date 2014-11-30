#include <algorithm>
#include <cstdlib>
using namespace std;

#include "balanced_binary_tree.h"
#include "util.h"

bool BalancedBinaryTree::isBalanced(TreeNode* root) {
  // Suppose empty tree is a special balanced BST.
  if (root == NULL)
    return true;

  int left_subtree_height = getHeight(root->left);
  int right_subtree_height = getHeight(root->right);

  // If the height delta of left & right sub-tree exceeds 1, then it's not
  // balanced.
  if (abs(left_subtree_height - right_subtree_height) > 1)
    return false;

  // If any of its sub-tree is not balanced, then it's not balanced.
  if (!isBalanced(root->left) || !isBalanced(root->right))
    return false;

  return true;
}

int BalancedBinaryTree::getHeight(TreeNode* root) {
  if (root == NULL)
    return 0;

  return max(getHeight(root->left), getHeight(root->right)) + 1;
}