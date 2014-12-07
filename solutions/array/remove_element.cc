#include <cstdlib>
#include <algorithm>

using namespace std;

#include "../solutions/remove_element.h"

int RemoveElement::removeElement(int A[], int n, int elem) {
  if (n < 0)
    return -1;

  if (A == NULL || n == 0)
    return 0;

  int i = 0;
  int j = n;

  // swap
  while (i < j) {
    if (A[i] != elem) {
      ++i;
    }
    else { // A[i] == elem
      swap(A[i], A[j - 1]);
      --j;
    }
  }

  return i;

}