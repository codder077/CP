#include <bits/stdc++.h>
using namespace std;

int logN = 0; // Variable to store the logarithm value
vector<int> v; // Vector to store input values

// Function to count based on given conditions
inline int count(int i, int T, int last_pos, int next_pos) {
    // Check for out-of-bounds conditions
    if (i > logN || i < 0 || i >= (int)v.size()) return 0;
    if (v[i] < T) return 0; // Check if the value is less than T
    if (last_pos == 0 && next_pos == (int)v.size() - 1) return 1; // Base case
    
    // Recursive calls for the count function
    return count(last_pos, T + 1, last_pos + 1, next_pos) +
           count(next_pos, T + 1, last_pos, next_pos + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; // Number of test cases
    cin >> t;

    while (t-- > 0) {
        int n; // Size of the array
        cin >> n;

        // Calculate logN based on the input size
        logN = 10 + log2(n);

        // Initialize the vector with size n
        v = vector<int>(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i]; // Read values into the vector
        }

        int ans = 0; // Variable to store the answer
        for (int i = 0; i < logN; i++) {
            // Check the count for each log level
            if (count(i, 1, i, i)) ans++;
        }

        cout << ans << endl; // Output the answer for the test case
    }
    
    return 0; // Successful termination
}
