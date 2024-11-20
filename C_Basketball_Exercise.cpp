#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin >> n;

    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        b.push_back(x);
    }

     int i, j, k;

    ll dp[n][3];

    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = 0;

    for(i = 1; i < n; i++)
    {
        dp[i][2] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i];
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i];
    }

    cout<< (max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]))) <<endl;

    return 0;


}