#include <cstdlib>

#include "remove_duplicates_from_sorted_array.h"

int RemoveDuplicatesFromSortedArray::removeDuplicates(int A[], int n) {
  if (n < 0)
    return -1;

  if (A == NULL || n == 0)
    return 0;

  int i, j, curElem;

  for (i = 0, j = i + 1, curElem = A[i]; j < n; ++j) {
    // Process diffrent new element.
    if (A[j] != curElem) {
      curElem = A[j];
      A[++i] = curElem;
    }
  }

  return (i + 1);
}