#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "balanced_binary_tree.h"
#include "util.h"

namespace {
  TEST(BalancedBinaryTreeTest, Case1) {
    BalancedBinaryTree solution;
    TreeNode* root = NULL;

    // Empty tree.
    EXPECT_TRUE(solution.isBalanced(NULL));
    root = build_tree("#");
    EXPECT_TRUE(solution.isBalanced(root));
    destroy_tree(root);

    // Single root node tree.
    root = build_tree("1");
    EXPECT_TRUE(solution.isBalanced(root));
    destroy_tree(root);
  };

  TEST(BalancedBinaryTreeTest, Case2) {
    BalancedBinaryTree solution;
    TreeNode* root = NULL;

    root = build_tree("1223##34##4");
    EXPECT_TRUE(!solution.isBalanced(root));
    destroy_tree(root);
  };
}