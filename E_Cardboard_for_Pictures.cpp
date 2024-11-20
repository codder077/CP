#include<bits/stdc++.h>
using namespace std;
using ll        = long long;
using ld        = long double;

#define int long long
signed main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            c -= (v[i] * v[i]);
        }
        c /= (4 * n);
        int tot = accumulate(v.begin(), v.end(), 0LL);
        tot /= (2 * n);
        cout << (ll) sqrtl(tot * tot + c) - tot << '\n';
    }
    return 0;
}