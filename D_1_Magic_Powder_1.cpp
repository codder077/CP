#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin >> n >> k;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];


    ll low=0,high=2001;
    while(low<=high){
        ll mid = low+(high-low)/2;

        ll zero=0,req=0;
        for(int i=0;i<n;i++){
            req+=max(a[i]*mid-b[i],zero);
        }

        if(req<=k) low=mid+1;
        else high=mid-1;
    }

    cout<<high<<endl;

    return 0;


}