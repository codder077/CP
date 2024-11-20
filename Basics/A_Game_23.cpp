#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    
    if (m % n != 0) {
        cout << -1 << endl;
        return 0;
    }

    long long ratio = m / n;
    int moves = 0;

    while (ratio % 2 == 0) {
        ratio /= 2;
        moves++;
    }

    while (ratio % 3 == 0) {
        ratio /= 3;
        moves++;
    }

    if (ratio == 1) {
        cout << moves << endl;
    } else {
        cout << -1 << endl;  
    }

    return 0;
}
