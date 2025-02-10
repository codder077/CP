#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        vector<ll> b(m);
        for (auto &x : b)
            cin >> x;
        ll b1 = b[0];

        bool p = true;
        ll prev = LLONG_MIN;

        for (int i = 0; i < n; ++i)
        {
            ll ai = a[i];
            vector<ll> vec = {ai, b1 - ai};
            sort(vec.begin(), vec.end());
            bool f = false;
            for (auto o : vec)
            {
                if (o >= prev)
                {
                    prev = o;
                    f = true;
                    break;
                }
            }
            if (!f)
            {
                p = false;
                break;
            }
        }
        cout << (p ? "YES\n" : "NO\n");
    }
    return 0;
}
