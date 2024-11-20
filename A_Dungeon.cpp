#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        
        ll total = a + b + c;
        
        if (total % 9 == 0) {
            ll required = total / 9;
            
            if (a >= required && b >= required && c >= required) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
