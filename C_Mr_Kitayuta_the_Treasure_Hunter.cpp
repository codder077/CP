#include<bits/stdc++.h>
using namespace std;
#define N 30110
#define ll long long

int dp[N][2000], gem[N], ans = 0;
int dfs(int curr, int l)
{
    if(dp[curr][l] != -1) return dp[curr][l];

    int x;
    dp[curr][l] = 0;

    int res = 0;
    for(int i = -1; i <= 1; i++)
    {
        x = curr + l + i;
        if(x <= 30001 && x > curr)
            res = max(res, dfs(x, l + i));
    }

    dp[curr][l] = res + gem[curr];
    ans = max(ans, dp[curr][l]);

    return dp[curr][l];
}

int main(){
    int n,d,i,m;
    cin>>n>>d;

     memset(gem, 0, sizeof(gem));
    for(i = 0; i < n; i++)
    {
        cin>>m;
        gem[m]++;
    }

    for(i = 0; i < N; i++)
        fill(dp[i], dp[i] + 2000, -1);

    dfs(d, d);

    cout<<ans<<endl;

    return 0;

}