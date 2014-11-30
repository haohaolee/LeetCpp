#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "balanced_binary_tree.h"
#include "util.h"

namespace {
  TEST(BalancedBinaryTreeTest, Case1) {
    BalancedBinaryTree solution;

    // Empty tree
    EXPECT_TRUE(solution.isBalanced(NULL));

    // Generate BST
    TreeNode root(1);

    EXPECT_TRUE(solution.isBalanced(&root));
  };

  TEST(BalancedBinaryTreeTest, Case2) {
    BalancedBinaryTree solution;

    string tree_data = "1223##34##4";
    TreeNode* root = build_tree(tree_data);
    EXPECT_TRUE(!solution.isBalanced(root));
    destroy_tree(root);
  };
}