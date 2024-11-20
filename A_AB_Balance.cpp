#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int ca = 0, cb = 0;
        int n = s.length();

        for(int i = 0; i < n - 1; i++){
            if(s.substr(i, 2) == "ab"){
                ca++;
            }
            else if(s.substr(i, 2) == "ba"){
                cb++;
            }
        }

        if(ca == cb){
            cout << s << endl;
        }
        else{
            if(s[0] == 'a') s[0] = 'b';
            else s[0] = 'a';

            cout << s << endl;
        }
    }
    return 0;
}
