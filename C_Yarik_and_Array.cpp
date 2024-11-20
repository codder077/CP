#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        long long temp = 0, sum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (temp <= 0 || (i && ((abs(a[i]) % 2 == 0 && abs(a[i - 1]) % 2 == 0) || (abs(a[i]) % 2 == 1 && abs(a[i - 1]) % 2 == 1))))
            {
                temp = 0;
            }
            temp += a[i];
            sum = max(sum, temp);
        }
        cout << sum << endl;
    }
}