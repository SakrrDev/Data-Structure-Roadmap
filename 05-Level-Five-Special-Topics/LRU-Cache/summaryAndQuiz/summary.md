
# Cache replacement algorithms
help decide which data to evict from a full cache to make space for new data must be loaded, balancing performance and space by tracking data usage patterns
## Why cache replacement exists

- Cache memory is limited, so when it fills up, something must be removed to insert new data
- A replacement algorithm tries to keep “good” items (likely to be used again) and evict “bad” items (unlikely to be used again) to maximize hit ratio and performance

## Common cache replacement algorithms

- **FIFO (First-In-First-Out)**: Evicts the item that entered the cache earliest, ignoring how often it was used.
- ​
- **LRU (Least Recently Used)**: Evicts the item that has not been used for the longest time (focus on recency).
- ​
- **LFU (Least Frequently Used)**: Evicts the item with the smallest access count (focus on frequency).
- ​
- **MRU (Most Recently Used)**: Evicts the most recently used item; useful in some sequential-scan patterns where recent items are less likely to be reused.​
- 
- **Random**: Evicts a random entry; very simple, sometimes used in hardware caches


![[Pasted image 20251231205451.png]]

completion is well explained at [Geek4Geeks](https://www.geeksforgeeks.org/system-design/lru-cache-implementation/)
 
