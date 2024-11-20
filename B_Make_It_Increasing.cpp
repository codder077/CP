#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }

        if (n == 1) {
            cout << "0" <<endl;
        }
        else{
        ll ops = 0;
        for (ll i = n - 2; i >= 0; --i){
            while (a[i] >= a[i + 1] && a[i] != 0){
             a[i] /= 2, ++ops;
            }
        }
            
                
        for (ll i = n - 2; i >= 0; --i){
            if (a[i] >= a[i + 1]){
                ops =-1;
                break;
            }
        }
            
        cout << ops << endl;
        }
    }
}