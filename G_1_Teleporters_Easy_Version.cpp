#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, c;
		cin >> n >> c; 
		vector<ll> a(n);
		for(ll i = 0; i < n; ++i){
			cin >> a[i];
			a[i] += i + 1;
		}
		sort(a.begin(),a.end());
		int cnt = 0;
		for(ll i = 0; i < n; ++i) if(a[i] <= c){++cnt; c -= a[i];}
		cout << cnt << endl;
    }
}