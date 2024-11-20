#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int dist1,dist2,dist3;
    dist1=abs(x1-x2);
    dist2=abs(x2-x3);
    dist3=abs(x1-x3);

    int maxi=max(dist1,max(dist2,dist3));

    cout<<maxi<<endl;
}
