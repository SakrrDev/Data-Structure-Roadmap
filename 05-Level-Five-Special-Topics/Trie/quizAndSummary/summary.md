
# Trie (Prefix Tree)

##  Overview
A **Trie** (also called a **Prefix Tree**) is a tree-based data structure used to efficiently store and retrieve strings, especially when working with **prefix-based operations**.

It is commonly used for:
- Autocomplete systems
- Spell checkers
- Dictionary implementations
- IP routing
- Search engines

---

##  Key Idea
Each node represents a **character**.  
Paths from the root to a node form a **prefix** or a complete **word**.

- The root node is usually empty (`""`)
- Each edge represents a character
- A special flag marks the **end of a word**

---

## Structure
Each Trie node typically contains:
- An array / map of child nodes (characters)
- A boolean flag `isEndOfWord`

Example:
Insert: cat, car:
```
    (root)
      |
      c
      |
      a
    /   \
   t     r
 (end) (end)
```



---

##  Basic Operations

###  Insert a Word
- Start from the root
- For each character:
  - Create a node if it doesn't exist
- Mark the last node as `endOfWord`

⏱ **Time Complexity:** `O(L)`  
where `L` = length of the word

---

###  Search a Word
- Traverse character by character
- Check `endOfWord` at the last node

⏱ **Time Complexity:** `O(L)`

---

###  Prefix Search
- Traverse characters of the prefix
- If traversal succeeds → prefix exists

⏱ **Time Complexity:** `O(L)`

---

##  Complexity Analysis

| Operation | Time Complexity |
|----------|----------------|
| Insert   | O(L)           |
| Search   | O(L)           |
| Prefix   | O(L)           |

 **Space Complexity:**  
- `O(ALPHABET_SIZE × number_of_nodes)`
- Can be memory-intensive

---

##  Advantages
- Very fast prefix searching
- Predictable time complexity
- Ideal for string-based datasets

---

##  Disadvantages
- High memory usage
- Inefficient for small datasets
- More complex than arrays or hash tables

---

##  Trie vs Hash Table

| Feature       | Trie | Hash Table |
| ------------- | ---- | ---------- |
| Prefix Search | Yes  | No         |
| Search Time   | O(L) | O(1) avg   |
| Memory Usage  | High | Moderate   |

---

##  Common Applications
- Autocomplete & search suggestions
- Dictionary word lookup
- Spell checking
- DNA sequence analysis
- URL routing

---

##  Notes
- Tries are best when **many words share common prefixes**
- Can be optimized using:
  - Compressed Trie (Radix Tree)
  - Ternary Search Tree

---

