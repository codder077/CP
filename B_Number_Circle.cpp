#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   sort(arr,arr+n);
   if(arr[n-2]+arr[n-3]<=arr[n-1]) cout<<"NO"<<endl;
   else{
       cout<<"YES"<<endl;
       cout<<arr[n-1]<<" ";
       for(int i=n-3;i>=0;i--) cout<<arr[i]<<" ";
       cout<<arr[n-2]<<endl;
   }
 
    return 0;
}