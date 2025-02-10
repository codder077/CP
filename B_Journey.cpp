#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,a,b,c;
        cin >> n >> a >> b >> c;

        ll sum=(a+b+c);

        ll num=n/sum;
        ll rem=n%sum;
        ll cnt=0;
        if(rem==0){
            cnt=0;
        }
        else if(a>=rem){
            cnt=1;
        }
        else if((a+b)>=rem){
            cnt=2;
        }
        else{
            cnt=3;
        }


        cout<<(cnt+(num)*3)<<endl;
    }
    return 0;
}