#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        unordered_set<long long> elements;
        bool hasDuplicate = false;

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            if (elements.count(b[i])) {
                hasDuplicate = true;
            }
            elements.insert(b[i]);
        }

        if (hasDuplicate) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
