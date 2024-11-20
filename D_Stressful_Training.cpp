#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<long long,long long>
#define fi first
#define se second

const int MAXN=2e5+5;
stack<ii> st[MAXN];
ll A[MAXN],B[MAXN],cnt[MAXN];

int main(){
    ll n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>A[i];
    for(int i=1;i<=n;i++) cin>>B[i];
    long long l=0,r=2e12,ans=-1;
    while(l<=r)
    {
    	ll mid=(l+r)/2,rt=0,rr=0,sum=0;
    	bool ck=true;
    	for(int i=1;i<=n;i++) if(A[i]/B[i]<k) st[A[i]/B[i]].push({A[i],B[i]}),cnt[A[i]/B[i]]++;
    	for(int i=1;i<k;i++)
    	{
    		while(rt<k&&st[rt].empty()) rt++;
    		while(rr<k&&sum<2) sum+=cnt[rr++];
    		if(rt>=k) break;
    		ii a=st[rt].top();
    		st[rt].pop(),cnt[rt]--;
    		if((sum>=2&&rr<=i)||(a.fi+mid)/a.se<i)
    		{
    			ck=false;
    			break;
			}
			if((a.fi+mid)/a.se<k) st[(a.fi+mid)/a.se].push({a.fi+mid,a.se}),cnt[(a.fi+mid)/a.se]++,sum+=(a.fi+mid)/a.se<rr;
			sum--;
		}
		for(int i=0;i<=k;i++)
		{
			while(!st[i].empty()) st[i].pop();
			cnt[i]=0;
		}
		if(ck) r=mid-1,ans=mid;
		else l=mid+1;
	}
	cout<<ans;

    return 0;
}