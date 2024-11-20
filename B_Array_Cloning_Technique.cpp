#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
		cin >> n; 
		vector<int> a(n);
		map<int, int> m;
		int mx = -1;
		for(auto &i: a){
			cin >> i;
			++m[i];
			mx = max(mx, m[i]);
		}
		if(count(begin(a), end(a), a[0]) == n) cout << 0 << endl;
		else{
			int ans = 0;
			while(mx < n){
				++ans;
				ans += min(mx, n - mx);
				mx += min(mx, n - mx);
			}
			cout << ans << endl;
		}
    }
    return 0;
}