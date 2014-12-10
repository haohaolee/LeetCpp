#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "minimum_depth_of_binary_tree.h"
#include "../util/util.h"

namespace {
  TEST(MinimumDepthofBinaryTreeTest, Case1) {
    MinimumDepthofBinaryTree solution;
    TreeNode* root = NULL;

    // Empty tree.
    EXPECT_EQ(0, solution.minDepth(NULL));
    root = build_tree("#");
    EXPECT_EQ(0, solution.minDepth(root));
    destroy_tree(root);

    // Single root node tree.
    root = build_tree("1");
    EXPECT_EQ(1, solution.minDepth(root));
    destroy_tree(root);
  };

  TEST(MinimumDepthofBinaryTreeTest, Case2) {
    MinimumDepthofBinaryTree solution;
    TreeNode* root = NULL;

    root = build_tree("1,2,2,3,#,#,3,4,#,#,4");
    EXPECT_EQ(4, solution.minDepth(root));
    destroy_tree(root);
  };

  TEST(MinimumDepthofBinaryTreeTest, Case3) {
    MinimumDepthofBinaryTree solution;
    TreeNode* root = NULL;

    root = build_tree("1,2,2,3,#,#,3,4");
    EXPECT_EQ(3, solution.minDepth(root));
    destroy_tree(root);
  };
}
