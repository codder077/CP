#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        ll sum = 0;

        for (int col = 0; col < m; col++) {
            vector<int> column;
            for (int row = 0; row < n; row++) {
                column.push_back(a[row][col]);
            }

            sort(column.begin(), column.end());
            ll prefixSum = 0;
            for (int i = 0; i < n; i++) {
                sum += (1LL * i * column[i] - prefixSum);
                prefixSum += column[i];
            }
        }

        cout << sum << endl;
    }
    return 0;
}
