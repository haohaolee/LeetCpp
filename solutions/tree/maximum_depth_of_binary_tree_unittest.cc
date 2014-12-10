#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "maximum_depth_of_binary_tree.h"
#include "../util/util.h"

namespace {
  TEST(MaximumDepthofBinaryTreeTest, Case1) {
    MaximumDepthofBinaryTree solution;
    TreeNode* root = NULL;

    // Empty tree.
    EXPECT_EQ(0, solution.maxDepth(NULL));
    root = build_tree("#");
    EXPECT_EQ(0, solution.maxDepth(root));
    destroy_tree(root);

    // Single root node tree.
    root = build_tree("1");
    EXPECT_EQ(1, solution.maxDepth(root));
    destroy_tree(root);
  };

  TEST(MaximumDepthofBinaryTreeTest, Case2) {
    MaximumDepthofBinaryTree solution;
    TreeNode* root = NULL;

    root = build_tree("1,2,2,3,#,#,3,4,#,#,4");
    EXPECT_EQ(4, solution.maxDepth(root));
    destroy_tree(root);
  };
}
