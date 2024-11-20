#include<bits/stdc++.h>

using namespace std;
#define ll long long

int lcm(int a, int b)
{
    int greater = max(a, b);
    int smallest = min(a, b);
    for (int i = greater; ; i += greater) {
        if (i % smallest  == 0)
            return i;
    }
}


void solve() {
    int n;
    cin >> n;
    
    // Start with (1, n-1) as the default solution
    int a = 1, b = n - 1;
    int min_lcm = lcm(a, b);

    // Check divisors up to sqrt(n) to find better pairs
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int j = n / i;

            // Pair (i, n - i)
            int lcm1 = lcm(i, n - i);
            if (lcm1 < min_lcm) {
                min_lcm = lcm1;
                a = i;
                b = n - i;
            }

            // Pair (j, n - j)
            int lcm2 = lcm(j, n - j);
            if (lcm2 < min_lcm) {
                min_lcm = lcm2;
                a = j;
                b = n - j;
            }
        }
    }

    cout << a << " " << b << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
