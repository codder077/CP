#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isDecreasing(vector<ll>& a){
    for(int i = 1; i < a.size(); i++){
        if(a[i] < a[i-1]) return false;
    }
        return true;
}

bool isIncreasing(vector<ll>& a){
    for(int i = 1; i < a.size(); i++){
        if(a[i] > a[i-1]) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        if(a[n-2]<=a[n-1]&&a[n-1]>=0){
			cout<<n-2<<endl;
			for(int i=0;i<n-2;i++){
                cout<<i+1 <<" "<<n-1 <<" "<<n;
                cout<<endl;
            }
		}
        
        else if(isDecreasing(a)) cout<<"0"<<endl;
		
        else cout<<"-1"<<endl;


    }
}