#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef unsigned long long ull;
ull rangesum(ll L, ll R) { return ((L + R) * (abs(R - L) + 1)) / 2; }
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,x,y,c;
        cin >> n >> x >> y;
        if(gcd(x,y)==1){
            c=n/(x*y);
        }
        else{
            c=n/lcm(x,y);
        }
        ll a,b;
        a=(n/x)-c;
        b=(n/y)-c;
        b=b*(b+1)/2;
        if(a>0){
            a=rangesum(n-a+1,n);
            cout<<a-b<<endl;
        }
        else{
            a=abs(a);
            a=a*(a+1)/2;
            cout<<-a-b<<endl;
        }
    }
    return 0;
}