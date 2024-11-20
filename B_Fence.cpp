#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }


    int sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += a[i];
    }

    int min_sum = sum;
    int min_index = 0;

    for (int i = 1; i <= n - k; ++i) {
        sum = sum - a[i - 1] + a[i + k - 1]; 
        if (sum < min_sum) {
            min_sum = sum;
            min_index = i;
        }
    }

    cout << min_index + 1 << endl;  

    return 0;
}
