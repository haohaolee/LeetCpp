/**
* Utility functions.
*/

#ifndef LEETCPP_SOLUTIONS_UTIL_H_
#define LEETCPP_SOLUTIONS_UTIL_H_

#include <cstdlib>
#include <string>
#include <utility>
#include <vector>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
void destroy_linked_list(ListNode* head);
std::string output_linked_list(ListNode* head);
ListNode* build_linked_list(const std::string& list_data);

// Definition for binary tree.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

typedef enum TreeNodeType_ {
  Root,
  LeftChild,
  RightChild
} TreeNodeType;

typedef std::pair<TreeNode*, TreeNodeType> CandidateTreeNodeType;

// Tree operations.
void destroy_tree(TreeNode* root);
std::string output_tree(TreeNode* root);
TreeNode* build_tree(const std::string& tree_data);

// String operations.
std::string trim(std::string& data, const std::string& pattern);
//
//// Vector operations.
//bool operator==(const std::vector<std::vector<int>>& left,
//                const std::vector<std::vector<int>>& right);

#endif  // LEETCPP_SOLUTIONS_UTIL_H_
