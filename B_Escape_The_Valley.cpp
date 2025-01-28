#include <iostream>
#include <vector>
#include <cmath>
#include <tuple>
using namespace std;

class UnionFind {
public:
    vector<int> parent, rank;

    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

bool canReachOtherSide(int m, int n, vector<tuple<int, int, int>>& lamps) {
    UnionFind uf(n + 2); 
    const int source = n; 
    const int target = n + 1; 

    for (int i = 0; i < n; ++i) {
        int x1, y1, r1;
        tie(x1, y1, r1) = lamps[i];

        if (x1 - r1 <= 0) {
            uf.unite(i, source);
        }

        if (x1 + r1 >= m) {
            uf.unite(i, target);
        }

        for (int j = i + 1; j < n; ++j) {
            int x2, y2, r2;
            tie(x2, y2, r2) = lamps[j];

            long long dx = x1 - x2;
            long long dy = y1 - y2;
            long long distanceSq = dx * dx + dy * dy;
            long long radiusSum = r1 + r2;

            if (distanceSq <= radiusSum * radiusSum) {
                uf.unite(i, j);
            }
        }
    }

    return uf.find(source) == uf.find(target);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;

        vector<tuple<int, int, int>> lamps(n);
        for (int i = 0; i < n; ++i) {
            int x, y, r;
            cin >> x >> y >> r;
            lamps[i] = {x, y, r};
        }

        if (canReachOtherSide(m, n, lamps)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
