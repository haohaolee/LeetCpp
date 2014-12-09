#include <algorithm>
#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "binary_tree_level_order_traversal.h"
#include "../util/util.h"

namespace {
  TEST(BinaryTreeLevelOrderTraversalTest, Case1) {
    BinaryTreeLevelOrderTraversal solution;
    TreeNode* root = NULL;

    // Empty tree.
    EXPECT_TRUE(solution.levelOrder(NULL).empty());
    EXPECT_TRUE(solution.levelOrderBottom(NULL).empty());
    root = build_tree("#");
    EXPECT_TRUE(solution.levelOrder(root).empty());
    EXPECT_TRUE(solution.levelOrderBottom(root).empty());
    destroy_tree(root);
  };

  TEST(BinaryTreeLevelOrderTraversalTest, Case2) {
    BinaryTreeLevelOrderTraversal solution;
    TreeNode* root = NULL;

    // Single root node tree.
    root = build_tree("1");
    vector<vector<int>> result = { { 1 } };
    EXPECT_EQ(result, solution.levelOrder(root));
    EXPECT_EQ(result, solution.levelOrderBottom(root));
    destroy_tree(root);
  };

  TEST(BinaryTreeLevelOrderTraversalTest, Case3) {
    BinaryTreeLevelOrderTraversal solution;
    TreeNode* root = NULL;

    root = build_tree("3,9,20,#,#,15,7");
    vector<vector<int>> result = { { 3 }, { 9, 20 }, { 15, 7 } };
    EXPECT_EQ(result, solution.levelOrder(root));
    reverse(result.begin(), result.end());
    EXPECT_EQ(result, solution.levelOrderBottom(root));
    destroy_tree(root);
  };
}
