#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> cows(n, vector<int>(m));
    vector<pair<int, int>> firstCards(n); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> cows[i][j];
        }
        sort(cows[i].begin(), cows[i].end());
        firstCards[i] = {cows[i][0], i}; // Store (smallest card, cow index)
    }

    sort(firstCards.begin(), firstCards.end()); 

    vector<int> order;
    for (int i = 0; i < n; i++) 
        order.push_back(firstCards[i].second);

    vector<int> top(n, 0);
    int pile = -1;
    
    for (int round = 0; round < m; round++) {
        for (int i = 0; i < n; i++) {
            int cow = order[i];
            
            while (top[cow] < m && cows[cow][top[cow]] <= pile) 
                top[cow]++;

            if (top[cow] >= m) {
                cout << -1 << endl;
                return;
            }

            pile = cows[cow][top[cow]++];
        }
    }

    for (int i = 0; i < n; i++) cout << order[i] + 1 << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
