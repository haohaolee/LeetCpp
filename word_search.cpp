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
  typedef vector<vector<int>> word_board;
  size_t board_row_size;
  size_t board_col_size;
  int dirs[2][2] = {};

  vector<vector<bool>> visited;
  void init(const word_board& board) {
    board_row_size = board[0].size();
    vector<bool> row(row_size, false);

    for (size_t i = 0; i < board.size(); ++i) {
      if (board[i].size() != row_size) {
        throw "Current row is not the same size as previous one!";
      }

      visited.push_back(row);
    }
  }

  bool back_track(const vector<vector<char>> &board,
                 size_t x, size_t y,
                 const string& word, size_t matching_pos) {
    // Edge case which means we matched before.
    if (x >= board[0].size() || y >= board.size() ||
        matching_pos >= word.length()) {
          return true;
    }

    if (word[matching_pos] != board[y][x])
      return false;

    // Matching
    visited[y][x] = true;
    bool matching = false;

    // UP
    if (!matching && y >= 1) {
      matching ||= back_track(board, x, y - 1, word, matching_pos + 1);
    }

    // Down
    if (!matching && (y + 1) < board.size()) {
      matching ||= back_track(board, x, y + 1, word, matching_pos + 1);
    }

    // Left
    if (!matching && x >= 1) {
      matching ||= back_track(board, x - 1, y, word, matching_pos + 1);
    }

    // Right
    if (!matching && (x + 1) < board[0].size()) {
      matching ||= back_track(board, x, y + 1, word, matching_pos + 1);
    }

    // Clear mask
    visited[y][x] = false;

    return matching;
  }

public:
    bool exist(vector<vector<char>> &board, string word) {
      if (board.size() == 0 || board[0].size() == 0 || word.length() == 0)
        return false;

      // Init the visited matrix for board before using backtracking.
      init(board);

      size_t row_size = board.size();
      size_t col_size = board[0].size();
      bool matching = false;

      for (size_t i = 0; i < row_size && !matching; ++i) {
        for (size_t j = 0; j < col_size && !matching; ++j) {
          matching = backTrack(board, i, j, word, 0);
        }
      }

      return matching;
    }
};
