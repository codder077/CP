#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of integers
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; // Read the array elements
    }
    
    if (n == 1) {
        cout << 1 << endl; // If there's only one element, the longest increasing subarray is 1
        return 0;
    }
    
    int maxLength = 1; // Initialize maxLength
    int currentLength = 1; // Initialize currentLength
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[i - 1]) {
            currentLength++; // Continue the increasing subarray
        } else {
            maxLength = max(maxLength, currentLength); // Update maxLength
            currentLength = 1; // Reset currentLength
        }
    }
    
    // Final comparison to account for increasing subarray ending at the last element
    maxLength = max(maxLength, currentLength);
    
    cout << maxLength << endl; // Output the result
    
    return 0;
}
