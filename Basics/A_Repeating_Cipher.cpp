#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string t;
    cin >> n >> t;
    
    string s = "";
    int pos = 0;
    
    
    for (int i = 1; pos < n; ++i) {
        s += t[pos];  
        pos += i;     
    }
    
    cout << s << endl;
    return 0;
}
