#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int total=n*m;
        if(total%2==0){
            cout<<total/2<<endl;
        }
        else{
            cout<<(total+1)/2<<endl;
        }
    }

    return 0;
}