#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct{const int i = (1e9) + 7; const long long int l = (long long int)(1e9) + 7ll;}MOD; 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

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

        ll num=1;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        long long int ans = 1ll, pre = 0ll, d = 0ll, res = 0ll;
		for(long long int i = n - 1; i >= 0; --i){
			if(upper_bound(begin(a), end(a), b[i]) != end(a)){
				d = distance(upper_bound(begin(a), end(a), b[i]), end(a));
			}else{
				ans = 0;
				break;
			}
			if(i < n - 1){
				res = (d - pre) + res - 1;
				ans *= res % MOD.l;
				ans %= MOD.l;
			}else{
				ans = d;
				res = d;
			}
			pre = d;
		}
		cout << ans % MOD.l <<endl;
    }
    return 0;
}