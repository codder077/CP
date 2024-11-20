#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod =1e9+7;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;

        ll a=0,b=1;
		while(k){
			a=(a+(k&1)*b)%mod;
			k>>=1;
			b=(b*n)%mod;
		}
		cout<<a<<endl;

    }
}