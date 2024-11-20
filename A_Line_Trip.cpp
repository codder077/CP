#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a;
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            a.push_back(y);
        }
        int maxi=2 * abs(x-a[n-1]);

        for(int i=0;i<n;i++){
            int diff=0;
            if(i==0){
                diff=a[i]-0;
            }
            else{
                diff=abs(a[i]-a[i-1]);
            }

            maxi=max(maxi,diff);
        }

        cout<<maxi<<endl;
    }
}