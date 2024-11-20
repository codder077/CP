#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll x,k;
        cin >> x >> k;

        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<x-1<<" "<<1 <<endl;
        }
    }
}