#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char ans[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            ans[i][j] = '.';
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                ans[i][j] = '#';
            }
        } else if (i % 4 == 1) {
            ans[i][m - 1] = '#';
        } else if (i % 4 == 3) {
            ans[i][0] = '#';
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}
