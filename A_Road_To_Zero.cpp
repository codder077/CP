#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;

        if (x > y) swap(x, y);

        ll cost1 = (x + y) * a;

        ll cost2 = x * b + (y - x) * a;

        cout << min(cost1, cost2) << endl;
    }

    return 0;
}
