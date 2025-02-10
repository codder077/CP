#include <bits/stdc++.h>
using namespace std;

#define ll long long

int maxFibonacciness(int a1, int a2, int a4, int a5) {
    vector<int> candidates; 

    int a3_option1 = a4 - a2;
    int a3_option2 = a5 - a4;

    auto countFibonacci = [](vector<int>& arr) {
        int count = 0;
        for (int i = 0; i < 3; i++) {
            if (arr[i] + arr[i+1] == arr[i+2]) {
                count++;
            }
        }
        return count;
    };

    vector<int> sequence1 = {a1, a2, a3_option1, a4, a5};
    int max_count = countFibonacci(sequence1);

    vector<int> sequence2 = {a1, a2, a3_option2, a4, a5};
    max_count = max(max_count, countFibonacci(sequence2));

    return max_count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        cout << maxFibonacciness(a1, a2, a4, a5) << endl;
    }
    return 0;
}
