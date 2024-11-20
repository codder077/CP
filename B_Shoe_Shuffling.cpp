#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        map<int,vector<int>> m;
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            a.push_back(x);
            m[x].push_back(i+1);
        }

       int f = 0;
		map<int, stack<int>> ans;
		for(auto &i: m){
			if((i.second).size() == 1){
				f = 1;
				break;
			}
			vector<int> temp = i.second;
			for(int j = 1; j < (temp).size(); ++j) swap(temp[j], temp[j - 1]);
			for(int j = (temp).size() - 1; j >= 0; --j) ans[i.first].push(temp[j]);
		}
		if(f) cout << -1 << endl;
		else{
			for(int i = 0; i < n; ++i){
				cout << ans[a[i]].top() << ' ';
				ans[a[i]].pop();
			}
			cout << '\n';
		}
    }
    return 0;
}