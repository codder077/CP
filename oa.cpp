#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, amount + 1); 
    dp[0] = 0; 


    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (i - coin >= 0) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return dp[amount] > amount ? -1 : dp[amount];
}

int main() {
    vector<int> coins = {1, 2, 5}; 
    int amount = 11;               
    int result = coinChange(coins, amount);

    if (result == -1) {
        cout << "Amount cannot be made up with the given coins." << endl;
    } else {
        cout << "The minimum number of coins required: " << result << endl;
    }

    return 0;
}
