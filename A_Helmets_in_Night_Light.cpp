#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, p;
        cin >> n >> p;
        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<pair<ll, ll>> residents;
        for (int i = 0; i < n; i++) {
            residents.push_back({b[i], a[i]}); 
        }
        
        sort(residents.begin(), residents.end());

        ll ans = p;
        ll remaining_residents = n - 1;

        for (auto &resident : residents) {
            ll share_cost = resident.first;
            ll max_shares = resident.second;

            if (remaining_residents <= 0 || share_cost > p) break;

            ll shares = min(max_shares, remaining_residents);
            ans += share_cost * shares;
            remaining_residents -= shares;
        }

        if (remaining_residents > 0) {
            ans += remaining_residents * p;
        }

        cout << ans << endl;
    }
    return 0;
}
