#include <algorithm>
using namespace std;

#include "min_stack_double.h"

void MinStackDouble::push(int x) {
  int min_elem;

  // First elem.
  if (data_.empty()) {
    min_elem = x;
  } else {
    min_elem = min(x, top());
  }

  data_.push_back(x);
  mins_.push_back(min_elem);
}

void MinStackDouble::pop() {
  validate();

  data_.pop_back();
  mins_.pop_back();
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
  if (data_.empty())
    throw "Stack is empty!";

  if (data_.size() != mins_.size())
    throw "data_ is not consistent with mins!";
}
