#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;  
        vector<int> s(n + 1);  
        vector<int> dp(n + 1, 1); 

        for (int i = 1; i <= n; i++) {
            cin >> s[i];  
        }

        int maxModels = 1; 

        for (int i = 1; i <= n; i++) {
            for (int j = i * 2; j <= n; j += i) {  
                if (s[j] > s[i]) { 
                    dp[j] = max(dp[j], dp[i] + 1);  
                }
            }
            maxModels = max(maxModels, dp[i]);  
        }

        cout << maxModels << endl;
    }
    return 0;
}
