#include <algorithm>
using namespace std;

#include "min_stack_single.h"

void MinStackSingle::push(int x) {
  // First elem.
  if (data_.empty()) {
    current_min_elem_ = x;
    data_.push_back(0L);
  } else {
    data_.push_back(x - current_min_elem_);
    current_min_elem_ = min(static_cast<long long>(x), current_min_elem_);
  }
}

void MinStackSingle::pop() {
  Validate();

  long long delta = data_.back();

  // delta < 0 means origin < "current_min_elem_"(prev_min_elem), so top element
  // is the occurence of current minimum element:
  // origin(current_min_elem_) - prev_min_elem(unknown) = delta(store in stack)
  if (delta < 0) {
    current_min_elem_ = current_min_elem_ - delta;
  }

  data_.pop_back();
}

int MinStackSingle::top() {
  Validate();

  int top_elem;
  long long delta = data_.back();

  // delta < 0 means origin < "current_min_elem_"(prev_min_elem), so top element
  // is the occurence of current minimum element: origin = current_min_elem_.
  if (delta < 0) {
    top_elem = static_cast<int>(current_min_elem_);
  } else { // origin - current_min_elem_ = delta(store in stack)
    top_elem = static_cast<int>(current_min_elem_ + delta);
  }

  return top_elem;
}

int MinStackSingle::getMin() {
  Validate();

  return static_cast<int>(current_min_elem_);
}

void MinStackSingle::Validate() {
  if (data_.empty())
    throw "MinStackSingle is empty!";

}
