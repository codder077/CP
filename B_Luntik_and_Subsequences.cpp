#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        int c1 = 0, c0 = 0;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x == 1) {
                c1++;
            } else if (x == 0) {
                c0++;
            }
        }
        
        if (c1 == 0) {
            cout << 0 << endl;
        } else {
            cout << (1LL << c0) * c1 << endl; 
        }
    }
    return 0;
}
