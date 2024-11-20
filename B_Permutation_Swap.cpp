#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a;
        vector<int> ans;
        map<int,int> pos;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x);
            pos[x]=i;
        }

        for(int i = 0; i < n; ++i){
			if(a[i] != i + 1){
				ans.push_back(abs(pos[i + 1] - i));
			}
		}
		int res = ans[0];
		for(auto i: ans) res = __gcd(res, i);
		cout << res << endl;
    }
}