#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
         
        long double coal,sticks,div,need;
        ll ans = 0;
        coal = sticks = div = 0;
        coal = y * k;
        sticks = coal + (k-1);
        div = ceil(sticks/(x-1));
        ans = div + k;
        cout<<ans<<endl;
    }
    return 0;
}