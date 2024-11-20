#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        
        if (n >= k) {
            if (n % k == 0) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;  
            }
        } else {
            cout << (k + n - 1) / n << endl;
        }
    }

    return 0;
}
