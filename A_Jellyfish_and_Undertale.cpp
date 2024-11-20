#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;

        ll arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        ll time =b;
        for(int i=0;i<n;i++){
            ll sum = min(arr[i],a-1);
            time += sum;
        }

        cout<<time<<endl;
    }
    return 0;
}