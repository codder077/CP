#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, days;
    cin >> n >> days;
    
    vector<pair<int, int>> instruments(n);  
    
    for (int i = 0; i < n; i++) {
        cin >> instruments[i].first;
        instruments[i].second = i + 1;  
    }
    
    sort(instruments.begin(), instruments.end());
    
    vector<int> ans;  
    int left = days;  
    int cnt = 0;  
    
    for (int i = 0; i < n; i++) {
        if (instruments[i].first <= left) {
            cnt++; 
            left -= instruments[i].first;  
            ans.push_back(instruments[i].second);  
        } else {
            break;  
        }
    }
    
    cout << cnt << endl;
    for (auto it : ans) {
        cout << it << " ";
    }
    
    return 0;
}
