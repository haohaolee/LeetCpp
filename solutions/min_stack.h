/*
* Min Stack.
* https://oj.leetcode.com/problems/min-stack/
*/

#ifndef LEETCPP_SOLUTIONS_MIN_STACK_H_
#define LEETCPP_SOLUTIONS_MIN_STACK_H_

#include <stack>

class MinStack {
public:
  void push(int x);

  void pop();

  int top();

  int getMin();
private:
  void Validate();

  // data
  std::stack<long long> stack_;
  long long current_min_elem_;
};

#endif  // LEETCPP_SOLUTIONS_MIN_STACK_H_
