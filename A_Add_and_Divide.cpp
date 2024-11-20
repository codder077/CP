#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll top = 100000, n, m;
	cin >> n >> m;
	ll x = n, y = m;
	if(m > n){ 
        cout << 1 << endl; 
        return; 
    }
	for (ll i = 30; i > -1; i--) {
		x = n;
		ll total = 0;
		while (x != 0) { 
            total++; 
            x /= m + i; 
            if (m + i == 1) { 
                cout << top  << endl;
                 return; 
            } 
        }
		top = min(i + total, top);
	}
	cout << top << endl; return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}