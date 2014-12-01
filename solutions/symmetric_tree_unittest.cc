#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "symmetric_tree.h"
#include "util.h"

namespace {
  TEST(SymmetricTreeTest, Case1) {
    SymmetricTree solution;
    string output_tree = "1,2,3,#,#,4,#,#,5";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(!solution.isSymmetric(root));
    destroy_tree(root);
  };

  TEST(SymmetricTreeTest, Case2) {
    SymmetricTree solution;
    string output_tree = "1,2,2,3,4,4,3";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(solution.isSymmetric(root));
    destroy_tree(root);
  };

  TEST(SymmetricTreeTest, Case3) {
    SymmetricTree solution;
    string output_tree = "1,2,2,#,3,#,3";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(!solution.isSymmetric(root));
    destroy_tree(root);
  };

  TEST(SymmetricTreeTest, Case4) {
    SymmetricTree solution;
    string output_tree = "1,2,3,3,#,2,#";

    TreeNode* root = build_tree(output_tree);
    EXPECT_TRUE(!solution.isSymmetric(root));
    destroy_tree(root);
  };
}
