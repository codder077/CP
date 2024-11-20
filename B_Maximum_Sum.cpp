#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        ll maxi=0;

        ll sum = 0;
        ll b[n];
        for(int i=0; i<n; i++) 
        {
            sum += a[i];
            b[i+1] = b[i]+a[i];
        }
        for(int i=0; i<=k; i++) 
        {
            maxi = max(maxi, b[n-i]-b[2*(k-i)]);
        }
        cout<<maxi<<endl;

    }
    return 0;
}