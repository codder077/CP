#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a, b;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            b.push_back(x);
        }

        set<int> s;
        for (int i = 0; i < a.size(); i++) {
            s.insert(a[i]);
        }
        for (int i = 0; i < b.size(); i++) {
            s.insert(b[i]);
        }

        unordered_map<int, int> mp1, mp2;
        
        for (int i = 0; i < a.size();) {
            int num = a[i];
            int cnt = 0;
            while (i < n && a[i] == num) {
                cnt++;
                i++;
            }
            mp1[num] = max(mp1[num], cnt);
        }

        for (int i = 0; i < b.size();) {
            int num = b[i];
            int cnt = 0;
            while (i < n && b[i] == num) {
                cnt++;
                i++;
            }
            mp2[num] = max(mp2[num], cnt);
        }
        
        int maxi = 0;
        for (auto it : s) {
            maxi = max(maxi, mp1[it] + mp2[it]);
        }

        cout << maxi << endl;
    }
    return 0;
}
