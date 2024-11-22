#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int con=0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i){
                con+=abs(a[i]-a[i-1]);
            }
        }
        if(count(begin(a), end(a), a[0]) == n){
			cout << 1 << '\n';
			continue;
		}
		int cnt = 2;
		for(int i = 1; i < n;){
			if(a[i] > a[i - 1]){
				while(i < n && a[i] >= a[i - 1]){
					++i;
				}
				if(i < n) ++cnt; 
			}else if(a[i] < a[i - 1]){
				while(i < n && a[i] <= a[i - 1]) ++i;
				if(i < n) ++cnt;
			}else ++i;
		}
		cout << cnt << '\n';



    }
}