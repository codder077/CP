#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

typedef long long ll;

ll min_diff(ll n, ll k) {
    ll total_sum = n * k + (n - 1) * n / 2;

    ll low = 1, high = n;
    ll best_diff = LLONG_MAX;

    while (low <= high) {
        ll mid = (low + high) / 2;

        ll prefix_sum = mid * (2 * k + (mid - 1)) / 2;
        ll suffix_sum = total_sum - prefix_sum;

        ll diff = abs(prefix_sum - suffix_sum);
        best_diff = min(best_diff, diff);

        if (prefix_sum < suffix_sum) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return best_diff;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << min_diff(n, k) << endl;
    }
    return 0;
}
