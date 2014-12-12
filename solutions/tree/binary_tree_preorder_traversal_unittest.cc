#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "binary_tree_preorder_traversal.h"
#include "../util/util.h"

namespace {
  TEST(BinaryTreePreorderTraversalTest, Case1) {
    BinaryTreePreorderTraversal solution;
    TreeNode* root = NULL;

    // Empty tree.
    EXPECT_TRUE(solution.preorderTraversalRecursive(NULL).empty());
    EXPECT_TRUE(solution.preorderTraversalIterative(NULL).empty());
    root = build_tree("#");
    EXPECT_TRUE(solution.preorderTraversalRecursive(root).empty());
    EXPECT_TRUE(solution.preorderTraversalIterative(root).empty());
    destroy_tree(root);

    // Single root node tree.
    vector<int> expected_result = { 1 };
    root = build_tree("1");
    EXPECT_EQ(expected_result, solution.preorderTraversalRecursive(root));
    EXPECT_EQ(expected_result, solution.preorderTraversalIterative(root));
    destroy_tree(root);
  };

  TEST(BinaryTreePreorderTraversalTest, Case2) {
    BinaryTreePreorderTraversal solution;
    TreeNode* root = NULL;

    root = build_tree("1,2,2,3,#,#,3,4,#,#,4");
    vector<int> expected_result = { 1, 2, 3, 4, 2, 3, 4 };
    EXPECT_EQ(expected_result, solution.preorderTraversalRecursive(root));
    EXPECT_EQ(expected_result, solution.preorderTraversalIterative(root));
    destroy_tree(root);
  };
}
