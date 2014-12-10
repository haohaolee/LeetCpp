#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "binary_tree_inorder_traversal.h"
#include "../util/util.h"

namespace {
  TEST(BinaryTreeInorderTraversalTest, Case1) {
    BinaryTreeInorderTraversal solution;
    TreeNode* root = NULL;

    //// Empty tree.
    //EXPECT_TRUE(solution.isBalanced(NULL));
    //root = build_tree("#");
    //EXPECT_TRUE(solution.isBalanced(root));
    //destroy_tree(root);

    //// Single root node tree.
    //root = build_tree("1");
    //EXPECT_TRUE(solution.isBalanced(root));
    //destroy_tree(root);
  };

  TEST(BinaryTreeInorderTraversalTest, Case2) {
    BinaryTreeInorderTraversal solution;
    //TreeNode* root = NULL;

    //root = build_tree("1,2,2,3,#,#,3,4,#,#,4");
    //EXPECT_TRUE(!solution.isBalanced(root));
    //destroy_tree(root);
  };
}
