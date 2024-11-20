#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;  
    
    while (t--) {
        int n;
        cin >> n;  

        vector<int> a(n);  
        vector<int> drenched(n, 0);  

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int current_cream = 0;  
        
        for (int i = n - 1; i >= 0; i--) {
            current_cream = max(current_cream, a[i]);

            if (current_cream > 0) {
                drenched[i] = 1;  
                current_cream--; 
            }
        }

        for (int i = 0; i < n; i++) {
            cout << drenched[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
