#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        for (ll j = 1; j < n - 1; j++) {
            if (a[j - 1] < a[j] && a[j] > a[j + 1]) {
                cout << "YES" << endl;
                cout << j << " " << j + 1 << " " << j + 2 << endl; 
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
