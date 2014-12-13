#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "validate_binary_search_tree.h"
#include "../util/util.h"

namespace {
  TEST(ValidateBinarySearchTreeTest, Case1) {
    ValidateBinarySearchTree solution;
    TreeNode* root = NULL;

    // Empty tree.
    EXPECT_TRUE(solution.isValidBST(NULL));
    root = build_tree("#");
    EXPECT_TRUE(solution.isValidBST(root));
    destroy_tree(root);

    // Single root node tree.
    root = build_tree("1");
    EXPECT_TRUE(solution.isValidBST(root));
    destroy_tree(root);
  };

  TEST(ValidateBinarySearchTreeTest, Case2) {
    ValidateBinarySearchTree solution;
    TreeNode* root = NULL;

    root = build_tree("1,2,2,3,#,#,3,4,#,#,4");
    EXPECT_FALSE(solution.isValidBST(root));
    destroy_tree(root);
  };
}
