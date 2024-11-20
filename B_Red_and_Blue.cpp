#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> r(n);
        for (int i = 0; i < n; i++) {
            cin >> r[i];
        }

        int m;
        cin >> m;
        vector<int> b(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        int red_max = 0, red_sum = 0;
        for (int i = 0; i < n; i++) {
            red_sum += r[i];
            red_max = max(red_max, red_sum);
        }

        int blue_max = 0, blue_sum = 0;
        for (int i = 0; i < m; i++) {
            blue_sum += b[i];
            blue_max = max(blue_max, blue_sum);
        }

        cout << red_max + blue_max << endl;
    }
    return 0;
}
