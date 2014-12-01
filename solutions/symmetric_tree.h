/**
* Symmetric Tree .
* https://oj.leetcode.com/problems/symmetric-tree/
* In-order traversal sequence is palindrome.
*/

#ifndef LEETCPP_SOLUTIONS_SYMMETRIC_TREE_H_
#define LEETCPP_SOLUTIONS_SYMMETRIC_TREE_H_

#include <string>
#include <vector>

#include "util.h"

class SymmetricTree {
public:
  bool isSymmetric(TreeNode *root);
private:
  void inOrderVisit(TreeNode* root, std::vector<std::string>& visit_sequence);
  bool isPalindrome(const std::vector<std::string>& sequence);
};

#endif  // LEETCPP_SOLUTIONS_SYMMETRIC_TREE_H_
