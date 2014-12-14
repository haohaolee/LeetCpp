#include <vector>
using namespace std;

#include <gtest/gtest.h>

#include "binary_tree_upside_down.h"
#include "../util/util.h"

namespace {
  TEST(BinaryTreeUpsideDownTest, Case1) {
    BinaryTreeUpsideDown solution;
    TreeNode* root = NULL;

    // Empty tree.
    EXPECT_EQ(NULL, solution.upsideDownBinaryTree(NULL));
    root = build_tree("#");
    EXPECT_EQ(NULL, solution.upsideDownBinaryTree(root));
    destroy_tree(root);

    //// Single root node tree.
    //root = build_tree("1");
    //vector<vector<int>> expected_result = { { 1 } };
    //EXPECT_EQ(expected_result, solution.pathSum(root, 1));
    //destroy_tree(root);
  };

  TEST(BinaryTreeUpsideDownTest, Case2) {
    //BinaryTreeUpsideDown solution;
    //TreeNode* root = NULL;

    //root = build_tree("1,2,2,3,#,#,3,4,#,#,4");
    //vector<vector<int>> expected_result = { {1, 2, 3, 4}, {1, 2, 3, 4} };
    //EXPECT_EQ(expected_result, solution.pathSum(root, 10));
    //destroy_tree(root);
  };

  TEST(BinaryTreeUpsideDownTest, Case3) {
    //BinaryTreeUpsideDown solution;
    //TreeNode* root = NULL;

    //root = build_tree("5,4,8,11,#,13,4,7,2,#,#,5,1");
    //vector<vector<int>> expected_result = { { 5, 4, 11, 2 }, { 5, 8, 4, 5 } };
    //EXPECT_EQ(expected_result, solution.pathSum(root, 22));
    //destroy_tree(root);
  };
}
