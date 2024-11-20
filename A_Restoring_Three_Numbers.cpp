#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ans(4);

    for(int i=0;i<4;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());

    int a=ans[3]-ans[0];
    int b=ans[3]-ans[1];
    int c=ans[3]-ans[2];

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;

}