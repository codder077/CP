#include <iostream>
#include <string>
using namespace std;

bool isLucky(int count) {
    string str_count = to_string(count);
    for (char c : str_count) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    string n;
    cin >> n;
    
    int lucky_digit_count = 0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            lucky_digit_count++;
        }
    }
    
    if (isLucky(lucky_digit_count)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
