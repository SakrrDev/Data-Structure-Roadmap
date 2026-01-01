#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class LRUCache {
    int capacity;

    // Doubly linked list: (key, value)
    list<pair<int, int>> dll;

    // Hash map: key -> iterator in dll
    unordered_map<int, list<pair<int, int>>::iterator> umap;

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {
        // If key not found
        if (umap.find(key) == umap.end())
            return -1;

        // Move accessed node to front (most recently used)
        dll.splice(dll.begin(), dll, umap[key]);

        // Return value
        return umap[key]->second;
    }

    void put(int key, int value) {
        // If key already exists
        if (umap.find(key) != umap.end()) {
            // Update value
            umap[key]->second = value;

            // Move to front
            dll.splice(dll.begin(), dll, umap[key]);
            return;
        }

        // If cache is full
        if (dll.size() == capacity) {
            // Remove least recently used (back)
            auto last = dll.back();
            umap.erase(last.first);
            dll.pop_back();
        }

        // Insert new key-value at front
        dll.push_front({key, value});
        umap[key] = dll.begin();
    }
};
