#include <vector>
#include <string>
using namespace std;

#include <gtest\gtest.h>

#include "..\solutions\maximum_product_subarray.h"

namespace {
  TEST(MaximumProductSubArrayTest, MaxProduct) {
    MaximumProductSubArray solution;
    int A[4] = { 2, 3, -2, 4 };

    EXPECT_EQ(6, solution.maxProduct(A, sizeof(A) / sizeof(int)));
  }
}