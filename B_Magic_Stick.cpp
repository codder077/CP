#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        if(x==1&&y>1) cout<<"NO"<<endl;
        else if(x<=3 && y>3)  cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}