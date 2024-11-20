#include<bits/stdc++.h>
using namespace std;
#define ll long long
template<typename type> type Round(type a, type b) {if(a < b) return 1; if(a % b) return 1 + a / b; return a / b;}

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int ev=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                ev++;
            }

        }
        
       int ans = INT_MAX;
		for(int i = 0; i < n; ++i){
			ans = min(ans, Round(a[i], k) * k - a[i]);
		}
		if(k == 4){
			if(ev >= 2) ans = 0;
			else if(ev == 1) ans = min(ans, 1);
			else ans = min(ans, 2);
		}
		cout << ans << endl;
    }
    return 0;
}