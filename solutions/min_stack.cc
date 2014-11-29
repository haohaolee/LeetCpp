#include <stack>
#include <algorithm>
using namespace std;

#include "min_stack.h"

void MinStack::push(int x) {
  // First elem.
  if (stack_.empty()) {
    current_min_elem_ = x;
    stack_.push(0L);
  } else {
    stack_.push(x - current_min_elem_);
    current_min_elem_ = min(static_cast<long long>(x), current_min_elem_);
  }
}

void MinStack::pop() {
  Validate();

  long long delta = stack_.top();

  // delta < 0 means origin < "current_min_elem_"(prev_min_elem), so top element
  // is the occurence of current minimum element:
  // origin(current_min_elem_) - prev_min_elem(unknown) = delta(store in stack)
  if (delta < 0) {
    current_min_elem_ = current_min_elem_ - delta;
  }

  stack_.pop();
}

int MinStack::top() {
  Validate();

  int top_elem;
  long long delta = stack_.top();

  // delta < 0 means origin < "current_min_elem_"(prev_min_elem), so top element
  // is the occurence of current minimum element: origin = current_min_elem_.
  if (delta < 0) {
    top_elem = static_cast<int>(current_min_elem_);
  } else { // origin - current_min_elem_ = delta(store in stack)
    top_elem = static_cast<int>(current_min_elem_ + delta);
  }

  return top_elem;
}

int MinStack::getMin() {
  Validate();

  return static_cast<int>(current_min_elem_);
}

void MinStack::Validate() {
  if (stack_.empty())
    throw "MinStack is empty!";

}
