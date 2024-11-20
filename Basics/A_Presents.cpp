#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    int a[n];
    map<int,int> mp;

    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i+1;
    }

    for(int i=0;i<n;i++){
        cout<<mp[i+1]<<" ";
    }

    return 0;


}