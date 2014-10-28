#include <vector>
#include <string>
using namespace std;

#include <gtest\gtest.h>

#include "..\solutions\word_search.h"

namespace {
  TEST(WordSearchTest, Exist) {
    WordSearch solution;

    vector<vector<char>> board;
    board.push_back(vector<char>({'A', 'B', 'C', 'E' }));
    board.push_back(vector<char>({ 'S', 'F', 'C', 'S' }));
    board.push_back(vector<char>({ 'A', 'D', 'E', 'E' }));
    string word1 = "ABCCED";
    string word2 = "SEE";
    string word3 = "ABCB";

    EXPECT_EQ(true, solution.exist(board, word1));
    EXPECT_EQ(true, solution.exist(board, word2));
    EXPECT_EQ(false, solution.exist(board, word3));
  }
}