#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int  t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i = 0; i < n-1; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }

        ll sum= accumulate(a.begin(),a.end(),0);

        cout<< (-1)*(sum)<<endl;
        
    }
    return 0;
}