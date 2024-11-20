#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int t;
    cin >> t;

    while (t--) {
        int np, nq;
        cin >> np >> nq;

        vector<int> points(np);
        for (int i = 0; i < np; ++i) {
            cin >> points[i];
        }

        vector<int> queries(nq);
        for (int i = 0; i < nq; ++i) {
            cin >> queries[i];
        }

        unordered_map<int, int> coverage_count;

        for (int i = 1; i <= np; ++i) {
            int coverage_at_point = (i - 1) * (np - i + 1) + (np - i);
            coverage_count[coverage_at_point]++;

            if (i < np) {
                int gap_between_points = points[i] - points[i - 1] - 1;
                if (gap_between_points > 0) {
                    int coverage_between_points = i * (np - i);
                    coverage_count[coverage_between_points] += gap_between_points;
                }
            }
        }

        for (int i = 0; i < nq; ++i) {
            cout << coverage_count[queries[i]] << " ";
        }
        cout << "\n";
    }

    return 0;
}
