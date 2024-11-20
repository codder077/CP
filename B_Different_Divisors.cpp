#include<bits/stdc++.h>
using namespace std;
#define ll long long

int r = 50000;
vector<int> tr;
vector<bool> prime(r, true);

void isprime(){
	prime[0] = false;
	prime[1] = false;
	for(int i = 2; i * i <= r - 1; ++i){
		if(prime[i]){
			for(int j = i * i; j <= r - 1; j += i){
				prime[j] = false;
			}
		}
	}
	for(int i = 2; i < r; ++i){
		if(prime[i]) tr.push_back(i);
	}
}

int fact_search(int n){
	int left = 0, right = tr.size() - 1, mid;
	while(left <= right){
		mid = (left + right) / 2;
		if(left == right) break;
		if(n == tr[mid]) return tr[mid + 1];
		if(tr[mid] > n){
			if(tr[mid - 1] <= n) return tr[mid];
			else right = mid - 1;
		}
		else if(tr[mid] < n) left = mid + 1;
	}
	return tr[left];
}
int main(){
	int t, d;
	
	isprime();
	
	cin >> t;
	while(t--){
		cin >> d;
		int d1 =  fact_search(d);
		int d2 = fact_search(d1 + d - 1);
		cout << d1 * d2 << endl;
	}
	return 0;
}