#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0, ans = 0;
		for(int i = 0; i < s.size(); ++i){
			if(s[i] == '0') ++cnt0;
			else ++cnt1;
		}
		int f = 0;
		for(int i = 0; i < s.size(); ++i){
			if(s[i] == '1' && cnt0 > 0){
				--cnt0;
			}else if(s[i] == '0' && cnt1 > 0){
				--cnt1;
			}else{
				f = s.size() - i;
				break;
			}
		}
		cout << f << endl;
    }
}