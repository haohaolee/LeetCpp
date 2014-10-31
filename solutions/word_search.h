/*
* Word Search.
* https://oj.leetcode.com/problems/word-search/
*
*/

#ifndef LEETCPP_SOLUTIONS_WORD_SEARCH_H_
#define LEETCPP_SOLUTIONS_WORD_SEARCH_H_

#include <vector>
#include <algorithm>

class WordSearch {
private:
  typedef std::vector<std::vector<char>> word_board;
  int board_row_size;
  int board_col_size;

  // Left, right, down, up.
  int dirs[4][2];

  std::vector<std::vector<bool>> visited;

  void init(const word_board& board);
  bool backTrack(const word_board &board, int x, int y,
                 const std::string& word, size_t matching_pos);
  WordSearch(const WordSearch& copy);
  WordSearch& operator=(const WordSearch& right);

public:
  WordSearch();
  bool exist(word_board &board, std::string word);
};

#endif  // LEETCPP_SOLUTIONS_WORD_SEARCH_H_
