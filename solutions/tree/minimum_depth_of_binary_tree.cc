#include <algorithm>
#include <cstdlib>
using namespace std;

#include "minimum_depth_of_binary_tree.h"
#include "../util/util.h"

int MinimumDepthofBinaryTree::minDepth(TreeNode *root) {
  if (root == NULL)
    return 0;

  int left_min_depth = minDepth(root->left);
  int right_min_depth = minDepth(root->right);

  if (left_min_depth == 0)
    return right_min_depth + 1;

  if (right_min_depth == 0)
    return left_min_depth + 1;

  return min(left_min_depth, right_min_depth) + 1;
}
