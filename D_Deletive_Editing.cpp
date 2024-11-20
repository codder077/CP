#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string end;
        cin >> end;

        int n = end.length();
        string ans;
        unordered_map<int,int> mp;

        for(int i = 0; i < n; i++) {
            int x = end[i] - 'A';
            mp[x]++;
        }

        for(int i = s.size() - 1; i >= 0; i--) {
            int x = s[i] - 'A';
            if(mp[x]) {
                ans += s[i];
                mp[x]--;  
            }
        }

        reverse(ans.begin(), ans.end());

        if(ans == end) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
