#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
		cin >> n; 
		vector<int> a(n);

		for(int i = n - 1; i >= 0; --i) cin >> a[i];

		int x = 1, ans = 0;

		while(x < n){
			if(a[x]==a[0]){
                x++;
            }
            else{
                ++ans;
                x = x * 2 ;
            }
		}

		cout << ans << '\n';
    }

    return 0;
}
