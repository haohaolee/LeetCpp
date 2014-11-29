#include <algorithm>
#include <utility>
using namespace std;

#include "min_stack_double.h"

void MinStackDouble::push(int x) {
  data_.push_back(x);

  // Only push new min_elem.
  if (mins_.empty() || x < getMin()) {
    mins_.push_back(pair<int, int>(x, 1));
  } else {
    ++mins_.back().second;
  }
}

void MinStackDouble::pop() {
  validate();

  int top_elem = top();
  int min_elem = getMin();

  data_.pop_back();
  --mins_.back().second;
  if (mins_.back().second <= 0) {
    mins_.pop_back();
  }
}

int MinStackDouble::top() {
  validate();

  return data_.back();
}

int MinStackDouble::getMin() {
  validate();

  return mins_.back().first;
}

void MinStackDouble::validate() {
  if (data_.empty() || mins_.empty())
    throw "Stack is empty!";
}
