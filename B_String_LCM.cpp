#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        string s,y;
        cin>>s>>y;

        int n=s.length();
        int m=y.length();

       ll lcm=(n*m)/__gcd(n,m);
       string r1="",r2="";
       for(int i=0;i<lcm/n;i++) r1+=s;
       for(int i=0;i<lcm/m;i++) r2+=y;
       if(r1==r2) cout<<r1<<endl;
       else cout<<-1<<endl;
    }

    return 0;
}