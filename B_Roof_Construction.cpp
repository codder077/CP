#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int x = 1 << (int(log2(n - 1)));

        vector<int> arr;
        for (int i = x - 1; i >= 0; --i) {
            arr.push_back(i);
        }
        for (int i = x; i < n; ++i) {
            arr.push_back(i);
        }

        for (int i = 0; i < arr.size(); ++i) {
            if (i > 0) cout << " ";
            cout << arr[i];
        }
        cout << endl;
    }

    return 0;
}
