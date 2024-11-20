#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_score(int n, vector<int>& arr) {
    int max_value_even = 0, max_value_odd = 0;
    int count_even = 0, count_odd = 0;

    for (int i = 0; i < n; i += 2) {
        count_even++;
        max_value_even = max(max_value_even, arr[i]);
    }

    for (int i = 1; i < n; i += 2) {
        count_odd++;
        max_value_odd = max(max_value_odd, arr[i]);
    }

    int score_even = max_value_even + count_even;
    int score_odd = max_value_odd + count_odd;
    
    return max(score_even, score_odd);
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }

        cout << max_score(n, arr) << endl;
    }

    return 0;
}
