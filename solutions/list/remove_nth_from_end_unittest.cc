#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "remove_nth_from_end.h"
#include "util.h"

namespace {
  TEST(RemoveNthFromEndTest, Case1) {
    RemoveNthFromEnd solution;

    string list_data = "1,2,3,4,5";
    int n = 2;
    ListNode* head = build_linked_list(list_data);
    ListNode* new_head = solution.remove(head, n);
    string new_list_data = output_linked_list(new_head);
    EXPECT_EQ("1,2,3,5", new_list_data);
    destroy_linked_list(new_head);

  };

  TEST(RemoveNthFromEndTest, Case2) {
    RemoveNthFromEnd solution;

    string list_data = "1";
    int n = 1;
    ListNode* head = build_linked_list(list_data);
    ListNode* new_head = solution.remove(head, n);
    string new_list_data = output_linked_list(new_head);
    EXPECT_EQ("", new_list_data);
    destroy_linked_list(new_head);
  };
}
