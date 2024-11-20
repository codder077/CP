#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int sevens = n / 7; sevens >= 0; --sevens) {
        int remaining = n - (sevens * 7);

        if (remaining % 4 == 0) {
            int fours = remaining / 4;

            for (int i = 0; i < fours; ++i) {
                cout << 4;
            }
            for (int i = 0; i < sevens; ++i) {
                cout << 7;
            }
            cout << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
