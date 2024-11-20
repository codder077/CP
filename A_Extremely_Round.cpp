#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        n--;
        ll ans = n*9;
        int num=s[0]-'0';
        ans+=num;
        cout<<ans<<endl;
    }

    return 0;
}