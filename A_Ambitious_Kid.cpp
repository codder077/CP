#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    ll a[n];
    ll steps=INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        steps=min(steps, abs(a[i]-0));
    }

    cout<<steps<<endl;

    return 0;

}