#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        int max_jokers_winner = min(m, n / k);
        
        int remaining_jokers = m - max_jokers_winner;
        
        int max_jokers_other = (remaining_jokers + (k - 1) - 1) / (k - 1); 
        
        cout << max_jokers_winner - max_jokers_other << endl;
    }

    return 0;
}
