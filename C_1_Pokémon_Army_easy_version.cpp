#include <bits/stdc++.h>
using namespace std;
#define ll long long




int main() {
    int t;  
    cin >> t;
    
    while (t--) {
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n);
        vector<vector<ll>> dp(2, vector<ll>(n+1));

        dp[0][0] = INT_MIN;
        dp[1][0] = 0;
        for (ll i = 0; i < n; i++) {
            cin >> a[i]; 
            dp[0][i + 1] = max(dp[0][i], dp[1][i] + a[i]);
            dp[1][i + 1] = max(dp[1][i], dp[0][i] - a[i]);
        }

        cout << max(dp[1][n], dp[0][n]) << "\n";
    }

    return 0;
}
