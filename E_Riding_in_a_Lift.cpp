#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int MOD = 1e9+7;


int add(int cur, int val) {
    cur += val;
    cur %= MOD;
    cur += MOD;
    return cur % MOD;
}


int main(){
    int n,a,b,k;
    cin>>n>>a>>b>>k;
    a-- , b--;

    vector<vector<int>> dp(k+1,vector<int>(n+1,0));
    dp[0][a] = 1;
    for(int i=0;i<k;i++) {
        vector<int> prefixSum(n+1);
        for(int j=0;j<n;j++) {
            if(j==b) continue;
            int diff = abs(j-b) - 1;
            int val = dp[i][j];
            int lo = max(0, j-diff);
            int hi = min(n, j+diff+1);
            prefixSum[lo] = add(prefixSum[lo], val);
            prefixSum[j] = add(prefixSum[j], -val);

            prefixSum[j+1] = add(prefixSum[j+1], val);
            prefixSum[hi] = add(prefixSum[hi], -val);
        }
        int sum = 0;
        for(int j=0;j<n;j++) {
            sum += prefixSum[j];
            sum %= MOD;
            dp[i+1][j] = sum;
        }
    }

    int res = 0;
    for(int i=0;i<n;i++) {
        res += dp[k][i];
        res %= MOD;
    }
    cout << res << "\n";
}