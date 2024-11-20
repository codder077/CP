#include <iostream>
#include <string>
using namespace std;

int main() {
    string tableCard;
    cin >> tableCard;
    
    string handCards[5];
    for (int i = 0; i < 5; ++i) {
        cin >> handCards[i];
    }
    
    char tableRank = tableCard[0];
    char tableSuit = tableCard[1];
    
    // Check each card in hand
    for (int i = 0; i < 5; ++i) {
        char handRank = handCards[i][0];
        char handSuit = handCards[i][1];
        
        if (handRank == tableRank || handSuit == tableSuit) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}
