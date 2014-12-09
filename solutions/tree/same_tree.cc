#include <cstdlib>
using namespace std;

#include "same_tree.h"
#include "../util/util.h"

bool SameTree::isSameTree(TreeNode *p, TreeNode *q) {
  if (p) {
    return (q &&
            p->val == q->val &&
            isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
  }

  return !q;
}
