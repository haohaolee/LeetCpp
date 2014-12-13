#include <algorithm>
#include <cstdlib>
using namespace std;

#include "validate_binary_search_tree.h"
#include "../util/util.h"

bool ValidateBinarySearchTree::isValidBST(TreeNode* root) {
  if (root == NULL)
    return true;

  bool valid_left_sub_tree = isValidBST(root->left);
  bool valid_right_sub_tree = isValidBST(root->right);

  return (valid_left_sub_tree &&
          valid_right_sub_tree &&
          findMaxElem(root->left) < root->val &&
          root->val < findMaxElem(root->right));
}

int ValidateBinarySearchTree::findMaxElem(TreeNode* root) {
  if (root == NULL) {
    return INT_MIN;
  }

  int max_value = root->val;
  if (root->right)
    max_value = findMaxElem(root->right);

  return max_value;
}
