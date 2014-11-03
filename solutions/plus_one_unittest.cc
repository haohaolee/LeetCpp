#include <vector>
using namespace std;

#include <gtest/gtest.h>

#include "../solutions/plus_one.h"

namespace {
  TEST(PlusOneTest, Case1) {
    PlusOne solution;
    vector<int> digits = { 1, 1, 2 };
    vector<int> result = { 1, 1, 3 };

    //EXPECT_EQ(result, solution.plusOne(digits));
  };
}