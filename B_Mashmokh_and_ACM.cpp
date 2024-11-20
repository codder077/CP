#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
ll int dp[2001][2001];

int main(){
    ll n,k,i,j,sum=0,l;
    cin>>n>>k;

    for( i=0;i<=k;i++)
		for( j=1;j<=n;j++)
			dp[i][j]=0;
	for(i=0;i<=n;i++)
		dp[1][i]=1;
	for(i=2;i<=k;i++)
		for(j=1;j<=n;j++)
			for(l=j;l<=n;l+=j)
				dp[i][l]=(dp[i][l]+dp[i-1][j])%mod;
			
	for(i=1;i<=n;i++)
	{
		sum=(sum+dp[k][i])%mod;
	}
	cout<<sum%mod<<endl;
	return 0;


}