#include <gtest/gtest.h>

#include "../solutions/remove_element.h"

namespace {
  TEST(RemoveElementTest, Case1) {
    RemoveElement solution;
    int A[] = { 3, 1, 2, 3, -1, 0 };
    int n = sizeof(A) / sizeof(int);
    int elem = 3;

    EXPECT_EQ(4, solution.removeElement(A, n, elem));
  };

  TEST(RemoveElementTest, Case2) {
    RemoveElement solution;
    int* array = NULL;
    int n = 0;
    int elem = 3;

    EXPECT_EQ(0, solution.removeElement(array, n, elem));
  };
}