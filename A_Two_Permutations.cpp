#include <iostream>
using namespace std;

int main() {
    int n, a, b,t;
    cin>>t;
    while (t--) {
        cin >> n >> a >> b;
        if (a + b + 1 < n || (a == n && b == n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
