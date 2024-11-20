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
        int cnt=0;
        bool cur=false;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x);
            if(x){
                cur = 1;
            }
            else if(cur){
                ++cnt;
                cur = 0;
            }
        }

        cnt += cur;
        cnt = (cnt < 2) ? cnt : 2;

        cout<<cnt<<endl;

    }

    return 0;
}