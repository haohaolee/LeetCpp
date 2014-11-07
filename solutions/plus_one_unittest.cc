#include <vector>
using namespace std;

#include <gtest/gtest.h>

#include "../solutions/plus_one.h"

namespace {
  TEST(PlusOneTest, Case1) {
    PlusOne solution;
    vector<int> digits = { 1, 1, 2 };
    vector<int> expectedResult = { 1, 1, 3 };
    vector<int> result = solution.plusOne(digits);

    EXPECT_EQ(expectedResult.size(), result.size());
    EXPECT_TRUE(equal(expectedResult.rbegin(), expectedResult.rend(), result.rbegin()));
  };

  TEST(PlusOneTest, Case2) {
    PlusOne solution;
    vector<int> digits = { 9, 9 };
    vector<int> expectedResult = { 1, 0, 0 };
    vector<int> result = solution.plusOne(digits);

    EXPECT_EQ(expectedResult.size(), result.size());
    EXPECT_TRUE(equal(expectedResult.rbegin(), expectedResult.rend(), result.rbegin()));
  };
}