#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int left = 0, right = n - 1;
    int wins = 0;

    while (left <= right) {
        int team_size = 1;
        while (left <= right && a[right] * team_size <= d) {
            team_size++;
            left++;
        }
        if (left <= right) {
            wins++;
            right--;  
        }
    }

    cout << wins << endl;
    return 0;
}
