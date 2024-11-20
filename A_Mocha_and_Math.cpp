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
        
        ll result = a[0];
        for (ll i = 1; i < n; i++) {
            result &= a[i];  
        }
        
        cout << result << endl;
    }
    return 0;
}
