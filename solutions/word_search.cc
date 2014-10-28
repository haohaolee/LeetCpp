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
  typedef vector<vector<char>> word_board;
  int board_row_size;
  int board_col_size;

  // Left, right, down, up.
  int dirs[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

  vector<vector<bool>> visited;
  void init(const word_board& board) {
    if (board.size() == 0 || board[0].size() == 0)
      throw "Board is empty!";

    board_row_size = board.size();
    board_col_size = board[0].size();
    vector<bool> row(board_col_size, false);

    for (int i = 0; i < board_row_size; ++i) {
      if (board[i].size() != board_col_size) {
        throw "Current row is not the same size as previous one!";
      }

      visited.push_back(row);
    }
  }

  bool back_track(const word_board &board,
                  int x, int y,
                  const string& word, int matching_pos) {
    // Edge case which means we matched before.
    if (matching_pos >= word.length())
      return true;

    if (x < 0 || x >= board_col_size ||
        y < 0 || y >= board_row_size ||
        visited[y][x])
      return false;

    if (word[matching_pos] != board[y][x])
      return false;

    // Matching
    visited[y][x] = true;
    bool matching = false;

    for (int i = 0; i < 4 && !matching; ++i) {
      matching = back_track(board, x + dirs[i][0], y + dirs[i][1],
                            word, matching_pos + 1);
    }

    // Clear mask
    visited[y][x] = false;

    return matching;
  }

public:
    bool exist(word_board &board, string word) {
      // Init the visited matrix for board before using backtracking.
      init(board);

      if (word.length() == 0)
        return false;

      bool matching = false;

      for (int y = 0; y < board_row_size && !matching; ++y) {
        for (int x = 0; x < board_col_size && !matching; ++x) {
          matching = back_track(board, x, y, word, 0);
        }
      }

      return matching;
    }
};
