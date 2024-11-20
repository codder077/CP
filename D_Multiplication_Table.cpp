#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m, k;
   cin>>n>>m>>k;
 
   ll low = 1, high = n * m, ans = 0;
   while(low <= high)
   {
        ll mid = (low + high) / 2;
        ll pos = 0;
        for(int i = 1; i<=n; i++)
        {
            pos += min((mid - 1) / i, m);
        }
        if(pos < k)
        {
            low = mid + 1;
            ans = mid;
        }
        else
        {
            high = mid - 1;
        }
   }
 
   cout<<ans<<endl;
}