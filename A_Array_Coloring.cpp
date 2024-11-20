#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
         ll n;
        cin >> n;

        ll sum = 0;
        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            ll curr = sum - arr[i];
            if ((arr[i] % 2 == 0 && curr % 2 == 0) || (arr[i] % 2 == 1 && curr % 2 == 1))
            {
                flag=true;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
}