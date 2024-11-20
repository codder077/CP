#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   string s;
    cin>>s;
    string res=s;
    reverse(begin(s),end(s));
    cout<<res+s;

    return 0;

}