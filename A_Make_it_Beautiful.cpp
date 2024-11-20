#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;

        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        swap(arr[0], arr[1]);
        swap(arr[n - 1], arr[0]);

        if (arr[0] == arr[1])
            cout << "NO"<<endl;
        else {
            cout << "YES"<<endl;
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}