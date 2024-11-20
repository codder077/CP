#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        bool is_not_so_rainy = true;

        for (int j = i - x; j < i; j++) {
            if (j >= 0 && a[j] <= a[i]) {
                is_not_so_rainy = false;
                break;
            }
        }

        for (int j = i + 1; j <= i + y; j++) {
            if (j < n && a[j] <= a[i]) {
                is_not_so_rainy = false;
                break;
            }
        }

        if (is_not_so_rainy) {
            cout << i + 1 << endl; 
            return 0;
        }
    }

    return 0;
}
