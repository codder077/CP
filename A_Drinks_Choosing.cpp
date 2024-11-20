#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> count(k + 1, 0);

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        count[a]++;
    }

    int total_students = 0;
    int total_pairs = 0;

    for (int i = 1; i <= k; i++) {
        total_pairs += count[i] / 2;     
        total_students += (count[i] / 2) * 2;  
        count[i] %= 2;  
    }

    int remaining_sets = (n + 1) / 2 - total_pairs; 
    total_students += min(remaining_sets, accumulate(count.begin(), count.end(), 0));

    cout << total_students << endl;

    return 0;
}
