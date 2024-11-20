#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int n = 1; n <= 10; ++n) {
        int totalCost = n * k;
        if (totalCost % 10 == 0 || totalCost % 10 == r) {
            cout << n << endl;
            break;
        }
    }

    return 0;
}
