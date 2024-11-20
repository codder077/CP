#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin >> s;

    ll cnt, x , y;
    cnt=x=y=0;
    ll sz=s.size();
    
    for(int i=0; i<sz ;i++)
        if(s[i]=='Q')
            cnt+=x,y++;
        else if(s[i]=='A')
            x+=y;

    cout<<cnt<<endl;

    return 0;
}