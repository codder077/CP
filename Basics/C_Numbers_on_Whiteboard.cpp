#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,c,k;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<2<<endl;
		c=n;
		for(k=n-1;k>=1;k--){
			cout<<c<<" "<<k<<endl;
			c=(k+c+1)/2;
		}
	}
}