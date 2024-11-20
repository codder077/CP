#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,i,j;
        cin>>n>>m>>i>>j;

        if(i == 1){
			cout << n << ' ' << 1 << ' ';
			cout << n << ' ' << m << endl;
		}else if(i == n){
			cout << 1 << ' ' << 1 << ' ';
			cout << 1 << ' ' << m << endl;
		}else{
			cout << 1 << ' ' << 1 << ' ';
			cout << n << ' ' << m << endl;
		}
    }
}