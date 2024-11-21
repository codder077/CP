#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int i = 0, j = n - 1; 
        ll lsum = 0, rsum = 0;
        ll ans = 0;

        while (i <= j) {
            if (lsum == rsum) {
                ans = max(ans, i + (n - 1 - j));
            }

            // Adjust the pointers and sums
            if (lsum <= rsum) {
                lsum += a[i];
                i++;
            } else {
                rsum += a[j];
                j--;
            }
        }
        if(lsum==rsum){
            ans = max(ans, i + (n - 1 - j));
        }

        cout << ans << endl;
    }
    return 0;
}
