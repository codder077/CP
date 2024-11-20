#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int c0=0,c1=0;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c=='0'){
                c0++;
            }
            else{
                c1++;
            }
        }

        ll mini = min(c0,c1) * 2;
        ll num= mini/2;

        if(num%2==0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }
    return 0;
}