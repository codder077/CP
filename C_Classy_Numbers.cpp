#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

long long dp[20][2][4];

long long count_classy_digits(string &num, int pos, int is_tight, int non_zero_count) {
    if (pos == num.size()) return non_zero_count <= 3 ? 1 : 0; 
    if (non_zero_count > 3) return 0;  
    if (dp[pos][is_tight][non_zero_count] != -1) return dp[pos][is_tight][non_zero_count];
    
    int limit = is_tight ? (num[pos] - '0') : 9; 
    long long result = 0;

    for (int digit = 0; digit <= limit; digit++) {
        int new_is_tight = is_tight && (digit == limit);  
        int new_non_zero_count = non_zero_count + (digit != 0);
        result += count_classy_digits(num, pos + 1, new_is_tight, new_non_zero_count);
    }

    dp[pos][is_tight][non_zero_count] = result;
    return result;
}

long long count_classy(long long x) {
    if (x == 0) return 0;
    string num = to_string(x);
    memset(dp, -1, sizeof(dp));
    return count_classy_digits(num, 0, 1, 0);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long L, R;
        cin >> L >> R;

        if((L==1) || (R==1)){

            cout << count_classy(R) - count_classy(L - 1) - 1 << endl;
        }

        else{
            cout << count_classy(R) - count_classy(L - 1)<< endl;
        }
    }
    return 0;
}
