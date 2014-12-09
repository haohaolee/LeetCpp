#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "same_tree.h"
#include "../util/util.h"

namespace {
  TEST(SameTreeTest, Case1) {
    SameTree solution;
    TreeNode *root = NULL;

    // Empty tree.
    EXPECT_TRUE(solution.isSameTree(NULL, NULL));
    root = build_tree("#");
    EXPECT_TRUE(solution.isSameTree(root, root));
    destroy_tree(root);

    // Single root node tree.
    root = build_tree("1");
    EXPECT_FALSE(solution.isSameTree(root, NULL));
    EXPECT_TRUE(solution.isSameTree(root, root));
    destroy_tree(root);
  };

  TEST(SameTreeTest, Case2) {
    SameTree solution;
    TreeNode* root = NULL;

    root = build_tree("1,2,2,3,#,#,3,4,#,#,4");
    EXPECT_TRUE(solution.isSameTree(root, root));
    EXPECT_FALSE(solution.isSameTree(root, NULL));
    destroy_tree(root);
  };
}
