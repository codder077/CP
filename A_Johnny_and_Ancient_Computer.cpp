#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(ll a, ll b) {
    if (a < b) swap(a, b); 

    if (a % b != 0) return -1;

    int moves = 0;
    ll ratio = a / b;
    while (ratio % 8 == 0) {
        ratio /= 8;
        moves++;
    }
    while (ratio % 4 == 0) {
        ratio /= 4;
        moves++;
    }
    while (ratio % 2 == 0) {
        ratio /= 2;
        moves++;
    }
    if (ratio != 1) return -1;
    return moves;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    return 0;
}
