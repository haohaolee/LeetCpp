#include <gtest/gtest.h>

#include "lru_cache.h"

namespace {
  TEST(LRUCacheTest, Case1) {
    LRUCache solution(2);

    EXPECT_EQ(-1, solution.get(1));

    solution.set(1, 100);
    EXPECT_EQ(100, solution.get(1));

    solution.set(2, 200);
    EXPECT_EQ(200, solution.get(2));
  }
}