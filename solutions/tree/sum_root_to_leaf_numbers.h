/**
* Sum Root to Leaf Numbers.
* https://oj.leetcode.com/problems/sum-root-to-leaf-numbers/
* Depth-first way.
*/

#ifndef LEETCPP_SOLUTIONS_SUM_ROOT_TO_LEAF_NUMBERS_H_
#define LEETCPP_SOLUTIONS_SUM_ROOT_TO_LEAF_NUMBERS_H_

#include <string>
#include <vector>

#include "../util/util.h"

class SumRoottoLeafNumbers {
public:
  int sumNumbers(TreeNode *root);
private:
  void preOrderTraversal(TreeNode *root);
  std::string digits_;
  std::vector<int> numbers_;
};

#endif  // LEETCPP_SOLUTIONS_SUM_ROOT_TO_LEAF_NUMBERS_H_
