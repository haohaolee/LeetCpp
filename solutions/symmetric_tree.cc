#include <string>
#include <vector>
using namespace std;

#include "symmetric_tree.h"
#include "util.h"

bool SymmetricTree::isSymmetric(TreeNode *root) {
  if (root == NULL)
    return true;

  vector<string> visit_sequence;
  inOrderVisit(root, visit_sequence);

  return isPalindrome(visit_sequence);
}

void SymmetricTree::inOrderVisit(TreeNode* root, vector<string>& visit_sequence) {
  if (root == NULL) {
    visit_sequence.push_back("#");
    return;
  }

  inOrderVisit(root->left, visit_sequence);
  visit_sequence.push_back(to_string(root->val));
  inOrderVisit(root->right, visit_sequence);
}

bool SymmetricTree::isPalindrome(const vector<string>& sequence) {
  bool ret = true;
  size_t n = sequence.size();
  for (size_t i = 0; i < n / 2; ++i) {
    if (sequence[i] != sequence[n - 1 - i]) {
      ret = false;
      break;
    }
  }

  return ret;
}
