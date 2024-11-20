#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        unordered_map<string ,int> mp;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                mp["even"]++;
            }
            else{
                mp["odd"]++;
            }
        }

        if(n%2==0){
            if(mp["even"]>0 && mp["odd"]>0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(mp["odd"]>0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}