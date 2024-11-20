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
        bool res=false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(a[i],a[j])<=2){
                    res=true;
                    break;
                }
            }
            if(res){
                break;
            }
        }

        if(res){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

    return 0;
}