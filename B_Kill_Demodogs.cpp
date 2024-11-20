#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

ll findSq(ll n){
	ll now = 1;
	now *= (n * (n + 1)) % MOD;
	now *= ((2 * n + 1) * (2022 / 6)) % MOD;
	return now % MOD;
}
ll genSm(ll n){
	return ((n * (n + 1)) % MOD) * (2022 / 2);
}

int main(){
    int t;
	cin >> t; 
	while(t--){
		ll n;
		cin >> n;
		
        ll ans = findSq(n) % MOD;

		ans += findSq(n - 1) % MOD;

		ans += genSm(n - 1) % MOD;

		cout << ans % MOD << endl;
	}	
	return 0;
}
