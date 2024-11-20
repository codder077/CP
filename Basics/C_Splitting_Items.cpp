#include <iostream>
#include <vector>
#include <algorithm>
#define N 200010
#define ll long long
using namespace std;

int main() {
    int T, n;
    ll k, a[N];
    
    cin >> T;  
    while (T--) {
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> a[i]; 
        }
        
        sort(a + 1, a + n + 1);

        ll sum = 0;
        for (int i = n; i >= 2; i -= 2) {
            sum += a[i] - a[i - 1];
        }

        cout << max(sum - k, 0LL) + (n & 1) * a[1] << endl;
    }

    return 0;
}
