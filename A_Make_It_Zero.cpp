#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];

        if (n % 2) {
        cout << "4" << endl;
        cout << "2 " << n << endl;
        cout << "2 " << n << endl;
        cout << "1 2" << endl;
        cout << "1 2" << endl;
        } else {
            cout << "2" << endl;
            cout << "1 " << n << endl;
            cout << "1 " << n << endl;
        }
    }

    return 0;
}