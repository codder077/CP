#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int i=0;
        ll cnt=0;
        while(i<n-1){
            if((a[i]%2==0 && a[i+1]%2==0) || (a[i]%2!=0 && a[i+1]%2!=0)){
                cnt++;
                a[i+1]=(a[i]*a[i+1]);
                i++;
            }
            else{
                i++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}