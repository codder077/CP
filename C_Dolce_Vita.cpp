#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());

        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }

        long long prevDay = -1;
        long long ans = 0;
        for (int i = n - 1; i >= 0; --i) {
            long long curDay = (x - sum >= 0) ? (x - sum) / (i + 1) : -1;
            ans += (i + 1) * (curDay - prevDay);
            prevDay = curDay;
            sum -= a[i];
        }
        cout << ans << endl;
    }
    return 0;
}