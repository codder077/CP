#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        unordered_map<int,int> mp;
        vector<ll> a;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            a.push_back(x);
            mp[x]++;
        }
        if(mp.size()==1){
            cout<<"Yes"<<endl;
        }
        if(mp.size()>2){
            cout<<"No"<<endl;
        }
        else{
            bool ab=false;
            int sum=0;
            for(auto it: mp){
                if(ab){
                    if( n%2==0 && sum==it.second ){
                        cout<<"Yes"<<endl;
                    }
                    else if(n%2!=0 && abs(sum-it.second)==1){
                        cout<<"Yes"<<endl;
                    }
                    else{
                        cout<<"No"<<endl;
                    }
                }
                else{
                    sum = it.second;
                    ab=true;
                }
            }
        }
       
    }

    return 0;
}