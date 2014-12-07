#include <vector>
using namespace std;

#include "plus_one.h"

vector<int> PlusOne::plusOne(vector<int> &digits) {
  if (digits.empty())
    return digits;

  int carry = 1;

  for (int i = digits.size() - 1; i >= 0 && carry > 0; --i) {
    digits[i] += carry;
    carry = digits[i] / 10;
    digits[i] %= 10;
  }

  if (carry > 0) {
    digits.insert(digits.begin(), carry);
  }

  return digits;
}