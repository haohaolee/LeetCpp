#include <gtest/gtest.h>

#include "remove_duplicates_from_sorted_array.h"

namespace {
  TEST(RemoveDuplicatesFromSortedArrayTest, Case1) {
    RemoveDuplicatesFromSortedArray solution;
    int A[3] = { 1, 1, 2 };

    EXPECT_EQ(2, solution.removeDuplicates(A, sizeof(A) / sizeof(int)));
  };

  TEST(RemoveDuplicatesFromSortedArrayTest, Case2) {
    RemoveDuplicatesFromSortedArray solution;
    int A[2] = { 1, 1 };

    EXPECT_EQ(1, solution.removeDuplicates(A, sizeof(A) / sizeof(int)));
  };

  TEST(RemoveDuplicatesFromSortedArrayTest, Case3) {
    RemoveDuplicatesFromSortedArray solution;

    EXPECT_EQ(0, solution.removeDuplicates(NULL, 0));
  };
}