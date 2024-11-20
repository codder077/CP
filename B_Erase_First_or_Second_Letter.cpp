#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> se;
        ll cnt=0;
        for(int i=0;i<n;i++){
            se.insert(s[i]);
            cnt+=se.size();
        }
        cout<<cnt<<endl;
    }
    return 0;
}