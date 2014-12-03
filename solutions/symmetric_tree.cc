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
