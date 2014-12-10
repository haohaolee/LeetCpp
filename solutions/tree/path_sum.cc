#include <cstdlib>
using namespace std;

#include "path_sum.h"
#include "../util/util.h"

bool PathSum::hasPathSum(TreeNode* root, int sum) {
  if (!root) {
    return false;
  }


  if (hasPathSum(root->left, sum - root->val))
    return true;

  if (hasPathSum(root->right, sum - root->val))
    return true;

  return (root->val == sum && !root->left && !root->right);
}
