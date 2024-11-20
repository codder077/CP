#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k;
	cin>>n>>k;
	if (k==1) cout<<n;
	else {
        
		ll x=1;
		while (x<=n) x<<=1;
		cout<<x-1;
	}
    return 0;

}