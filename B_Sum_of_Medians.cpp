#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll total_elements = n * k;
        vector<ll> a(total_elements);
        
        for (ll i = 0; i < total_elements; i++) {
            cin >> a[i];
        }
        ll div=n/2,sum=0,j=0;
        
        for(ll i=total_elements-1-div; i>=0; i-=div+1){
            sum += a[i];
            j++;
            if(j == k)break;
        }
        cout<<sum<<endl;
    }
    return 0;
}
