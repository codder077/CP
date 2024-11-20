#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    long long drinks=(k*l)/nl;
    long long salt=(p)/np;
    long long slice=(c*d);

    int mini= min(drinks,min(salt,slice));

    int ans= (mini/n);

    cout<<ans<<endl;
    return 0;
}