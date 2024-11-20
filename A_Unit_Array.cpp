#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,pos=0,neg=0;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
             if (x == -1)
                neg++;
            else
                pos++;
        }
        ll ans=0;
         while (!((pos - neg) >= 0 and neg % 2 == 0)){
                neg--;
                pos++;
                ans++;
            }

            cout << ans << endl;


    }
}
