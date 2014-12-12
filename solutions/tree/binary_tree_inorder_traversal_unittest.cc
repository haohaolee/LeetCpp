#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "binary_tree_inorder_traversal.h"
#include "../util/util.h"

namespace {
  TEST(BinaryTreeInorderTraversalTest, Case1) {
    BinaryTreeInorderTraversal solution;
    TreeNode* root = NULL;

    // Empty tree.
    EXPECT_TRUE(solution.inorderTraversalRecursive(NULL).empty());
    EXPECT_TRUE(solution.inorderTraversalIterative(NULL).empty());
    root = build_tree("#");
    EXPECT_TRUE(solution.inorderTraversalRecursive(root).empty());
    EXPECT_TRUE(solution.inorderTraversalIterative(root).empty());
    destroy_tree(root);

    // Single root node tree.
    vector<int> expected_result = { 1 };
    root = build_tree("1");
    EXPECT_EQ(expected_result, solution.inorderTraversalRecursive(root));
    EXPECT_EQ(expected_result, solution.inorderTraversalIterative(root));
    destroy_tree(root);
  };

  TEST(BinaryTreeInorderTraversalTest, Case2) {
    BinaryTreeInorderTraversal solution;
    TreeNode* root = NULL;

    root = build_tree("1,2,2,3,#,#,3,4,#,#,4");
    vector<int> expected_result = { 4, 3, 2, 1, 2, 3, 4 };
    EXPECT_EQ(expected_result, solution.inorderTraversalRecursive(root));
    EXPECT_EQ(expected_result, solution.inorderTraversalIterative(root));
    destroy_tree(root);
  };
}
