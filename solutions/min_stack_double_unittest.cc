#include <limits>

#include <gtest/gtest.h>

#include "min_stack_double.h"

namespace {
  TEST(MinStackDoubleTest, Case1) {
    MinStackDouble solution;

    solution.push(2);
    solution.push(1);
    EXPECT_EQ(1, solution.getMin());
    solution.pop();
    EXPECT_EQ(2, solution.getMin());
    solution.push(3);
    EXPECT_EQ(2, solution.getMin());
    EXPECT_EQ(3, solution.top());
  };

  TEST(MinStackDoubleTest, Case2) {
    MinStackDouble solution;

    solution.push(INT_MAX - 1);
    solution.push(INT_MAX - 1);
    solution.push(INT_MAX);

    EXPECT_EQ(INT_MAX, solution.top());

    solution.pop();

    EXPECT_EQ(INT_MAX - 1, solution.getMin());

    solution.pop();

    EXPECT_EQ(INT_MAX - 1, solution.getMin());

    solution.pop();
    solution.push(INT_MAX);

    EXPECT_EQ(INT_MAX, solution.top());
    EXPECT_EQ(INT_MAX, solution.getMin());

    solution.push(INT_MIN);

    EXPECT_EQ(INT_MIN, solution.top());
    EXPECT_EQ(INT_MIN, solution.getMin());

    solution.pop();

    EXPECT_EQ(INT_MAX, solution.getMin());
  }
}