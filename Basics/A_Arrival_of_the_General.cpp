#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int max_height = heights[0], max_index = 0;
    for (int i = 1; i < n; i++) {
        if (heights[i] > max_height) {
            max_height = heights[i];
            max_index = i;
        }
    }

    int min_height = heights[0], min_index = 0;
    for (int i = 1; i < n; i++) {
        if (heights[i] <= min_height) {
            min_height = heights[i];
            min_index = i;
        }
    }

    int swaps = max_index + (n - 1 - min_index);

    if (min_index < max_index) {
        swaps--;
    }

    cout << swaps << endl;

    return 0;
}
