#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <iomanip>

using namespace std;

// Define long long as ll for convenience
using ll = long long;

// Function to handle division safely
long double division(long double sum, long double div) {
    return sum / div;
}

int main() {
    // Set output precision for floating-point numbers
    cout << fixed << setprecision(6);
    
    int n, t;
    cin >> n >> t;
    
    vector<pair<ll, ll>> v(n);
    long double sum = 0, div = 0;

    // Input the second value of each pair (flow rates)
    for (int i = 0; i < n; i++) {
        cin >> v[i].second;
        div += v[i].second;  // Sum of all flow rates
    }

    // Input the first value of each pair (temperatures)
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        sum += v[i].first * v[i].second;  // Total weighted sum of temperatures
    }

    // Sort the taps based on temperatures
    sort(v.begin(), v.end());

    // If there's only one tap
    if (n == 1) {
        if (v[0].first == t) {
            cout << v[0].second;  // If the temperature equals t, return the flow rate
            return 0;
        }
    }

    // Define an epsilon for binary search precision
    const long double eps = 1e-9;

    // If the initial average temperature is higher than the desired temperature `t`
    if (division(sum, div) > t) {
        for (int i = n - 1; i >= 0; i--) {
            sum -= v[i].first * v[i].second;
            div -= v[i].second;

            if (division(sum, div) > t) continue;  // Skip if still above the target temperature

            long double l = 0, r = v[i].second, mid, ans = 0;
            
            // Perform binary search to adjust the flow
            while (abs(l - r) > eps) {
                mid = l + (r - l) / 2;
                if (division(sum + mid * v[i].first, div + mid) <= t)
                    ans = mid, l = mid;
                else
                    r = mid;
            }
            cout << ans + div;  // Output the result
            return 0;
        }
    }
    // If the initial average temperature is lower than the desired temperature `t`
    else {
        for (int i = 0; i < n; i++) {
            sum -= v[i].first * v[i].second;
            div -= v[i].second;

            if (division(sum, div) < t) continue;  // Skip if still below the target temperature

            long double l = 0, r = v[i].second, mid, ans = 0;

            // Perform binary search to adjust the flow
            while (abs(l - r) > eps) {
                mid = l + (r - l) / 2;
                if (division(sum + mid * v[i].first, div + mid) >= t)
                    ans = mid, l = mid;
                else
                    r = mid;
            }
            cout << ans + div;  // Output the result
            return 0;
        }
    }

    // If no adjustment is necessary, output 0
    cout << 0;
    return 0;
}
