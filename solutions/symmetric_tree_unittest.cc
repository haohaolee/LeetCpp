#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "symmetric_tree.h"
#include "util.h"

namespace {
  TEST(SymmetricTreeRecursiveTest, Case1) {
    SymmetricTreeRecursive solution;
    string output_tree = "1,2,3,#,#,4,#,#,5";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(!solution.isSymmetric(root));
    destroy_tree(root);
  };

  TEST(SymmetricTreeRecursiveTest, Case2) {
    SymmetricTreeRecursive solution;
    string output_tree = "1,2,2,3,4,4,3";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(solution.isSymmetric(root));
    destroy_tree(root);
  };

  TEST(SymmetricTreeRecursiveTest, Case3) {
    SymmetricTreeRecursive solution;
    string output_tree = "1,2,2,#,3,#,3";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(!solution.isSymmetric(root));
    destroy_tree(root);
  };

  TEST(SymmetricTreeRecursiveTest, Case4) {
    SymmetricTreeRecursive solution;
    string output_tree = "1,2,3,3,#,2,#";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(!solution.isSymmetric(root));
    destroy_tree(root);
  };

  TEST(SymmetricTreeRecursiveTest, Case5) {
    SymmetricTreeRecursive solution;
    string output_tree = "1,2";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(!solution.isSymmetric(root));
    destroy_tree(root);
  };


  TEST(SymmetricTreeIterativeTest, Case1) {
    SymmetricTreeIterative solution;
    string output_tree = "1,2,3,#,#,4,#,#,5";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(!solution.isSymmetric(root));
    destroy_tree(root);
  };

  TEST(SymmetricTreeIterativeTest, Case2) {
    SymmetricTreeIterative solution;
    string output_tree = "1,2,2,3,4,4,3";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(solution.isSymmetric(root));
    destroy_tree(root);
  };

  TEST(SymmetricTreeIterativeTest, Case3) {
    SymmetricTreeIterative solution;
    string output_tree = "1,2,2,#,3,#,3";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(!solution.isSymmetric(root));
    destroy_tree(root);
  };

  TEST(SymmetricTreeIterativeTest, Case4) {
    SymmetricTreeIterative solution;
    string output_tree = "1,2,3,3,#,2,#";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(!solution.isSymmetric(root));
    destroy_tree(root);
  };

  TEST(SymmetricTreeIterativeTest, Case5) {
    SymmetricTreeIterative solution;
    string output_tree = "1,2";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(!solution.isSymmetric(root));
    destroy_tree(root);
  };
}
