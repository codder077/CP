#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cntW = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') {
                cntW++;
            }
        }
        int mini = cntW;

        for (int i = k; i < n; i++) {
            if (s[i - k] == 'W') {
                cntW--;
            }
            if (s[i] == 'W') {
                cntW++;
            }
            mini = min(mini, cntW);
        }

        cout << mini << endl;
    }
    return 0;
}
