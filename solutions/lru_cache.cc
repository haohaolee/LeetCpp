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
  int value = it->second;
  cache_.erase(it);
  cache_.push_front(pair<int, int>(key, value));
  mapping_[key] = cache_.begin();

  return value;
}

void LRUCache::set(int key, int value) {
  int oldValue = get(key);

  // Doesn't exist, need to insert a new one.
  if (oldValue < 0) {
    // If over capacity, let's pop back.
    if (size_ >= capacity_) {
      int key = cache_.back().first;
      cache_.pop_back();
      mapping_.erase(key);
      --size_;
    }

    cache_.push_front(pair<int, int>(key, value));
    mapping_[key] = cache_.begin();
    ++size_;
  }
  else {
    CacheIterator it = mapping_[key];
    it->second = value;
  }
}