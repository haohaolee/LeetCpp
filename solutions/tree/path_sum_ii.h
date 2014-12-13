/**
* Path Sum II.
* https://oj.leetcode.com/problems/path-sum-ii/
* Depth-first way.
*/

#ifndef LEETCPP_SOLUTIONS_PATH_SUM_II_H_
#define LEETCPP_SOLUTIONS_PATH_SUM_II_H_

#include <string>
#include <vector>

#include "../util/util.h"

class PathSumII {
public:
  std::vector<std::vector<int>> pathSum(TreeNode *root, int sum);
private:
  void preOrderTraversal(TreeNode *root, int sum);
  std::vector<std::vector<int>> paths_;
  std::vector<int> current_path_;
};

#endif  // LEETCPP_SOLUTIONS_PATH_SUM_II_H_
