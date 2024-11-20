#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a;
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end(),greater<int>());

        for(auto it : a){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}