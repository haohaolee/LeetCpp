/*
 * Maximum Product Subarray.
 * https://oj.leetcode.com/problems/maximum-product-subarray/
 * Dynamic Programming.
 */

#include <algorithm>
#include <exception>

class Solution {
public:
  int maxProduct(int A[], int n) {
    if (A == NULL || n <= 0) {
      throw "argument is wrong!";
    }

    int curMaxProd = A[0], curMinProd = A[0],
      maxProd = A[0], minProd = A[0],
      tmp;

    for (int i = 1; i < n; ++i) {
      if (A[i] == 0) {
        curMaxProd = curMinProd = 0;
      }
      else if (A[i] > 0){ // Positive number
        curMaxProd = std::max(A[i], curMaxProd * A[i]);
        curMinProd = std::min(A[i], curMinProd * A[i]);
      }
      else { // Negative number: A[i] < 0
        // Current maximum prod ends with A[i].
        tmp = std::max(A[i], curMinProd * A[i]);
        curMinProd = std::min(A[i], curMaxProd * A[i]);
        curMaxProd = tmp;
      }

      maxProd = std::max(maxProd, curMaxProd);
      minProd = std::min(minProd, curMinProd);
    }

    return maxProd;
  }
};
