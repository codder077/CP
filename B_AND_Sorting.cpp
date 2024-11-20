#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;

map<ll, ll>mp;
ll a[N], b[N];
set<ll>s;


int main()
{
    ll Tc; cin >> Tc;
    while(Tc--){
        ll n, j = 0; cin >> n;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] != i){
                b[j] = a[i];
                j++;
            }
        }
        for(ll k = 1; k < j; k++) b[k] &= b[k - 1];
        cout << b[j - 1] << endl;

    }
    return 0;
}