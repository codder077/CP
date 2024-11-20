#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x, n; 
		cin >> x >> n; 
		ll ans;
		if(n % 4 == 0) ans = 0;
		if(n % 4 == 1) ans = -n;
		if(n % 4 == 2) ans = 1;
		if(n % 4 == 3) ans = n + 1;

		if(x % 2) ans = x - ans;
		else ans = x + ans;
		cout << ans << endl;
    }
    return 0;
}