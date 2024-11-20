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
            cin >>x;
            a.push_back(x);
        }

        ll xor_sum = accumulate(a.begin(),a.end(),0, bit_xor<int>());

        if(n%2==0){
            if(xor_sum==0){
                cout<<xor_sum<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            cout<<xor_sum<<endl;
        }
    }

    return 0;
}