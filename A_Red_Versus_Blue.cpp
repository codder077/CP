#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;
        string ans = "";

        int q = r / (b + 1);      
        int remainder = r % (b + 1); 

        for (int i = 0; i < b + 1; i++) {

            if (i < remainder) {
                ans += string(q + 1, 'R');
            } else { 
                ans += string(q, 'R');
            }
            if (i < b) {
                ans += 'B';
            }
        }

        cout << ans << endl;
    }
    return 0;
}
