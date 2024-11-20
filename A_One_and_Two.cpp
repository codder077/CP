#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int prefix[n], suffix[n];
        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 2){
                count++;
            }
            prefix[i] = count;
        }
        count = 0;
        for(int i = n-1; i >= 0; i--){
            if(arr[i] == 2){
                count++;
            }
            suffix[i] = count;
        }
        int ans = -1;
        for(int i = 0; i < n-1; i++){
            if(prefix[i] == suffix[i+1]){
                ans = i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}