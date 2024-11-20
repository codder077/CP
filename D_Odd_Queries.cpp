#include <bits/stdc++.h>
using namespace std;

#define lli long long
#define vii vector<lli>
#define ln "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        lli n, q;
        cin >> n >> q;
        vii a(n);
        
        for (lli i = 0; i < n; ++i) {
            cin >> a[i];
            if (i > 0) {
                a[i] += a[i - 1];  
            }
        }

        // Process each query
        while (q--) {
            lli l, r, k;
            cin >> l >> r >> k;
            
            lli range_sum = (l > 1) ? (a[r - 1] - a[l - 2]) : a[r - 1];
            
            lli modified_sum = a[n - 1] - range_sum + (r - l + 1) * k;

            cout << (modified_sum % 2 ? "YES" : "NO") << ln;
        }
    }
    return 0;
}
