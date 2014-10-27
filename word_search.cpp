/*
 * Word Search.
 * https://oj.leetcode.com/problems/word-search/
 *
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
  vector<vector<bool>> visited;
  void init(const vector<vector<char>>& board) {
    size_t row_size = board[0].size();
    vector<bool> row(row_size, false);

    for (size_t i = 0; i < board.size(); ++i) {
      if (board[i].size() != row_size) {
        throw "Current row is not the same size as previous one!";
      }

      visited.push_back(row);
    }
  }

  bool backTrack(const vector<vector<char>> &board,
                 size_t board_x, size_t board_y,
                 const string& word, size_t matching_pos) {
    if (word[matching_pos] != board[y][x])
      return false;

    // Matching
    visited[y][x] = true;

    // UP
    if (y >= 1)
  }

public:
    bool exist(vector<vector<char>> &board, string word) {
      if (board.size() == 0 || board[0].size() == 0 || word.length() == 0)
        return false;

      // Init the visited matrix for board before using backtracking.
      init(board);

      size_t row_size = board.size();
      size_t col_size = board[0].size();

      for (size_t i = 0; i < row_size; ++i)
    }
};
