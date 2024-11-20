#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int sum= (w*(w+1))/2;
    int money=sum*k;

    if(money>n){
        cout<<money-n<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}