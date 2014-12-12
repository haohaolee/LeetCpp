#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "binary_tree_postorder_traversal.h"
#include "../util/util.h"

namespace {
  TEST(BinaryTreePostorderTraversalTest, Case1) {
    BinaryTreePostorderTraversal solution;
    TreeNode* root = NULL;

    // Empty tree.
    EXPECT_TRUE(solution.postorderTraversalRecursive(NULL).empty());
    EXPECT_TRUE(solution.postorderTraversalIterative(NULL).empty());
    root = build_tree("#");
    EXPECT_TRUE(solution.postorderTraversalRecursive(root).empty());
    EXPECT_TRUE(solution.postorderTraversalIterative(root).empty());
    destroy_tree(root);

    // Single root node tree.
    vector<int> expected_result = { 1 };
    root = build_tree("1");
    EXPECT_EQ(expected_result, solution.postorderTraversalRecursive(root));
    EXPECT_EQ(expected_result, solution.postorderTraversalIterative(root));
    destroy_tree(root);
  };

  TEST(BinaryTreePostorderTraversalTest, Case2) {
    BinaryTreePostorderTraversal solution;
    TreeNode* root = NULL;

    root = build_tree("1,2,2,3,#,#,3,4,#,#,4");
    vector<int> expected_result = { 4, 3, 2, 4, 3, 2, 1 };
    EXPECT_EQ(expected_result, solution.postorderTraversalRecursive(root));
    EXPECT_EQ(expected_result, solution.postorderTraversalIterative(root));
    destroy_tree(root);
  };
}
