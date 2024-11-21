#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(const vector<int>& a, int n, int x) {
    int ok = 1;
    int i = 0, j = n - 1;

    while (i < j) {
        if (a[i] != a[j]) {
            if (a[i] != x && a[j] != x) {
                ok = 0;
                break;
            } else {
                if (a[i] == x) {
                    i++;
                } else {
                    j--;
                }
            }
        } else {
            i++, j--;
        }
    }
    return ok;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int f = -1, e = -1;

        for (int i = 0; i < n / 2; i++) {
            if (a[i] != a[n - i - 1]) {
                f = a[i];
                e = a[n - i - 1];
                break;
            }
        }

        if (f == -1) {
            cout << "YES" << endl;
            continue;
        }

        if (solve(a, n, f) || solve(a, n, e)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
