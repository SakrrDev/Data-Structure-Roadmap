#include <iostream>
#include <vector>
using namespace std;

class SegmentTree {
private:
    vector<int> tree;
    int n;

    // Build the segment tree
    void build(int node, int start, int end, const vector<int>& arr) {
        if (start == end) {
            tree[node] = arr[start];
            return;
        }

        int mid = (start + end) / 2;
        build(2 * node, start, mid, arr);
        build(2 * node + 1, mid + 1, end, arr);

        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    // Range query
    int query(int node, int start, int end, int l, int r) {
        // completely outside
        if (r < start || end < l)
            return 0;

        // completely inside
        if (l <= start && end <= r)
            return tree[node];

        // partially inside
        int mid = (start + end) / 2;
        int leftSum = query(2 * node, start, mid, l, r);
        int rightSum = query(2 * node + 1, mid + 1, end, l, r);

        return leftSum + rightSum;
    }

    // Point update
    void update(int node, int start, int end, int idx, int value) {
        if (start == end) {
            tree[node] = value;
            return;
        }

        int mid = (start + end) / 2;
        if (idx <= mid)
            update(2 * node, start, mid, idx, value);
        else
            update(2 * node + 1, mid + 1, end, idx, value);

        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

public:
    SegmentTree(const vector<int>& arr) {
        n = arr.size();
        tree.resize(4 * n); // safe size
        build(1, 0, n - 1, arr);
    }

    // Public range sum query
    int rangeQuery(int l, int r) {
        return query(1, 0, n - 1, l, r);
    }

    // Public point update
    void pointUpdate(int idx, int value) {
        update(1, 0, n - 1, idx, value);
    }
};

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    SegmentTree st(arr);

    cout << st.rangeQuery(1, 3) << endl; // 3 + 5 + 7 = 15
    st.pointUpdate(1, 10);               // arr[1] = 10
    cout << st.rangeQuery(1, 3) << endl; // 10 + 5 + 7 = 22

    return 0;
}
