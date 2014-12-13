#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "sum_root_to_leaf_numbers.h"
#include "../util/util.h"

namespace {
  TEST(SumRoottoLeafNumbersTest, Case1) {
    SumRoottoLeafNumbers solution;
    TreeNode* root = NULL;

    // Empty tree.
    EXPECT_EQ(0, solution.sumNumbers(NULL));
    root = build_tree("#");
    EXPECT_EQ(0, solution.sumNumbers(root));
    destroy_tree(root);

    // Single root node tree.
    root = build_tree("1");
    EXPECT_EQ(1, solution.sumNumbers(root));
    destroy_tree(root);
  };

  TEST(SumRoottoLeafNumbersTest, Case2) {
    SumRoottoLeafNumbers solution;
    TreeNode* root = NULL;

    root = build_tree("1,2,2,3,#,#,3,4,#,#,4");
    EXPECT_EQ(2468, solution.sumNumbers(root));
    destroy_tree(root);
  };
}
