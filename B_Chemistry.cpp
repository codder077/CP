#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    const int B = 26;

    long t;
    cin >> t;
    while (t--) {
        long n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        array<int, B> freq = {0};
        for (char ch : s) {
            ++freq[ch - 'a'];
        }

        long oddCount = 0;
        for (int count : freq) {
            oddCount += count % 2;
        }

        if (oddCount <= k + 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
