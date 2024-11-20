#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,n;
        cin>>h>>n;

        vector<int> a,b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        ll sum=accumulate(a.begin(),a.end(),0);
        if(sum>=h){
            cout<<1<<endl;
        }
        else{
            
        }
    }
}