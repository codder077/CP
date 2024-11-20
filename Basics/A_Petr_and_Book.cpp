#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  
    
    int a[7];
    for (int i = 0; i < 7; i++) {
        cin >> a[i]; 
    }

    int num = n;
    int day = 0;  
    
    while (num > 0) {
        num -= a[day];
        if (num <= 0) {
            cout << day + 1 << endl;  
            return 0;
        }
        day = (day + 1) % 7;  
    }

    return 0;
}
