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

  if (!valid_left_sub_tree || !valid_right_sub_tree)
    return false;

  if (root->left && findMaxElem(root->left) >= root->val)
    return false;

  if (root->right && findMinElem(root->right) <= root->val)
    return false;

  return true;
}

int ValidateBinarySearchTree::findMaxElem(TreeNode* root) {
  if (root == NULL) {
    throw "Root node should not be NULL!";
  }

  int max_value = (root->right) ? findMaxElem(root->right) : root->val;

  return max_value;
}

int ValidateBinarySearchTree::findMinElem(TreeNode* root) {
  if (root == NULL) {
    throw "Root node should not be NULL!";
  }

  int min_value = (root->left) ? findMinElem(root->left) : root->val;

  return min_value;
}
