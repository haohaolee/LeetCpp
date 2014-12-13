#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;

#include "sum_root_to_leaf_numbers.h"
#include "../util/util.h"

int SumRoottoLeafNumbers::sumNumbers(TreeNode* root) {
  digits_.clear();
  numbers_.clear();

  // Depth-first(PreOrder traversal)
  preOrderTraversal(root);

  int sum = 0;
  for (size_t i = 0; i < numbers_.size(); ++i) {
    sum += numbers_[i];
  }

  return sum;
}

void SumRoottoLeafNumbers::preOrderTraversal(TreeNode* root) {
  if (root == NULL)
    return;

  // Append current visit node's value to the digits string since visiting root
  // node.
  digits_.append(to_string(root->val));

  // If it's leaf node, just push the number into number list.
  if (!root->left && !root->right) {
    numbers_.push_back(stoi(digits_));
  } else {
    // Visit left & right sub-trees.
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
  }

  // Pop current node's value from digits.
  digits_.erase(digits_.end() - 1, digits_.end());
}
