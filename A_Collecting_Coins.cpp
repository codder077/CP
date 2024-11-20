#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int total = a + b + c + n;

        if(total % 3 != 0) {
            cout << "NO" << endl;
        } else {
            int num = total / 3;
            if(a > num || b > num || c > num) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
