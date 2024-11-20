#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--) {
        int x;
        cin >> x;

        int digit = x % 10; // The repeating digit
        int length = to_string(x).length(); // The length of the number

        int totalPresses = 0;
        for (int i = 1; i < digit; ++i) {
            totalPresses += 1 + 2 + 3 + 4; 
        }

        for (int i = 1; i <= length; ++i) {
            totalPresses += i; 
        }

        cout << totalPresses << endl;
    }

    return 0;
}
