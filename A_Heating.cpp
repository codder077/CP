#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,x,y;
       cin>>n;
       while(n--){
           cin>>x>>y;
          if(x>=y) cout<<y<<endl;
          else{
              ll t=y/x;
              ll res=0;
              ll extra=y%x;
              if(extra==0) res=x*t*t;
              else res=(t*t*(x-extra))+extra*(t+1)*(t+1);
              cout<<res<<endl;
          }
       }
       
  return 0;
}