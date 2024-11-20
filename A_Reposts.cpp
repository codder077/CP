#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> dp; 

    auto to_lower = [](const string& s) {
        string result = s;
        transform(result.begin(), result.end(), result.begin(), ::tolower);
        return result;
    };

    dp["polycarp"] = 1; 

    for (int i = 0; i < n; ++i) {
        string name1, reposted, name2;
        cin >> name1 >> reposted >> name2;

        name1 = to_lower(name1); 
        name2 = to_lower(name2); 

        dp[name1] = dp[name2] + 1;
    }

    int max_length = 0;
    for (const auto& entry : dp) {
        max_length = max(max_length, entry.second);
    }

    cout << max_length << endl;

    return 0;
}
