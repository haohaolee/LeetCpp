#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "util.h"

namespace {
  TEST(UtilTest, Case2) {
    string tree_data = "1,2,2,3,#,#,3,4,#,#,4";
    TreeNode* root = NULL;

    root = build_tree(tree_data);
    string output = output_tree(root);
    EXPECT_EQ(tree_data, output);
    destroy_tree(root);
  };
}