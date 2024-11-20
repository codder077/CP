#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;

    for(int i=0;i<n-1;i++){
        if (s[i+1] < s[i]) {
            cout << "YES\n";
            cout << i+1 << ' ' << i+2 << endl;
            return 0;
        }
    } 
    cout << "NO"<<endl;
    return 0;
}