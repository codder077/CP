#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<int> a(n);
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        if(a[0] == a[n-1]){ 
            cout << -1 << endl;
        } else {
            int i = 1;
            while(i < n && a[i] == a[0]) {
                i++;
            }

            cout << i << " " << n - i << endl;

            for(int j = 0; j < i; j++){
                cout << a[j] << " ";
            }
            cout << endl;

            for(int j = i; j < n; j++){
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
