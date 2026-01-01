#include <iostream>
#include <vector>
using namespace std;

class UnionFind {
private:
    vector<int> parent;
    vector<int> rank;   // can also use size instead of rank

public:
    // Constructor
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);

        // Initially, each element is its own parent
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    // Find with path compression
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); // path compression
        }
        return parent[x];
    }

    // Union by rank
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        // Already in the same set
        if (rootX == rootY)
            return;

        // Attach smaller rank tree under larger rank tree
        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        }
        else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        }
        else {
            parent[rootY] = rootX;
            rank[rootX]++; // increase rank if both have same rank
        }
    }

    // Check if two elements are connected
    bool connected(int x, int y) {
        return find(x) == find(y);
    }
};

int main() {
    UnionFind uf(7);

    uf.unite(0, 1);
    uf.unite(1, 2);
    uf.unite(3, 4);

    cout << uf.connected(0, 2) << endl; // 1 (true)
    cout << uf.connected(0, 4) << endl; // 0 (false)

    uf.unite(2, 4);
    cout << uf.connected(0, 4) << endl; // 1 (true)

    return 0;
}
