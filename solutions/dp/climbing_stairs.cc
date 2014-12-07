#include "climbing_stairs.h"

int ClimbingStairs::climbStairs(int n) {
  if (n < 0)
    return 0;

  if (n == 0 || n == 1)
    return 1;

  int f0 = 1, f1 = 1;
  int f2;

  for (int i = 2; i <= n; ++i) {
    f2 = f0 + f1;
    f0 = f1;
    f1 = f2;
  }

  return f2;
}
