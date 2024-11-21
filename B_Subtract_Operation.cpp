#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>a(n);

        for(int i=0;i<n;i++) cin>>a[i];
        
        sort(a.begin(),a.end());
        bool f=true;

        for(int i=0;i<n-1;i++){
            auto it=binary_search(a.begin()+i+1,a.end(),a[i]+k);

            if(it){
                cout<<"YES"<<endl;
                f=false;
                break;
            }
        }
        if(f) cout<<"NO"<<endl;
    }
    return 0;
}