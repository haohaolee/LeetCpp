#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "path_sum.h"
#include "../util/util.h"

namespace {
  TEST(PathSumTest, Case1) {
    PathSum solution;
    TreeNode* root = NULL;

    // Empty tree.
    EXPECT_FALSE(solution.hasPathSum(NULL, 0));
    root = build_tree("#");
    EXPECT_FALSE(solution.hasPathSum(root, 0));
    destroy_tree(root);

    // Single root node tree.
    root = build_tree("1");
    EXPECT_TRUE(solution.hasPathSum(root, 1));
    destroy_tree(root);
  };

  TEST(PathSumTest, Case2) {
    PathSum solution;
    TreeNode* root = NULL;

    root = build_tree("1,2,2,3,#,#,3,4,#,#,4");
    EXPECT_TRUE(solution.hasPathSum(root, 10));
    destroy_tree(root);
  };
}
