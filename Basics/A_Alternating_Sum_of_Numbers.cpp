#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        
        vector<int> a(n); 
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int alternating_sum = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                alternating_sum += a[i];
            } else {
                alternating_sum -= a[i]; 
            }
        }

        cout << alternating_sum << endl;
    }

    return 0;
}
