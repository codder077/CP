#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll cal(ll x)
{
    if(x<10) return x;
    ll l=0,n=x;
    while(n) l=n%10,n/=10;
    return 9+x/10-((x%10)<l?1:0);
}

int main(){
   ll l,r;
    cin>>l>>r;
    cout<<cal(r)-cal(l-1)<<"\n";
    return 0;


}