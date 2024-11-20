#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int i = b, j = c, k = c;
        
        if ((i + j > k) && (i + k > j) && (j + k > i)) {
            cout << i << " " << j << " " << k << endl;
        } else {
            cout << -1 << endl;  
        }
    }

    return 0;
}
