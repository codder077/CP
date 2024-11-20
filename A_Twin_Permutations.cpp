#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a.push_back(x);
        }

        vector<int> b;
        for(int i=0;i<n;i++){
            int num=(n-a[i])+1;
            b.push_back(num);
        }

        for(int i=0;i<n;i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}