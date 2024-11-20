#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fact(ll n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        if (k == 1) {
            ll cnt = 0, ans = 0;
            for (ll i = 0; i < n; i++) {
                if (a[i] <= q) {
                    cnt++;
                    ans += cnt;
                } else {
                    cnt = 0;
                }
            }
            cout << ans << endl;
        } else {
            ll cnt = 0, ans = 0;
            ll i = 0, j = 0;
            while (i < n && j < n) {
                if (a[j] <= q) {
                    if (j - i + 1 >= k) {
                        cnt++;
                        ans += cnt;
                    }
                    j++;
                } else {
                    i = j + 1;
                    j = i; // Set j to i to continue from the next valid index
                    cnt = 0; // Reset cnt since the subarray is broken
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
