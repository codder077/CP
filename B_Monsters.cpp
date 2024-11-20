#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

         vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<pair<ll, ll>> hMap;

        for (int i = 0; i < n; i++)
        {
            ll res = arr[i] % k;
            if (res == 0)
                res += k;
            hMap.push_back({-res, i});
        }

        sort(hMap.begin(), hMap.end());
        for (auto ele : hMap)
            cout << ele.second + 1 << " ";

        cout<<endl;
    }
    return 0;
}
