#include <iostream>
using namespace std;
#define ll long long

ll sumOfLastKNumbers(ll n, ll k) {
    ll sum = 0;
    for (ll i = n; i > n - k; --i) {
        sum += i;
    }
    return sum;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;

        ll sumf = k * (k + 1) / 2;

        ll suml = sumOfLastKNumbers(n, k);

        if (x >= sumf && x <= suml) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
