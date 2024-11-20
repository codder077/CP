#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
       ll n,x;
       string s;
       cin>>n;
       while(n--){
           cin>>s;
           bool zero=false;
           ll sum=0,even=0;
           for(ll i=0;i<s.size();i++){
               x=s[i]-'0';
               if(x==0) zero=true;
               if(x%2==0) even++;
               sum+=x;
           }
           
           if(sum%3==0 and even>1 and zero) cout<<"red"<<endl;
           else cout<<"cyan"<<endl;
       }
       
  return 0;
}