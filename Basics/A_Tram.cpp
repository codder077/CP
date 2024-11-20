#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][2];

    int maxi=INT_MIN;
    int curr=0;

    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
        curr=curr+(arr[i][1]-arr[i][0]);

        if(curr>maxi){
            maxi=curr;
        }
    }
    if(curr>maxi){
        maxi=curr;
    }

    cout<<maxi<<endl;

    return 0;
}