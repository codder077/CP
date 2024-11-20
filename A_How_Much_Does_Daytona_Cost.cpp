#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        bool flag=false;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]==k){
                flag=true;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    } 
    return 0;
}