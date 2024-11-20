#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> a,b;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            a.push_back(x);
        }
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            b.push_back(x);
        }
        ll temp1=0,temp2=0,ans=0;
        for(int j=0;j<n;j++)
        {
            if (k != j)
            {
                temp1 += a[j];
                temp2 = max(temp2, b[j]);
                ans = max(temp1 + (k - j - 1) * temp2, ans);
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;

    }
    return 0;
}