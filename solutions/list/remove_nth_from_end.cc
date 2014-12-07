#include <cstdlib>

#include "remove_nth_from_end.h"
#include "../util/util.h"

ListNode* RemoveNthFromEnd::remove(ListNode *head, int n) {
  if (n <= 0 || head == NULL)
    return NULL;

  int i = 0;
  ListNode* p1 = head;
  for (i = 0; i < n && p1; ++i) {
    p1 = p1->next;
  }

  if (i < n && !p1)
    return NULL;

  ListNode* p2 = head;
  ListNode* p3 = NULL;
  while (p1) {
    p1 = p1->next;
    p3 = p2;
    p2 = p2->next;
  }

  // Remove node pointed by p2.
  if (p2 && p3) {
    p3->next = p2->next;
  }

  if (p2 == head) {
    head = p2->next;
  }

  delete p2;

  return head;
}
