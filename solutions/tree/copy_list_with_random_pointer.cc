#include <cstdlib>
#include <unordered_map>
using namespace std;

#include "copy_list_with_random_pointer.h"
#include "../util/util.h"

RandomListNode*
CopyListwithRandomPointer::copyRandomList(RandomListNode *head) {
  if (head == NULL)
    return head;

  RandomListNode *old_next = head,
                 *new_next = NULL, *new_prev = NULL, *new_head = NULL;

  // Copy the old list in physical way.
  unordered_map<RandomListNode*, RandomListNode*> old_to_new;
  while (old_next) {
    auto new_next = new RandomListNode(*old_next);
    new_next->next = NULL;

    old_to_new[old_next] = new_next;

    if (new_prev) {
      new_prev->next = new_next;
    }

    new_prev = new_next;
    old_next = old_next->next;
  }

  // Update the new list in logical way.
  new_head = old_to_new[head];
  new_next = new_head;
  while (new_next) {
    if (new_next->random)
      new_next->random = old_to_new[new_next->random];

    new_next = new_next->next;
  }

  return new_head;
}
