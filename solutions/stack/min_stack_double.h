/*
* Min Stack.
* https://oj.leetcode.com/problems/min-stack/
* Double queue is the simplest implementation.
*/

#ifndef LEETCPP_SOLUTIONS_MIN_STACK_DOUBLE_H_
#define LEETCPP_SOLUTIONS_MIN_STACK_DOUBLE_H_

#include <deque>

class MinStackDouble {
public:
  void push(int x);

  void pop();

  int top();

  int getMin();

private:
  void validate();

  // data
  std::deque<int> data_;
  std::deque<int> mins_;
};

#endif  // LEETCPP_SOLUTIONS_MIN_STACK_DOUBLE_H_
