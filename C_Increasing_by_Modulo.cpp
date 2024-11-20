#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll r,l=0;
    int i;
    for(r=m; l<r; ) 
	{
		int mid=(l+r)/2, last=0;
		for(i=0; i<n; ++i) 
		{
			if(a[i]<=last && a[i]+mid>=last || a[i]+mid-m>=last) continue;
			if(a[i]<last) break;
			last=a[i];
		}
		if(i==n) r=mid; 
		else l=mid+1;
	}
    cout << l;

    return 0;
    
}