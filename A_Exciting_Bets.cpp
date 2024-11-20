#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin>>a>>b;
         ll diff = (a >= b) ? (a - b) : (b - a);
        if(a > b){
        cout<<diff<<" "<<min(diff - (a % diff), b % diff)<<endl;
        }
        else if(b > a){
        cout<<diff<<" "<<min(diff - (b % diff), a % diff)<<endl;
        }
        else{
        cout<<0<<" "<<0<<endl;
        }
    }
}