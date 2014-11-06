#include <algorithm>
#include <list>
#include <utility>
using namespace std;

#include "lru_cache.h"

LRUCache::LRUCache(int capacity) : capacity_(capacity), size_(0) {

}

int LRUCache::get(int key) {
  // Not found.
  if (mapping_.find(key) == mapping_.end())
    return -1;

  // Found, needs to raise its position to front.
  CacheIterator it = mapping_[key];
  int value = *it;
  cache_.erase(it);
  cache_.push_front(value);
  mapping_[key] = cache_.begin();

  return value;
}

void LRUCache::set(int key, int value) {
  int oldValue = get(key);

  // Doesn't exist, need to insert a new one.
  if (oldValue < 0) {
    // If over capacity, let's pop back.
    if (size_ >= capacity_) {
      cache_.pop_back();
      --size_;
    }

    cache_.push_front(value);
    mapping_[key] = cache_.begin();
    ++size_;
  }
  else {
    CacheIterator it = mapping_[key];
    *it = value;
  }
}