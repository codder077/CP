#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<pair<ll,ll>> a(n), b(n), c(n);
        for(ll i = 0; i < n; i++)
            cin >> a[i].first;
        for(ll i = 0; i < n; i++)
            cin >> b[i].first;
        for(ll i = 0; i < n; i++)
            cin>>c[i].first;

        for(ll i= 0; i<n;i++){
            a[i].second = i;
            b[i].second = i;
            c[i].second = i;
        }
        sort(a.begin(), a.end(), greater<pair<ll, ll>>());
        sort(b.begin(), b.end(), greater<pair<ll, ll>>());
        sort(c.begin(), c.end(), greater<pair<ll, ll>>());
        ll ans=0;
        for (ll i = 0; i < 3; ++i)
        {
            for (ll j = 0; j < 3; ++j)
            {
                for (ll k = 0; k < 3; ++k)
                {
                    if (b[j].second != a[i].second && c[k].second != a[i].second && c[k].second != b[j].second)
                    {
                        ans = max(a[i].first + b[j].first + c[k].first, ans);
                    }
                }
            }
        }
        cout<<ans<<endl;


    }
}