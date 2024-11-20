#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    bool all_uppercase = true;
    bool first_lower_rest_upper = true;

    for (char c : word) {
        if (islower(c)) {
            all_uppercase = false;
            break;
        }
    }

    if (!islower(word[0])) {
        first_lower_rest_upper = false;
    }
    for (int i = 1; i < word.length(); ++i) {
        if (islower(word[i])) {
            first_lower_rest_upper = false;
            break;
        }
    }

    if (all_uppercase) {
        for (char &c : word) {
            c = tolower(c);
        }
    } else if (first_lower_rest_upper) {
        word[0] = toupper(word[0]);  
        for (int i = 1; i < word.length(); ++i) {
            word[i] = tolower(word[i]);  
        }
    }

    cout << word << endl;

    return 0;
}
