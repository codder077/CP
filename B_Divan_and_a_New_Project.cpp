#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> visits; 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            visits.push_back({x, i});
        }
        sort(visits.rbegin(), visits.rend());

        vector<int> coordinates(n + 1, 0); 
        ll total_time = 0;
        int distance = 1;
        
        for (int i = 0; i < n; i++) {
            int visit_count = visits[i].first;
            int idx = visits[i].second;

            if (i % 2 == 0) {
                coordinates[idx + 1] = distance;
            } else {
                coordinates[idx + 1] = -distance;
                distance++; 
            }

            total_time += 2LL * visit_count * abs(coordinates[idx + 1]);
        }

        cout << total_time << endl;
        for (int coord : coordinates) {
            cout << coord << " ";
        }
        cout << endl;
    }
    return 0;
}
