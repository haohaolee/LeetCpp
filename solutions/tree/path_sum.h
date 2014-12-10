/**
* Path Sum.
* https://oj.leetcode.com/problems/path-sum/
* Depth-first traversal.
*/

#ifndef LEETCPP_SOLUTIONS_PATH_SUM_H_
#define LEETCPP_SOLUTIONS_PATH_SUM_H_

#include "../util/util.h"

class PathSum {
public:
  bool hasPathSum(TreeNode *root, int sum);
};

#endif  // LEETCPP_SOLUTIONS_PATH_SUM_H_
