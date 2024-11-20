#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll inf = 1e9+7; 
int main() {
    int i, j;
    int n;
    string s;

    string vit[] = {"A", "B", "C", "AB", "AC", "BC", "ABC"};
    ll c[7]; 
    
    fill(c, c + 7, inf); 
    cin >> n; 
    for (i = 0; i < n; i++) {
        ll k;   
        cin >> k >> s;  
        sort(s.begin(), s.end());  
        
        for (j = 0; j < 7; j++) {
            if (s == vit[j]) {
                c[j] = min(c[j], k);  
            }
        }
    }

    ll ans = c[6]; 

    ans = min(ans, c[0] + c[1] + c[2]);  
    ans = min(ans, c[3] + c[4]);  
    ans = min(ans, c[3] + c[5]);  
    ans = min(ans, c[4] + c[5]); 
    ans = min(ans, c[0] + c[5]);
    ans = min(ans, c[1] + c[4]);  
    ans = min(ans, c[2] + c[3]);  

    if (ans >= inf)
        cout << -1 << endl;
    else
        cout << ans << endl;  

    return 0;
}
