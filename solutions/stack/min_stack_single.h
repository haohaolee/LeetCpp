/*
* Min Stack.
* https://oj.leetcode.com/problems/min-stack/
* Single deque is the tricky implementation, but "NOT AC" yet by stupid LeetCode
* due to MLE(long long).
*/

#ifndef LEETCPP_SOLUTIONS_MIN_STACK_SINGLE_H_
#define LEETCPP_SOLUTIONS_MIN_STACK_SINGLE_H_

#include <deque>

class MinStackSingle {
public:
  void push(int x);

  void pop();

  int top();

  int getMin();

private:
  void Validate();

  // data
  std::deque<long long> data_;
  long long current_min_elem_;
};

#endif  // LEETCPP_SOLUTIONS_MIN_STACK_SINGLE_H_
