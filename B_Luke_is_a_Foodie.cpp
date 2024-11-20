#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (ll &A : a) cin >> A;
        ll mini = a[0] - x, maxi = a[0] + x;
        ll ans = 0;
        for (ll i = 1; i < n; ++i) {
            maxi = min(maxi, a[i] + x);
            mini = max(mini, a[i] - x);
            if (maxi < mini) {
                ++ans;
                maxi = a[i] + x, mini = a[i] - x;
            }
        }
        cout << ans << '\n';
    }
}