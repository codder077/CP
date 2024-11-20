#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int neg = 0,sum = 0, Min = 200;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
                if(a[i][j] < 0){
                    neg++;
                }
                sum += abs(a[i][j]);
                Min = min(Min,abs(a[i][j]));
            }
        }
        if(neg & 1){
            cout<<sum-(2 * Min)<<endl;
        }
        else{
            cout<<sum<<endl;
        }
    }
    return 0;
}