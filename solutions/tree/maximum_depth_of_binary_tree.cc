#include <algorithm>
#include <cstdlib>
using namespace std;

#include "maximum_depth_of_binary_tree.h"
#include "../util/util.h"

int MaximumDepthofBinaryTree::maxDepth(TreeNode *root) {
  if (root == NULL)
    return 0;

  return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}
