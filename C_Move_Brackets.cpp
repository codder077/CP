#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string seq;
        cin >> n >> seq;
        
        int balance = 0;
        int min_balance = 0;
        
        for (char c : seq) {
            if (c == '(') {
                balance++;
            } else {
                balance--;
            }
            min_balance = min(min_balance, balance);
        }

        int moves = -min_balance;
        cout << moves << endl;
    }
    return 0;
}
