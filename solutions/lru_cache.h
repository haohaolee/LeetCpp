// Source : https://oj.leetcode.com/problems/lru-cache/
// Author : Su Shi
// Date : 2014-11-03

/*******************************************************************************
* Design and implement a data structure for Least Recently Used (LRU) cache. It
* should support the following operations: get and set.
*
* get(key) - Get the value (will always be positive) of the key if the key
* exists in the cache, otherwise return -1.
* set(key, value) - Set or insert the value if the key is not already present.
* When the cache reached its capacity, it should invalidate the least recently
* used item before inserting a new item.
*******************************************************************************/

#ifndef LEETCPP_SOLUTIONS_LRU_CACHE_H_
#define LEETCPP_SOLUTIONS_LRU_CACHE_H_

#include <list>

class LRUCache {
private:
  int capacity_;
  typedef std::list<std::pair<int, int>> Cache;
  Cache cache_;

public:
  LRUCache(int capacity);
  int get(int key);
  void set(int key, int value);
};

#endif  // LEETCPP_SOLUTIONS_LRU_CACHE_H_
