#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
		cin >> n >> k; 
		vector<int> a(n);
		for(auto &i: a) cin >> i;
		map<int, vector<int>> mv; 
		map<int, int> met;
		for(int i = 0; i < n; ++i){
			int diff = i + 1 - (met[a[i]]);
			mv[a[i]].push_back(diff - 1);
			met[a[i]] = i + 1;
		}
		for(int i = 0; i < k; ++i){
			int diff = n + 1 - met[i + 1];
			mv[i + 1].push_back(diff - 1);
		}
		int ans =INT_MAX;
		for (auto it = mv.begin(); it != mv.end(); ++it) {
            int k = it->first; 
            vector<int>& v = it->second; 
            sort(v.begin(), v.end());
            int mx = 0, mn = 0;
            if (v.size()) mx = v.back();
            if (v.size() >= 2) mn = v[v.size() - 2];
            mx /= 2;
            ans = min(ans, max(mx, mn));
        }

		cout << ans << endl;
    }
}