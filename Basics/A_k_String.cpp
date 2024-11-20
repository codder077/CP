#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;  
    cin >> m;
    string s;
    cin >> s;

    unordered_map<char, int> mp;
    for (char c : s) {
        mp[c]++; 
    }

    string pattern = "";
    
    for (auto it : mp) {
        if (it.second % m != 0) {
            cout << -1 << endl;  
            return 0;
        }
        pattern += string(it.second / m, it.first);  
    }

    string ans = "";
    for (int i = 0; i < m; i++) {
        ans += pattern;
    }

    cout << ans << endl;
    return 0;
}
