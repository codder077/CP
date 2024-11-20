#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0;i<3;i++){
        if((i+1)!=n && (i+1)!=m){
            cout<<i+1<<" ";
        }
    }

    return 0;
}