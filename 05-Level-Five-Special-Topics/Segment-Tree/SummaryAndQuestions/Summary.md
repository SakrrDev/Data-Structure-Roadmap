

##  Summary
Segment Tree is a binary tree for efficient range queries and updates on arrays. Each node represents an interval; leaf nodes hold array elements. Supports sum/min/max queries and point/range updates in O(log n).[web:prior DS knowledge]

**Key Idea**: Divide-and-conquer on array indices. Tree has 4*n space; built bottom-up or recursively.

##  Structure
- **Root**: [0, n-1] (full array)
- **Internal nodes**: Parent = left child + right child (merge function: sum/min/...)
- **Leaves**: Single elements [i,i]
- Stored in array: index 1 = root, 2*i/left, 2*i+1/right

##  Operations

### Build
Construct tree from array by recursive splitting intervals. Time: O(n).

### Query(l, r)
Traverse to nodes fully covering [l,r]; combine results. Handles partial overlaps. Time: O(log n).

### Update (Point)
Propagate change from leaf to root. Time: O(log n).

### Lazy Propagation (Range Update)
Defer updates using lazy[] flags; push down when querying children. Enables range updates in O(log n).

##  Complexity Table
| Operation          | Time       | Space   |
|--------------------|------------|---------|
| Build              | O(n)      | O(4n)  |
| Range Query        | O(log n)  | -      |
| Point Update       | O(log n)  | -      |
| Range Update+Query | O(log n)  | O(4n)  |

## Applications
- Range sum/min/max (RMQ)
- Fenwick alternative (but more versatile)
- Image processing (range filters)
- Competitive programming (AtCoder/Codeforces)

**vs Fenwick Tree**: Segment 
> flexible (min/max/lazy); Fenwick > simpler/smaller.