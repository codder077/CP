#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, s;
    cin >> a >> b >> s;

    int min_steps = abs(a) + abs(b);

    if (s >= min_steps && (s - min_steps) % 2 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
