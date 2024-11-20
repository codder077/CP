#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<ll> x(n), y(n);
        for (ll i = 0; i < n; ++i) {
            cin >> x[i] >> y[i];
        }

        ll ans = 10000000000000000LL;
        ans = min(ans, llabs(x[a - 1] - x[b - 1]) + llabs(y[a - 1] - y[b - 1]));

        ll ans1 = 10000000000000000LL, ans2 = 10000000000000000LL;

        for (ll i = 0; i < k; ++i) {
            ans1 = min(ans1, llabs(x[a - 1] - x[i]) + llabs(y[a - 1] - y[i]));
        }
        for (ll i = 0; i < k; ++i) {
            ans2 = min(ans2, llabs(x[b - 1] - x[i]) + llabs(y[b - 1] - y[i]));
        }
        ans = min(ans, ans1 + ans2);
        cout << ans << endl;
    }
    return 0;
}
