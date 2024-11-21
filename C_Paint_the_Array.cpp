#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function to calculate GCD
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll gcd1 = 0, gcd2 = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i % 2 == 0) {
                gcd1 = gcd(gcd1, a[i]);
            } else {
                gcd2 = gcd(gcd2, a[i]);
            }
        }

        bool valid1 = true;
        for (int i = 1; i < n; i += 2) {
            if (a[i] % gcd1 == 0) {
                valid1 = false;
                break;
            }
        }

        bool valid2 = true;
        for (int i = 0; i < n; i += 2) {
            if (a[i] % gcd2 == 0) {
                valid2 = false;
                break;
            }
        }

        if (valid1) {
            cout << gcd1 << endl;
        } else if (valid2) {
            cout << gcd2 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
