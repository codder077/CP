#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        sort(c.begin(), c.end());
        
        if (c[0] != 1) { 
            cout << "NO" << endl;
            continue;
        }
        
        ll sum = 1; 
        bool valid = true;
        
        for (int i = 1; i < n; i++) {
            if (c[i] > sum) {
                valid = false;
                break;
            }
            sum += c[i]; 
        }
        
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}
