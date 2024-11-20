#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> indexMap;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            indexMap[a[i]] = i + 1;
        }

        ll maxi = -1;

        for (auto it1 = indexMap.begin(); it1 != indexMap.end(); ++it1) {
            for (auto it2 = it1; it2 != indexMap.end(); ++it2) {
                ll x = it1->first;
                ll y = it2->first;
                if (gcd(x, y) == 1) {
                    ll sumIndices = it1->second + it2->second;
                    maxi = max(maxi, sumIndices);
                }
            }
        }

        cout << maxi << endl;
    }
    return 0;
}
