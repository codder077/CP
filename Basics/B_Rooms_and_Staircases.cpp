#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string a;
        cin>>n>>a;
        int ans=n;
        for(int i=1;i<=n;i++){
            if(a[i-1]=='1')
                ans=max(ans, max(2*i, 2*(n-i+1)));
        }
        cout<<ans<<endl;
    }

    return 0;
}