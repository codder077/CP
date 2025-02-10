#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        int i=0,j=n-1;
        int cnt=0;
        while(i<j){
            if(a[i]+a[j]==k){
                cnt++;
                i++;
                j--;
            }
            else if(a[i]+a[j] < k){
                i++;
            }
            else{
                j--;
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}