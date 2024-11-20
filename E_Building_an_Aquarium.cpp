#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function to calculate the total water required to reach height h
ll water(ll h, vector<ll> &a) {
    ll ans = 0;
    for (int i = 0; i < a.size(); i++) {
        if ((h - a[i]) > 0) {
            ans += (h - a[i]);
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        
        if (n == 0) {
            cout << 0 << endl;
            continue;
        }
        
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll maxi = *max_element(a.begin(), a.end()) +x;
        ll s = 0, e = maxi, res = 0;
        while (s <= e) {
            ll mid = s + ((e - s) / 2);
            ll w = water(mid, a);
            if (w > x) {
                e = mid - 1; 
            } else {
                res = mid; 
                s = mid + 1;
            }
        }
        cout << res << endl; 
    }
    return 0;
}
