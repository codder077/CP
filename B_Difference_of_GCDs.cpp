#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> a(n);
        bool possible = true;

        for (ll i = 1; i <= n; ++i) {
            ll x = (l + i - 1) / i * i;
            if (x > r) {
                possible = false;
                break;
            }
            a[i - 1] = x;
        }

        if (possible) {
            cout << "YES" << endl;
            for (ll i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
