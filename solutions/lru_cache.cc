#include <algorithm>
#include <list>
#include <utility>
using namespace std;

#include "lru_cache.h"

LRUCache::LRUCache(int capacity) : capacity_(capacity) {

}

int LRUCache::get(int key) {
  int value = -1;

  for (Cache::iterator it = cache_.begin(); it != cache_.end(); ++it) {
    if (it->first == key) {
      value = it->second;
      break;
    }
  }

  return value <= 0 ? -1 : value;
}

void LRUCache::set(int key, int value) {
  int oldValue = get(key);

  // Doesn't exist, need to insert a new one.
  if (oldValue < 0) {

  }
  else {

  }
}