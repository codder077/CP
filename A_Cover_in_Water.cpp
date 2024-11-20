#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                int cnt = 0;
                while(i < n && s[i] == '.') {
                    cnt++;
                    i++;
                }
                if (cnt > 2) {
                    ans = 2;
                    break;
                } else {
                    ans += cnt;
                }
                i--;
            }
        }
        cout << ans << '\n';

        
    }
}