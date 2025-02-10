#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> a(m),q(k);
        map<int,int> mp;
        for(int i = 0; i < m; i++){
            cin>>a[i];
        }
        for(int i = 0; i < k; i++){
            cin>>q[i];
            mp[q[i]]=1;
        }
        string ans="";
        if(k==n){
            for(int i=0;i<m;i++){
                ans+="1";
            }
        }
        else if(k!=n-1){
            for(int i=0;i<m;i++){
                ans+="0";
            }
        }
        else{
            for(int i=0;i<m;i++){
                if(mp[a[i]]!=1){
                    ans+="1";
                }
                else{
                    ans+="0";
                }
            }

        }

        cout<<ans<<endl;
    }
    return 0;
}