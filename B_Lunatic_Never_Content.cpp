#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a ,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            a.push_back(x);
        }

        ll res=0;
		for(int i = 0; i < n; ++i){
			res = gcd(res, abs(a[i] - a[n - 1 - i]));
		}
		cout << res << endl;
    }
}