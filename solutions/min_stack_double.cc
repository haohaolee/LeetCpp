#include <algorithm>
#include <utility>
using namespace std;

#include "min_stack_double.h"

void MinStackDouble::push(int x) {
  data_.push_back(x);

  // Only push new min_elem or the elem that is <= current minimum elem.
  if (mins_.empty() || x <= getMin()) {
    mins_.push_back(x);
  }
}

void MinStackDouble::pop() {
  validate();

  if (top() <= getMin()) {
    mins_.pop_back();
  }

  data_.pop_back();
}

int MinStackDouble::top() {
  validate();

  return data_.back();
}

int MinStackDouble::getMin() {
  validate();

  return mins_.back();
}

void MinStackDouble::validate() {
  if (data_.empty() || mins_.empty())
    throw "Stack is empty!";
}
