#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n), t(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    // Calculate the initial theorems Mishka writes while awake
    int awake_theorems = 0;
    for (int i = 0; i < n; ++i) {
        if (t[i] == 1) {
            awake_theorems += a[i]; // Add theorems when Mishka is already awake
            a[i] = 0;  // Mark theorems Mishka wrote down so we don't double-count them
        }
    }

    // Now calculate the maximum additional theorems we can get by using the technique
    int additional_theorems = 0, max_additional_theorems = 0;

    // Initial window of size k
    for (int i = 0; i < k; ++i) {
        additional_theorems += a[i]; // Sum the theorems for the first 'k' minutes
    }
    max_additional_theorems = additional_theorems;

    // Slide the window across the rest of the lecture
    for (int i = k; i < n; ++i) {
        additional_theorems += a[i] - a[i - k]; // Slide the window: add current minute, remove previous
        max_additional_theorems = max(max_additional_theorems, additional_theorems);
    }

    // The result is the sum of theorems Mishka writes while awake + the best we can do with the technique
    cout << awake_theorems + max_additional_theorems << endl;

    return 0;
}
