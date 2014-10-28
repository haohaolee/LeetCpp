#include <vector>
using namespace std;

class Solution {
public:
  void setZeroes(vector<vector<int> > &matrix) {
    if (matrix.size() == 0)
      return;

    bool row_0_fill = false;
    bool col_0_fill = false;

    // matrix[i][0] = 0: if row[1, n) should be filled with 0.
    // matrix[0][j] = 0: if col[1, n) should be filled with 0.
    // row_0_fill = 0: if row[0] should be filled with 0.
    // col_0_fill = 0: if col[0] should be filled with 0.
    for (size_t i = 0; i < matrix.size(); ++i) {
      for (size_t j = 0; j < matrix[i].size(); ++j) {
        if (matrix[i][j] != 0)
          continue;

        if (i == 0)
          row_0_fill = true;

        if (j == 0)
          col_0_fill = true;

        matrix[0][j] = matrix[i][0] = 0;
      }
    }

    for (size_t i = 1; i < matrix.size(); ++i) {
      for (size_t j = 1; j < matrix[i].size(); ++j) {
        if (matrix[i][0] == 0 || matrix[0][j] == 0) {
          matrix[i][j] = 0;
        }
      }
    }

    for (size_t j = 0; j < matrix[0].size(); ++j) {
      if (row_0_fill)
        matrix[0][j] = 0;
    }

    for (size_t i = 0; i < matrix.size(); ++i) {
      if (col_0_fill)
        matrix[i][0] = 0;
    }
  }
};
