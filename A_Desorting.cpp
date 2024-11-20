#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (!is_sorted(a.begin(), a.end())) {
            cout << 0 << endl;
            continue;
        }

        ll mind = LLONG_MAX;
        for (ll i = 0; i < n - 1; i++) {
            mind = min(mind, a[i + 1] - a[i]);
        }

        cout << (mind ) / 2 +1 << endl;
    }

    return 0;
}
