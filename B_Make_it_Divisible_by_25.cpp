#include <bits/stdc++.h>
using namespace std;
#define ll long long

int min_deletions(string s, char first, char second) {
    int n = s.size();
    int pos_second = -1, pos_first = -1;

    for (int i = n - 1; i >= 0; --i) {
        if (pos_second == -1 && s[i] == second) {
            pos_second = i;
        }
        else if (pos_second != -1 && s[i] == first) {
            pos_first = i;
            break;
        }
    }

    if (pos_first != -1 && pos_second != -1) {
        return (n - pos_second - 1) + (pos_second - pos_first - 1);
    }
    return INT_MAX; 
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int deletions = min({
            min_deletions(s, '0', '0'),
            min_deletions(s, '2', '5'),
            min_deletions(s, '5', '0'),
            min_deletions(s, '7', '5')
        });

        cout << deletions << endl;
    }
    return 0;
}
