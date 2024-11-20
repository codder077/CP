#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate the modular inverse using Fermat's Little Theorem
long long mod_inverse(long long x, long long mod) {
    long long res = 1;
    long long exp = mod - 2;
    while (exp) {
        if (exp % 2 == 1) {
            res = (res * x) % mod;
        }
        x = (x * x) % mod;
        exp /= 2;
    }
    return res;
}

void solve() {
    int t;
    cin >> t; // Number of test cases

    long long inv2 = mod_inverse(2, MOD);  // Modular inverse of 2

    while (t--) {
        int n;
        cin >> n; // Number of elements in the array
        vector<long long> a(n);
        
        long long total_sum = 0;
        long long sum_of_squares = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_sum = (total_sum + a[i]) % MOD;
            sum_of_squares = (sum_of_squares + (a[i] * a[i]) % MOD) % MOD;
        }

        // Sum of products
        long long sum_of_products = (total_sum * total_sum % MOD - sum_of_squares + MOD) % MOD;

        // P = sum_of_products
        long long P = sum_of_products;

        // Q = n * (n - 1) * inv2 % MOD
        long long Q = (n * (n - 1) % MOD) * inv2 % MOD;

        // Calculate Q^-1 % MOD
        long long Q_inv = mod_inverse(Q, MOD);

        // Result = P * Q^-1 % MOD
        long long result = (P * Q_inv) % MOD;

        // Output the result for this test case
        cout << result << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve(); // Call the solve function

    return 0;
}
