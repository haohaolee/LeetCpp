#include <cstdlib>
#include <string>
using namespace std;

#include "util.h"

string serialize_tree(TreeNode* root) {
  return NULL;
}

TreeNode* deserialize_tree(const std::string& tree_data) {
  // Empty tree
  if (tree_data.empty() ||
      (tree_data[0] == '#' && tree_data.length() == 1))
    return NULL;

  //auto root = new TreeNode(tree_data[0] - '0');

  return NULL;
}