#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	int i=0,j=1;
	while(j<s.length()){
		if(s[i]==s[j]){i++,j++;}
		else {j-=i-1;i=0;}
	}
	if(i>j-i){
		cout<<"YES"<<endl;
		cout<<s.substr(0,i)<<endl;
	}
	else cout<<"NO"<<endl;
}