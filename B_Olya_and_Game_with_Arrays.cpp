#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    long t;
    cin >> t; 
    while (t--) {
        long n;
        cin >> n;
        vector<pair<long, long>> v(n);
        
        long idx = -1, gmn = 1e9 + 7, gsmn = 1e9 + 7;

        for (long p = 0; p < n; p++) {
            long m;
            cin >> m; 
            long mn = 1e9 + 7, smn = 1e9 + 7;

            for (long q = 0; q < m; q++) {
                long x;
                cin >> x; 
                if (x <= mn) {
                    smn = mn;
                    mn = x;
                } else if (x < smn) {
                    smn = x;
                }
            }

            v[p] = make_pair(mn, smn); 
            gmn = min(gmn, mn);
            if (smn < gsmn) {
                gsmn = smn;
                idx = p; 
            }
        }

        long long sum = 0;
        for (long p = 0; p < n; p++) {
            sum += (p != idx) ? v[p].second : gmn;
        }

        cout << sum << endl; 
    }

    return 0;
}
