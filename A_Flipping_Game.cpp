#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    int initial_ones = 0;  
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) {
            initial_ones++;
        }
    }

    if (initial_ones == n) {
        cout << n - 1 << endl;
        return 0;
    }

    int max_gain = INT_MIN;
    int current_gain = 0;

    for (int i = 0; i < n; ++i) {
        int value = (a[i] == 1) ? -1 : 1;
        current_gain += value;

        if (current_gain > max_gain) {
            max_gain = current_gain;
        }

        if (current_gain < 0) {
            current_gain = 0;  
        }
    }

    cout << initial_ones + max_gain << endl;

    return 0;
}
