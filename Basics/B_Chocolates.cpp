#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long max_chocolates(int n, vector<int>& a) {
    long long total_chocolates = 0;

    int current_max = a[n - 1];
    total_chocolates += current_max;

    for (int i = n - 2; i >= 0; --i) {
        current_max = min(current_max - 1, a[i]);
        if (current_max < 0) {
            break;
        }
        total_chocolates += current_max;
    }

    return total_chocolates;
}

int main() {
    int n;
    cin >> n; 

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; 
    }

    cout << max_chocolates(n, a) << endl;

    return 0;
}
