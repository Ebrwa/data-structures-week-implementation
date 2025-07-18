#include <iostream>
using namespace std;

// Disjoint Set with union by rank and path compression
class DisjointSet {
private:
    int* parent;
    int* rank;
    int n;
public:
    DisjointSet(int size) {
        n = size;
        parent = new int[n];
        rank = new int[n];
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]); // path compression
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY) return;

        // union by rank
        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }

    ~DisjointSet() {
        delete[] parent;
        delete[] rank;
    }
};

int main() {
    DisjointSet ds(6);
    ds.unite(0, 1);
    ds.unite(1, 2);
    ds.unite(3, 4);
    cout << (ds.find(2) == ds.find(0)) << endl; // 1
    cout << (ds.find(3) == ds.find(1)) << endl; // 0
    ds.unite(2, 4);
    cout << (ds.find(3) == ds.find(0)) << endl; // 1
    return 0;
}
