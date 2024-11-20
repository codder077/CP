#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, z;
    cin >> x >> y >> z;

    long long coconuts = (x / z) + (y / z);
    
    long long r1 = x % z;  
    long long r2 = y % z;

    if (r1 + r2 >= z) {
        coconuts++;  
        
        long long transfer = min(z - r1, z - r2);
        cout << coconuts << " " << transfer << endl;
    } else {
        cout << coconuts << " 0" << endl;
    }

    return 0;
}
