#include <string>
using namespace std;

#include <gtest/gtest.h>

#include "copy_list_with_random_pointer.h"
#include "../util/util.h"

namespace {
  TEST(CopyListwithRandomPointerTest, Case1) {
    CopyListwithRandomPointer solution;

    EXPECT_EQ(NULL, solution.copyRandomList(NULL));
  };

  TEST(CopyListwithRandomPointerTest, Case2) {
    CopyListwithRandomPointer solution;

    EXPECT_EQ(NULL, solution.copyRandomList(NULL));
  };
}
