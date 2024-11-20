#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long temp = x;
    long long ans = 0;
    int i = 0;

    while (temp > 0) {
        int dig = temp % 10;

        if (dig > (9 - dig) && !(temp < 10 && dig == 9)) {
            ans = ans + (9 - dig) * pow(10, i);
        } else {
            ans = ans + dig * pow(10, i);
        }

        temp = temp / 10;
        i++;
    }

    cout << ans << endl;
}
