#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    string s;
    cin>>s;

    ll n=s.size(),cnt=0;

    ll res=n/2;

    if(n%2==0){
        cout<<res;
        return 0;
    }
    for(auto c:s) if(c=='1') cnt++;
    
    res+=(cnt>1);
    cout<<res;

    return 0;
}