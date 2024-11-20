#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll ans = 0ull;
		int f = 1;

        for(int i = 0; i < n; ++i){
			ll ai;
			cin >> ai; 
			if((k | ai) <= k && f){
				ans |= ai; 
			}else f = 0;
		}
		f = 1;
		for(int i = 0; i < n; ++i){
			ll ai;
			cin >> ai; 
			if((k | ai) <= k && f){
				ans |= ai; 
			}else f = 0;
		}
		f = 1;
		for(int i = 0; i < n; ++i){
			ll ai;
			cin >> ai; 
			if((k | ai) <= k && f){
				ans |= ai; 
			}else f = 0;
		}
		if(ans == k) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
        
	}
	return 0;
}