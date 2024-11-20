#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int z=pow(10,c-1);
        int x,y;
        x=z,y=z;

        while(to_string(x).size()<a) x=2*x;

        while(to_string(y).size()<b) y=3*y;

        cout<<x<<" "<<y<<endl;
    }

    return 0;
}