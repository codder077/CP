#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        ll max_beauty = 0, sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            max_beauty += (a[i] + x - 1) / x;
            sum += a[i];
        }

        ll min_beauty = (sum + x - 1) / x;

        cout << min_beauty << " " << max_beauty << endl;
    }
    return 0;
}
