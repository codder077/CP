#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, q;
    cin >> n >> q;

    vector<int> lastFirstQuery(n + 1, 0); 
    vector<int> lastFirstQueryValue(n + 1, 0);
    long long sum = 0;
    int lastSecondQuery = 0;
    int lastSecondQueryValue = 0;

    for (int i = 1; i <= n; ++i) {
        int a;
        cin >> a;
        lastFirstQueryValue[i] = a;
        sum += a;
    }

    for (int queryIndex = 1; queryIndex <= q; ++queryIndex) {
        int t;
        cin >> t;

        if (t == 1) {
            int i, x;
            cin >> i >> x;

            int currentValue;
            if (lastSecondQuery > lastFirstQuery[i]) {
                currentValue = lastSecondQueryValue;
            } else {
                currentValue = lastFirstQueryValue[i];
            }

            sum -= currentValue;
            sum += x;

            lastFirstQuery[i] = queryIndex;
            lastFirstQueryValue[i] = x;
        } else if (t == 2) {
            int x;
            cin >> x;

            lastSecondQuery = queryIndex;
            lastSecondQueryValue = x;

            sum = 1LL * n * x;
        }

        cout << sum << '\n';
    }

    return 0;
}
