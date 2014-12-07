#include <gtest/gtest.h>

#include "climbing_stairs.h"

namespace {
  TEST(ClimbingStairsTest, Case1) {
    ClimbingStairs solution;

    EXPECT_EQ(0, solution.climbStairs(-1));
    EXPECT_EQ(1, solution.climbStairs(0));
    EXPECT_EQ(1, solution.climbStairs(1));
    EXPECT_EQ(2, solution.climbStairs(2));
    EXPECT_EQ(3, solution.climbStairs(3));
    EXPECT_EQ(5, solution.climbStairs(4));
  };
}
