# Union-Find (Disjoint Set Union – DSU)

## 📌 Overview
**Union-Find**, also known as **Disjoint Set Union (DSU)**, is a data structure used to manage a collection of **disjoint (non-overlapping) sets**.

It is especially useful when you need to:
- Dynamically group elements
- Quickly check whether two elements belong to the same set
- Merge two sets efficiently

---

## 🧠 Core Idea
Each element belongs to **exactly one set**.  
Each set has a **representative (leader)**, also called the **root**.

Operations are based on:
- Finding the representative of a set
- Unioning (merging) two sets

---

## 🧱 Representation
Union-Find is typically implemented using **arrays**:

- `parent[i]` → parent of element `i`
- `rank[i]` or `size[i]` → used for optimization

Initially:
```
parent[i] = i // each element is its own parent
```



---

## ⚙️ Basic Operations

### 1️⃣ Find (Find Representative)
Returns the root of the set containing element `x`.

#### 🔹 Path Compression
During `find`, make every node point **directly to the root**.
This flattens the structure and speeds up future operations.

```text
Before:   x → p → r
After:    x → r
```

⏱ **Time Complexity:** `O(α(n))` (almost constant)

---
### 2️⃣ Union (Merge Sets)

Merges the sets containing `x` and `y`.

#### 🔹 Union by Rank / Size

Attach the **smaller tree** under the **larger tree** to keep trees shallow.

Rules:

- If ranks are equal → attach one and increase rank
    
- Otherwise → attach smaller rank under larger rank

---
### 3️⃣ Connected

Checks if two elements are in the same set.
```
connected(x, y) → find(x) == find(y)
```
---
## ⚡ Optimizations

| Optimization     | Purpose                        |
| ---------------- | ------------------------------ |
| Path Compression | Flattens the tree              |
| Union by Rank    | Prevents tall trees            |
| Union by Size    | Attaches smaller set to larger |

Using **both** gives the best performance.

---

## 📊 Complexity Analysis

| Operation | Time Complexity |
| --------- | --------------- |
| Find      | O(α(n))         |
| Union     | O(α(n))         |
| Connected | O(α(n))         |

> `α(n)` = Inverse Ackermann Function  
> Grows so slowly it’s **≤ 4 for all practical inputs**

📦 **Space Complexity:** `O(n)`

---

## ✅ Advantages

- Extremely fast operations
    
- Simple to implement
    
- Perfect for connectivity problems
    
- Scales well to large inputs
    

---

## ❌ Disadvantages

- Cannot easily list all elements in a set
    
- No support for splitting sets
    
- Not suitable when structure of sets matters
    

---

## 🧪 Common Applications

- Graph connectivity
    
- Cycle detection in graphs
    
- Kruskal’s Minimum Spanning Tree
    
- Network connections
    
- Image segmentation
    
- Social network grouping
    

---

## 🆚 Union-Find vs Graph Traversal

| Feature              | Union-Find | DFS / BFS    |
| -------------------- | ---------- | ------------ |
| Dynamic connectivity | ✅ Yes      | ❌ No         |
| Repeated queries     | Very fast  | Slower       |
| Implementation       | Simple     | More complex |

---

## 📝 Notes

- Best used when the problem involves **frequent union & find operations**
    
- Does **not** store actual elements of sets, only connectivity
    
- Often used in **competitive programming** and **interviews**
    

---

## 📚 Related Topics

- Graph Theory
    
- Kruskal’s Algorithm
    
- Minimum Spanning Tree (MST)
    
- Connected Components