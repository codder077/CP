#include <bits/stdc++.h>
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

        int st = 0, l = n - 1;
        bool isValid = true;

        while(st < l){
            char c = s[st];
            char e = s[l];
            if((int(c) == int(e)) || (abs(int(c) - int(e)) == 2)){
                st++;
                l--;
            }
            else{
                isValid = false;
                break;
            }
        }

        if(isValid){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
