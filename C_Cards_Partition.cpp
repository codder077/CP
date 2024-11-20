#include <bits/stdc++.h>
#define int long long
#define all(a) a.begin(), a.end()
using namespace std;

void solve() {
    int n, k; 
    cin >> n >> k;
    vector<int> cardCounts(n); 
    
    for (auto &count : cardCounts) {
        cin >> count;
    }

    int maxCards = LLONG_MIN; 
    for (auto count : cardCounts) {
        maxCards = max(maxCards, count);
    }

    int totalCards = accumulate(all(cardCounts), 0LL);

    for (int deckSize = n; deckSize > 0; deckSize--) {
        int possibleDecks = (totalCards + k) / deckSize;

        if (possibleDecks * deckSize <= totalCards - 1)
            continue;
        if (possibleDecks <= maxCards - 1)
            continue;

        cout << deckSize << endl;
        return;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int testCases; 
    cin >> testCases;

    while (testCases--) {
        solve();
    }
    return 0;
}
